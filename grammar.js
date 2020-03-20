const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments

  RELATIONAL: 1,
  FACTOR: 10,
};

module.exports = grammar({
  name: 'Haiku',

  rules: {

      //--------------
      // Haiku grammar
      //--------------

      program: $ => repeat($.block),

      block: $ => seq(
        repeat($.decorator),
        $.camel_identifier,
        $.pascal_identifier,
        optional($.generic_args),
        optional($.extends_args),
        $.body,
      ),

      body: $ => seq(
        '{', repeat($.body_element), '}'),

      body_element: $ => choice(
        $.block, 
        $.property),

      property: $ => seq(
        repeat($.decorator),
        $.camel_identifier, ':',
        $.property_type,
        optional($.generic_args),
        optional($.body),
      ),

      property_type: $ => choice(
        $.camel_identifier, 
        $.pascal_identifier),

      decorator: $ => seq(
        $.decorator_identifier,
        optional($.decorator_args),
      ),

      decorator_args: $ => seq(
        "(",
            optional($.expression_list), 
        ")"),

      generic_args: $ => seq(
        "<", $.expression_list, ">"),

      extends_args: $ => seq(
        "(", $.expression_list, ")"),
    
      //------------
      // Expressions
      //------------
    
      expression: $ =>
        $.boolean_expression,

      boolean_expression: $ =>
        $.disjunction_expression,

      disjunction_expression: $ => choice(
          seq(
            $.disjunction_expression,
            $.disjunction_operator,
            $.conjuction_expression
          ),
          $.conjuction_expression),

      conjuction_expression: $ => choice(
          seq(
            $.conjuction_expression,
            $.conjuction_operator,
            $.relational_expression
          ),
         $.negation_expression),

      negation_expression: $ => prec.left(PREC.FACTOR, choice(
          seq("not", $.negation_expression),
          $.relational_expression)),

      relational_expression: $ => prec.left(PREC.RELATIONAL, choice(
          seq(
            $.relational_expression,
            $.relational_operator,
            $.arithmetic_expression
          ),
          $.arithmetic_expression)),

      arithmetic_expression: $ =>
        $.additive_expression,

      additive_expression: $ => choice(
          seq(
            $.additive_expression,
            $.additive_operator,
            $.multiplicative_expression
          ),
          $.multiplicative_expression),

      multiplicative_expression: $ => choice(
          seq(
            $.multiplicative_expression,
            $.multiplicative_operator,
            $.factor
          ),
          $.factor),

      factor: $ => choice(
          $.identifier,
          seq("(", $.expression, ")"),
          $.function_call,
          $.list,
          $.unsigned_constant,
          $.unary_expression),

      function_call: $ => seq(
        $.identifier,
        "(",
            optional($.expression_list),
        ")"),

      unary_expression: $ => seq(
        $.unary_operator,
        $.factor),

      unsigned_constant: $ =>
        $.literal,

      list: $ => seq(
        "[", $.expression_list, "]"),

      expression_list: $ => seq(
        $.expression,
        repeat(
          seq(",", $.expression),
        )),

      identifier: $ => seq(
        $.identifier_name,
        repeat(
          seq(".", $.identifier_name),
        )),

      identifier_name: $ => choice(
        $.camel_identifier,
        $.pascal_identifier),

      additive_operator: $ => choice(
        "+",
        "-",
        "|"),

      disjunction_operator: $ =>
        "||",

      conjuction_operator: $ =>
        "&&",

      unary_operator: $ => choice(
        "+",
        "-"),

      multiplicative_operator: $ => choice(
        "*",
        "/",
        "%",
        "&"),

      relational_operator: $ => choice(
        "==",
        "!=",
        "<",
        ">",
        ">=",
        "<=",
        "in",
        seq("not", "in"),
        "is",
        seq("is", "not")),

      //---------
      // Literals
      //---------

      literal: $ => choice(
          $.number,
          $.string),

      number: $ =>
        $.integer,

      string: $ => choice(
        $.double_quote_string,
        $.single_quote_string,
        $.template_string),

      //-------
      // Tokens
      //-------

      camel_identifier: $ => /[a-z_][a-zA-Z0-9_]*/,
      pascal_identifier: $ => /[A-Z][a-zA-Z0-9_]*/,
      decorator_identifier: $ => /[@][a-z_][a-zA-Z0-9_]*/,
      macro_identifier: $ => /[$][a-z_][a-zA-Z0-9_]*/,

      double_quote_string: $ => seq(
          '"',
          repeat(choice(
            token.immediate(prec(PREC.STRING, /[^"\\\n]+|\\\r?\n/)),
            $.escape_sequence
          )),
          '"'
        ),

      single_quote_string: $ => seq(
          "'",
          repeat(choice(
            token.immediate(prec(PREC.STRING, /[^'\\\n]+|\\\r?\n/)),
            $.escape_sequence
          )),
          "'"
        ),

      template_string: $ => seq(
          "`",
          repeat(choice(
            token.immediate(prec(PREC.STRING, /[^'\\\n]+|\\\r?\n/)),
            $.escape_sequence
          )),
          "`"
        ),

      integer: $ =>
        /[0-9]+/,

      escape_sequence: $ => token.immediate(seq(
        '\\',
        choice(
          /[^xu0-7]/,
          /[0-7]{1,3}/,
          /x[0-9a-fA-F]{2}/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/
        )
      )),

      any_number: $ => {
        const hex_literal = seq(
          choice('0x', '0X'),
          /[\da-fA-F](_?[\da-fA-F])*/
        );

        const decimal_digits = /\d(_?\d)*/;
        const signed_integer = seq(optional(choice('-','+')), decimal_digits);
        const exponent_part = seq(choice('e', 'E'), signed_integer);

        const binary_literal = seq(choice('0b', '0B'), /[0-1](_?[0-1])*/);

        const octal_literal = seq(choice('0o', '0O'), /[0-7](_?[0-7])*/);

        const bigint_literal = seq(choice(hex_literal, binary_literal, octal_literal, decimal_digits), 'n');

        const decimal_integer_literal = choice(
          '0',
          seq(optional('0'), /[1-9]/, optional(seq(optional('_'), decimal_digits)))
        );

        const decimal_literal = choice(
          seq(decimal_integer_literal, '.', optional(decimal_digits), optional(exponent_part)),
          seq('.', decimal_digits, optional(exponent_part)),
          seq(decimal_integer_literal, exponent_part),
          seq(decimal_digits),
        );

        return token(choice(
          hex_literal,
          decimal_literal,
          binary_literal,
          octal_literal,
          bigint_literal,
        ))
      },
    }
  }
);

function commaSep1 (rule) {
  return sep1(rule, ',')
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
