const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments

  disjuction: 8,
  CONJ: 9,
  term: 10,
  factor: 11,
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

      property: $ => seq(
        repeat($.decorator),
        $.camel_identifier,
        ':',
        $.property_type,
        optional($.generic_args),
        optional($.body),
      ),

      decorator: $ => seq(
        $.decorator_identifier,
        optional($.decorator_args),
      ),

      generic_args: $ => seq('<', commaSep1($.boolean_expression), '>'),

      extends_args: $ => seq('(', commaSep1($.boolean_expression), ')'),

      decorator_args: $ => seq('(', commaSep1($.boolean_expression), ')'),

      body: $ => seq('{', repeat($.bodyElement), '}'),

      bodyElement: $ => choice($.block, $.property),

      property_type: $ => choice($.camel_identifier, $.pascal_identifier),

      atom: $ => choice(
        $.camel_identifier,
        $.pascal_identifier,
        $.string,
        $.number,
      ),

      boolean_expression: $ => $.disjuction,
  
      disjuction: $ => choice(
        prec.left(PREC.disjuction, seq($.disjuction, "||", $.compare)),
        $.conj
      ),
  
      conj: $ => choice(
        prec.left(PREC.CONJ, seq($.conj, "&&", $.compare)),
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

      arithmetic_expression: $ => $.term,

      term: $ => choice(
        prec.left(PREC.term, seq($.term, choice("+", "-"), $.factor)),
        $.factor),

      factor: $ => choice(
        prec.left(PREC.factor, seq($.factor, choice("*", "/"), $.arithmetic_expression)),
        $.arithmetic_value),

      arithmetic_value: $ => choice(
        prec.left(PREC.PAREN, seq("(", $.arithmetic_expression, ")")),
        $.atom
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
