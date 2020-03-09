const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments

  DISJUNCTION: 8,
  CONJUNTION: 9,
  TERM: 10,
  FACTOR: 11,
  PAREN: 12,
  boolean_value: 13,
};

module.exports = grammar({
  name: 'Haiku',

  rules: {

      program: $ => repeat($.block),

      block: $ => seq(
        repeat($.decorator),
        $.camel_identifier,
        $.pascal_identifier,
        optional($.generic_args),
        optional($.extends_args),
        $.body,
      ),

      body: $ => seq('{', repeat($.body_element), '}'),

      body_element: $ => choice($.block, $.property),

      property: $ => seq(
        repeat($.decorator),
        $.camel_identifier,
        ':',
        $.property_type,
        optional($.generic_args),
        optional($.body),
      ),

      property_type: $ => choice($.camel_identifier, $.pascal_identifier),

      decorator: $ => seq(
        $.decorator_identifier,
        optional($.decorator_args),
      ),

      decorator_args: $ => seq('(', $.fu_args, ')'),

      generic_args: $ => seq('<', $.fu_args, '>'),

      extends_args: $ => seq('(', $.fu_args, ')'),

      fu_args: $ => commaSep1($.boolean_expression),

      function_call: $ =>
        seq($.identifier, "(", $.fu_args, ")"),


      boolean_expression: $ => choice(
        prec.left(PREC.DISJUNCTION, seq($.boolean_expression, "||", $.conjunction)),
        $.conjunction
      ),
  
      conjunction: $ => choice(
        prec.left(PREC.CONJUNTION, seq($.conjunction, "&&", $.compare)),
        $.compare
      ),

      compare: $ => choice(
          prec.left(-1, seq($.arithmetic_expression, choice("==", "<=", ">=", ">", "<"), $.arithmetic_expression)),
          $.negation),
  
      negation: $ => choice(
        prec.left(PREC.boolean_value, seq("!", $.boolean_value)),
      $.boolean_value),
  
      boolean_value: $ => choice(
        seq("(", $.boolean_expression, ")"),
        "true",
        "false",
        $.arithmetic_expression),

      arithmetic_expression: $ => choice(
        prec.left(PREC.TERM, seq($.arithmetic_expression, choice("+", "-"), $.term)),
        $.term),

      term: $ => choice(
        prec.left(PREC.FACTOR, seq($.term, choice("*", "/"), $.factor)),
        $.factor),

      factor: $ => choice(
        prec.left(PREC.PAREN, seq("(", $.arithmetic_expression, ")")),
        $.number,
        $.string,
        $.identifier,
        $.function_call,
      ),

      string: $ => choice(
        seq(
          '"',
          repeat(choice(
            token.immediate(prec(PREC.STRING, /[^"\\\n]+|\\\r?\n/)),
            $.escape_sequence
          )),
          '"'
        ),
        seq(
          "'",
          repeat(choice(
            token.immediate(prec(PREC.STRING, /[^'\\\n]+|\\\r?\n/)),
            $.escape_sequence
          )),
          "'"
        )
      ),

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

      number: $ => {
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

      // Identifiers

      identifier: $ => $.dot_separated_identifier,

      dot_separated_identifier: $ => choice(
          seq($.simple_identifier, ".", $.dot_separated_identifier),
          $.simple_identifier
      ),

      simple_identifier: $ => choice(
        $.camel_identifier,
        $.macro_identifier,
        $.pascal_identifier
      ),

      camel_identifier: $ => /[a-z_][a-zA-Z0-9_]*/,
      pascal_identifier: $ => /[A-Z][a-zA-Z0-9_]*/,
      decorator_identifier: $ => /[@][a-z_][a-zA-Z0-9_]*/,
      macro_identifier: $ => /[$][a-z_][a-zA-Z0-9_]*/,
    }
  }
);

function commaSep1 (rule) {
  return sep1(rule, ',')
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
