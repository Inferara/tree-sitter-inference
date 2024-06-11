#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  anon_sym_nat = 1,
  anon_sym_bool = 2,
  anon_sym_LPAREN_RPAREN = 3,
  sym_const_keyword = 4,
  sym_use_keyword = 5,
  sym_from_keyword = 6,
  sym_context_keyword = 7,
  sym_function_keyword = 8,
  sym_comma_symbol = 9,
  sym_semicolon_symbol = 10,
  sym_expand_symbol = 11,
  sym_equals_symbol = 12,
  sym_terminal_symbol = 13,
  sym_context_access_symbol = 14,
  sym_attribute_access_symbol = 15,
  sym_rightarrow_symbol = 16,
  sym_lcb_symbol = 17,
  sym_rcb_symbol = 18,
  sym_lsb_symbol = 19,
  sym_rsb_symbol = 20,
  sym_lrb_symbol = 21,
  sym_rrb_symbol = 22,
  sym__identifier_token = 23,
  anon_sym_DQUOTE = 24,
  sym__string_literal_content = 25,
  sym_number = 26,
  sym_source_file = 27,
  sym__definition = 28,
  sym__statement = 29,
  sym_type = 30,
  sym_const_definition = 31,
  sym_context_definition = 32,
  sym_function_definition = 33,
  sym_parameter_definition = 34,
  sym_use_statement = 35,
  sym_context_access_expression = 36,
  sym_context_assign_expression = 37,
  sym_assign_expression = 38,
  sym__reserved_identifier = 39,
  sym_string_literal = 40,
  sym_identifier = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_context_definition_repeat1 = 43,
  aux_sym_function_definition_repeat1 = 44,
  aux_sym_function_definition_repeat2 = 45,
  aux_sym_use_statement_repeat1 = 46,
  aux_sym_use_statement_repeat2 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_nat] = "nat",
  [anon_sym_bool] = "bool",
  [anon_sym_LPAREN_RPAREN] = "()",
  [sym_const_keyword] = "const_keyword",
  [sym_use_keyword] = "use_keyword",
  [sym_from_keyword] = "from_keyword",
  [sym_context_keyword] = "context_keyword",
  [sym_function_keyword] = "function_keyword",
  [sym_comma_symbol] = "comma_symbol",
  [sym_semicolon_symbol] = "semicolon_symbol",
  [sym_expand_symbol] = "expand_symbol",
  [sym_equals_symbol] = "equals_symbol",
  [sym_terminal_symbol] = "terminal_symbol",
  [sym_context_access_symbol] = "context_access_symbol",
  [sym_attribute_access_symbol] = "attribute_access_symbol",
  [sym_rightarrow_symbol] = "rightarrow_symbol",
  [sym_lcb_symbol] = "lcb_symbol",
  [sym_rcb_symbol] = "rcb_symbol",
  [sym_lsb_symbol] = "lsb_symbol",
  [sym_rsb_symbol] = "rsb_symbol",
  [sym_lrb_symbol] = "lrb_symbol",
  [sym_rrb_symbol] = "rrb_symbol",
  [sym__identifier_token] = "_identifier_token",
  [anon_sym_DQUOTE] = "\"",
  [sym__string_literal_content] = "_string_literal_content",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__statement] = "_statement",
  [sym_type] = "type",
  [sym_const_definition] = "const_definition",
  [sym_context_definition] = "context_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_definition] = "parameter_definition",
  [sym_use_statement] = "use_statement",
  [sym_context_access_expression] = "context_access_expression",
  [sym_context_assign_expression] = "context_assign_expression",
  [sym_assign_expression] = "assign_expression",
  [sym__reserved_identifier] = "_reserved_identifier",
  [sym_string_literal] = "string_literal",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_context_definition_repeat1] = "context_definition_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_function_definition_repeat2] = "function_definition_repeat2",
  [aux_sym_use_statement_repeat1] = "use_statement_repeat1",
  [aux_sym_use_statement_repeat2] = "use_statement_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_nat] = anon_sym_nat,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [sym_const_keyword] = sym_const_keyword,
  [sym_use_keyword] = sym_use_keyword,
  [sym_from_keyword] = sym_from_keyword,
  [sym_context_keyword] = sym_context_keyword,
  [sym_function_keyword] = sym_function_keyword,
  [sym_comma_symbol] = sym_comma_symbol,
  [sym_semicolon_symbol] = sym_semicolon_symbol,
  [sym_expand_symbol] = sym_expand_symbol,
  [sym_equals_symbol] = sym_equals_symbol,
  [sym_terminal_symbol] = sym_terminal_symbol,
  [sym_context_access_symbol] = sym_context_access_symbol,
  [sym_attribute_access_symbol] = sym_attribute_access_symbol,
  [sym_rightarrow_symbol] = sym_rightarrow_symbol,
  [sym_lcb_symbol] = sym_lcb_symbol,
  [sym_rcb_symbol] = sym_rcb_symbol,
  [sym_lsb_symbol] = sym_lsb_symbol,
  [sym_rsb_symbol] = sym_rsb_symbol,
  [sym_lrb_symbol] = sym_lrb_symbol,
  [sym_rrb_symbol] = sym_rrb_symbol,
  [sym__identifier_token] = sym__identifier_token,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__string_literal_content] = sym__string_literal_content,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__statement] = sym__statement,
  [sym_type] = sym_type,
  [sym_const_definition] = sym_const_definition,
  [sym_context_definition] = sym_context_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_definition] = sym_parameter_definition,
  [sym_use_statement] = sym_use_statement,
  [sym_context_access_expression] = sym_context_access_expression,
  [sym_context_assign_expression] = sym_context_assign_expression,
  [sym_assign_expression] = sym_assign_expression,
  [sym__reserved_identifier] = sym__reserved_identifier,
  [sym_string_literal] = sym_string_literal,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_context_definition_repeat1] = aux_sym_context_definition_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_function_definition_repeat2] = aux_sym_function_definition_repeat2,
  [aux_sym_use_statement_repeat1] = aux_sym_use_statement_repeat1,
  [aux_sym_use_statement_repeat2] = aux_sym_use_statement_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_nat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_const_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_use_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_from_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_context_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_function_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_comma_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_semicolon_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_expand_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_equals_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_terminal_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_context_access_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_access_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_rightarrow_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_lcb_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_rcb_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_lsb_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_rsb_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_lrb_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_rrb_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier_token] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__string_literal_content] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_const_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_context_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_context_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_context_assign_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__reserved_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_context_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_statement_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_type = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2, .inherited = true},
  [2] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [4] =
    {field_name, 0},
    {field_value, 2},
  [6] =
    {field_name, 0},
    {field_type, 2},
  [8] =
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
  [11] =
    {field_name, 1},
    {field_type, 5},
  [13] =
    {field_name, 1},
    {field_type, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '"', 66,
        '$', 44,
        '(', 51,
        ')', 52,
        ',', 38,
        '-', 5,
        '.', 45,
        ':', 40,
        ';', 43,
        '=', 42,
        '[', 49,
        ']', 50,
        'b', 16,
        'c', 13,
        'f', 11,
        'n', 6,
        'u', 17,
        '{', 47,
        '}', 48,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '$', 44,
        ')', 52,
        ',', 38,
        ':', 4,
        ';', 43,
        '=', 42,
        'c', 58,
        'f', 56,
        'u', 60,
        '{', 47,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(46);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_nat);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_const_keyword);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_const_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_use_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_from_keyword);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_from_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_context_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_function_keyword);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_function_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comma_symbol);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_semicolon_symbol);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_semicolon_symbol);
      if (lookahead == ':') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_expand_symbol);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_equals_symbol);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_terminal_symbol);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_context_access_symbol);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_attribute_access_symbol);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_rightarrow_symbol);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_lcb_symbol);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_rcb_symbol);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_lsb_symbol);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_rsb_symbol);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_lrb_symbol);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_rrb_symbol);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'e') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'e') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'm') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'n') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'o') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'o') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 's') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 't') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 't') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'x') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__identifier_token);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 23},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_nat] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [sym_const_keyword] = ACTIONS(1),
    [sym_use_keyword] = ACTIONS(1),
    [sym_from_keyword] = ACTIONS(1),
    [sym_context_keyword] = ACTIONS(1),
    [sym_function_keyword] = ACTIONS(1),
    [sym_comma_symbol] = ACTIONS(1),
    [sym_semicolon_symbol] = ACTIONS(1),
    [sym_expand_symbol] = ACTIONS(1),
    [sym_equals_symbol] = ACTIONS(1),
    [sym_terminal_symbol] = ACTIONS(1),
    [sym_context_access_symbol] = ACTIONS(1),
    [sym_attribute_access_symbol] = ACTIONS(1),
    [sym_rightarrow_symbol] = ACTIONS(1),
    [sym_lcb_symbol] = ACTIONS(1),
    [sym_rcb_symbol] = ACTIONS(1),
    [sym_lsb_symbol] = ACTIONS(1),
    [sym_rsb_symbol] = ACTIONS(1),
    [sym_lrb_symbol] = ACTIONS(1),
    [sym_rrb_symbol] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym__definition] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_const_definition] = STATE(2),
    [sym_context_definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_use_statement] = STATE(2),
    [sym_context_access_expression] = STATE(9),
    [sym_context_assign_expression] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_const_keyword] = ACTIONS(5),
    [sym_use_keyword] = ACTIONS(7),
    [sym_context_keyword] = ACTIONS(9),
    [sym_function_keyword] = ACTIONS(11),
    [sym_context_access_symbol] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      sym_const_keyword,
    ACTIONS(7), 1,
      sym_use_keyword,
    ACTIONS(9), 1,
      sym_context_keyword,
    ACTIONS(11), 1,
      sym_function_keyword,
    ACTIONS(13), 1,
      sym_context_access_symbol,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_context_access_expression,
    STATE(3), 8,
      sym__definition,
      sym__statement,
      sym_const_definition,
      sym_context_definition,
      sym_function_definition,
      sym_use_statement,
      sym_context_assign_expression,
      aux_sym_source_file_repeat1,
  [32] = 8,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_const_keyword,
    ACTIONS(22), 1,
      sym_use_keyword,
    ACTIONS(25), 1,
      sym_context_keyword,
    ACTIONS(28), 1,
      sym_function_keyword,
    ACTIONS(31), 1,
      sym_context_access_symbol,
    STATE(9), 1,
      sym_context_access_expression,
    STATE(3), 8,
      sym__definition,
      sym__statement,
      sym_const_definition,
      sym_context_definition,
      sym_function_definition,
      sym_use_statement,
      sym_context_assign_expression,
      aux_sym_source_file_repeat1,
  [64] = 7,
    ACTIONS(36), 1,
      sym_context_access_symbol,
    ACTIONS(38), 1,
      sym_rrb_symbol,
    STATE(6), 1,
      aux_sym_function_definition_repeat1,
    STATE(13), 1,
      sym_parameter_definition,
    STATE(19), 1,
      sym__reserved_identifier,
    STATE(70), 1,
      sym_identifier,
    ACTIONS(34), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [91] = 7,
    ACTIONS(36), 1,
      sym_context_access_symbol,
    ACTIONS(40), 1,
      sym_rrb_symbol,
    STATE(4), 1,
      aux_sym_function_definition_repeat1,
    STATE(13), 1,
      sym_parameter_definition,
    STATE(19), 1,
      sym__reserved_identifier,
    STATE(70), 1,
      sym_identifier,
    ACTIONS(34), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [118] = 7,
    ACTIONS(45), 1,
      sym_context_access_symbol,
    ACTIONS(48), 1,
      sym_rrb_symbol,
    STATE(6), 1,
      aux_sym_function_definition_repeat1,
    STATE(13), 1,
      sym_parameter_definition,
    STATE(19), 1,
      sym__reserved_identifier,
    STATE(70), 1,
      sym_identifier,
    ACTIONS(42), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [145] = 2,
    ACTIONS(52), 5,
      sym_comma_symbol,
      sym_equals_symbol,
      sym_context_access_symbol,
      sym_lcb_symbol,
      sym_rrb_symbol,
    ACTIONS(50), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [161] = 5,
    ACTIONS(36), 1,
      sym_context_access_symbol,
    ACTIONS(54), 1,
      sym_lcb_symbol,
    STATE(19), 1,
      sym__reserved_identifier,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(34), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [182] = 5,
    ACTIONS(36), 1,
      sym_context_access_symbol,
    STATE(19), 1,
      sym__reserved_identifier,
    STATE(32), 1,
      sym_assign_expression,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(34), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [203] = 4,
    ACTIONS(36), 1,
      sym_context_access_symbol,
    STATE(19), 1,
      sym__reserved_identifier,
    STATE(52), 1,
      sym_identifier,
    ACTIONS(34), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [221] = 4,
    ACTIONS(36), 1,
      sym_context_access_symbol,
    STATE(19), 1,
      sym__reserved_identifier,
    STATE(50), 1,
      sym_identifier,
    ACTIONS(34), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [239] = 2,
    ACTIONS(58), 3,
      sym_comma_symbol,
      sym_context_access_symbol,
      sym_rrb_symbol,
    ACTIONS(56), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [253] = 3,
    ACTIONS(62), 1,
      sym_comma_symbol,
    ACTIONS(64), 2,
      sym_context_access_symbol,
      sym_rrb_symbol,
    ACTIONS(60), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [269] = 4,
    ACTIONS(36), 1,
      sym_context_access_symbol,
    STATE(19), 1,
      sym__reserved_identifier,
    STATE(51), 1,
      sym_identifier,
    ACTIONS(34), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [287] = 4,
    ACTIONS(36), 1,
      sym_context_access_symbol,
    STATE(19), 1,
      sym__reserved_identifier,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(34), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [305] = 4,
    ACTIONS(36), 1,
      sym_context_access_symbol,
    STATE(19), 1,
      sym__reserved_identifier,
    STATE(69), 1,
      sym_identifier,
    ACTIONS(34), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [323] = 4,
    ACTIONS(36), 1,
      sym_context_access_symbol,
    STATE(19), 1,
      sym__reserved_identifier,
    STATE(74), 1,
      sym_identifier,
    ACTIONS(34), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [341] = 4,
    ACTIONS(36), 1,
      sym_context_access_symbol,
    STATE(19), 1,
      sym__reserved_identifier,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(34), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [359] = 2,
    ACTIONS(68), 1,
      sym_semicolon_symbol,
    ACTIONS(66), 7,
      sym_comma_symbol,
      sym_expand_symbol,
      sym_equals_symbol,
      sym_terminal_symbol,
      sym_lcb_symbol,
      sym_rcb_symbol,
      sym_lrb_symbol,
  [372] = 2,
    ACTIONS(48), 2,
      sym_context_access_symbol,
      sym_rrb_symbol,
    ACTIONS(70), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [385] = 1,
    ACTIONS(72), 7,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_context_access_symbol,
      sym_rcb_symbol,
  [395] = 1,
    ACTIONS(74), 7,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_context_access_symbol,
      sym_rcb_symbol,
  [405] = 1,
    ACTIONS(76), 7,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_context_access_symbol,
      sym_rcb_symbol,
  [415] = 1,
    ACTIONS(78), 7,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_context_access_symbol,
      sym_rcb_symbol,
  [425] = 2,
    ACTIONS(82), 1,
      sym_context_access_symbol,
    ACTIONS(80), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [437] = 1,
    ACTIONS(84), 7,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_context_access_symbol,
      sym_rcb_symbol,
  [447] = 1,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_context_access_symbol,
      sym_rcb_symbol,
  [457] = 1,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_context_access_symbol,
      sym_rcb_symbol,
  [467] = 1,
    ACTIONS(90), 7,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_context_access_symbol,
      sym_rcb_symbol,
  [477] = 4,
    ACTIONS(5), 1,
      sym_const_keyword,
    ACTIONS(11), 1,
      sym_function_keyword,
    ACTIONS(92), 1,
      sym_rcb_symbol,
    STATE(35), 3,
      sym_const_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [492] = 1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_context_access_symbol,
  [501] = 1,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_context_access_symbol,
  [510] = 1,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_context_access_symbol,
  [519] = 1,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_context_access_symbol,
  [528] = 4,
    ACTIONS(5), 1,
      sym_const_keyword,
    ACTIONS(11), 1,
      sym_function_keyword,
    ACTIONS(102), 1,
      sym_rcb_symbol,
    STATE(36), 3,
      sym_const_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [543] = 4,
    ACTIONS(104), 1,
      sym_const_keyword,
    ACTIONS(107), 1,
      sym_function_keyword,
    ACTIONS(110), 1,
      sym_rcb_symbol,
    STATE(36), 3,
      sym_const_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [558] = 3,
    ACTIONS(112), 1,
      sym_use_keyword,
    ACTIONS(115), 1,
      sym_rcb_symbol,
    STATE(37), 3,
      sym__statement,
      sym_use_statement,
      aux_sym_function_definition_repeat2,
  [570] = 3,
    ACTIONS(7), 1,
      sym_use_keyword,
    ACTIONS(117), 1,
      sym_rcb_symbol,
    STATE(40), 3,
      sym__statement,
      sym_use_statement,
      aux_sym_function_definition_repeat2,
  [582] = 3,
    ACTIONS(7), 1,
      sym_use_keyword,
    ACTIONS(119), 1,
      sym_rcb_symbol,
    STATE(37), 3,
      sym__statement,
      sym_use_statement,
      aux_sym_function_definition_repeat2,
  [594] = 3,
    ACTIONS(7), 1,
      sym_use_keyword,
    ACTIONS(121), 1,
      sym_rcb_symbol,
    STATE(37), 3,
      sym__statement,
      sym_use_statement,
      aux_sym_function_definition_repeat2,
  [606] = 3,
    ACTIONS(7), 1,
      sym_use_keyword,
    ACTIONS(123), 1,
      sym_rcb_symbol,
    STATE(39), 3,
      sym__statement,
      sym_use_statement,
      aux_sym_function_definition_repeat2,
  [618] = 2,
    STATE(59), 1,
      sym_type,
    ACTIONS(125), 3,
      anon_sym_nat,
      anon_sym_bool,
      anon_sym_LPAREN_RPAREN,
  [627] = 2,
    STATE(12), 1,
      sym_type,
    ACTIONS(125), 3,
      anon_sym_nat,
      anon_sym_bool,
      anon_sym_LPAREN_RPAREN,
  [636] = 2,
    STATE(72), 1,
      sym_type,
    ACTIONS(125), 3,
      anon_sym_nat,
      anon_sym_bool,
      anon_sym_LPAREN_RPAREN,
  [645] = 2,
    STATE(67), 1,
      sym_type,
    ACTIONS(125), 3,
      anon_sym_nat,
      anon_sym_bool,
      anon_sym_LPAREN_RPAREN,
  [654] = 3,
    ACTIONS(127), 1,
      sym_comma_symbol,
    ACTIONS(129), 1,
      sym_rcb_symbol,
    STATE(48), 1,
      aux_sym_use_statement_repeat2,
  [664] = 3,
    ACTIONS(131), 1,
      sym_expand_symbol,
    ACTIONS(134), 1,
      sym_terminal_symbol,
    STATE(47), 1,
      aux_sym_use_statement_repeat1,
  [674] = 3,
    ACTIONS(136), 1,
      sym_comma_symbol,
    ACTIONS(139), 1,
      sym_rcb_symbol,
    STATE(48), 1,
      aux_sym_use_statement_repeat2,
  [684] = 3,
    ACTIONS(141), 1,
      sym_expand_symbol,
    ACTIONS(143), 1,
      sym_terminal_symbol,
    STATE(47), 1,
      aux_sym_use_statement_repeat1,
  [694] = 3,
    ACTIONS(127), 1,
      sym_comma_symbol,
    ACTIONS(145), 1,
      sym_rcb_symbol,
    STATE(46), 1,
      aux_sym_use_statement_repeat2,
  [704] = 1,
    ACTIONS(147), 2,
      sym_expand_symbol,
      sym_terminal_symbol,
  [709] = 1,
    ACTIONS(139), 2,
      sym_comma_symbol,
      sym_rcb_symbol,
  [714] = 2,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_string_literal,
  [721] = 2,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_string_literal,
  [728] = 2,
    ACTIONS(141), 1,
      sym_expand_symbol,
    STATE(49), 1,
      aux_sym_use_statement_repeat1,
  [735] = 1,
    ACTIONS(151), 1,
      sym_rightarrow_symbol,
  [739] = 1,
    ACTIONS(153), 1,
      sym_terminal_symbol,
  [743] = 1,
    ACTIONS(155), 1,
      sym_rightarrow_symbol,
  [747] = 1,
    ACTIONS(157), 1,
      sym_lcb_symbol,
  [751] = 1,
    ACTIONS(159), 1,
      sym_number,
  [755] = 1,
    ACTIONS(161), 1,
      sym_from_keyword,
  [759] = 1,
    ACTIONS(163), 1,
      sym_terminal_symbol,
  [763] = 1,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
  [767] = 1,
    ACTIONS(167), 1,
      sym__string_literal_content,
  [771] = 1,
    ACTIONS(169), 1,
      sym_terminal_symbol,
  [775] = 1,
    ACTIONS(171), 1,
      sym_attribute_access_symbol,
  [779] = 1,
    ACTIONS(173), 1,
      sym_lcb_symbol,
  [783] = 1,
    ACTIONS(175), 1,
      sym_terminal_symbol,
  [787] = 1,
    ACTIONS(177), 1,
      sym_terminal_symbol,
  [791] = 1,
    ACTIONS(179), 1,
      sym_semicolon_symbol,
  [795] = 1,
    ACTIONS(181), 1,
      sym_from_keyword,
  [799] = 1,
    ACTIONS(183), 1,
      sym_equals_symbol,
  [803] = 1,
    ACTIONS(185), 1,
      sym_equals_symbol,
  [807] = 1,
    ACTIONS(187), 1,
      sym_lrb_symbol,
  [811] = 1,
    ACTIONS(189), 1,
      sym_lcb_symbol,
  [815] = 1,
    ACTIONS(191), 1,
      sym_semicolon_symbol,
  [819] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 161,
  [SMALL_STATE(9)] = 182,
  [SMALL_STATE(10)] = 203,
  [SMALL_STATE(11)] = 221,
  [SMALL_STATE(12)] = 239,
  [SMALL_STATE(13)] = 253,
  [SMALL_STATE(14)] = 269,
  [SMALL_STATE(15)] = 287,
  [SMALL_STATE(16)] = 305,
  [SMALL_STATE(17)] = 323,
  [SMALL_STATE(18)] = 341,
  [SMALL_STATE(19)] = 359,
  [SMALL_STATE(20)] = 372,
  [SMALL_STATE(21)] = 385,
  [SMALL_STATE(22)] = 395,
  [SMALL_STATE(23)] = 405,
  [SMALL_STATE(24)] = 415,
  [SMALL_STATE(25)] = 425,
  [SMALL_STATE(26)] = 437,
  [SMALL_STATE(27)] = 447,
  [SMALL_STATE(28)] = 457,
  [SMALL_STATE(29)] = 467,
  [SMALL_STATE(30)] = 477,
  [SMALL_STATE(31)] = 492,
  [SMALL_STATE(32)] = 501,
  [SMALL_STATE(33)] = 510,
  [SMALL_STATE(34)] = 519,
  [SMALL_STATE(35)] = 528,
  [SMALL_STATE(36)] = 543,
  [SMALL_STATE(37)] = 558,
  [SMALL_STATE(38)] = 570,
  [SMALL_STATE(39)] = 582,
  [SMALL_STATE(40)] = 594,
  [SMALL_STATE(41)] = 606,
  [SMALL_STATE(42)] = 618,
  [SMALL_STATE(43)] = 627,
  [SMALL_STATE(44)] = 636,
  [SMALL_STATE(45)] = 645,
  [SMALL_STATE(46)] = 654,
  [SMALL_STATE(47)] = 664,
  [SMALL_STATE(48)] = 674,
  [SMALL_STATE(49)] = 684,
  [SMALL_STATE(50)] = 694,
  [SMALL_STATE(51)] = 704,
  [SMALL_STATE(52)] = 709,
  [SMALL_STATE(53)] = 714,
  [SMALL_STATE(54)] = 721,
  [SMALL_STATE(55)] = 728,
  [SMALL_STATE(56)] = 735,
  [SMALL_STATE(57)] = 739,
  [SMALL_STATE(58)] = 743,
  [SMALL_STATE(59)] = 747,
  [SMALL_STATE(60)] = 751,
  [SMALL_STATE(61)] = 755,
  [SMALL_STATE(62)] = 759,
  [SMALL_STATE(63)] = 763,
  [SMALL_STATE(64)] = 767,
  [SMALL_STATE(65)] = 771,
  [SMALL_STATE(66)] = 775,
  [SMALL_STATE(67)] = 779,
  [SMALL_STATE(68)] = 783,
  [SMALL_STATE(69)] = 787,
  [SMALL_STATE(70)] = 791,
  [SMALL_STATE(71)] = 795,
  [SMALL_STATE(72)] = 799,
  [SMALL_STATE(73)] = 803,
  [SMALL_STATE(74)] = 807,
  [SMALL_STATE(75)] = 811,
  [SMALL_STATE(76)] = 815,
  [SMALL_STATE(77)] = 819,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_definition, 3, 0, 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 3, 0, 5),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_definition, 7, 0, 6),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, 0, 8),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, 0, 8),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 7, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_access_expression, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_access_expression, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 7),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, 0, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, 0, 7),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 8, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expression, 4, 0, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_assign_expression, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 5, 0, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 4, 0, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(8),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, 0, 3), SHIFT_REPEAT(14),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, 0, 3),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat2, 2, 0, 0), SHIFT_REPEAT(10),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat2, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, 0, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_inference(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
