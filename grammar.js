const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments

  DISJ: 8,
  CONJ: 9,
  ADDSUB: 10,
  MULDIV: 11,
  PAREN: 12,
  BVALUE: 13,
};

module.exports = grammar({
  name: 'Haiku',

  rules: {

      program: $ => repeat($.Block),

      Block: $ => seq(
        repeat($.Decorator),
        $.camelIdentifier,
        $.pascalIdentifier,
        optional($.GenericArgs),
        optional($.ExtendsArgs),
        $.Body,
      ),

      Property: $ => seq(
        repeat($.Decorator),
        $.camelIdentifier,
        ':',
        $.PropertyType,
        optional($.GenericArgs),
        optional($.Body),
      ),

      Decorator: $ => seq(
        $.decoratorIdentifier,
        optional($.DecoratorArgs),
      ),

      GenericArgs: $ => seq('<', commaSep1($.bexp), '>'),

      ExtendsArgs: $ => seq('(', commaSep1($.bexp), ')'),

      DecoratorArgs: $ => seq('(', commaSep1($.bexp), ')'),

      Body: $ => seq('{', repeat($.BodyElement), '}'),

      BodyElement: $ => choice($.Block, $.Property),

      PropertyType: $ => choice($.camelIdentifier, $.pascalIdentifier),

      atom: $ => choice(
        $.camelIdentifier,
        $.pascalIdentifier,
        $.string,
        $.number,
      ),

      bexp: $ => $.disj,
  
      disj: $ => choice(
        prec.left(PREC.DISJ, seq($.disj, "||", $.comp)),
        $.conj
      ),
  
      conj: $ => choice(
        prec.left(PREC.CONJ, seq($.conj, "&&", $.comp)),
        $.comp
      ),

      comp: $ => choice(
          prec.left(-1, seq($.aexp, choice("==", "<=", ">=", ">", "<"), $.aexp)),
          $.neg),
  
      neg: $ => choice(
        prec.left(PREC.BVALUE, seq("!", $.bvalue)),
      $.bvalue),
  
      bvalue: $ => choice(
        seq("(", $.bexp, ")"),
        "true",
        "false",
        $.aexp),

      aexp: $ => $.addsub,

      addsub: $ => choice(
        prec.left(PREC.ADDSUB, seq($.addsub, choice("+", "-"), $.muldiv)),
        $.muldiv),

      muldiv: $ => choice(
        prec.left(PREC.MULDIV, seq($.muldiv, choice("*", "/"), $.aexp)),
        $.avalue),

      avalue: $ => choice(
        prec.left(PREC.PAREN, seq("(", $.aexp, ")")),
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
      camelIdentifier: $ => /[a-z_][a-zA-Z0-9_]*/,
      pascalIdentifier: $ => /[A-Z][a-zA-Z0-9_]*/,
      decoratorIdentifier: $ => /[@][a-z_][a-zA-Z0-9_]*/,
      macroIdentifier: $ => /[$][a-z_][a-zA-Z0-9_]*/,
    }
  }
);

function commaSep1 (rule) {
  return sep1(rule, ',')
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
