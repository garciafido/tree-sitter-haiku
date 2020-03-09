#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 111
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
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
  anon_sym_PIPE_PIPE = 9,
  anon_sym_AMP_AMP = 10,
  anon_sym_EQ_EQ = 11,
  anon_sym_LT_EQ = 12,
  anon_sym_GT_EQ = 13,
  anon_sym_BANG = 14,
  anon_sym_true = 15,
  anon_sym_false = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  anon_sym_STAR = 19,
  anon_sym_SLASH = 20,
  anon_sym_DQUOTE = 21,
  aux_sym_string_token1 = 22,
  anon_sym_SQUOTE = 23,
  aux_sym_string_token2 = 24,
  sym_escape_sequence = 25,
  sym_number = 26,
  anon_sym_DOT = 27,
  sym_camel_identifier = 28,
  sym_pascal_identifier = 29,
  sym_decorator_identifier = 30,
  sym_macro_identifier = 31,
  sym_program = 32,
  sym_block = 33,
  sym_body = 34,
  sym_body_element = 35,
  sym_property = 36,
  sym_property_type = 37,
  sym_decorator = 38,
  sym_decorator_args = 39,
  sym_generic_args = 40,
  sym_extends_args = 41,
  sym_fu_args = 42,
  sym_function_call = 43,
  sym_boolean_expression = 44,
  sym_conjunction = 45,
  sym_compare = 46,
  sym_negation = 47,
  sym_boolean_value = 48,
  sym_arithmetic_expression = 49,
  sym_term = 50,
  sym_factor = 51,
  sym_string = 52,
  sym_identifier = 53,
  sym_dot_separated_identifier = 54,
  sym_simple_identifier = 55,
  aux_sym_program_repeat1 = 56,
  aux_sym_block_repeat1 = 57,
  aux_sym_body_repeat1 = 58,
  aux_sym_fu_args_repeat1 = 59,
  aux_sym_string_repeat1 = 60,
  aux_sym_string_repeat2 = 61,
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
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_BANG] = "!",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [anon_sym_DOT] = ".",
  [sym_camel_identifier] = "camel_identifier",
  [sym_pascal_identifier] = "pascal_identifier",
  [sym_decorator_identifier] = "decorator_identifier",
  [sym_macro_identifier] = "macro_identifier",
  [sym_program] = "program",
  [sym_block] = "block",
  [sym_body] = "body",
  [sym_body_element] = "body_element",
  [sym_property] = "property",
  [sym_property_type] = "property_type",
  [sym_decorator] = "decorator",
  [sym_decorator_args] = "decorator_args",
  [sym_generic_args] = "generic_args",
  [sym_extends_args] = "extends_args",
  [sym_fu_args] = "fu_args",
  [sym_function_call] = "function_call",
  [sym_boolean_expression] = "boolean_expression",
  [sym_conjunction] = "conjunction",
  [sym_compare] = "compare",
  [sym_negation] = "negation",
  [sym_boolean_value] = "boolean_value",
  [sym_arithmetic_expression] = "arithmetic_expression",
  [sym_term] = "term",
  [sym_factor] = "factor",
  [sym_string] = "string",
  [sym_identifier] = "identifier",
  [sym_dot_separated_identifier] = "dot_separated_identifier",
  [sym_simple_identifier] = "simple_identifier",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_fu_args_repeat1] = "fu_args_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
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
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_camel_identifier] = sym_camel_identifier,
  [sym_pascal_identifier] = sym_pascal_identifier,
  [sym_decorator_identifier] = sym_decorator_identifier,
  [sym_macro_identifier] = sym_macro_identifier,
  [sym_program] = sym_program,
  [sym_block] = sym_block,
  [sym_body] = sym_body,
  [sym_body_element] = sym_body_element,
  [sym_property] = sym_property,
  [sym_property_type] = sym_property_type,
  [sym_decorator] = sym_decorator,
  [sym_decorator_args] = sym_decorator_args,
  [sym_generic_args] = sym_generic_args,
  [sym_extends_args] = sym_extends_args,
  [sym_fu_args] = sym_fu_args,
  [sym_function_call] = sym_function_call,
  [sym_boolean_expression] = sym_boolean_expression,
  [sym_conjunction] = sym_conjunction,
  [sym_compare] = sym_compare,
  [sym_negation] = sym_negation,
  [sym_boolean_value] = sym_boolean_value,
  [sym_arithmetic_expression] = sym_arithmetic_expression,
  [sym_term] = sym_term,
  [sym_factor] = sym_factor,
  [sym_string] = sym_string,
  [sym_identifier] = sym_identifier,
  [sym_dot_separated_identifier] = sym_dot_separated_identifier,
  [sym_simple_identifier] = sym_simple_identifier,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_fu_args_repeat1] = aux_sym_fu_args_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
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
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
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
  [sym_body_element] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_property_type] = {
    .visible = true,
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
  [sym_generic_args] = {
    .visible = true,
    .named = true,
  },
  [sym_extends_args] = {
    .visible = true,
    .named = true,
  },
  [sym_fu_args] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_compare] = {
    .visible = true,
    .named = true,
  },
  [sym_negation] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_value] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_factor] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_separated_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_identifier] = {
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
  [aux_sym_fu_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
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
      if (eof) ADVANCE(31);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(49);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(86);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(86);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(49);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == '{') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == '|') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(69);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(70);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 28:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(49);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(86);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(54);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(58);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(23);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(66);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'a') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'e') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'l') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'r') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 's') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'u') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_pascal_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_decorator_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 30},
  [36] = {.lex_state = 30},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 30},
  [43] = {.lex_state = 30},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 30},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 30},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 30},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 30},
  [55] = {.lex_state = 30},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 30},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 30},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 30},
  [69] = {.lex_state = 30},
  [70] = {.lex_state = 30},
  [71] = {.lex_state = 30},
  [72] = {.lex_state = 30},
  [73] = {.lex_state = 30},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 30},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 30},
  [82] = {.lex_state = 30},
  [83] = {.lex_state = 30},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 30},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 30},
  [91] = {.lex_state = 30},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 30},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 30},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 30},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
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
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_camel_identifier] = ACTIONS(1),
    [sym_pascal_identifier] = ACTIONS(1),
    [sym_decorator_identifier] = ACTIONS(1),
    [sym_macro_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(106),
    [sym_block] = STATE(41),
    [sym_decorator] = STATE(66),
    [aux_sym_program_repeat1] = STATE(41),
    [aux_sym_block_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_camel_identifier] = ACTIONS(5),
    [sym_decorator_identifier] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(20), 1,
      sym_dot_separated_identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(27), 1,
      sym_term,
    STATE(28), 1,
      sym_factor,
    STATE(33), 1,
      sym_arithmetic_expression,
    STATE(46), 1,
      sym_boolean_value,
    STATE(56), 1,
      sym_negation,
    STATE(57), 1,
      sym_compare,
    STATE(60), 1,
      sym_conjunction,
    STATE(61), 1,
      sym_boolean_expression,
    STATE(103), 1,
      sym_fu_args,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_pascal_identifier,
      sym_macro_identifier,
    STATE(24), 2,
      sym_function_call,
      sym_string,
  [67] = 21,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(20), 1,
      sym_dot_separated_identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(27), 1,
      sym_term,
    STATE(28), 1,
      sym_factor,
    STATE(32), 1,
      sym_arithmetic_expression,
    STATE(46), 1,
      sym_boolean_value,
    STATE(56), 1,
      sym_negation,
    STATE(57), 1,
      sym_compare,
    STATE(58), 1,
      sym_conjunction,
    STATE(59), 1,
      sym_boolean_expression,
    STATE(110), 1,
      sym_fu_args,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_pascal_identifier,
      sym_macro_identifier,
    STATE(24), 2,
      sym_function_call,
      sym_string,
  [134] = 21,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(20), 1,
      sym_dot_separated_identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(27), 1,
      sym_term,
    STATE(28), 1,
      sym_factor,
    STATE(32), 1,
      sym_arithmetic_expression,
    STATE(46), 1,
      sym_boolean_value,
    STATE(56), 1,
      sym_negation,
    STATE(57), 1,
      sym_compare,
    STATE(58), 1,
      sym_conjunction,
    STATE(59), 1,
      sym_boolean_expression,
    STATE(108), 1,
      sym_fu_args,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_pascal_identifier,
      sym_macro_identifier,
    STATE(24), 2,
      sym_function_call,
      sym_string,
  [201] = 21,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(20), 1,
      sym_dot_separated_identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(27), 1,
      sym_term,
    STATE(28), 1,
      sym_factor,
    STATE(32), 1,
      sym_arithmetic_expression,
    STATE(46), 1,
      sym_boolean_value,
    STATE(56), 1,
      sym_negation,
    STATE(57), 1,
      sym_compare,
    STATE(58), 1,
      sym_conjunction,
    STATE(59), 1,
      sym_boolean_expression,
    STATE(107), 1,
      sym_fu_args,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_pascal_identifier,
      sym_macro_identifier,
    STATE(24), 2,
      sym_function_call,
      sym_string,
  [268] = 20,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(20), 1,
      sym_dot_separated_identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(27), 1,
      sym_term,
    STATE(28), 1,
      sym_factor,
    STATE(33), 1,
      sym_arithmetic_expression,
    STATE(46), 1,
      sym_boolean_value,
    STATE(56), 1,
      sym_negation,
    STATE(57), 1,
      sym_compare,
    STATE(60), 1,
      sym_conjunction,
    STATE(86), 1,
      sym_boolean_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_pascal_identifier,
      sym_macro_identifier,
    STATE(24), 2,
      sym_function_call,
      sym_string,
  [332] = 20,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(20), 1,
      sym_dot_separated_identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(27), 1,
      sym_term,
    STATE(28), 1,
      sym_factor,
    STATE(32), 1,
      sym_arithmetic_expression,
    STATE(46), 1,
      sym_boolean_value,
    STATE(56), 1,
      sym_negation,
    STATE(57), 1,
      sym_compare,
    STATE(58), 1,
      sym_conjunction,
    STATE(93), 1,
      sym_boolean_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_pascal_identifier,
      sym_macro_identifier,
    STATE(24), 2,
      sym_function_call,
      sym_string,
  [396] = 20,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(20), 1,
      sym_dot_separated_identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(27), 1,
      sym_term,
    STATE(28), 1,
      sym_factor,
    STATE(34), 1,
      sym_arithmetic_expression,
    STATE(46), 1,
      sym_boolean_value,
    STATE(56), 1,
      sym_negation,
    STATE(57), 1,
      sym_compare,
    STATE(58), 1,
      sym_conjunction,
    STATE(102), 1,
      sym_boolean_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_pascal_identifier,
      sym_macro_identifier,
    STATE(24), 2,
      sym_function_call,
      sym_string,
  [460] = 19,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(20), 1,
      sym_dot_separated_identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(27), 1,
      sym_term,
    STATE(28), 1,
      sym_factor,
    STATE(33), 1,
      sym_arithmetic_expression,
    STATE(46), 1,
      sym_boolean_value,
    STATE(56), 1,
      sym_negation,
    STATE(57), 1,
      sym_compare,
    STATE(62), 1,
      sym_conjunction,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_pascal_identifier,
      sym_macro_identifier,
    STATE(24), 2,
      sym_function_call,
      sym_string,
  [521] = 19,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(20), 1,
      sym_dot_separated_identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(27), 1,
      sym_term,
    STATE(28), 1,
      sym_factor,
    STATE(32), 1,
      sym_arithmetic_expression,
    STATE(46), 1,
      sym_boolean_value,
    STATE(56), 1,
      sym_negation,
    STATE(57), 1,
      sym_compare,
    STATE(79), 1,
      sym_conjunction,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_pascal_identifier,
      sym_macro_identifier,
    STATE(24), 2,
      sym_function_call,
      sym_string,
  [582] = 18,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(20), 1,
      sym_dot_separated_identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(27), 1,
      sym_term,
    STATE(28), 1,
      sym_factor,
    STATE(32), 1,
      sym_arithmetic_expression,
    STATE(46), 1,
      sym_boolean_value,
    STATE(53), 1,
      sym_compare,
    STATE(56), 1,
      sym_negation,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_pascal_identifier,
      sym_macro_identifier,
    STATE(24), 2,
      sym_function_call,
      sym_string,
  [640] = 18,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(20), 1,
      sym_dot_separated_identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(27), 1,
      sym_term,
    STATE(28), 1,
      sym_factor,
    STATE(33), 1,
      sym_arithmetic_expression,
    STATE(46), 1,
      sym_boolean_value,
    STATE(53), 1,
      sym_compare,
    STATE(56), 1,
      sym_negation,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_pascal_identifier,
      sym_macro_identifier,
    STATE(24), 2,
      sym_function_call,
      sym_string,
  [698] = 15,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(20), 1,
      sym_dot_separated_identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(27), 1,
      sym_term,
    STATE(28), 1,
      sym_factor,
    STATE(39), 1,
      sym_arithmetic_expression,
    STATE(50), 1,
      sym_boolean_value,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_pascal_identifier,
      sym_macro_identifier,
    STATE(24), 2,
      sym_function_call,
      sym_string,
  [747] = 12,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(20), 1,
      sym_dot_separated_identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(27), 1,
      sym_term,
    STATE(28), 1,
      sym_factor,
    STATE(38), 1,
      sym_arithmetic_expression,
    STATE(24), 2,
      sym_function_call,
      sym_string,
    ACTIONS(23), 3,
      sym_camel_identifier,
      sym_pascal_identifier,
      sym_macro_identifier,
  [787] = 12,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(20), 1,
      sym_dot_separated_identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(27), 1,
      sym_term,
    STATE(28), 1,
      sym_factor,
    STATE(92), 1,
      sym_arithmetic_expression,
    STATE(24), 2,
      sym_function_call,
      sym_string,
    ACTIONS(23), 3,
      sym_camel_identifier,
      sym_pascal_identifier,
      sym_macro_identifier,
  [827] = 3,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [849] = 2,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOT,
  [869] = 11,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(20), 1,
      sym_dot_separated_identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(25), 1,
      sym_term,
    STATE(28), 1,
      sym_factor,
    STATE(24), 2,
      sym_function_call,
      sym_string,
    ACTIONS(23), 3,
      sym_camel_identifier,
      sym_pascal_identifier,
      sym_macro_identifier,
  [906] = 2,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [925] = 2,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [944] = 3,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [965] = 2,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [983] = 2,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1001] = 2,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1019] = 3,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(59), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1039] = 10,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(20), 1,
      sym_dot_separated_identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(23), 1,
      sym_factor,
    STATE(24), 2,
      sym_function_call,
      sym_string,
    ACTIONS(23), 3,
      sym_camel_identifier,
      sym_pascal_identifier,
      sym_macro_identifier,
  [1073] = 3,
    ACTIONS(63), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1093] = 2,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1111] = 2,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1129] = 2,
    ACTIONS(79), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1147] = 2,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1165] = 4,
    ACTIONS(87), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(89), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(85), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1185] = 5,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(93), 1,
      anon_sym_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(85), 3,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(89), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1206] = 5,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(85), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(87), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(89), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1227] = 6,
    ACTIONS(7), 1,
      sym_decorator_identifier,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      sym_camel_identifier,
    STATE(37), 2,
      sym_body_element,
      aux_sym_body_repeat1,
    STATE(75), 2,
      sym_decorator,
      aux_sym_block_repeat1,
    STATE(90), 2,
      sym_block,
      sym_property,
  [1249] = 6,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      sym_camel_identifier,
    ACTIONS(106), 1,
      sym_decorator_identifier,
    STATE(36), 2,
      sym_body_element,
      aux_sym_body_repeat1,
    STATE(75), 2,
      sym_decorator,
      aux_sym_block_repeat1,
    STATE(90), 2,
      sym_block,
      sym_property,
  [1271] = 6,
    ACTIONS(7), 1,
      sym_decorator_identifier,
    ACTIONS(99), 1,
      sym_camel_identifier,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(36), 2,
      sym_body_element,
      aux_sym_body_repeat1,
    STATE(75), 2,
      sym_decorator,
      aux_sym_block_repeat1,
    STATE(90), 2,
      sym_block,
      sym_property,
  [1293] = 2,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(111), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1305] = 2,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(85), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1317] = 5,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_LT,
    STATE(51), 1,
      sym_generic_args,
    STATE(83), 1,
      sym_body,
    ACTIONS(115), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1335] = 5,
    ACTIONS(5), 1,
      sym_camel_identifier,
    ACTIONS(7), 1,
      sym_decorator_identifier,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(42), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(66), 2,
      sym_decorator,
      aux_sym_block_repeat1,
  [1353] = 5,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      sym_camel_identifier,
    ACTIONS(126), 1,
      sym_decorator_identifier,
    STATE(42), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(66), 2,
      sym_decorator,
      aux_sym_block_repeat1,
  [1371] = 5,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_LT,
    STATE(55), 1,
      sym_generic_args,
    STATE(82), 1,
      sym_body,
    ACTIONS(129), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1389] = 6,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_LT,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_generic_args,
    STATE(71), 1,
      sym_body,
    STATE(96), 1,
      sym_extends_args,
  [1408] = 6,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_LT,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_body,
    STATE(74), 1,
      sym_generic_args,
    STATE(95), 1,
      sym_extends_args,
  [1427] = 1,
    ACTIONS(133), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1435] = 3,
    STATE(16), 1,
      sym_simple_identifier,
    STATE(19), 1,
      sym_dot_separated_identifier,
    ACTIONS(23), 3,
      sym_camel_identifier,
      sym_pascal_identifier,
      sym_macro_identifier,
  [1447] = 1,
    ACTIONS(135), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1455] = 1,
    ACTIONS(137), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1463] = 1,
    ACTIONS(139), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1471] = 3,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_body,
    ACTIONS(129), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1483] = 1,
    ACTIONS(85), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1491] = 1,
    ACTIONS(141), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1499] = 1,
    ACTIONS(143), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1507] = 3,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_body,
    ACTIONS(145), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1519] = 1,
    ACTIONS(147), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1527] = 1,
    ACTIONS(149), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1535] = 2,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(151), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
  [1544] = 4,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_PIPE_PIPE,
    STATE(84), 1,
      aux_sym_fu_args_repeat1,
  [1557] = 2,
    ACTIONS(161), 1,
      anon_sym_AMP_AMP,
    ACTIONS(151), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
  [1566] = 4,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_PIPE_PIPE,
    STATE(88), 1,
      aux_sym_fu_args_repeat1,
  [1579] = 2,
    ACTIONS(161), 1,
      anon_sym_AMP_AMP,
    ACTIONS(167), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
  [1588] = 4,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      aux_sym_string_token1,
    ACTIONS(173), 1,
      sym_escape_sequence,
    STATE(76), 1,
      aux_sym_string_repeat1,
  [1601] = 3,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_decorator_args,
    ACTIONS(177), 2,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1612] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym_body,
    STATE(100), 1,
      sym_extends_args,
  [1625] = 3,
    ACTIONS(7), 1,
      sym_decorator_identifier,
    ACTIONS(179), 1,
      sym_camel_identifier,
    STATE(69), 2,
      sym_decorator,
      aux_sym_block_repeat1,
  [1636] = 4,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    ACTIONS(183), 1,
      sym_escape_sequence,
    STATE(77), 1,
      aux_sym_string_repeat2,
  [1649] = 1,
    ACTIONS(185), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1656] = 3,
    ACTIONS(187), 1,
      sym_camel_identifier,
    ACTIONS(189), 1,
      sym_decorator_identifier,
    STATE(69), 2,
      sym_decorator,
      aux_sym_block_repeat1,
  [1667] = 1,
    ACTIONS(192), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1674] = 1,
    ACTIONS(194), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1681] = 1,
    ACTIONS(196), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1688] = 1,
    ACTIONS(198), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1695] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_body,
    STATE(96), 1,
      sym_extends_args,
  [1708] = 3,
    ACTIONS(7), 1,
      sym_decorator_identifier,
    ACTIONS(200), 1,
      sym_camel_identifier,
    STATE(69), 2,
      sym_decorator,
      aux_sym_block_repeat1,
  [1719] = 4,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      aux_sym_string_token1,
    ACTIONS(207), 1,
      sym_escape_sequence,
    STATE(76), 1,
      aux_sym_string_repeat1,
  [1732] = 4,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    ACTIONS(212), 1,
      aux_sym_string_token2,
    ACTIONS(215), 1,
      sym_escape_sequence,
    STATE(77), 1,
      aux_sym_string_repeat2,
  [1745] = 4,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      aux_sym_string_token1,
    ACTIONS(222), 1,
      sym_escape_sequence,
    STATE(63), 1,
      aux_sym_string_repeat1,
  [1758] = 2,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(167), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
  [1767] = 4,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      aux_sym_string_token2,
    ACTIONS(226), 1,
      sym_escape_sequence,
    STATE(67), 1,
      aux_sym_string_repeat2,
  [1780] = 1,
    ACTIONS(228), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1787] = 1,
    ACTIONS(145), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1793] = 1,
    ACTIONS(129), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1799] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_fu_args_repeat1,
  [1809] = 3,
    ACTIONS(232), 1,
      anon_sym_GT,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_fu_args_repeat1,
  [1819] = 2,
    ACTIONS(165), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(232), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [1827] = 2,
    STATE(40), 1,
      sym_property_type,
    ACTIONS(237), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [1835] = 3,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_GT,
    STATE(85), 1,
      aux_sym_fu_args_repeat1,
  [1845] = 3,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_fu_args_repeat1,
  [1855] = 1,
    ACTIONS(242), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1861] = 2,
    STATE(43), 1,
      sym_property_type,
    ACTIONS(237), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [1869] = 2,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1877] = 2,
    ACTIONS(159), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(232), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1885] = 1,
    ACTIONS(244), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1891] = 2,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_body,
  [1898] = 2,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_body,
  [1905] = 2,
    ACTIONS(246), 1,
      anon_sym_COLON,
    ACTIONS(248), 1,
      sym_pascal_identifier,
  [1912] = 1,
    ACTIONS(250), 2,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1917] = 2,
    ACTIONS(252), 1,
      anon_sym_COLON,
    ACTIONS(254), 1,
      sym_pascal_identifier,
  [1924] = 2,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_body,
  [1931] = 1,
    ACTIONS(256), 2,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1936] = 2,
    ACTIONS(159), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
  [1943] = 1,
    ACTIONS(260), 1,
      anon_sym_GT,
  [1947] = 1,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
  [1951] = 1,
    ACTIONS(254), 1,
      sym_pascal_identifier,
  [1955] = 1,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
  [1959] = 1,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
  [1963] = 1,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
  [1967] = 1,
    ACTIONS(248), 1,
      sym_pascal_identifier,
  [1971] = 1,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 134,
  [SMALL_STATE(5)] = 201,
  [SMALL_STATE(6)] = 268,
  [SMALL_STATE(7)] = 332,
  [SMALL_STATE(8)] = 396,
  [SMALL_STATE(9)] = 460,
  [SMALL_STATE(10)] = 521,
  [SMALL_STATE(11)] = 582,
  [SMALL_STATE(12)] = 640,
  [SMALL_STATE(13)] = 698,
  [SMALL_STATE(14)] = 747,
  [SMALL_STATE(15)] = 787,
  [SMALL_STATE(16)] = 827,
  [SMALL_STATE(17)] = 849,
  [SMALL_STATE(18)] = 869,
  [SMALL_STATE(19)] = 906,
  [SMALL_STATE(20)] = 925,
  [SMALL_STATE(21)] = 944,
  [SMALL_STATE(22)] = 965,
  [SMALL_STATE(23)] = 983,
  [SMALL_STATE(24)] = 1001,
  [SMALL_STATE(25)] = 1019,
  [SMALL_STATE(26)] = 1039,
  [SMALL_STATE(27)] = 1073,
  [SMALL_STATE(28)] = 1093,
  [SMALL_STATE(29)] = 1111,
  [SMALL_STATE(30)] = 1129,
  [SMALL_STATE(31)] = 1147,
  [SMALL_STATE(32)] = 1165,
  [SMALL_STATE(33)] = 1185,
  [SMALL_STATE(34)] = 1206,
  [SMALL_STATE(35)] = 1227,
  [SMALL_STATE(36)] = 1249,
  [SMALL_STATE(37)] = 1271,
  [SMALL_STATE(38)] = 1293,
  [SMALL_STATE(39)] = 1305,
  [SMALL_STATE(40)] = 1317,
  [SMALL_STATE(41)] = 1335,
  [SMALL_STATE(42)] = 1353,
  [SMALL_STATE(43)] = 1371,
  [SMALL_STATE(44)] = 1389,
  [SMALL_STATE(45)] = 1408,
  [SMALL_STATE(46)] = 1427,
  [SMALL_STATE(47)] = 1435,
  [SMALL_STATE(48)] = 1447,
  [SMALL_STATE(49)] = 1455,
  [SMALL_STATE(50)] = 1463,
  [SMALL_STATE(51)] = 1471,
  [SMALL_STATE(52)] = 1483,
  [SMALL_STATE(53)] = 1491,
  [SMALL_STATE(54)] = 1499,
  [SMALL_STATE(55)] = 1507,
  [SMALL_STATE(56)] = 1519,
  [SMALL_STATE(57)] = 1527,
  [SMALL_STATE(58)] = 1535,
  [SMALL_STATE(59)] = 1544,
  [SMALL_STATE(60)] = 1557,
  [SMALL_STATE(61)] = 1566,
  [SMALL_STATE(62)] = 1579,
  [SMALL_STATE(63)] = 1588,
  [SMALL_STATE(64)] = 1601,
  [SMALL_STATE(65)] = 1612,
  [SMALL_STATE(66)] = 1625,
  [SMALL_STATE(67)] = 1636,
  [SMALL_STATE(68)] = 1649,
  [SMALL_STATE(69)] = 1656,
  [SMALL_STATE(70)] = 1667,
  [SMALL_STATE(71)] = 1674,
  [SMALL_STATE(72)] = 1681,
  [SMALL_STATE(73)] = 1688,
  [SMALL_STATE(74)] = 1695,
  [SMALL_STATE(75)] = 1708,
  [SMALL_STATE(76)] = 1719,
  [SMALL_STATE(77)] = 1732,
  [SMALL_STATE(78)] = 1745,
  [SMALL_STATE(79)] = 1758,
  [SMALL_STATE(80)] = 1767,
  [SMALL_STATE(81)] = 1780,
  [SMALL_STATE(82)] = 1787,
  [SMALL_STATE(83)] = 1793,
  [SMALL_STATE(84)] = 1799,
  [SMALL_STATE(85)] = 1809,
  [SMALL_STATE(86)] = 1819,
  [SMALL_STATE(87)] = 1827,
  [SMALL_STATE(88)] = 1835,
  [SMALL_STATE(89)] = 1845,
  [SMALL_STATE(90)] = 1855,
  [SMALL_STATE(91)] = 1861,
  [SMALL_STATE(92)] = 1869,
  [SMALL_STATE(93)] = 1877,
  [SMALL_STATE(94)] = 1885,
  [SMALL_STATE(95)] = 1891,
  [SMALL_STATE(96)] = 1898,
  [SMALL_STATE(97)] = 1905,
  [SMALL_STATE(98)] = 1912,
  [SMALL_STATE(99)] = 1917,
  [SMALL_STATE(100)] = 1924,
  [SMALL_STATE(101)] = 1931,
  [SMALL_STATE(102)] = 1936,
  [SMALL_STATE(103)] = 1943,
  [SMALL_STATE(104)] = 1947,
  [SMALL_STATE(105)] = 1951,
  [SMALL_STATE(106)] = 1955,
  [SMALL_STATE(107)] = 1959,
  [SMALL_STATE(108)] = 1963,
  [SMALL_STATE(109)] = 1967,
  [SMALL_STATE(110)] = 1971,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(109),
  [7] = {.count = 1, .reusable = true}, SHIFT(64),
  [9] = {.count = 1, .reusable = true}, SHIFT(8),
  [11] = {.count = 1, .reusable = true}, SHIFT(13),
  [13] = {.count = 1, .reusable = false}, SHIFT(52),
  [15] = {.count = 1, .reusable = true}, SHIFT(78),
  [17] = {.count = 1, .reusable = true}, SHIFT(80),
  [19] = {.count = 1, .reusable = true}, SHIFT(24),
  [21] = {.count = 1, .reusable = false}, SHIFT(17),
  [23] = {.count = 1, .reusable = true}, SHIFT(17),
  [25] = {.count = 1, .reusable = true}, SHIFT(15),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_dot_separated_identifier, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_dot_separated_identifier, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(47),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_simple_identifier, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_simple_identifier, 1),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_dot_separated_identifier, 3),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_dot_separated_identifier, 3),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(4),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_factor, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_factor, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_factor, 3),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_factor, 3),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_term, 3),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_term, 3),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_arithmetic_expression, 3),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_arithmetic_expression, 3),
  [63] = {.count = 1, .reusable = true}, SHIFT(26),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_arithmetic_expression, 1),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_arithmetic_expression, 1),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_term, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_function_call, 4),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_function_call, 4),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_value, 1),
  [87] = {.count = 1, .reusable = false}, SHIFT(14),
  [89] = {.count = 1, .reusable = true}, SHIFT(14),
  [91] = {.count = 1, .reusable = true}, SHIFT(18),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_value, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(22),
  [97] = {.count = 1, .reusable = true}, SHIFT(81),
  [99] = {.count = 1, .reusable = true}, SHIFT(97),
  [101] = {.count = 1, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(97),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(64),
  [109] = {.count = 1, .reusable = true}, SHIFT(68),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_compare, 3),
  [113] = {.count = 1, .reusable = true}, SHIFT(35),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_property, 3),
  [117] = {.count = 1, .reusable = true}, SHIFT(2),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [121] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(109),
  [126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_property, 4),
  [131] = {.count = 1, .reusable = true}, SHIFT(5),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_negation, 1),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_value, 3),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_generic_args, 3),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_negation, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 3),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_property_type, 1),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_property, 5),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_compare, 1),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 1),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_expression, 1),
  [153] = {.count = 1, .reusable = true}, SHIFT(11),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_fu_args, 1),
  [157] = {.count = 1, .reusable = true}, SHIFT(7),
  [159] = {.count = 1, .reusable = true}, SHIFT(10),
  [161] = {.count = 1, .reusable = true}, SHIFT(12),
  [163] = {.count = 1, .reusable = true}, SHIFT(6),
  [165] = {.count = 1, .reusable = true}, SHIFT(9),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_expression, 3),
  [169] = {.count = 1, .reusable = false}, SHIFT(29),
  [171] = {.count = 1, .reusable = true}, SHIFT(76),
  [173] = {.count = 1, .reusable = false}, SHIFT(76),
  [175] = {.count = 1, .reusable = true}, SHIFT(3),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_decorator, 1),
  [179] = {.count = 1, .reusable = true}, SHIFT(105),
  [181] = {.count = 1, .reusable = true}, SHIFT(77),
  [183] = {.count = 1, .reusable = false}, SHIFT(77),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [187] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [189] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_block, 5),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_block, 6),
  [200] = {.count = 1, .reusable = true}, SHIFT(99),
  [202] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [204] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(76),
  [207] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(76),
  [210] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(77),
  [215] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(77),
  [218] = {.count = 1, .reusable = false}, SHIFT(30),
  [220] = {.count = 1, .reusable = true}, SHIFT(63),
  [222] = {.count = 1, .reusable = false}, SHIFT(63),
  [224] = {.count = 1, .reusable = true}, SHIFT(67),
  [226] = {.count = 1, .reusable = false}, SHIFT(67),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_fu_args, 2),
  [232] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fu_args_repeat1, 2),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fu_args_repeat1, 2), SHIFT_REPEAT(6),
  [237] = {.count = 1, .reusable = true}, SHIFT(54),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fu_args_repeat1, 2), SHIFT_REPEAT(7),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_body_element, 1),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_property, 6),
  [246] = {.count = 1, .reusable = true}, SHIFT(87),
  [248] = {.count = 1, .reusable = true}, SHIFT(45),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_decorator, 2),
  [252] = {.count = 1, .reusable = true}, SHIFT(91),
  [254] = {.count = 1, .reusable = true}, SHIFT(44),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_decorator_args, 3),
  [258] = {.count = 1, .reusable = true}, SHIFT(48),
  [260] = {.count = 1, .reusable = true}, SHIFT(49),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_extends_args, 3),
  [264] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [266] = {.count = 1, .reusable = true}, SHIFT(104),
  [268] = {.count = 1, .reusable = true}, SHIFT(31),
  [270] = {.count = 1, .reusable = true}, SHIFT(101),
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
