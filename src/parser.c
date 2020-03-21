#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 187
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_COLON = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_LT = 6,
  anon_sym_GT = 7,
  anon_sym_COMMA = 8,
  anon_sym_not = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_DOT = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_double_quote_string_token1 = 14,
  anon_sym_SQUOTE = 15,
  aux_sym_single_quote_string_token1 = 16,
  anon_sym_BQUOTE = 17,
  aux_sym_template_string_token1 = 18,
  sym__not_escape_sequence = 19,
  aux_sym_format_specifier_token1 = 20,
  sym_type_conversion = 21,
  sym_camel_identifier = 22,
  sym_pascal_identifier = 23,
  sym_decorator_identifier = 24,
  sym_macro_identifier = 25,
  sym_comment = 26,
  sym_integer = 27,
  sym_float = 28,
  sym_escape_sequence = 29,
  sym_additive_operator = 30,
  sym_disjunction_operator = 31,
  sym_conjuction_operator = 32,
  sym_unary_operator = 33,
  sym_multiplicative_operator = 34,
  sym_relational_operator = 35,
  sym_program = 36,
  sym_block = 37,
  sym_body = 38,
  sym__body_element = 39,
  sym_property = 40,
  sym__property_type = 41,
  sym_decorator = 42,
  sym_decorator_args = 43,
  sym_extends = 44,
  sym_generic = 45,
  sym_generic_args = 46,
  sym_generic_arg = 47,
  sym__expression = 48,
  sym__boolean_expression = 49,
  sym_disjunction_expression = 50,
  sym_conjuction_expression = 51,
  sym_negation_expression = 52,
  sym_relational_expression = 53,
  sym__arithmetic_expression = 54,
  sym_additive_expression = 55,
  sym_multiplicative_expression = 56,
  sym_factor = 57,
  sym_function_call = 58,
  sym_unary_expression = 59,
  sym__unsigned_constant = 60,
  sym_list = 61,
  sym_expression_list = 62,
  sym_identifier = 63,
  sym_identifier_name = 64,
  sym__literal = 65,
  sym__number = 66,
  sym__string = 67,
  sym_double_quote_string = 68,
  sym_single_quote_string = 69,
  sym_template_string = 70,
  sym_interpolation = 71,
  sym_format_specifier = 72,
  sym_format_expression = 73,
  aux_sym_program_repeat1 = 74,
  aux_sym_block_repeat1 = 75,
  aux_sym_body_repeat1 = 76,
  aux_sym_generic_args_repeat1 = 77,
  aux_sym_expression_list_repeat1 = 78,
  aux_sym_identifier_repeat1 = 79,
  aux_sym_double_quote_string_repeat1 = 80,
  aux_sym_single_quote_string_repeat1 = 81,
  aux_sym_template_string_repeat1 = 82,
  aux_sym_format_specifier_repeat1 = 83,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_COMMA] = ",",
  [anon_sym_not] = "not",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quote_string_token1] = "double_quote_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quote_string_token1] = "single_quote_string_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_template_string_token1] = "template_string_token1",
  [sym__not_escape_sequence] = "_not_escape_sequence",
  [aux_sym_format_specifier_token1] = "format_specifier_token1",
  [sym_type_conversion] = "type_conversion",
  [sym_camel_identifier] = "camel_identifier",
  [sym_pascal_identifier] = "pascal_identifier",
  [sym_decorator_identifier] = "decorator_identifier",
  [sym_macro_identifier] = "macro_identifier",
  [sym_comment] = "comment",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_escape_sequence] = "escape_sequence",
  [sym_additive_operator] = "additive_operator",
  [sym_disjunction_operator] = "disjunction_operator",
  [sym_conjuction_operator] = "conjuction_operator",
  [sym_unary_operator] = "unary_operator",
  [sym_multiplicative_operator] = "multiplicative_operator",
  [sym_relational_operator] = "relational_operator",
  [sym_program] = "program",
  [sym_block] = "block",
  [sym_body] = "body",
  [sym__body_element] = "_body_element",
  [sym_property] = "property",
  [sym__property_type] = "_property_type",
  [sym_decorator] = "decorator",
  [sym_decorator_args] = "decorator_args",
  [sym_extends] = "extends",
  [sym_generic] = "generic",
  [sym_generic_args] = "generic_args",
  [sym_generic_arg] = "generic_arg",
  [sym__expression] = "_expression",
  [sym__boolean_expression] = "_boolean_expression",
  [sym_disjunction_expression] = "disjunction_expression",
  [sym_conjuction_expression] = "conjuction_expression",
  [sym_negation_expression] = "negation_expression",
  [sym_relational_expression] = "relational_expression",
  [sym__arithmetic_expression] = "_arithmetic_expression",
  [sym_additive_expression] = "additive_expression",
  [sym_multiplicative_expression] = "multiplicative_expression",
  [sym_factor] = "factor",
  [sym_function_call] = "function_call",
  [sym_unary_expression] = "unary_expression",
  [sym__unsigned_constant] = "_unsigned_constant",
  [sym_list] = "list",
  [sym_expression_list] = "expression_list",
  [sym_identifier] = "identifier",
  [sym_identifier_name] = "identifier_name",
  [sym__literal] = "_literal",
  [sym__number] = "_number",
  [sym__string] = "_string",
  [sym_double_quote_string] = "double_quote_string",
  [sym_single_quote_string] = "single_quote_string",
  [sym_template_string] = "template_string",
  [sym_interpolation] = "interpolation",
  [sym_format_specifier] = "format_specifier",
  [sym_format_expression] = "format_expression",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_generic_args_repeat1] = "generic_args_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym_double_quote_string_repeat1] = "double_quote_string_repeat1",
  [aux_sym_single_quote_string_repeat1] = "single_quote_string_repeat1",
  [aux_sym_template_string_repeat1] = "template_string_repeat1",
  [aux_sym_format_specifier_repeat1] = "format_specifier_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quote_string_token1] = aux_sym_double_quote_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quote_string_token1] = aux_sym_single_quote_string_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_template_string_token1] = aux_sym_template_string_token1,
  [sym__not_escape_sequence] = sym__not_escape_sequence,
  [aux_sym_format_specifier_token1] = aux_sym_format_specifier_token1,
  [sym_type_conversion] = sym_type_conversion,
  [sym_camel_identifier] = sym_camel_identifier,
  [sym_pascal_identifier] = sym_pascal_identifier,
  [sym_decorator_identifier] = sym_decorator_identifier,
  [sym_macro_identifier] = sym_macro_identifier,
  [sym_comment] = sym_comment,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_additive_operator] = sym_additive_operator,
  [sym_disjunction_operator] = sym_disjunction_operator,
  [sym_conjuction_operator] = sym_conjuction_operator,
  [sym_unary_operator] = sym_unary_operator,
  [sym_multiplicative_operator] = sym_multiplicative_operator,
  [sym_relational_operator] = sym_relational_operator,
  [sym_program] = sym_program,
  [sym_block] = sym_block,
  [sym_body] = sym_body,
  [sym__body_element] = sym__body_element,
  [sym_property] = sym_property,
  [sym__property_type] = sym__property_type,
  [sym_decorator] = sym_decorator,
  [sym_decorator_args] = sym_decorator_args,
  [sym_extends] = sym_extends,
  [sym_generic] = sym_generic,
  [sym_generic_args] = sym_generic_args,
  [sym_generic_arg] = sym_generic_arg,
  [sym__expression] = sym__expression,
  [sym__boolean_expression] = sym__boolean_expression,
  [sym_disjunction_expression] = sym_disjunction_expression,
  [sym_conjuction_expression] = sym_conjuction_expression,
  [sym_negation_expression] = sym_negation_expression,
  [sym_relational_expression] = sym_relational_expression,
  [sym__arithmetic_expression] = sym__arithmetic_expression,
  [sym_additive_expression] = sym_additive_expression,
  [sym_multiplicative_expression] = sym_multiplicative_expression,
  [sym_factor] = sym_factor,
  [sym_function_call] = sym_function_call,
  [sym_unary_expression] = sym_unary_expression,
  [sym__unsigned_constant] = sym__unsigned_constant,
  [sym_list] = sym_list,
  [sym_expression_list] = sym_expression_list,
  [sym_identifier] = sym_identifier,
  [sym_identifier_name] = sym_identifier_name,
  [sym__literal] = sym__literal,
  [sym__number] = sym__number,
  [sym__string] = sym__string,
  [sym_double_quote_string] = sym_double_quote_string,
  [sym_single_quote_string] = sym_single_quote_string,
  [sym_template_string] = sym_template_string,
  [sym_interpolation] = sym_interpolation,
  [sym_format_specifier] = sym_format_specifier,
  [sym_format_expression] = sym_format_expression,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_generic_args_repeat1] = aux_sym_generic_args_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [aux_sym_double_quote_string_repeat1] = aux_sym_double_quote_string_repeat1,
  [aux_sym_single_quote_string_repeat1] = aux_sym_single_quote_string_repeat1,
  [aux_sym_template_string_repeat1] = aux_sym_template_string_repeat1,
  [aux_sym_format_specifier_repeat1] = aux_sym_format_specifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_template_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__not_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_format_specifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_type_conversion] = {
    .visible = true,
    .named = true,
  },
  [sym_camel_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_pascal_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_decorator_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_additive_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_disjunction_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_conjuction_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicative_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_relational_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym__body_element] = {
    .visible = false,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym__property_type] = {
    .visible = false,
    .named = true,
  },
  [sym_decorator] = {
    .visible = true,
    .named = true,
  },
  [sym_decorator_args] = {
    .visible = true,
    .named = true,
  },
  [sym_extends] = {
    .visible = true,
    .named = true,
  },
  [sym_generic] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_args] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_arg] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_disjunction_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conjuction_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_negation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_relational_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__arithmetic_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_additive_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicative_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_factor] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__unsigned_constant] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_name] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_double_quote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_template_string] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_format_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_format_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quote_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quote_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_format_specifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(47);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(122);
      if (lookahead == '&') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(117);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '|') ADVANCE(118);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(116);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(72);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(83);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(79);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(69);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(92);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(122);
      if (lookahead == '&') ADVANCE(123);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(117);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == '|') ADVANCE(118);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(103);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(125);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(108);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(109);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 30:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(108);
      END_STATE();
    case 31:
      if (lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*') ADVANCE(122);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(117);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(31)
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(109);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 47:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 48:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(49)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_template_string_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_template_string_token1);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_template_string_token1);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_template_string_token1);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_template_string_token1);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_template_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__not_escape_sequence);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == 'U') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__not_escape_sequence);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == 'U') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__not_escape_sequence);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == 'U') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__not_escape_sequence);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(116);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'U') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_format_specifier_token1);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_format_specifier_token1);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '\n' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(15);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_format_specifier_token1);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '\n' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(15);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_format_specifier_token1);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_format_specifier_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_type_conversion);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'o') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 't') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_pascal_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_decorator_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(19);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(21);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(108);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(115);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_additive_operator);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_additive_operator);
      if (lookahead == '|') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_disjunction_operator);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_conjuction_operator);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_unary_operator);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '&') ADVANCE(120);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(103);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_relational_operator);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 49},
  [22] = {.lex_state = 49},
  [23] = {.lex_state = 49},
  [24] = {.lex_state = 49},
  [25] = {.lex_state = 49},
  [26] = {.lex_state = 49},
  [27] = {.lex_state = 49},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 49},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 49},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 49},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 31},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 49},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 49},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 49},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 31},
  [82] = {.lex_state = 49},
  [83] = {.lex_state = 31},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 31},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 31},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 49},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 49},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 31},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 49},
  [105] = {.lex_state = 49},
  [106] = {.lex_state = 49},
  [107] = {.lex_state = 49},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 49},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 49},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 49},
  [114] = {.lex_state = 49},
  [115] = {.lex_state = 49},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 31},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 31},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 49},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 31},
  [124] = {.lex_state = 31},
  [125] = {.lex_state = 31},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 31},
  [128] = {.lex_state = 49},
  [129] = {.lex_state = 31},
  [130] = {.lex_state = 31},
  [131] = {.lex_state = 31},
  [132] = {.lex_state = 31},
  [133] = {.lex_state = 31},
  [134] = {.lex_state = 31},
  [135] = {.lex_state = 31},
  [136] = {.lex_state = 31},
  [137] = {.lex_state = 31},
  [138] = {.lex_state = 31},
  [139] = {.lex_state = 49},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 31},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 49},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 49},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 49},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 49},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 49},
  [153] = {.lex_state = 49},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 49},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 49},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 49},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym__not_escape_sequence] = ACTIONS(1),
    [sym_type_conversion] = ACTIONS(1),
    [sym_camel_identifier] = ACTIONS(1),
    [sym_pascal_identifier] = ACTIONS(1),
    [sym_decorator_identifier] = ACTIONS(1),
    [sym_macro_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_additive_operator] = ACTIONS(1),
    [sym_disjunction_operator] = ACTIONS(1),
    [sym_conjuction_operator] = ACTIONS(1),
    [sym_unary_operator] = ACTIONS(1),
    [sym_multiplicative_operator] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(185),
    [sym_block] = STATE(73),
    [sym_decorator] = STATE(109),
    [aux_sym_program_repeat1] = STATE(73),
    [aux_sym_block_repeat1] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_camel_identifier] = ACTIONS(7),
    [sym_decorator_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(60), 1,
      sym_conjuction_expression,
    STATE(61), 1,
      sym_negation_expression,
    STATE(74), 1,
      sym_disjunction_expression,
    STATE(186), 1,
      sym_expression_list,
    STATE(120), 2,
      sym__expression,
      sym__boolean_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [89] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(60), 1,
      sym_conjuction_expression,
    STATE(61), 1,
      sym_negation_expression,
    STATE(74), 1,
      sym_disjunction_expression,
    STATE(175), 1,
      sym_expression_list,
    STATE(120), 2,
      sym__expression,
      sym__boolean_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [178] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(60), 1,
      sym_conjuction_expression,
    STATE(61), 1,
      sym_negation_expression,
    STATE(74), 1,
      sym_disjunction_expression,
    STATE(184), 1,
      sym_expression_list,
    STATE(120), 2,
      sym__expression,
      sym__boolean_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [267] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(60), 1,
      sym_conjuction_expression,
    STATE(61), 1,
      sym_negation_expression,
    STATE(74), 1,
      sym_disjunction_expression,
    STATE(166), 1,
      sym_expression_list,
    STATE(120), 2,
      sym__expression,
      sym__boolean_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [353] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(60), 1,
      sym_conjuction_expression,
    STATE(61), 1,
      sym_negation_expression,
    STATE(74), 1,
      sym_disjunction_expression,
    STATE(169), 1,
      sym_expression_list,
    STATE(120), 2,
      sym__expression,
      sym__boolean_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [439] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(60), 1,
      sym_conjuction_expression,
    STATE(61), 1,
      sym_negation_expression,
    STATE(74), 1,
      sym_disjunction_expression,
    STATE(176), 1,
      sym_expression_list,
    STATE(120), 2,
      sym__expression,
      sym__boolean_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [525] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(60), 1,
      sym_conjuction_expression,
    STATE(61), 1,
      sym_negation_expression,
    STATE(74), 1,
      sym_disjunction_expression,
    STATE(140), 2,
      sym__expression,
      sym__boolean_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [608] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(60), 1,
      sym_conjuction_expression,
    STATE(61), 1,
      sym_negation_expression,
    STATE(74), 1,
      sym_disjunction_expression,
    STATE(174), 2,
      sym__expression,
      sym__boolean_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [691] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(60), 1,
      sym_conjuction_expression,
    STATE(61), 1,
      sym_negation_expression,
    STATE(74), 1,
      sym_disjunction_expression,
    STATE(170), 2,
      sym__expression,
      sym__boolean_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [774] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(60), 1,
      sym_conjuction_expression,
    STATE(61), 1,
      sym_negation_expression,
    STATE(74), 1,
      sym_disjunction_expression,
    STATE(110), 2,
      sym__expression,
      sym__boolean_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [857] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(60), 1,
      sym_conjuction_expression,
    STATE(61), 1,
      sym_negation_expression,
    STATE(74), 1,
      sym_disjunction_expression,
    STATE(126), 2,
      sym__expression,
      sym__boolean_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [940] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(60), 1,
      sym_conjuction_expression,
    STATE(61), 1,
      sym_negation_expression,
    STATE(74), 1,
      sym_disjunction_expression,
    STATE(168), 2,
      sym__expression,
      sym__boolean_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [1023] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(60), 1,
      sym_conjuction_expression,
    STATE(61), 1,
      sym_negation_expression,
    STATE(74), 1,
      sym_disjunction_expression,
    STATE(112), 2,
      sym__expression,
      sym__boolean_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [1106] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(60), 1,
      sym_conjuction_expression,
    STATE(61), 1,
      sym_negation_expression,
    STATE(74), 1,
      sym_disjunction_expression,
    STATE(168), 1,
      sym__expression,
    STATE(173), 1,
      sym__boolean_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [1191] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(59), 1,
      sym_conjuction_expression,
    STATE(61), 1,
      sym_negation_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [1267] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(58), 1,
      sym_negation_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [1340] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      sym_camel_identifier,
    ACTIONS(27), 1,
      sym_pascal_identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(54), 1,
      sym_relational_expression,
    STATE(55), 1,
      sym__arithmetic_expression,
    STATE(57), 1,
      sym_negation_expression,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [1413] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(53), 1,
      sym_float,
    ACTIONS(55), 1,
      sym_unary_operator,
    STATE(83), 1,
      sym_identifier_name,
    STATE(94), 1,
      sym_identifier,
    STATE(135), 1,
      sym_multiplicative_expression,
    STATE(136), 1,
      sym_factor,
    STATE(142), 1,
      sym_additive_expression,
    STATE(145), 1,
      sym_generic_arg,
    STATE(165), 1,
      sym__arithmetic_expression,
    STATE(167), 1,
      sym_generic_args,
    ACTIONS(49), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(137), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [1481] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(53), 1,
      sym_float,
    ACTIONS(55), 1,
      sym_unary_operator,
    STATE(83), 1,
      sym_identifier_name,
    STATE(94), 1,
      sym_identifier,
    STATE(135), 1,
      sym_multiplicative_expression,
    STATE(136), 1,
      sym_factor,
    STATE(142), 1,
      sym_additive_expression,
    STATE(164), 1,
      sym_generic_arg,
    STATE(165), 1,
      sym__arithmetic_expression,
    ACTIONS(49), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(137), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [1546] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(35), 1,
      sym_multiplicative_expression,
    STATE(36), 1,
      sym_factor,
    STATE(50), 1,
      sym_additive_expression,
    STATE(52), 1,
      sym__arithmetic_expression,
    ACTIONS(27), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [1608] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(53), 1,
      sym_float,
    ACTIONS(55), 1,
      sym_unary_operator,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_identifier_name,
    STATE(94), 1,
      sym_identifier,
    STATE(124), 1,
      sym_multiplicative_expression,
    STATE(136), 1,
      sym_factor,
    ACTIONS(49), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(137), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [1664] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(36), 1,
      sym_factor,
    STATE(47), 1,
      sym_multiplicative_expression,
    ACTIONS(27), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [1720] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(53), 1,
      sym_float,
    ACTIONS(55), 1,
      sym_unary_operator,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_identifier_name,
    STATE(94), 1,
      sym_identifier,
    STATE(138), 1,
      sym_factor,
    ACTIONS(49), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(137), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [1773] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(53), 1,
      sym_float,
    ACTIONS(55), 1,
      sym_unary_operator,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_identifier_name,
    STATE(94), 1,
      sym_identifier,
    STATE(123), 1,
      sym_factor,
    ACTIONS(49), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(137), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [1826] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(48), 1,
      sym_factor,
    ACTIONS(27), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [1879] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym_identifier_name,
    STATE(33), 1,
      sym_identifier,
    STATE(42), 1,
      sym_factor,
    ACTIONS(27), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(37), 10,
      sym_function_call,
      sym_unary_expression,
      sym__unsigned_constant,
      sym_list,
      sym__literal,
      sym__number,
      sym__string,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_template_string,
  [1932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(63), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(59), 10,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [1958] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(70), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(65), 10,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [1984] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(74), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(72), 10,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(65), 11,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(76), 11,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(80), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(86), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_additive_operator,
    ACTIONS(94), 1,
      sym_multiplicative_operator,
    ACTIONS(90), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(96), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(80), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(100), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(104), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(108), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(112), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(116), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(120), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(124), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(128), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(132), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_multiplicative_operator,
    ACTIONS(138), 1,
      sym_additive_operator,
    ACTIONS(136), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(140), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(144), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym_additive_operator,
    ACTIONS(148), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2400] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_decorator_identifier,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(154), 1,
      sym_camel_identifier,
    STATE(114), 2,
      sym_decorator,
      aux_sym_block_repeat1,
    STATE(53), 4,
      sym_block,
      sym__body_element,
      sym_property,
      aux_sym_body_repeat1,
  [2423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2438] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      sym_camel_identifier,
    ACTIONS(163), 1,
      sym_decorator_identifier,
    STATE(114), 2,
      sym_decorator,
      aux_sym_block_repeat1,
    STATE(53), 4,
      sym_block,
      sym__body_element,
      sym_property,
      aux_sym_body_repeat1,
  [2461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_relational_operator,
    ACTIONS(166), 8,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 9,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2493] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_decorator_identifier,
    ACTIONS(154), 1,
      sym_camel_identifier,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(114), 2,
      sym_decorator,
      aux_sym_block_repeat1,
    STATE(51), 4,
      sym_block,
      sym__body_element,
      sym_property,
      aux_sym_body_repeat1,
  [2516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 8,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 8,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_conjuction_operator,
    ACTIONS(178), 7,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
  [2560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_conjuction_operator,
    ACTIONS(182), 7,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
  [2576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 8,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2590] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_multiplicative_operator,
    ACTIONS(186), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(65), 4,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [2609] = 6,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_SQUOTE,
    ACTIONS(194), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(197), 2,
      sym__not_escape_sequence,
      sym_escape_sequence,
    STATE(63), 2,
      sym_interpolation,
      aux_sym_single_quote_string_repeat1,
  [2630] = 6,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(204), 1,
      anon_sym_BQUOTE,
    ACTIONS(206), 1,
      aux_sym_template_string_token1,
    ACTIONS(208), 2,
      sym__not_escape_sequence,
      sym_escape_sequence,
    STATE(80), 2,
      sym_interpolation,
      aux_sym_template_string_repeat1,
  [2651] = 6,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_SQUOTE,
    ACTIONS(214), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(216), 2,
      sym__not_escape_sequence,
      sym_escape_sequence,
    STATE(63), 2,
      sym_interpolation,
      aux_sym_single_quote_string_repeat1,
  [2672] = 6,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_double_quote_string_token1,
    ACTIONS(224), 2,
      sym__not_escape_sequence,
      sym_escape_sequence,
    STATE(84), 2,
      sym_interpolation,
      aux_sym_double_quote_string_repeat1,
  [2693] = 6,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      anon_sym_BQUOTE,
    ACTIONS(228), 1,
      aux_sym_template_string_token1,
    ACTIONS(230), 2,
      sym__not_escape_sequence,
      sym_escape_sequence,
    STATE(64), 2,
      sym_interpolation,
      aux_sym_template_string_repeat1,
  [2714] = 6,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(236), 2,
      sym__not_escape_sequence,
      sym_escape_sequence,
    STATE(65), 2,
      sym_interpolation,
      aux_sym_single_quote_string_repeat1,
  [2735] = 6,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(240), 1,
      aux_sym_double_quote_string_token1,
    ACTIONS(242), 2,
      sym__not_escape_sequence,
      sym_escape_sequence,
    STATE(66), 2,
      sym_interpolation,
      aux_sym_double_quote_string_repeat1,
  [2756] = 6,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      aux_sym_double_quote_string_token1,
    ACTIONS(248), 2,
      sym__not_escape_sequence,
      sym_escape_sequence,
    STATE(75), 2,
      sym_interpolation,
      aux_sym_double_quote_string_repeat1,
  [2777] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      anon_sym_LT,
    STATE(104), 1,
      sym_generic,
    STATE(148), 1,
      sym_body,
    ACTIONS(252), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [2798] = 6,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BQUOTE,
    ACTIONS(258), 1,
      aux_sym_template_string_token1,
    ACTIONS(260), 2,
      sym__not_escape_sequence,
      sym_escape_sequence,
    STATE(77), 2,
      sym_interpolation,
      aux_sym_template_string_repeat1,
  [2819] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_camel_identifier,
    ACTIONS(9), 1,
      sym_decorator_identifier,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    STATE(82), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(109), 2,
      sym_decorator,
      aux_sym_block_repeat1,
  [2840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_disjunction_operator,
    ACTIONS(264), 6,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_type_conversion,
  [2855] = 6,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      aux_sym_double_quote_string_token1,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 2,
      sym__not_escape_sequence,
      sym_escape_sequence,
    STATE(84), 2,
      sym_interpolation,
      aux_sym_double_quote_string_repeat1,
  [2876] = 6,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 2,
      sym__not_escape_sequence,
      sym_escape_sequence,
    STATE(63), 2,
      sym_interpolation,
      aux_sym_single_quote_string_repeat1,
  [2897] = 6,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      aux_sym_template_string_token1,
    ACTIONS(272), 1,
      anon_sym_BQUOTE,
    ACTIONS(208), 2,
      sym__not_escape_sequence,
      sym_escape_sequence,
    STATE(80), 2,
      sym_interpolation,
      aux_sym_template_string_repeat1,
  [2918] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      anon_sym_LT,
    STATE(92), 1,
      sym_generic,
    STATE(153), 1,
      sym_body,
    ACTIONS(274), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [2939] = 6,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(280), 2,
      sym__not_escape_sequence,
      sym_escape_sequence,
    STATE(76), 2,
      sym_interpolation,
      aux_sym_single_quote_string_repeat1,
  [2960] = 6,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    ACTIONS(285), 1,
      anon_sym_BQUOTE,
    ACTIONS(287), 1,
      aux_sym_template_string_token1,
    ACTIONS(290), 2,
      sym__not_escape_sequence,
      sym_escape_sequence,
    STATE(80), 2,
      sym_interpolation,
      aux_sym_template_string_repeat1,
  [2981] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_multiplicative_operator,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(59), 4,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3000] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 1,
      sym_camel_identifier,
    ACTIONS(300), 1,
      sym_decorator_identifier,
    STATE(82), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(109), 2,
      sym_decorator,
      aux_sym_block_repeat1,
  [3021] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_multiplicative_operator,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(81), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(72), 4,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3040] = 6,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_double_quote_string_token1,
    ACTIONS(311), 2,
      sym__not_escape_sequence,
      sym_escape_sequence,
    STATE(84), 2,
      sym_interpolation,
      aux_sym_double_quote_string_repeat1,
  [3061] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      anon_sym_LT,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_generic,
    STATE(111), 1,
      sym_body,
    STATE(157), 1,
      sym_extends,
  [3083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_multiplicative_operator,
    ACTIONS(76), 5,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_DOT,
      sym_additive_operator,
  [3097] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      anon_sym_LT,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_body,
    STATE(118), 1,
      sym_generic,
    STATE(163), 1,
      sym_extends,
  [3119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_multiplicative_operator,
    ACTIONS(65), 5,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_DOT,
      sym_additive_operator,
  [3133] = 3,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_double_quote_string_token1,
    ACTIONS(316), 4,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym__not_escape_sequence,
      sym_escape_sequence,
  [3146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_camel_identifier,
      sym_decorator_identifier,
  [3157] = 5,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACE,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    ACTIONS(327), 1,
      aux_sym_format_specifier_token1,
    STATE(91), 2,
      sym_format_expression,
      aux_sym_format_specifier_repeat1,
  [3174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_body,
    ACTIONS(330), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [3189] = 3,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym_double_quote_string_token1,
    ACTIONS(332), 4,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym__not_escape_sequence,
      sym_escape_sequence,
  [3202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_multiplicative_operator,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3217] = 5,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    ACTIONS(342), 1,
      aux_sym_format_specifier_token1,
    STATE(91), 2,
      sym_format_expression,
      aux_sym_format_specifier_repeat1,
  [3234] = 3,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(344), 4,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      sym__not_escape_sequence,
      sym_escape_sequence,
  [3247] = 3,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(332), 4,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      sym__not_escape_sequence,
      sym_escape_sequence,
  [3260] = 3,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(316), 4,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      sym__not_escape_sequence,
      sym_escape_sequence,
  [3273] = 3,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym_template_string_token1,
    ACTIONS(344), 4,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      sym__not_escape_sequence,
      sym_escape_sequence,
  [3286] = 3,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym_double_quote_string_token1,
    ACTIONS(344), 4,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym__not_escape_sequence,
      sym_escape_sequence,
  [3299] = 3,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym_template_string_token1,
    ACTIONS(332), 4,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      sym__not_escape_sequence,
      sym_escape_sequence,
  [3312] = 5,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    ACTIONS(350), 1,
      aux_sym_format_specifier_token1,
    STATE(95), 2,
      sym_format_expression,
      aux_sym_format_specifier_repeat1,
  [3329] = 3,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_template_string_token1,
    ACTIONS(316), 4,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      sym__not_escape_sequence,
      sym_escape_sequence,
  [3342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_body,
    ACTIONS(274), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [3357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [3367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [3377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_decorator_args,
    ACTIONS(358), 2,
      sym_camel_identifier,
      sym_decorator_identifier,
  [3391] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_body,
    STATE(163), 1,
      sym_extends,
  [3407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_decorator_identifier,
    ACTIONS(360), 1,
      sym_camel_identifier,
    STATE(121), 2,
      sym_decorator,
      aux_sym_block_repeat1,
  [3421] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    ACTIONS(364), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      sym_type_conversion,
    STATE(181), 1,
      sym_format_specifier,
  [3437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [3447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COLON,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    ACTIONS(372), 1,
      sym_type_conversion,
    STATE(177), 1,
      sym_format_specifier,
  [3463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [3473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_decorator_identifier,
    ACTIONS(376), 1,
      sym_camel_identifier,
    STATE(121), 2,
      sym_decorator,
      aux_sym_block_repeat1,
  [3487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [3497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(380), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_multiplicative_operator,
    ACTIONS(124), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3523] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_body,
    STATE(158), 1,
      sym_extends,
  [3539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_multiplicative_operator,
    ACTIONS(144), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(384), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_camel_identifier,
    ACTIONS(388), 1,
      sym_decorator_identifier,
    STATE(121), 2,
      sym_decorator,
      aux_sym_block_repeat1,
  [3579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(391), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_multiplicative_operator,
    ACTIONS(140), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_multiplicative_operator,
    ACTIONS(136), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_multiplicative_operator,
    ACTIONS(86), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3629] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COLON,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    ACTIONS(400), 1,
      sym_type_conversion,
    STATE(179), 1,
      sym_format_specifier,
  [3645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_multiplicative_operator,
    ACTIONS(112), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [3667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_multiplicative_operator,
    ACTIONS(120), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_multiplicative_operator,
    ACTIONS(104), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_multiplicative_operator,
    ACTIONS(132), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_multiplicative_operator,
    ACTIONS(128), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_multiplicative_operator,
    ACTIONS(108), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_multiplicative_operator,
    ACTIONS(100), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_multiplicative_operator,
    ACTIONS(90), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_multiplicative_operator,
    ACTIONS(96), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_multiplicative_operator,
    ACTIONS(80), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_multiplicative_operator,
    ACTIONS(116), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_additive_operator,
  [3787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(71), 1,
      sym__property_type,
    ACTIONS(404), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COLON,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(182), 1,
      sym_format_specifier,
  [3820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_additive_operator,
    ACTIONS(148), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [3831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COLON,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(178), 1,
      sym_format_specifier,
  [3844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(78), 1,
      sym__property_type,
    ACTIONS(412), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_GT,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_generic_args_repeat1,
  [3868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(88), 1,
      sym_identifier_name,
    ACTIONS(49), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_GT,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_generic_args_repeat1,
  [3892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [3901] = 2,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(423), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_format_specifier_token1,
  [3910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [3919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      anon_sym_GT,
    STATE(147), 1,
      aux_sym_generic_args_repeat1,
  [3932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(31), 1,
      sym_identifier_name,
    ACTIONS(27), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [3952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COLON,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      sym_format_specifier,
  [3965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [3973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      sym_camel_identifier,
      sym_decorator_identifier,
  [3981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_body,
  [3991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_body,
  [4001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      sym_camel_identifier,
      sym_decorator_identifier,
  [4009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_COLON,
    ACTIONS(439), 1,
      sym_pascal_identifier,
  [4019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 2,
      sym_camel_identifier,
      sym_decorator_identifier,
  [4027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_COLON,
    ACTIONS(445), 1,
      sym_pascal_identifier,
  [4037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_body,
  [4047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [4055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [4063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
  [4070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_GT,
  [4077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
  [4084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_RBRACK,
  [4091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
  [4098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_pascal_identifier,
  [4105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_pascal_identifier,
  [4112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
  [4119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
  [4126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
  [4133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
  [4140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
  [4147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
  [4154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
  [4161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LBRACE,
  [4168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
  [4175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
  [4182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
  [4189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
  [4196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
  [4203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 178,
  [SMALL_STATE(5)] = 267,
  [SMALL_STATE(6)] = 353,
  [SMALL_STATE(7)] = 439,
  [SMALL_STATE(8)] = 525,
  [SMALL_STATE(9)] = 608,
  [SMALL_STATE(10)] = 691,
  [SMALL_STATE(11)] = 774,
  [SMALL_STATE(12)] = 857,
  [SMALL_STATE(13)] = 940,
  [SMALL_STATE(14)] = 1023,
  [SMALL_STATE(15)] = 1106,
  [SMALL_STATE(16)] = 1191,
  [SMALL_STATE(17)] = 1267,
  [SMALL_STATE(18)] = 1340,
  [SMALL_STATE(19)] = 1413,
  [SMALL_STATE(20)] = 1481,
  [SMALL_STATE(21)] = 1546,
  [SMALL_STATE(22)] = 1608,
  [SMALL_STATE(23)] = 1664,
  [SMALL_STATE(24)] = 1720,
  [SMALL_STATE(25)] = 1773,
  [SMALL_STATE(26)] = 1826,
  [SMALL_STATE(27)] = 1879,
  [SMALL_STATE(28)] = 1932,
  [SMALL_STATE(29)] = 1958,
  [SMALL_STATE(30)] = 1984,
  [SMALL_STATE(31)] = 2010,
  [SMALL_STATE(32)] = 2031,
  [SMALL_STATE(33)] = 2052,
  [SMALL_STATE(34)] = 2074,
  [SMALL_STATE(35)] = 2093,
  [SMALL_STATE(36)] = 2114,
  [SMALL_STATE(37)] = 2133,
  [SMALL_STATE(38)] = 2152,
  [SMALL_STATE(39)] = 2171,
  [SMALL_STATE(40)] = 2190,
  [SMALL_STATE(41)] = 2209,
  [SMALL_STATE(42)] = 2228,
  [SMALL_STATE(43)] = 2247,
  [SMALL_STATE(44)] = 2266,
  [SMALL_STATE(45)] = 2285,
  [SMALL_STATE(46)] = 2304,
  [SMALL_STATE(47)] = 2323,
  [SMALL_STATE(48)] = 2344,
  [SMALL_STATE(49)] = 2363,
  [SMALL_STATE(50)] = 2382,
  [SMALL_STATE(51)] = 2400,
  [SMALL_STATE(52)] = 2423,
  [SMALL_STATE(53)] = 2438,
  [SMALL_STATE(54)] = 2461,
  [SMALL_STATE(55)] = 2478,
  [SMALL_STATE(56)] = 2493,
  [SMALL_STATE(57)] = 2516,
  [SMALL_STATE(58)] = 2530,
  [SMALL_STATE(59)] = 2544,
  [SMALL_STATE(60)] = 2560,
  [SMALL_STATE(61)] = 2576,
  [SMALL_STATE(62)] = 2590,
  [SMALL_STATE(63)] = 2609,
  [SMALL_STATE(64)] = 2630,
  [SMALL_STATE(65)] = 2651,
  [SMALL_STATE(66)] = 2672,
  [SMALL_STATE(67)] = 2693,
  [SMALL_STATE(68)] = 2714,
  [SMALL_STATE(69)] = 2735,
  [SMALL_STATE(70)] = 2756,
  [SMALL_STATE(71)] = 2777,
  [SMALL_STATE(72)] = 2798,
  [SMALL_STATE(73)] = 2819,
  [SMALL_STATE(74)] = 2840,
  [SMALL_STATE(75)] = 2855,
  [SMALL_STATE(76)] = 2876,
  [SMALL_STATE(77)] = 2897,
  [SMALL_STATE(78)] = 2918,
  [SMALL_STATE(79)] = 2939,
  [SMALL_STATE(80)] = 2960,
  [SMALL_STATE(81)] = 2981,
  [SMALL_STATE(82)] = 3000,
  [SMALL_STATE(83)] = 3021,
  [SMALL_STATE(84)] = 3040,
  [SMALL_STATE(85)] = 3061,
  [SMALL_STATE(86)] = 3083,
  [SMALL_STATE(87)] = 3097,
  [SMALL_STATE(88)] = 3119,
  [SMALL_STATE(89)] = 3133,
  [SMALL_STATE(90)] = 3146,
  [SMALL_STATE(91)] = 3157,
  [SMALL_STATE(92)] = 3174,
  [SMALL_STATE(93)] = 3189,
  [SMALL_STATE(94)] = 3202,
  [SMALL_STATE(95)] = 3217,
  [SMALL_STATE(96)] = 3234,
  [SMALL_STATE(97)] = 3247,
  [SMALL_STATE(98)] = 3260,
  [SMALL_STATE(99)] = 3273,
  [SMALL_STATE(100)] = 3286,
  [SMALL_STATE(101)] = 3299,
  [SMALL_STATE(102)] = 3312,
  [SMALL_STATE(103)] = 3329,
  [SMALL_STATE(104)] = 3342,
  [SMALL_STATE(105)] = 3357,
  [SMALL_STATE(106)] = 3367,
  [SMALL_STATE(107)] = 3377,
  [SMALL_STATE(108)] = 3391,
  [SMALL_STATE(109)] = 3407,
  [SMALL_STATE(110)] = 3421,
  [SMALL_STATE(111)] = 3437,
  [SMALL_STATE(112)] = 3447,
  [SMALL_STATE(113)] = 3463,
  [SMALL_STATE(114)] = 3473,
  [SMALL_STATE(115)] = 3487,
  [SMALL_STATE(116)] = 3497,
  [SMALL_STATE(117)] = 3511,
  [SMALL_STATE(118)] = 3523,
  [SMALL_STATE(119)] = 3539,
  [SMALL_STATE(120)] = 3551,
  [SMALL_STATE(121)] = 3565,
  [SMALL_STATE(122)] = 3579,
  [SMALL_STATE(123)] = 3593,
  [SMALL_STATE(124)] = 3605,
  [SMALL_STATE(125)] = 3617,
  [SMALL_STATE(126)] = 3629,
  [SMALL_STATE(127)] = 3645,
  [SMALL_STATE(128)] = 3657,
  [SMALL_STATE(129)] = 3667,
  [SMALL_STATE(130)] = 3679,
  [SMALL_STATE(131)] = 3691,
  [SMALL_STATE(132)] = 3703,
  [SMALL_STATE(133)] = 3715,
  [SMALL_STATE(134)] = 3727,
  [SMALL_STATE(135)] = 3739,
  [SMALL_STATE(136)] = 3751,
  [SMALL_STATE(137)] = 3763,
  [SMALL_STATE(138)] = 3775,
  [SMALL_STATE(139)] = 3787,
  [SMALL_STATE(140)] = 3798,
  [SMALL_STATE(141)] = 3807,
  [SMALL_STATE(142)] = 3820,
  [SMALL_STATE(143)] = 3831,
  [SMALL_STATE(144)] = 3844,
  [SMALL_STATE(145)] = 3855,
  [SMALL_STATE(146)] = 3868,
  [SMALL_STATE(147)] = 3879,
  [SMALL_STATE(148)] = 3892,
  [SMALL_STATE(149)] = 3901,
  [SMALL_STATE(150)] = 3910,
  [SMALL_STATE(151)] = 3919,
  [SMALL_STATE(152)] = 3932,
  [SMALL_STATE(153)] = 3943,
  [SMALL_STATE(154)] = 3952,
  [SMALL_STATE(155)] = 3965,
  [SMALL_STATE(156)] = 3973,
  [SMALL_STATE(157)] = 3981,
  [SMALL_STATE(158)] = 3991,
  [SMALL_STATE(159)] = 4001,
  [SMALL_STATE(160)] = 4009,
  [SMALL_STATE(161)] = 4019,
  [SMALL_STATE(162)] = 4027,
  [SMALL_STATE(163)] = 4037,
  [SMALL_STATE(164)] = 4047,
  [SMALL_STATE(165)] = 4055,
  [SMALL_STATE(166)] = 4063,
  [SMALL_STATE(167)] = 4070,
  [SMALL_STATE(168)] = 4077,
  [SMALL_STATE(169)] = 4084,
  [SMALL_STATE(170)] = 4091,
  [SMALL_STATE(171)] = 4098,
  [SMALL_STATE(172)] = 4105,
  [SMALL_STATE(173)] = 4112,
  [SMALL_STATE(174)] = 4119,
  [SMALL_STATE(175)] = 4126,
  [SMALL_STATE(176)] = 4133,
  [SMALL_STATE(177)] = 4140,
  [SMALL_STATE(178)] = 4147,
  [SMALL_STATE(179)] = 4154,
  [SMALL_STATE(180)] = 4161,
  [SMALL_STATE(181)] = 4168,
  [SMALL_STATE(182)] = 4175,
  [SMALL_STATE(183)] = 4182,
  [SMALL_STATE(184)] = 4189,
  [SMALL_STATE(185)] = 4196,
  [SMALL_STATE(186)] = 4203,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(171),
  [9] = {.count = 1, .reusable = true}, SHIFT(107),
  [11] = {.count = 1, .reusable = true}, SHIFT(9),
  [13] = {.count = 1, .reusable = true}, SHIFT(49),
  [15] = {.count = 1, .reusable = false}, SHIFT(18),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(70),
  [21] = {.count = 1, .reusable = true}, SHIFT(79),
  [23] = {.count = 1, .reusable = true}, SHIFT(72),
  [25] = {.count = 1, .reusable = false}, SHIFT(32),
  [27] = {.count = 1, .reusable = true}, SHIFT(32),
  [29] = {.count = 1, .reusable = false}, SHIFT(37),
  [31] = {.count = 1, .reusable = true}, SHIFT(37),
  [33] = {.count = 1, .reusable = true}, SHIFT(27),
  [35] = {.count = 1, .reusable = true}, SHIFT(119),
  [37] = {.count = 1, .reusable = true}, SHIFT(156),
  [39] = {.count = 1, .reusable = true}, SHIFT(15),
  [41] = {.count = 1, .reusable = true}, SHIFT(6),
  [43] = {.count = 1, .reusable = true}, SHIFT(69),
  [45] = {.count = 1, .reusable = true}, SHIFT(68),
  [47] = {.count = 1, .reusable = true}, SHIFT(67),
  [49] = {.count = 1, .reusable = true}, SHIFT(86),
  [51] = {.count = 1, .reusable = false}, SHIFT(137),
  [53] = {.count = 1, .reusable = true}, SHIFT(137),
  [55] = {.count = 1, .reusable = true}, SHIFT(24),
  [57] = {.count = 1, .reusable = true}, SHIFT(13),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 2),
  [61] = {.count = 1, .reusable = true}, SHIFT(152),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 2),
  [65] = {.count = 1, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(152),
  [70] = {.count = 1, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [74] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym_identifier_name, 1),
  [78] = {.count = 1, .reusable = false}, REDUCE(sym_identifier_name, 1),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_factor, 1),
  [82] = {.count = 1, .reusable = true}, SHIFT(2),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym_factor, 1),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_template_string, 3),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym_template_string, 3),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_additive_expression, 1),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym_additive_expression, 1),
  [94] = {.count = 1, .reusable = false}, SHIFT(26),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_multiplicative_expression, 1),
  [98] = {.count = 1, .reusable = false}, REDUCE(sym_multiplicative_expression, 1),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_template_string, 2),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym_template_string, 2),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_list, 3),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym_list, 3),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_single_quote_string, 2),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_single_quote_string, 2),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_single_quote_string, 3),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_single_quote_string, 3),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [118] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_double_quote_string, 3),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym_double_quote_string, 3),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_function_call, 4),
  [126] = {.count = 1, .reusable = false}, REDUCE(sym_function_call, 4),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_double_quote_string, 2),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym_double_quote_string, 2),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_factor, 3),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_factor, 3),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_additive_expression, 3),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_additive_expression, 3),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_multiplicative_expression, 3),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_multiplicative_expression, 3),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_function_call, 3),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_function_call, 3),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym__arithmetic_expression, 1),
  [150] = {.count = 1, .reusable = false}, SHIFT(23),
  [152] = {.count = 1, .reusable = true}, SHIFT(106),
  [154] = {.count = 1, .reusable = true}, SHIFT(162),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_relational_expression, 3),
  [158] = {.count = 1, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(162),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(107),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_negation_expression, 1),
  [168] = {.count = 1, .reusable = true}, SHIFT(21),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_relational_expression, 1),
  [172] = {.count = 1, .reusable = true}, SHIFT(113),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_negation_expression, 2),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_conjuction_expression, 3),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction_expression, 3),
  [180] = {.count = 1, .reusable = true}, SHIFT(17),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction_expression, 1),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_conjuction_expression, 1),
  [186] = {.count = 2, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(146),
  [189] = {.count = 2, .reusable = false}, REDUCE(aux_sym_single_quote_string_repeat1, 2), SHIFT_REPEAT(14),
  [192] = {.count = 1, .reusable = false}, REDUCE(aux_sym_single_quote_string_repeat1, 2),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_single_quote_string_repeat1, 2), SHIFT_REPEAT(63),
  [197] = {.count = 2, .reusable = false}, REDUCE(aux_sym_single_quote_string_repeat1, 2), SHIFT_REPEAT(63),
  [200] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [202] = {.count = 1, .reusable = false}, SHIFT(11),
  [204] = {.count = 1, .reusable = false}, SHIFT(125),
  [206] = {.count = 1, .reusable = true}, SHIFT(80),
  [208] = {.count = 1, .reusable = false}, SHIFT(80),
  [210] = {.count = 1, .reusable = false}, SHIFT(14),
  [212] = {.count = 1, .reusable = false}, SHIFT(127),
  [214] = {.count = 1, .reusable = true}, SHIFT(63),
  [216] = {.count = 1, .reusable = false}, SHIFT(63),
  [218] = {.count = 1, .reusable = false}, SHIFT(12),
  [220] = {.count = 1, .reusable = false}, SHIFT(129),
  [222] = {.count = 1, .reusable = true}, SHIFT(84),
  [224] = {.count = 1, .reusable = false}, SHIFT(84),
  [226] = {.count = 1, .reusable = false}, SHIFT(134),
  [228] = {.count = 1, .reusable = true}, SHIFT(64),
  [230] = {.count = 1, .reusable = false}, SHIFT(64),
  [232] = {.count = 1, .reusable = false}, SHIFT(133),
  [234] = {.count = 1, .reusable = true}, SHIFT(65),
  [236] = {.count = 1, .reusable = false}, SHIFT(65),
  [238] = {.count = 1, .reusable = false}, SHIFT(132),
  [240] = {.count = 1, .reusable = true}, SHIFT(66),
  [242] = {.count = 1, .reusable = false}, SHIFT(66),
  [244] = {.count = 1, .reusable = false}, SHIFT(45),
  [246] = {.count = 1, .reusable = true}, SHIFT(75),
  [248] = {.count = 1, .reusable = false}, SHIFT(75),
  [250] = {.count = 1, .reusable = true}, SHIFT(56),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_property, 3),
  [254] = {.count = 1, .reusable = true}, SHIFT(19),
  [256] = {.count = 1, .reusable = false}, SHIFT(38),
  [258] = {.count = 1, .reusable = true}, SHIFT(77),
  [260] = {.count = 1, .reusable = false}, SHIFT(77),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_expression, 1),
  [266] = {.count = 1, .reusable = true}, SHIFT(16),
  [268] = {.count = 1, .reusable = false}, SHIFT(43),
  [270] = {.count = 1, .reusable = false}, SHIFT(41),
  [272] = {.count = 1, .reusable = false}, SHIFT(34),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_property, 4),
  [276] = {.count = 1, .reusable = false}, SHIFT(40),
  [278] = {.count = 1, .reusable = true}, SHIFT(76),
  [280] = {.count = 1, .reusable = false}, SHIFT(76),
  [282] = {.count = 2, .reusable = false}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(11),
  [285] = {.count = 1, .reusable = false}, REDUCE(aux_sym_template_string_repeat1, 2),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(80),
  [290] = {.count = 2, .reusable = false}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(80),
  [293] = {.count = 1, .reusable = true}, SHIFT(146),
  [295] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(171),
  [300] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(107),
  [303] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(12),
  [306] = {.count = 1, .reusable = false}, REDUCE(aux_sym_double_quote_string_repeat1, 2),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(84),
  [311] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(84),
  [314] = {.count = 1, .reusable = true}, SHIFT(5),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_interpolation, 5),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_interpolation, 5),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_generic, 3),
  [322] = {.count = 2, .reusable = false}, REDUCE(aux_sym_format_specifier_repeat1, 2), SHIFT_REPEAT(10),
  [325] = {.count = 1, .reusable = false}, REDUCE(aux_sym_format_specifier_repeat1, 2),
  [327] = {.count = 2, .reusable = false}, REDUCE(aux_sym_format_specifier_repeat1, 2), SHIFT_REPEAT(91),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_property, 5),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_interpolation, 4),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_interpolation, 4),
  [336] = {.count = 1, .reusable = true}, SHIFT(3),
  [338] = {.count = 1, .reusable = false}, SHIFT(10),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_format_specifier, 2),
  [342] = {.count = 1, .reusable = false}, SHIFT(91),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_interpolation, 3),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_interpolation, 3),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_format_specifier, 1),
  [350] = {.count = 1, .reusable = false}, SHIFT(95),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_block, 6),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [356] = {.count = 1, .reusable = true}, SHIFT(4),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_decorator, 1),
  [360] = {.count = 1, .reusable = true}, SHIFT(172),
  [362] = {.count = 1, .reusable = true}, SHIFT(99),
  [364] = {.count = 1, .reusable = true}, SHIFT(102),
  [366] = {.count = 1, .reusable = true}, SHIFT(141),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [370] = {.count = 1, .reusable = true}, SHIFT(96),
  [372] = {.count = 1, .reusable = true}, SHIFT(143),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [376] = {.count = 1, .reusable = true}, SHIFT(160),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_expression_list, 2),
  [382] = {.count = 1, .reusable = true}, SHIFT(8),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_expression_list, 1),
  [386] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [391] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [393] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(8),
  [396] = {.count = 1, .reusable = false}, SHIFT(25),
  [398] = {.count = 1, .reusable = true}, SHIFT(100),
  [400] = {.count = 1, .reusable = true}, SHIFT(154),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_block, 5),
  [404] = {.count = 1, .reusable = true}, SHIFT(71),
  [406] = {.count = 1, .reusable = true}, SHIFT(101),
  [408] = {.count = 1, .reusable = true}, SHIFT(22),
  [410] = {.count = 1, .reusable = true}, SHIFT(97),
  [412] = {.count = 1, .reusable = true}, SHIFT(78),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_generic_args, 1),
  [416] = {.count = 1, .reusable = true}, SHIFT(20),
  [418] = {.count = 1, .reusable = true}, REDUCE(aux_sym_generic_args_repeat1, 2),
  [420] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_args_repeat1, 2), SHIFT_REPEAT(20),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_format_expression, 3),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_property, 6),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_generic_args, 2),
  [429] = {.count = 1, .reusable = true}, SHIFT(93),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_generic_arg, 3),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_decorator_args, 2),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_decorator_args, 3),
  [437] = {.count = 1, .reusable = true}, SHIFT(144),
  [439] = {.count = 1, .reusable = true}, SHIFT(87),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_decorator, 2),
  [443] = {.count = 1, .reusable = true}, SHIFT(139),
  [445] = {.count = 1, .reusable = true}, SHIFT(85),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_generic_arg, 1),
  [449] = {.count = 1, .reusable = true}, SHIFT(180),
  [451] = {.count = 1, .reusable = true}, SHIFT(90),
  [453] = {.count = 1, .reusable = true}, SHIFT(131),
  [455] = {.count = 1, .reusable = true}, SHIFT(130),
  [457] = {.count = 1, .reusable = true}, SHIFT(149),
  [459] = {.count = 1, .reusable = true}, SHIFT(155),
  [461] = {.count = 1, .reusable = true}, SHIFT(46),
  [463] = {.count = 1, .reusable = true}, SHIFT(117),
  [465] = {.count = 1, .reusable = true}, SHIFT(39),
  [467] = {.count = 1, .reusable = true}, SHIFT(98),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_extends, 3),
  [471] = {.count = 1, .reusable = true}, SHIFT(103),
  [473] = {.count = 1, .reusable = true}, SHIFT(89),
  [475] = {.count = 1, .reusable = true}, SHIFT(159),
  [477] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [479] = {.count = 1, .reusable = true}, SHIFT(44),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Haiku(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
