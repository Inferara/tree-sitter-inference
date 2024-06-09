#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_nat = 1,
  anon_sym_const = 2,
  sym_semicolon_symbol = 3,
  sym_equals_symbol = 4,
  sym_terminal_symbol = 5,
  sym__identifier_token = 6,
  sym_number = 7,
  sym_source_file = 8,
  sym__definition = 9,
  sym__type = 10,
  sym_const_definition = 11,
  sym_const_keyword = 12,
  sym_identifier = 13,
  sym__reserved_identifier = 14,
  aux_sym_source_file_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_nat] = "nat",
  [anon_sym_const] = "const",
  [sym_semicolon_symbol] = "semicolon_symbol",
  [sym_equals_symbol] = "equals_symbol",
  [sym_terminal_symbol] = "terminal_symbol",
  [sym__identifier_token] = "_identifier_token",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__type] = "_type",
  [sym_const_definition] = "const_definition",
  [sym_const_keyword] = "const_keyword",
  [sym_identifier] = "identifier",
  [sym__reserved_identifier] = "_reserved_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_nat] = anon_sym_nat,
  [anon_sym_const] = anon_sym_const,
  [sym_semicolon_symbol] = sym_semicolon_symbol,
  [sym_equals_symbol] = sym_equals_symbol,
  [sym_terminal_symbol] = sym_terminal_symbol,
  [sym__identifier_token] = sym__identifier_token,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__type] = sym__type,
  [sym_const_definition] = sym_const_definition,
  [sym_const_keyword] = sym_const_keyword,
  [sym_identifier] = sym_identifier,
  [sym__reserved_identifier] = sym__reserved_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [sym_semicolon_symbol] = {
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
  [sym__identifier_token] = {
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
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_const_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_const_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__reserved_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'c') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_nat);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_nat);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_const);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_semicolon_symbol);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_equals_symbol);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_terminal_symbol);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'a') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'n') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'o') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 's') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 't') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 't') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__identifier_token);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_nat] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [sym_semicolon_symbol] = ACTIONS(1),
    [sym_equals_symbol] = ACTIONS(1),
    [sym_terminal_symbol] = ACTIONS(1),
    [sym__identifier_token] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(8),
    [sym__definition] = STATE(2),
    [sym_const_definition] = STATE(2),
    [sym_const_keyword] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_const] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_const,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_const_keyword,
    STATE(3), 3,
      sym__definition,
      sym_const_definition,
      aux_sym_source_file_repeat1,
  [15] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_const,
    STATE(4), 1,
      sym_const_keyword,
    STATE(3), 3,
      sym__definition,
      sym_const_definition,
      aux_sym_source_file_repeat1,
  [30] = 3,
    STATE(9), 1,
      sym__reserved_identifier,
    STATE(10), 1,
      sym_identifier,
    ACTIONS(14), 2,
      anon_sym_const,
      sym__identifier_token,
  [41] = 1,
    ACTIONS(16), 2,
      anon_sym_const,
      sym__identifier_token,
  [46] = 2,
    ACTIONS(18), 1,
      anon_sym_nat,
    STATE(11), 1,
      sym__type,
  [53] = 1,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      anon_sym_const,
  [58] = 1,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
  [62] = 1,
    ACTIONS(24), 1,
      sym_semicolon_symbol,
  [66] = 1,
    ACTIONS(26), 1,
      sym_semicolon_symbol,
  [70] = 1,
    ACTIONS(28), 1,
      sym_equals_symbol,
  [74] = 1,
    ACTIONS(30), 1,
      sym_number,
  [78] = 1,
    ACTIONS(32), 1,
      sym_terminal_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 41,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 53,
  [SMALL_STATE(8)] = 58,
  [SMALL_STATE(9)] = 62,
  [SMALL_STATE(10)] = 66,
  [SMALL_STATE(11)] = 70,
  [SMALL_STATE(12)] = 74,
  [SMALL_STATE(13)] = 78,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [14] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_keyword, 1, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_definition, 7, 0, 1),
  [22] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
