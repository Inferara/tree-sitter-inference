#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_nat = 1,
  sym_const_keyword = 2,
  sym_use_keyword = 3,
  sym_from_keyword = 4,
  sym_comma_symbol = 5,
  sym_semicolon_symbol = 6,
  sym_expand_symbol = 7,
  sym_equals_symbol = 8,
  sym_terminal_symbol = 9,
  sym_lcb_symbol = 10,
  sym_rcb_symbol = 11,
  sym_lsb_symbol = 12,
  sym_rsb_symbol = 13,
  sym_lrb_symbol = 14,
  sym_rrb_symbol = 15,
  sym__identifier_token = 16,
  anon_sym_DQUOTE = 17,
  sym__string_literal_content = 18,
  sym_number = 19,
  sym_source_file = 20,
  sym__definition = 21,
  sym__statement = 22,
  sym__type = 23,
  sym_const_definition = 24,
  sym_use_statement = 25,
  sym__reserved_identifier = 26,
  sym_string_literal = 27,
  sym_identifier = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_use_statement_repeat1 = 30,
  aux_sym_use_statement_repeat2 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_nat] = "nat",
  [sym_const_keyword] = "const_keyword",
  [sym_use_keyword] = "use_keyword",
  [sym_from_keyword] = "from_keyword",
  [sym_comma_symbol] = "comma_symbol",
  [sym_semicolon_symbol] = "semicolon_symbol",
  [sym_expand_symbol] = "expand_symbol",
  [sym_equals_symbol] = "equals_symbol",
  [sym_terminal_symbol] = "terminal_symbol",
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
  [sym_use_statement] = "use_statement",
  [sym__reserved_identifier] = "_reserved_identifier",
  [sym_string_literal] = "string_literal",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_use_statement_repeat1] = "use_statement_repeat1",
  [aux_sym_use_statement_repeat2] = "use_statement_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_nat] = anon_sym_nat,
  [sym_const_keyword] = sym_const_keyword,
  [sym_use_keyword] = sym_use_keyword,
  [sym_from_keyword] = sym_from_keyword,
  [sym_comma_symbol] = sym_comma_symbol,
  [sym_semicolon_symbol] = sym_semicolon_symbol,
  [sym_expand_symbol] = sym_expand_symbol,
  [sym_equals_symbol] = sym_equals_symbol,
  [sym_terminal_symbol] = sym_terminal_symbol,
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
  [sym_use_statement] = sym_use_statement,
  [sym__reserved_identifier] = sym__reserved_identifier,
  [sym_string_literal] = sym_string_literal,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '"', 45,
        '(', 31,
        ')', 32,
        ',', 21,
        ':', 23,
        ';', 26,
        '=', 25,
        '[', 29,
        ']', 30,
        'c', 37,
        'f', 39,
        'n', 33,
        'u', 40,
        '{', 27,
        '}', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == '{') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_nat);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_nat);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_const_keyword);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_const_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_use_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_from_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comma_symbol);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_semicolon_symbol);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_semicolon_symbol);
      if (lookahead == ':') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_expand_symbol);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_equals_symbol);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_terminal_symbol);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_lcb_symbol);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_rcb_symbol);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_lsb_symbol);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_rsb_symbol);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_lrb_symbol);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_rrb_symbol);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'a') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'e') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'm') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'n') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'o') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'o') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'r') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 's') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 's') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 't') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 't') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__identifier_token);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_nat] = ACTIONS(1),
    [sym_const_keyword] = ACTIONS(1),
    [sym_use_keyword] = ACTIONS(1),
    [sym_from_keyword] = ACTIONS(1),
    [sym_comma_symbol] = ACTIONS(1),
    [sym_semicolon_symbol] = ACTIONS(1),
    [sym_expand_symbol] = ACTIONS(1),
    [sym_equals_symbol] = ACTIONS(1),
    [sym_terminal_symbol] = ACTIONS(1),
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
    [sym_source_file] = STATE(25),
    [sym__definition] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_const_definition] = STATE(2),
    [sym_use_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_const_keyword] = ACTIONS(5),
    [sym_use_keyword] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      sym_const_keyword,
    ACTIONS(7), 1,
      sym_use_keyword,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(3), 5,
      sym__definition,
      sym__statement,
      sym_const_definition,
      sym_use_statement,
      aux_sym_source_file_repeat1,
  [17] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_const_keyword,
    ACTIONS(16), 1,
      sym_use_keyword,
    STATE(3), 5,
      sym__definition,
      sym__statement,
      sym_const_definition,
      sym_use_statement,
      aux_sym_source_file_repeat1,
  [34] = 4,
    ACTIONS(21), 1,
      sym_lcb_symbol,
    STATE(9), 1,
      sym__reserved_identifier,
    STATE(19), 1,
      sym_identifier,
    ACTIONS(19), 4,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym__identifier_token,
  [50] = 3,
    STATE(9), 1,
      sym__reserved_identifier,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(19), 4,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym__identifier_token,
  [63] = 3,
    STATE(9), 1,
      sym__reserved_identifier,
    STATE(14), 1,
      sym_identifier,
    ACTIONS(19), 4,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym__identifier_token,
  [76] = 3,
    STATE(9), 1,
      sym__reserved_identifier,
    STATE(20), 1,
      sym_identifier,
    ACTIONS(19), 4,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym__identifier_token,
  [89] = 3,
    STATE(9), 1,
      sym__reserved_identifier,
    STATE(21), 1,
      sym_identifier,
    ACTIONS(19), 4,
      sym_const_keyword,
      sym_use_keyword,
      sym_from_keyword,
      sym__identifier_token,
  [102] = 2,
    ACTIONS(25), 1,
      sym_semicolon_symbol,
    ACTIONS(23), 4,
      sym_comma_symbol,
      sym_expand_symbol,
      sym_terminal_symbol,
      sym_rcb_symbol,
  [112] = 1,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
  [118] = 1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
  [124] = 1,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
  [130] = 1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      sym_const_keyword,
      sym_use_keyword,
  [136] = 3,
    ACTIONS(35), 1,
      sym_comma_symbol,
    ACTIONS(37), 1,
      sym_rcb_symbol,
    STATE(18), 1,
      aux_sym_use_statement_repeat2,
  [146] = 3,
    ACTIONS(39), 1,
      sym_expand_symbol,
    ACTIONS(41), 1,
      sym_terminal_symbol,
    STATE(17), 1,
      aux_sym_use_statement_repeat1,
  [156] = 3,
    ACTIONS(43), 1,
      sym_comma_symbol,
    ACTIONS(46), 1,
      sym_rcb_symbol,
    STATE(16), 1,
      aux_sym_use_statement_repeat2,
  [166] = 3,
    ACTIONS(48), 1,
      sym_expand_symbol,
    ACTIONS(51), 1,
      sym_terminal_symbol,
    STATE(17), 1,
      aux_sym_use_statement_repeat1,
  [176] = 3,
    ACTIONS(35), 1,
      sym_comma_symbol,
    ACTIONS(53), 1,
      sym_rcb_symbol,
    STATE(16), 1,
      aux_sym_use_statement_repeat2,
  [186] = 2,
    ACTIONS(39), 1,
      sym_expand_symbol,
    STATE(15), 1,
      aux_sym_use_statement_repeat1,
  [193] = 1,
    ACTIONS(55), 2,
      sym_expand_symbol,
      sym_terminal_symbol,
  [198] = 1,
    ACTIONS(46), 2,
      sym_comma_symbol,
      sym_rcb_symbol,
  [203] = 2,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_string_literal,
  [210] = 2,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_string_literal,
  [217] = 2,
    ACTIONS(59), 1,
      anon_sym_nat,
    STATE(32), 1,
      sym__type,
  [224] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
  [228] = 1,
    ACTIONS(63), 1,
      sym_number,
  [232] = 1,
    ACTIONS(65), 1,
      sym_from_keyword,
  [236] = 1,
    ACTIONS(67), 1,
      sym_from_keyword,
  [240] = 1,
    ACTIONS(69), 1,
      sym_terminal_symbol,
  [244] = 1,
    ACTIONS(71), 1,
      sym__string_literal_content,
  [248] = 1,
    ACTIONS(73), 1,
      sym_terminal_symbol,
  [252] = 1,
    ACTIONS(75), 1,
      sym_equals_symbol,
  [256] = 1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
  [260] = 1,
    ACTIONS(79), 1,
      sym_terminal_symbol,
  [264] = 1,
    ACTIONS(81), 1,
      sym_terminal_symbol,
  [268] = 1,
    ACTIONS(83), 1,
      sym_semicolon_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 63,
  [SMALL_STATE(7)] = 76,
  [SMALL_STATE(8)] = 89,
  [SMALL_STATE(9)] = 102,
  [SMALL_STATE(10)] = 112,
  [SMALL_STATE(11)] = 118,
  [SMALL_STATE(12)] = 124,
  [SMALL_STATE(13)] = 130,
  [SMALL_STATE(14)] = 136,
  [SMALL_STATE(15)] = 146,
  [SMALL_STATE(16)] = 156,
  [SMALL_STATE(17)] = 166,
  [SMALL_STATE(18)] = 176,
  [SMALL_STATE(19)] = 186,
  [SMALL_STATE(20)] = 193,
  [SMALL_STATE(21)] = 198,
  [SMALL_STATE(22)] = 203,
  [SMALL_STATE(23)] = 210,
  [SMALL_STATE(24)] = 217,
  [SMALL_STATE(25)] = 224,
  [SMALL_STATE(26)] = 228,
  [SMALL_STATE(27)] = 232,
  [SMALL_STATE(28)] = 236,
  [SMALL_STATE(29)] = 240,
  [SMALL_STATE(30)] = 244,
  [SMALL_STATE(31)] = 248,
  [SMALL_STATE(32)] = 252,
  [SMALL_STATE(33)] = 256,
  [SMALL_STATE(34)] = 260,
  [SMALL_STATE(35)] = 264,
  [SMALL_STATE(36)] = 268,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, 0, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 8, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 7, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_definition, 7, 0, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat2, 2, 0, 0), SHIFT_REPEAT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat2, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, 0, 3), SHIFT_REPEAT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, 0, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, 0, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [61] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
