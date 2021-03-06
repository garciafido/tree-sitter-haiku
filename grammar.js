const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments

  ESCAPE: 1,

  RELATIONAL: 1,
  FACTOR: 10,
  GENERIC_ARG: 20,
};

module.exports = grammar({
  name: 'haiku',


  externals: $ => [
    $._automatic_semicolon,
    $._template_chars
  ],

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],

  supertypes: $ => [
    $._arithmetic_expression,
    $._boolean_expression,
    $._expression,
    $._literal,
    $._number,
    $._string,
  ],

  inline: $ => [
    $.generic_arg,
    $.factor,
    $.identifier,
    $.generic_args,
    $.decorator_args,
    $.expression_args,
  ],

  word: $ => $.camel_identifier,

  rules: {

      //--------------
      // Haiku grammar
      //--------------

      program: $ => repeat($.block),

      block: $ => seq(
        repeat($.decorator),
        $.block_type,
        $.block_name,
        optional($.generic),
        optional($.extends),
        optional($.body),
      ),

      block_type: $ => $.camel_identifier,

      block_name: $ => choice($.pascal_identifier, $.camel_identifier),

      body: $ => seq(
        '{', repeat($.block), '}'),

      decorator: $ => seq(
        $.decorator_identifier,
        optional($.decorator_args),
      ),

      decorator_args: $ => seq(
        "(",
        $.expression_args,
        ")"
      ),

      extends: $ => seq(
        "(", $.expression_args, ")"),

      generic: $ => seq(
        "<", $.generic_args, ">"),

      generic_args: $ => seq(
        $.generic_arg,
        repeat(
          seq(",", $.generic_arg),
        )),

      generic_arg: $ =>  prec.left(PREC.GENERIC_ARG, choice(
        $._arithmetic_expression,
        seq("(", $._boolean_expression, ")"))),

      //------------
      // Expressions
      //------------

      _expression: $ =>
        $._boolean_expression,

      _boolean_expression: $ =>
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
            $._arithmetic_expression
          ),
          $._arithmetic_expression)),

      _arithmetic_expression: $ =>
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
          $.non_literal_factor,
          $._literal,
      ),

      non_literal_factor: $ => choice(
          $.dot_accessor,
          $.identifier,
          $.function_call,
          $.array_accessor,
          seq("(", $.expression_args, ")"),
          $.list,
          $.unary_expression),

      dot_accessor: $ => seq(
        $.non_literal_factor, ".", $.identifier,
      ),

      function_call: $ => prec.left(PREC.FACTOR, seq(
          $.non_literal_factor,
          "(",
              optional($.expression_args),
          ")")),

      array_accessor: $ => prec.left(PREC.FACTOR, seq(
          $.non_literal_factor,
          "[",
              optional($.expression_args),
          "]"),
      ),

      unary_expression: $ => prec.left(PREC.FACTOR, seq(
          $.unary_operator,
          $.factor)),

      list: $ => seq(
          "[", optional($.expression_args), "]"),

      expression_args: $ => seq(
        $._expression,
        optional(seq(",", repeat($._expression))),
        optional(",")
      ),

      identifier: $ => choice(
          $.camel_identifier,
          $.pascal_identifier),

      //---------
      // Literals
      //---------

      _literal: $ => choice(
          $._number,
          $.false,
          $.true,
          $._string),

      false: $ => "false",

      true: $ => "true",

      _number: $ => choice(
          $.integer,
          $.float),

      _string: $ => choice(
        $.simple_string,
        $.template_string,
      ),

      simple_string: $ => choice(
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
        )),

      escape_sequence: $ => token.immediate(seq(
        '\\',
        choice(
          /[^xu0-7]/,
          /[0-7]{1,3}/,
          /x[0-9a-fA-F]{2}/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/
        ))),

      // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
      comment: $ => token(prec(PREC.COMMENT, choice(
        seq('//', /.*/),
        seq(
          '/*',
          /[^*]*\*+([^/*][^*]*\*+)*/,
          '/'
        )))),

    template_string: $ => seq(
      '`',
      repeat(choice(
        $._template_chars,
        $.escape_sequence,
        $.template_substitution,
      )),
      '`'
    ),

    template_substitution: $ => seq(
      '${',
      $._expression,
      '}'
    ),

      //-------
      // Tokens
      //-------

      camel_identifier: $ => token(/[a-z][a-zA-Z0-9_]*/),

      // snake_identifier: $ => token(/[a-z_][a-z0-9_]*/),

      pascal_identifier: $ => token(/[A-Z][a-zA-Z0-9_]*/),

      decorator_identifier: $ => token(/[@][a-z_][a-zA-Z0-9_]*/),

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

      additive_operator: $ => token(choice(
          "+",
          "-",
          "|")),

      disjunction_operator: $ => token(
          "||"),

      conjuction_operator: $ => token(
          "&&"),

      unary_operator: $ => token(choice(
          "+",
          "-")),

      multiplicative_operator: $ => token(choice(
          "*",
          "/",
          "%",
          "&")),

      relational_operator: $ => token(choice(
          "==",
          "!=",
          "<",
          ">",
          ">=",
          "<=",
          "in",
          seq("not", "in"),
          "is",
          seq("is", "not"))),

    }
  }
);
