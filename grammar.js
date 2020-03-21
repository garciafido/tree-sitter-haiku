const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments

  ESCAPE: 1,

  RELATIONAL: 1,
  FACTOR: 10,
  GENERIC_ARG: 20,
};

module.exports = grammar({
  name: 'Haiku',

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],

  rules: {

      //--------------
      // Haiku grammar
      //--------------

      program: $ => repeat($.block),

      block: $ => seq(
        repeat($.decorator),
        $.camel_identifier,
        $.pascal_identifier,
        optional($.generic),
        optional($.extends),
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
        optional($.generic),
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
        "(", optional($.expression_list), ")"),

      extends: $ => seq(
        "(", $.expression_list, ")"),

      generic: $ => seq(
        "<", $.generic_args, ">"),

      generic_args: $ => seq(
        $.generic_arg,
        repeat(
          seq(",", $.generic_arg),
        )),

      generic_arg: $ =>  prec.left(PREC.GENERIC_ARG, choice(
        $.arithmetic_expression,
        seq("(", $.boolean_expression, ")"))),

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
            $.negation_expression
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

      //---------
      // Literals
      //---------

      literal: $ => choice(
          $.number,
          $.string),

      number: $ => choice(
          $.integer,
          $.float),

      string: $ => choice(
        $.double_quote_string,
        $.single_quote_string,
        $.template_string),

      double_quote_string: $ => seq(
          '"',
          repeat(choice($.interpolation, $.escape_sequence, $._not_escape_sequence, token.immediate(prec(PREC.STRING, /[^"\\\n]+|\\\r?\n/)))),
          '"'),

      single_quote_string: $ => seq(
          "'",
          repeat(choice($.interpolation, $.escape_sequence, $._not_escape_sequence, token.immediate(prec(PREC.STRING, /[^'\\\n]+|\\\r?\n/)))),
          "'"),

      template_string: $ => seq(
          "`",
          repeat(choice($.interpolation, $.escape_sequence, $._not_escape_sequence, token.immediate(prec(PREC.STRING, /[^`\\\n]+|\\\r?\n/)))),
          "`"),

      interpolation: $ => seq(
          '{',
          $.expression,
          optional($.type_conversion),
          optional($.format_specifier),
          '}'),

      _not_escape_sequence: $ => '\\',

      format_specifier: $ => seq(
        ':',
        repeat(choice(
          /[^{}\n]+/,
          $.format_expression
        ))),

      format_expression: $ => seq('{', $.expression, '}'),

      type_conversion: $ => /![a-z]/,

      //-------
      // Tokens
      //-------

      camel_identifier: $ => /[a-z_][a-zA-Z0-9_]*/,

      pascal_identifier: $ => /[A-Z][a-zA-Z0-9_]*/,

      decorator_identifier: $ => /[@][a-z_][a-zA-Z0-9_]*/,

      macro_identifier: $ => /[$][a-z_][a-zA-Z0-9_]*/,

      // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
      comment: $ => token(prec(PREC.COMMENT, choice(
          seq('//', /.*/),
          seq(
            '/*',
            /[^*]*\*+([^/*][^*]*\*+)*/,
            '/'
          )))),

      integer: $ => token(choice(
          seq(
            choice('0x', '0X'),
            repeat1(/_?[A-Fa-f0-9]+/),
            optional(/[Ll]/)
          ),
          seq(
            choice('0o', '0O'),
            repeat1(/_?[0-7]+/),
            optional(/[Ll]/)
          ),
          seq(
            choice('0b', '0B'),
            repeat1(/_?[0-1]+/),
            optional(/[Ll]/)
          ),
          seq(
            repeat1(/[0-9]+_?/),
            choice(
              optional(/[Ll]/), // long numbers
              optional(/[jJ]/) // complex numbers
            )
          ))),

      float: $ => {
          const digits = repeat1(/[0-9]+_?/);
          const exponent = seq(/[eE][\+-]?/, digits);

          return token(seq(
            choice(
              seq(digits, '.', optional(digits), optional(exponent)),
              seq(optional(digits), '.', digits, optional(exponent)),
              seq(digits, exponent)
            ),
            optional(choice(/[Ll]/, /[jJ]/))
          ))
        },

      // Python
      escape_sequence: $ => token(prec(PREC.ESCAPE, seq(
          '\\',
          choice(
            /u[a-fA-F\d]{4}/,
            /U[a-fA-F\d]{8}/,
            /x[a-fA-F\d]{2}/,
            /\d{3}/,
            /\r?\n/,
            /['"abfrntv\\]/,
          )))),

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

    }
  }
);
