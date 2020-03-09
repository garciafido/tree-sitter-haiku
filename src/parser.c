#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 105
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_COLON = 1,
  anon_sym_LT = 2,
  anon_sym_COMMA = 3,
  anon_sym_GT = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
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
  sym_camel_identifier = 27,
  sym_pascal_identifier = 28,
  sym_decorator_identifier = 29,
  sym_macro_identifier = 30,
  sym_program = 31,
  sym_block = 32,
  sym_property = 33,
  sym_decorator = 34,
  sym_generic_args = 35,
  sym_extends_args = 36,
  sym_decorator_args = 37,
  sym_body = 38,
  sym_bodyElement = 39,
  sym_property_type = 40,
  sym_atom = 41,
  sym_boolean_expression = 42,
  sym_disjuction = 43,
  sym_conj = 44,
  sym_compare = 45,
  sym_negation = 46,
  sym_boolean_value = 47,
  sym_arithmetic_expression = 48,
  sym_term = 49,
  sym_factor = 50,
  sym_arithmetic_value = 51,
  sym_string = 52,
  aux_sym_program_repeat1 = 53,
  aux_sym_block_repeat1 = 54,
  aux_sym_generic_args_repeat1 = 55,
  aux_sym_body_repeat1 = 56,
  aux_sym_string_repeat1 = 57,
  aux_sym_string_repeat2 = 58,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym_camel_identifier] = "camel_identifier",
  [sym_pascal_identifier] = "pascal_identifier",
  [sym_decorator_identifier] = "decorator_identifier",
  [sym_macro_identifier] = "macro_identifier",
  [sym_program] = "program",
  [sym_block] = "block",
  [sym_property] = "property",
  [sym_decorator] = "decorator",
  [sym_generic_args] = "generic_args",
  [sym_extends_args] = "extends_args",
  [sym_decorator_args] = "decorator_args",
  [sym_body] = "body",
  [sym_bodyElement] = "bodyElement",
  [sym_property_type] = "property_type",
  [sym_atom] = "atom",
  [sym_boolean_expression] = "boolean_expression",
  [sym_disjuction] = "disjuction",
  [sym_conj] = "conj",
  [sym_compare] = "compare",
  [sym_negation] = "negation",
  [sym_boolean_value] = "boolean_value",
  [sym_arithmetic_expression] = "arithmetic_expression",
  [sym_term] = "term",
  [sym_factor] = "factor",
  [sym_arithmetic_value] = "arithmetic_value",
  [sym_string] = "string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_generic_args_repeat1] = "generic_args_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_camel_identifier] = sym_camel_identifier,
  [sym_pascal_identifier] = sym_pascal_identifier,
  [sym_decorator_identifier] = sym_decorator_identifier,
  [sym_macro_identifier] = sym_macro_identifier,
  [sym_program] = sym_program,
  [sym_block] = sym_block,
  [sym_property] = sym_property,
  [sym_decorator] = sym_decorator,
  [sym_generic_args] = sym_generic_args,
  [sym_extends_args] = sym_extends_args,
  [sym_decorator_args] = sym_decorator_args,
  [sym_body] = sym_body,
  [sym_bodyElement] = sym_bodyElement,
  [sym_property_type] = sym_property_type,
  [sym_atom] = sym_atom,
  [sym_boolean_expression] = sym_boolean_expression,
  [sym_disjuction] = sym_disjuction,
  [sym_conj] = sym_conj,
  [sym_compare] = sym_compare,
  [sym_negation] = sym_negation,
  [sym_boolean_value] = sym_boolean_value,
  [sym_arithmetic_expression] = sym_arithmetic_expression,
  [sym_term] = sym_term,
  [sym_factor] = sym_factor,
  [sym_arithmetic_value] = sym_arithmetic_value,
  [sym_string] = sym_string,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_generic_args_repeat1] = aux_sym_generic_args_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_decorator] = {
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
  [sym_decorator_args] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyElement] = {
    .visible = true,
    .named = true,
  },
  [sym_property_type] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_disjuction] = {
    .visible = true,
    .named = true,
  },
  [sym_conj] = {
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
  [sym_arithmetic_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
  [aux_sym_generic_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
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
      if (eof) ADVANCE(29);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(11);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == '|') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 14:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(67);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 26:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(11);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(82);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(82);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(52);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(56);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(59);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(15);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(21);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(64);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'a') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'e') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'l') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'r') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 's') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'u') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_pascal_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_decorator_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 28},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 28},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 28},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 28},
  [64] = {.lex_state = 28},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 28},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 28},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 28},
  [73] = {.lex_state = 28},
  [74] = {.lex_state = 28},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 28},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 28},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 28},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 28},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 28},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 28},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 28},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_camel_identifier] = ACTIONS(1),
    [sym_pascal_identifier] = ACTIONS(1),
    [sym_decorator_identifier] = ACTIONS(1),
    [sym_macro_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(102),
    [sym_block] = STATE(36),
    [sym_decorator] = STATE(58),
    [aux_sym_program_repeat1] = STATE(36),
    [aux_sym_block_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_camel_identifier] = ACTIONS(5),
    [sym_decorator_identifier] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_arithmetic_value,
    STATE(17), 1,
      sym_factor,
    STATE(20), 1,
      sym_string,
    STATE(21), 1,
      sym_atom,
    STATE(22), 1,
      sym_term,
    STATE(31), 1,
      sym_arithmetic_expression,
    STATE(41), 1,
      sym_compare,
    STATE(50), 1,
      sym_boolean_value,
    STATE(51), 1,
      sym_negation,
    STATE(54), 1,
      sym_conj,
    STATE(76), 1,
      sym_disjuction,
    STATE(79), 1,
      sym_boolean_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_number,
      sym_pascal_identifier,
  [60] = 19,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_arithmetic_value,
    STATE(17), 1,
      sym_factor,
    STATE(20), 1,
      sym_string,
    STATE(21), 1,
      sym_atom,
    STATE(22), 1,
      sym_term,
    STATE(31), 1,
      sym_arithmetic_expression,
    STATE(41), 1,
      sym_compare,
    STATE(50), 1,
      sym_boolean_value,
    STATE(51), 1,
      sym_negation,
    STATE(54), 1,
      sym_conj,
    STATE(75), 1,
      sym_boolean_expression,
    STATE(76), 1,
      sym_disjuction,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_number,
      sym_pascal_identifier,
  [120] = 19,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_arithmetic_value,
    STATE(17), 1,
      sym_factor,
    STATE(20), 1,
      sym_string,
    STATE(21), 1,
      sym_atom,
    STATE(22), 1,
      sym_term,
    STATE(27), 1,
      sym_arithmetic_expression,
    STATE(41), 1,
      sym_compare,
    STATE(50), 1,
      sym_boolean_value,
    STATE(51), 1,
      sym_negation,
    STATE(70), 1,
      sym_conj,
    STATE(75), 1,
      sym_boolean_expression,
    STATE(81), 1,
      sym_disjuction,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_number,
      sym_pascal_identifier,
  [180] = 19,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_arithmetic_value,
    STATE(17), 1,
      sym_factor,
    STATE(20), 1,
      sym_string,
    STATE(21), 1,
      sym_atom,
    STATE(22), 1,
      sym_term,
    STATE(27), 1,
      sym_arithmetic_expression,
    STATE(41), 1,
      sym_compare,
    STATE(50), 1,
      sym_boolean_value,
    STATE(51), 1,
      sym_negation,
    STATE(70), 1,
      sym_conj,
    STATE(81), 1,
      sym_disjuction,
    STATE(82), 1,
      sym_boolean_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_number,
      sym_pascal_identifier,
  [240] = 19,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_arithmetic_value,
    STATE(17), 1,
      sym_factor,
    STATE(20), 1,
      sym_string,
    STATE(21), 1,
      sym_atom,
    STATE(22), 1,
      sym_term,
    STATE(27), 1,
      sym_arithmetic_expression,
    STATE(41), 1,
      sym_compare,
    STATE(50), 1,
      sym_boolean_value,
    STATE(51), 1,
      sym_negation,
    STATE(70), 1,
      sym_conj,
    STATE(78), 1,
      sym_boolean_expression,
    STATE(81), 1,
      sym_disjuction,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_number,
      sym_pascal_identifier,
  [300] = 19,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_arithmetic_value,
    STATE(17), 1,
      sym_factor,
    STATE(20), 1,
      sym_string,
    STATE(21), 1,
      sym_atom,
    STATE(22), 1,
      sym_term,
    STATE(32), 1,
      sym_arithmetic_expression,
    STATE(41), 1,
      sym_compare,
    STATE(50), 1,
      sym_boolean_value,
    STATE(51), 1,
      sym_negation,
    STATE(70), 1,
      sym_conj,
    STATE(81), 1,
      sym_disjuction,
    STATE(103), 1,
      sym_boolean_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_number,
      sym_pascal_identifier,
  [360] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_arithmetic_value,
    STATE(17), 1,
      sym_factor,
    STATE(20), 1,
      sym_string,
    STATE(21), 1,
      sym_atom,
    STATE(22), 1,
      sym_term,
    STATE(31), 1,
      sym_arithmetic_expression,
    STATE(47), 1,
      sym_compare,
    STATE(50), 1,
      sym_boolean_value,
    STATE(51), 1,
      sym_negation,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_number,
      sym_pascal_identifier,
  [411] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_arithmetic_value,
    STATE(17), 1,
      sym_factor,
    STATE(20), 1,
      sym_string,
    STATE(21), 1,
      sym_atom,
    STATE(22), 1,
      sym_term,
    STATE(31), 1,
      sym_arithmetic_expression,
    STATE(50), 1,
      sym_boolean_value,
    STATE(51), 1,
      sym_negation,
    STATE(52), 1,
      sym_compare,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_number,
      sym_pascal_identifier,
  [462] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_arithmetic_value,
    STATE(17), 1,
      sym_factor,
    STATE(20), 1,
      sym_string,
    STATE(21), 1,
      sym_atom,
    STATE(22), 1,
      sym_term,
    STATE(27), 1,
      sym_arithmetic_expression,
    STATE(50), 1,
      sym_boolean_value,
    STATE(51), 1,
      sym_negation,
    STATE(52), 1,
      sym_compare,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_number,
      sym_pascal_identifier,
  [513] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_arithmetic_value,
    STATE(17), 1,
      sym_factor,
    STATE(20), 1,
      sym_string,
    STATE(21), 1,
      sym_atom,
    STATE(22), 1,
      sym_term,
    STATE(27), 1,
      sym_arithmetic_expression,
    STATE(47), 1,
      sym_compare,
    STATE(50), 1,
      sym_boolean_value,
    STATE(51), 1,
      sym_negation,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_number,
      sym_pascal_identifier,
  [564] = 13,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_camel_identifier,
    STATE(16), 1,
      sym_arithmetic_value,
    STATE(17), 1,
      sym_factor,
    STATE(20), 1,
      sym_string,
    STATE(21), 1,
      sym_atom,
    STATE(22), 1,
      sym_term,
    STATE(46), 1,
      sym_arithmetic_expression,
    STATE(48), 1,
      sym_boolean_value,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_number,
      sym_pascal_identifier,
  [606] = 2,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [624] = 2,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [642] = 2,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [660] = 2,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [678] = 3,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [698] = 2,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [716] = 3,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [736] = 2,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [754] = 2,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [772] = 3,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
  [792] = 10,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_arithmetic_value,
    STATE(17), 1,
      sym_factor,
    STATE(20), 1,
      sym_string,
    STATE(21), 1,
      sym_atom,
    STATE(22), 1,
      sym_term,
    STATE(98), 1,
      sym_arithmetic_expression,
    ACTIONS(19), 3,
      sym_number,
      sym_camel_identifier,
      sym_pascal_identifier,
  [825] = 10,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_arithmetic_value,
    STATE(17), 1,
      sym_factor,
    STATE(20), 1,
      sym_string,
    STATE(21), 1,
      sym_atom,
    STATE(22), 1,
      sym_term,
    STATE(39), 1,
      sym_arithmetic_expression,
    ACTIONS(19), 3,
      sym_number,
      sym_camel_identifier,
      sym_pascal_identifier,
  [858] = 10,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_arithmetic_value,
    STATE(17), 1,
      sym_factor,
    STATE(18), 1,
      sym_arithmetic_expression,
    STATE(20), 1,
      sym_string,
    STATE(21), 1,
      sym_atom,
    STATE(22), 1,
      sym_term,
    ACTIONS(19), 3,
      sym_number,
      sym_camel_identifier,
      sym_pascal_identifier,
  [891] = 8,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_arithmetic_value,
    STATE(19), 1,
      sym_factor,
    STATE(20), 1,
      sym_string,
    STATE(21), 1,
      sym_atom,
    ACTIONS(19), 3,
      sym_number,
      sym_camel_identifier,
      sym_pascal_identifier,
  [918] = 3,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(71), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [934] = 6,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      sym_camel_identifier,
    ACTIONS(80), 1,
      sym_decorator_identifier,
    STATE(28), 2,
      sym_bodyElement,
      aux_sym_body_repeat1,
    STATE(68), 2,
      sym_decorator,
      aux_sym_block_repeat1,
    STATE(83), 2,
      sym_block,
      sym_property,
  [956] = 6,
    ACTIONS(7), 1,
      sym_decorator_identifier,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      sym_camel_identifier,
    STATE(30), 2,
      sym_bodyElement,
      aux_sym_body_repeat1,
    STATE(68), 2,
      sym_decorator,
      aux_sym_block_repeat1,
    STATE(83), 2,
      sym_block,
      sym_property,
  [978] = 6,
    ACTIONS(7), 1,
      sym_decorator_identifier,
    ACTIONS(85), 1,
      sym_camel_identifier,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_bodyElement,
      aux_sym_body_repeat1,
    STATE(68), 2,
      sym_decorator,
      aux_sym_block_repeat1,
    STATE(83), 2,
      sym_block,
      sym_property,
  [1000] = 4,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      anon_sym_GT,
    ACTIONS(71), 3,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(73), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1017] = 4,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(73), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1034] = 5,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym_camel_identifier,
    ACTIONS(98), 1,
      sym_decorator_identifier,
    STATE(33), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(58), 2,
      sym_decorator,
      aux_sym_block_repeat1,
  [1052] = 5,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_generic_args,
    STATE(74), 1,
      sym_body,
    ACTIONS(105), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1070] = 5,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_generic_args,
    STATE(87), 1,
      sym_body,
    ACTIONS(107), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1088] = 5,
    ACTIONS(5), 1,
      sym_camel_identifier,
    ACTIONS(7), 1,
      sym_decorator_identifier,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(33), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(58), 2,
      sym_decorator,
      aux_sym_block_repeat1,
  [1106] = 6,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_generic_args,
    STATE(64), 1,
      sym_body,
    STATE(90), 1,
      sym_extends_args,
  [1125] = 6,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_body,
    STATE(60), 1,
      sym_generic_args,
    STATE(95), 1,
      sym_extends_args,
  [1144] = 1,
    ACTIONS(113), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1152] = 1,
    ACTIONS(115), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1160] = 1,
    ACTIONS(117), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1168] = 1,
    ACTIONS(119), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1176] = 3,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_body,
    ACTIONS(121), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1188] = 1,
    ACTIONS(123), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1196] = 1,
    ACTIONS(125), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1204] = 1,
    ACTIONS(71), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1212] = 1,
    ACTIONS(127), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1220] = 1,
    ACTIONS(129), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1228] = 3,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_body,
    ACTIONS(105), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1240] = 1,
    ACTIONS(131), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1248] = 1,
    ACTIONS(133), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1256] = 1,
    ACTIONS(135), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
  [1263] = 4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      aux_sym_string_token1,
    ACTIONS(142), 1,
      sym_escape_sequence,
    STATE(53), 1,
      aux_sym_string_repeat1,
  [1276] = 2,
    ACTIONS(147), 1,
      anon_sym_AMP_AMP,
    ACTIONS(145), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
  [1285] = 3,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_decorator_args,
    ACTIONS(151), 2,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1296] = 4,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_string_token2,
    ACTIONS(157), 1,
      sym_escape_sequence,
    STATE(71), 1,
      aux_sym_string_repeat2,
  [1309] = 4,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      aux_sym_string_token1,
    ACTIONS(161), 1,
      sym_escape_sequence,
    STATE(53), 1,
      aux_sym_string_repeat1,
  [1322] = 3,
    ACTIONS(7), 1,
      sym_decorator_identifier,
    ACTIONS(163), 1,
      sym_camel_identifier,
    STATE(61), 2,
      sym_decorator,
      aux_sym_block_repeat1,
  [1333] = 1,
    ACTIONS(165), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1340] = 4,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_body,
    STATE(96), 1,
      sym_extends_args,
  [1353] = 3,
    ACTIONS(167), 1,
      sym_camel_identifier,
    ACTIONS(169), 1,
      sym_decorator_identifier,
    STATE(61), 2,
      sym_decorator,
      aux_sym_block_repeat1,
  [1364] = 4,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_body,
    STATE(95), 1,
      sym_extends_args,
  [1377] = 1,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1384] = 1,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1391] = 4,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      aux_sym_string_token1,
    ACTIONS(180), 1,
      sym_escape_sequence,
    STATE(57), 1,
      aux_sym_string_repeat1,
  [1404] = 4,
    ACTIONS(176), 1,
      anon_sym_SQUOTE,
    ACTIONS(182), 1,
      aux_sym_string_token2,
    ACTIONS(184), 1,
      sym_escape_sequence,
    STATE(56), 1,
      aux_sym_string_repeat2,
  [1417] = 1,
    ACTIONS(186), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1424] = 3,
    ACTIONS(7), 1,
      sym_decorator_identifier,
    ACTIONS(188), 1,
      sym_camel_identifier,
    STATE(61), 2,
      sym_decorator,
      aux_sym_block_repeat1,
  [1435] = 1,
    ACTIONS(190), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1442] = 2,
    ACTIONS(192), 1,
      anon_sym_AMP_AMP,
    ACTIONS(145), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
  [1451] = 4,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(196), 1,
      aux_sym_string_token2,
    ACTIONS(199), 1,
      sym_escape_sequence,
    STATE(71), 1,
      aux_sym_string_repeat2,
  [1464] = 1,
    ACTIONS(202), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1471] = 2,
    STATE(35), 1,
      sym_property_type,
    ACTIONS(204), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [1479] = 1,
    ACTIONS(121), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1485] = 1,
    ACTIONS(206), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1491] = 2,
    ACTIONS(210), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1499] = 3,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_generic_args_repeat1,
  [1509] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_generic_args_repeat1,
  [1519] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_GT,
    STATE(86), 1,
      aux_sym_generic_args_repeat1,
  [1529] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_generic_args_repeat1,
  [1539] = 2,
    ACTIONS(225), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1547] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_generic_args_repeat1,
  [1557] = 1,
    ACTIONS(229), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1563] = 3,
    ACTIONS(206), 1,
      anon_sym_GT,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_generic_args_repeat1,
  [1573] = 1,
    ACTIONS(234), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1579] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_GT,
    STATE(84), 1,
      aux_sym_generic_args_repeat1,
  [1589] = 1,
    ACTIONS(105), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1595] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_generic_args_repeat1,
  [1605] = 2,
    STATE(34), 1,
      sym_property_type,
    ACTIONS(204), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [1613] = 2,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_body,
  [1620] = 1,
    ACTIONS(240), 2,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1625] = 2,
    ACTIONS(242), 1,
      anon_sym_COLON,
    ACTIONS(244), 1,
      sym_pascal_identifier,
  [1632] = 2,
    ACTIONS(246), 1,
      anon_sym_COLON,
    ACTIONS(248), 1,
      sym_pascal_identifier,
  [1639] = 1,
    ACTIONS(250), 2,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1644] = 2,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_body,
  [1651] = 2,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_body,
  [1658] = 1,
    ACTIONS(252), 2,
      sym_camel_identifier,
      sym_decorator_identifier,
  [1663] = 1,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
  [1667] = 1,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
  [1671] = 1,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
  [1675] = 1,
    ACTIONS(248), 1,
      sym_pascal_identifier,
  [1679] = 1,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
  [1683] = 1,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
  [1687] = 1,
    ACTIONS(244), 1,
      sym_pascal_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 240,
  [SMALL_STATE(7)] = 300,
  [SMALL_STATE(8)] = 360,
  [SMALL_STATE(9)] = 411,
  [SMALL_STATE(10)] = 462,
  [SMALL_STATE(11)] = 513,
  [SMALL_STATE(12)] = 564,
  [SMALL_STATE(13)] = 606,
  [SMALL_STATE(14)] = 624,
  [SMALL_STATE(15)] = 642,
  [SMALL_STATE(16)] = 660,
  [SMALL_STATE(17)] = 678,
  [SMALL_STATE(18)] = 698,
  [SMALL_STATE(19)] = 716,
  [SMALL_STATE(20)] = 736,
  [SMALL_STATE(21)] = 754,
  [SMALL_STATE(22)] = 772,
  [SMALL_STATE(23)] = 792,
  [SMALL_STATE(24)] = 825,
  [SMALL_STATE(25)] = 858,
  [SMALL_STATE(26)] = 891,
  [SMALL_STATE(27)] = 918,
  [SMALL_STATE(28)] = 934,
  [SMALL_STATE(29)] = 956,
  [SMALL_STATE(30)] = 978,
  [SMALL_STATE(31)] = 1000,
  [SMALL_STATE(32)] = 1017,
  [SMALL_STATE(33)] = 1034,
  [SMALL_STATE(34)] = 1052,
  [SMALL_STATE(35)] = 1070,
  [SMALL_STATE(36)] = 1088,
  [SMALL_STATE(37)] = 1106,
  [SMALL_STATE(38)] = 1125,
  [SMALL_STATE(39)] = 1144,
  [SMALL_STATE(40)] = 1152,
  [SMALL_STATE(41)] = 1160,
  [SMALL_STATE(42)] = 1168,
  [SMALL_STATE(43)] = 1176,
  [SMALL_STATE(44)] = 1188,
  [SMALL_STATE(45)] = 1196,
  [SMALL_STATE(46)] = 1204,
  [SMALL_STATE(47)] = 1212,
  [SMALL_STATE(48)] = 1220,
  [SMALL_STATE(49)] = 1228,
  [SMALL_STATE(50)] = 1240,
  [SMALL_STATE(51)] = 1248,
  [SMALL_STATE(52)] = 1256,
  [SMALL_STATE(53)] = 1263,
  [SMALL_STATE(54)] = 1276,
  [SMALL_STATE(55)] = 1285,
  [SMALL_STATE(56)] = 1296,
  [SMALL_STATE(57)] = 1309,
  [SMALL_STATE(58)] = 1322,
  [SMALL_STATE(59)] = 1333,
  [SMALL_STATE(60)] = 1340,
  [SMALL_STATE(61)] = 1353,
  [SMALL_STATE(62)] = 1364,
  [SMALL_STATE(63)] = 1377,
  [SMALL_STATE(64)] = 1384,
  [SMALL_STATE(65)] = 1391,
  [SMALL_STATE(66)] = 1404,
  [SMALL_STATE(67)] = 1417,
  [SMALL_STATE(68)] = 1424,
  [SMALL_STATE(69)] = 1435,
  [SMALL_STATE(70)] = 1442,
  [SMALL_STATE(71)] = 1451,
  [SMALL_STATE(72)] = 1464,
  [SMALL_STATE(73)] = 1471,
  [SMALL_STATE(74)] = 1479,
  [SMALL_STATE(75)] = 1485,
  [SMALL_STATE(76)] = 1491,
  [SMALL_STATE(77)] = 1499,
  [SMALL_STATE(78)] = 1509,
  [SMALL_STATE(79)] = 1519,
  [SMALL_STATE(80)] = 1529,
  [SMALL_STATE(81)] = 1539,
  [SMALL_STATE(82)] = 1547,
  [SMALL_STATE(83)] = 1557,
  [SMALL_STATE(84)] = 1563,
  [SMALL_STATE(85)] = 1573,
  [SMALL_STATE(86)] = 1579,
  [SMALL_STATE(87)] = 1589,
  [SMALL_STATE(88)] = 1595,
  [SMALL_STATE(89)] = 1605,
  [SMALL_STATE(90)] = 1613,
  [SMALL_STATE(91)] = 1620,
  [SMALL_STATE(92)] = 1625,
  [SMALL_STATE(93)] = 1632,
  [SMALL_STATE(94)] = 1639,
  [SMALL_STATE(95)] = 1644,
  [SMALL_STATE(96)] = 1651,
  [SMALL_STATE(97)] = 1658,
  [SMALL_STATE(98)] = 1663,
  [SMALL_STATE(99)] = 1667,
  [SMALL_STATE(100)] = 1671,
  [SMALL_STATE(101)] = 1675,
  [SMALL_STATE(102)] = 1679,
  [SMALL_STATE(103)] = 1683,
  [SMALL_STATE(104)] = 1687,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(104),
  [7] = {.count = 1, .reusable = true}, SHIFT(55),
  [9] = {.count = 1, .reusable = true}, SHIFT(7),
  [11] = {.count = 1, .reusable = true}, SHIFT(12),
  [13] = {.count = 1, .reusable = false}, SHIFT(46),
  [15] = {.count = 1, .reusable = true}, SHIFT(65),
  [17] = {.count = 1, .reusable = true}, SHIFT(66),
  [19] = {.count = 1, .reusable = true}, SHIFT(20),
  [21] = {.count = 1, .reusable = false}, SHIFT(20),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_arithmetic_value, 3),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_arithmetic_value, 3),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_factor, 1),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_factor, 1),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_term, 1),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(25),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_factor, 3),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_factor, 3),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_term, 3),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_term, 3),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_arithmetic_value, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_arithmetic_value, 1),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_arithmetic_expression, 1),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_arithmetic_expression, 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(26),
  [67] = {.count = 1, .reusable = true}, SHIFT(23),
  [69] = {.count = 1, .reusable = false}, SHIFT(24),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_value, 1),
  [73] = {.count = 1, .reusable = true}, SHIFT(24),
  [75] = {.count = 1, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(92),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(55),
  [83] = {.count = 1, .reusable = true}, SHIFT(72),
  [85] = {.count = 1, .reusable = true}, SHIFT(92),
  [87] = {.count = 1, .reusable = true}, SHIFT(67),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_value, 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(13),
  [93] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(104),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(55),
  [101] = {.count = 1, .reusable = true}, SHIFT(2),
  [103] = {.count = 1, .reusable = true}, SHIFT(29),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_property, 4),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_property, 3),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(6),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_compare, 3),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_value, 3),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_conj, 1),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_generic_args, 3),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_property, 5),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_property_type, 1),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_generic_args, 4),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_conj, 3),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_negation, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_negation, 1),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_compare, 1),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_disjuction, 3),
  [137] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(53),
  [142] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(53),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_disjuction, 1),
  [147] = {.count = 1, .reusable = true}, SHIFT(8),
  [149] = {.count = 1, .reusable = true}, SHIFT(5),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_decorator, 1),
  [153] = {.count = 1, .reusable = false}, SHIFT(15),
  [155] = {.count = 1, .reusable = true}, SHIFT(71),
  [157] = {.count = 1, .reusable = false}, SHIFT(71),
  [159] = {.count = 1, .reusable = true}, SHIFT(53),
  [161] = {.count = 1, .reusable = false}, SHIFT(53),
  [163] = {.count = 1, .reusable = true}, SHIFT(101),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [167] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(55),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_block, 6),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [176] = {.count = 1, .reusable = false}, SHIFT(14),
  [178] = {.count = 1, .reusable = true}, SHIFT(57),
  [180] = {.count = 1, .reusable = false}, SHIFT(57),
  [182] = {.count = 1, .reusable = true}, SHIFT(56),
  [184] = {.count = 1, .reusable = false}, SHIFT(56),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [188] = {.count = 1, .reusable = true}, SHIFT(93),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_block, 5),
  [192] = {.count = 1, .reusable = true}, SHIFT(11),
  [194] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(71),
  [199] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(71),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [204] = {.count = 1, .reusable = true}, SHIFT(44),
  [206] = {.count = 1, .reusable = true}, REDUCE(aux_sym_generic_args_repeat1, 2),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_expression, 1),
  [210] = {.count = 1, .reusable = true}, SHIFT(9),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_args_repeat1, 2), SHIFT_REPEAT(4),
  [215] = {.count = 1, .reusable = true}, SHIFT(4),
  [217] = {.count = 1, .reusable = true}, SHIFT(99),
  [219] = {.count = 1, .reusable = true}, SHIFT(3),
  [221] = {.count = 1, .reusable = true}, SHIFT(42),
  [223] = {.count = 1, .reusable = true}, SHIFT(97),
  [225] = {.count = 1, .reusable = true}, SHIFT(10),
  [227] = {.count = 1, .reusable = true}, SHIFT(91),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_bodyElement, 1),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_args_repeat1, 2), SHIFT_REPEAT(3),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_property, 6),
  [236] = {.count = 1, .reusable = true}, SHIFT(45),
  [238] = {.count = 1, .reusable = true}, SHIFT(100),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_decorator_args, 3),
  [242] = {.count = 1, .reusable = true}, SHIFT(73),
  [244] = {.count = 1, .reusable = true}, SHIFT(37),
  [246] = {.count = 1, .reusable = true}, SHIFT(89),
  [248] = {.count = 1, .reusable = true}, SHIFT(38),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_decorator, 2),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_decorator_args, 4),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_extends_args, 3),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_extends_args, 4),
  [258] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [260] = {.count = 1, .reusable = true}, SHIFT(40),
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
