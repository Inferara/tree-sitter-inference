#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_nat = 1,
  sym_const_keyword = 2,
  sym_use_keyword = 3,
  sym_from_keyword = 4,
  sym_context_keyword = 5,
  sym_comma_symbol = 6,
  sym_semicolon_symbol = 7,
  sym_expand_symbol = 8,
  sym_equals_symbol = 9,
  sym_terminal_symbol = 10,
  sym_context_access_symbol = 11,
  sym_attribute_access_symbol = 12,
  sym_lcb_symbol = 13,
  sym_rcb_symbol = 14,
  sym_lsb_symbol = 15,
  sym_rsb_symbol = 16,
  sym_lrb_symbol = 17,
  sym_rrb_symbol = 18,
  sym__identifier_token = 19,
  anon_sym_DQUOTE = 20,
  sym__string_literal_content = 21,
  sym_number = 22,
  sym_source_file = 23,
  sym__definition = 24,
  sym__statement = 25,
  sym__type = 26,
  sym_const_definition = 27,
  sym_context_definition = 28,
  sym_use_statement = 29,
  sym__reserved_identifier = 30,
  sym_string_literal = 31,
  sym_identifier = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_context_definition_repeat1 = 34,
  aux_sym_use_statement_repeat1 = 35,
  aux_sym_use_statement_repeat2 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_nat] = "nat",
  [sym_const_keyword] = "const_keyword",
  [sym_use_keyword] = "use_keyword",
  [sym_from_keyword] = "from_keyword",
  [sym_context_keyword] = "context_keyword",
  [sym_comma_symbol] = "comma_symbol",
  [sym_semicolon_symbol] = "semicolon_symbol",
  [sym_expand_symbol] = "expand_symbol",
  [sym_equals_symbol] = "equals_symbol",
  [sym_terminal_symbol] = "terminal_symbol",
  [sym_context_access_symbol] = "context_access_symbol",
  [sym_attribute_access_symbol] = "attribute_access_symbol",
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
  [sym__type] = "_type",
  [sym_const_definition] = "const_definition",
  [sym_context_definition] = "context_definition",
  [sym_use_statement] = "use_statement",
  [sym__reserved_identifier] = "_reserved_identifier",
  [sym_string_literal] = "string_literal",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_context_definition_repeat1] = "context_definition_repeat1",
  [aux_sym_use_statement_repeat1] = "use_statement_repeat1",
  [aux_sym_use_statement_repeat2] = "use_statement_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_nat] = anon_sym_nat,
  [sym_const_keyword] = sym_const_keyword,
  [sym_use_keyword] = sym_use_keyword,
  [sym_from_keyword] = sym_from_keyword,
  [sym_context_keyword] = sym_context_keyword,
  [sym_comma_symbol] = sym_comma_symbol,
  [sym_semicolon_symbol] = sym_semicolon_symbol,
  [sym_expand_symbol] = sym_expand_symbol,
  [sym_equals_symbol] = sym_equals_symbol,
  [sym_terminal_symbol] = sym_terminal_symbol,
  [sym_context_access_symbol] = sym_context_access_symbol,
  [sym_attribute_access_symbol] = sym_attribute_access_symbol,
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
  [sym__type] = sym__type,
  [sym_const_definition] = sym_const_definition,
  [sym_context_definition] = sym_context_definition,
  [sym_use_statement] = sym_use_statement,
  [sym__reserved_identifier] = sym__reserved_identifier,
  [sym_string_literal] = sym_string_literal,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_context_definition_repeat1] = aux_sym_context_definition_repeat1,
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
  [sym__type] = {
    .visible = false,
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
  [sym_use_statement] = {
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
  [4] = {.index = 4, .length = 3},
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
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      ADVANCE_MAP(
        '"', 55,
        '$', 32,
        '(', 38,
        ')', 39,
        ',', 26,
        '.', 33,
        ':', 28,
        ';', 31,
        '=', 30,
        '[', 36,
        ']', 37,
        'c', 45,
        'f', 47,
        'n', 40,
        'u', 48,
        '{', 34,
        '}', 35,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == '{') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == '}') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_nat);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_nat);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_const_keyword);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_const_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_use_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_from_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_context_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comma_symbol);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_semicolon_symbol);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_semicolon_symbol);
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_expand_symbol);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_equals_symbol);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_terminal_symbol);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_context_access_symbol);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_attribute_access_symbol);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_lcb_symbol);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_rcb_symbol);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_lsb_symbol);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_rsb_symbol);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_lrb_symbol);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_rrb_symbol);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'a') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'e') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'e') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'm') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'n') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'o') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'o') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'r') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 's') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 't') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 't') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 't') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 't') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'x') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__identifier_token);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_nat] = ACTIONS(1),
    [sym_const_keyword] = ACTIONS(1),
    [sym_use_keyword] = ACTIONS(1),
    [sym_from_keyword] = ACTIONS(1),
    [sym_context_keyword] = ACTIONS(1),
    [sym_comma_symbol] = ACTIONS(1),
    [sym_semicolon_symbol] = ACTIONS(1),
    [sym_expand_symbol] = ACTIONS(1),
    [sym_equals_symbol] = ACTIONS(1),
    [sym_terminal_symbol] = ACTIONS(1),
    [sym_context_access_symbol] = ACTIONS(1),
    [sym_attribute_access_symbol] = ACTIONS(1),
    [sym_lcb_symbol] = ACTIONS(1),
    [sym_rcb_symbol] = ACTIONS(1),
    [sym_lsb_symbol] = ACTIONS(1),
    [sym_rsb_symbol] = ACTIONS(1),
    [sym_lrb_symbol] = ACTIONS(1),
    [sym_rrb_symbol] = ACTIONS(1),
    [sym__identifier_token] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym__definition] = STATE(3),
    [sym__statement] = STATE(3),
    [sym_const_definition] = STATE(3),
    [sym_context_definition] = STATE(3),
    [sym_use_statement] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_const_keyword] = ACTIONS(5),
    [sym_use_keyword] = ACTIONS(7),
    [sym_context_keyword] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_const_keyword,
    ACTIONS(16), 1,
      sym_use_keyword,
    ACTIONS(19), 1,
      sym_context_keyword,
    STATE(2), 6,
      sym__definition,
      sym__statement,
      sym_const_definition,
      sym_context_definition,
      sym_use_statement,
      aux_sym_source_file_repeat1,
  [21] = 5,
    ACTIONS(5), 1,
      sym_const_keyword,
    ACTIONS(7), 1,
      sym_use_keyword,
    ACTIONS(9), 1,
      sym_context_keyword,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(2), 6,
      sym__definition,
      sym__statement,
      sym_const_definition,
      sym_context_definition,
      sym_use_statement,
      aux_sym_source_file_repeat1,
  [42] = 4,
    ACTIONS(26), 1,
      sym_lcb_symbol,
    STATE(10), 1,
      sym__reserved_identifier,
    STATE(30), 1,
      sym_identifier,
    ACTIONS(24), 5,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym__identifier_token,
  [59] = 3,
    STATE(10), 1,
      sym__reserved_identifier,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(24), 5,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym__identifier_token,
  [73] = 3,
    STATE(10), 1,
      sym__reserved_identifier,
    STATE(43), 1,
      sym_identifier,
    ACTIONS(24), 5,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym__identifier_token,
  [87] = 3,
    STATE(10), 1,
      sym__reserved_identifier,
    STATE(26), 1,
      sym_identifier,
    ACTIONS(24), 5,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym__identifier_token,
  [101] = 3,
    STATE(10), 1,
      sym__reserved_identifier,
    STATE(25), 1,
      sym_identifier,
    ACTIONS(24), 5,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym__identifier_token,
  [115] = 3,
    STATE(10), 1,
      sym__reserved_identifier,
    STATE(22), 1,
      sym_identifier,
    ACTIONS(24), 5,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym_context_keyword,
      sym__identifier_token,
  [129] = 2,
    ACTIONS(30), 1,
      sym_semicolon_symbol,
    ACTIONS(28), 5,
      sym_comma_symbol,
      sym_expand_symbol,
      sym_terminal_symbol,
      sym_lcb_symbol,
      sym_rcb_symbol,
  [140] = 1,
    ACTIONS(32), 5,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_rcb_symbol,
  [148] = 1,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
  [155] = 3,
    ACTIONS(36), 1,
      sym_const_keyword,
    ACTIONS(39), 1,
      sym_rcb_symbol,
    STATE(13), 2,
      sym_const_definition,
      aux_sym_context_definition_repeat1,
  [166] = 1,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
  [173] = 1,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
  [180] = 3,
    ACTIONS(5), 1,
      sym_const_keyword,
    ACTIONS(45), 1,
      sym_rcb_symbol,
    STATE(17), 2,
      sym_const_definition,
      aux_sym_context_definition_repeat1,
  [191] = 3,
    ACTIONS(5), 1,
      sym_const_keyword,
    ACTIONS(47), 1,
      sym_rcb_symbol,
    STATE(13), 2,
      sym_const_definition,
      aux_sym_context_definition_repeat1,
  [202] = 1,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
  [209] = 1,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
  [216] = 3,
    ACTIONS(53), 1,
      sym_expand_symbol,
    ACTIONS(55), 1,
      sym_terminal_symbol,
    STATE(24), 1,
      aux_sym_use_statement_repeat1,
  [226] = 3,
    ACTIONS(57), 1,
      sym_comma_symbol,
    ACTIONS(60), 1,
      sym_rcb_symbol,
    STATE(21), 1,
      aux_sym_use_statement_repeat2,
  [236] = 3,
    ACTIONS(62), 1,
      sym_comma_symbol,
    ACTIONS(64), 1,
      sym_rcb_symbol,
    STATE(23), 1,
      aux_sym_use_statement_repeat2,
  [246] = 3,
    ACTIONS(62), 1,
      sym_comma_symbol,
    ACTIONS(66), 1,
      sym_rcb_symbol,
    STATE(21), 1,
      aux_sym_use_statement_repeat2,
  [256] = 3,
    ACTIONS(68), 1,
      sym_expand_symbol,
    ACTIONS(71), 1,
      sym_terminal_symbol,
    STATE(24), 1,
      aux_sym_use_statement_repeat1,
  [266] = 1,
    ACTIONS(73), 2,
      sym_expand_symbol,
      sym_terminal_symbol,
  [271] = 1,
    ACTIONS(60), 2,
      sym_comma_symbol,
      sym_rcb_symbol,
  [276] = 2,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      sym_string_literal,
  [283] = 2,
    ACTIONS(77), 1,
      anon_sym_nat,
    STATE(35), 1,
      sym__type,
  [290] = 2,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym_string_literal,
  [297] = 2,
    ACTIONS(53), 1,
      sym_expand_symbol,
    STATE(20), 1,
      aux_sym_use_statement_repeat1,
  [304] = 1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
  [308] = 1,
    ACTIONS(81), 1,
      sym_number,
  [312] = 1,
    ACTIONS(83), 1,
      sym_from_keyword,
  [316] = 1,
    ACTIONS(85), 1,
      sym_from_keyword,
  [320] = 1,
    ACTIONS(87), 1,
      sym_equals_symbol,
  [324] = 1,
    ACTIONS(89), 1,
      sym_terminal_symbol,
  [328] = 1,
    ACTIONS(91), 1,
      sym__string_literal_content,
  [332] = 1,
    ACTIONS(93), 1,
      sym_terminal_symbol,
  [336] = 1,
    ACTIONS(95), 1,
      sym_lcb_symbol,
  [340] = 1,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
  [344] = 1,
    ACTIONS(99), 1,
      sym_terminal_symbol,
  [348] = 1,
    ACTIONS(101), 1,
      sym_terminal_symbol,
  [352] = 1,
    ACTIONS(103), 1,
      sym_semicolon_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 73,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 101,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 129,
  [SMALL_STATE(11)] = 140,
  [SMALL_STATE(12)] = 148,
  [SMALL_STATE(13)] = 155,
  [SMALL_STATE(14)] = 166,
  [SMALL_STATE(15)] = 173,
  [SMALL_STATE(16)] = 180,
  [SMALL_STATE(17)] = 191,
  [SMALL_STATE(18)] = 202,
  [SMALL_STATE(19)] = 209,
  [SMALL_STATE(20)] = 216,
  [SMALL_STATE(21)] = 226,
  [SMALL_STATE(22)] = 236,
  [SMALL_STATE(23)] = 246,
  [SMALL_STATE(24)] = 256,
  [SMALL_STATE(25)] = 266,
  [SMALL_STATE(26)] = 271,
  [SMALL_STATE(27)] = 276,
  [SMALL_STATE(28)] = 283,
  [SMALL_STATE(29)] = 290,
  [SMALL_STATE(30)] = 297,
  [SMALL_STATE(31)] = 304,
  [SMALL_STATE(32)] = 308,
  [SMALL_STATE(33)] = 312,
  [SMALL_STATE(34)] = 316,
  [SMALL_STATE(35)] = 320,
  [SMALL_STATE(36)] = 324,
  [SMALL_STATE(37)] = 328,
  [SMALL_STATE(38)] = 332,
  [SMALL_STATE(39)] = 336,
  [SMALL_STATE(40)] = 340,
  [SMALL_STATE(41)] = 344,
  [SMALL_STATE(42)] = 348,
  [SMALL_STATE(43)] = 352,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_definition, 7, 0, 4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 7, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 8, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 5, 0, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 4, 0, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, 0, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat2, 2, 0, 0), SHIFT_REPEAT(7),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat2, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, 0, 3), SHIFT_REPEAT(8),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, 0, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, 0, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [79] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
