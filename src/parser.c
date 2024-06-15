#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 132
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  anon_sym_nat = 1,
  anon_sym_bool = 2,
  anon_sym_LPAREN_RPAREN = 3,
  anon_sym_true = 4,
  anon_sym_false = 5,
  sym_const_keyword = 6,
  sym_use_keyword = 7,
  sym_from_keyword = 8,
  sym_context_keyword = 9,
  sym_function_keyword = 10,
  sym_return_keyword = 11,
  sym_comma_symbol = 12,
  sym_semicolon_symbol = 13,
  sym_terminal_symbol = 14,
  sym_assign_operator = 15,
  sym_expand_operator = 16,
  sym_attribute_access_operator = 17,
  sym_less_operator = 18,
  sym_greater_operator = 19,
  sym_less_equal_operator = 20,
  sym_greater_equal_operator = 21,
  sym_equals_operator = 22,
  sym_not_equals_operator = 23,
  sym_rightarrow_operator = 24,
  sym_lcb_symbol = 25,
  sym_rcb_symbol = 26,
  sym_lsb_symbol = 27,
  sym_rsb_symbol = 28,
  sym_lrb_symbol = 29,
  sym_rrb_symbol = 30,
  sym__identifier_token = 31,
  anon_sym_DOLLAR = 32,
  anon_sym_DQUOTE = 33,
  sym__string_literal_content = 34,
  sym_number = 35,
  sym_source_file = 36,
  sym__definition = 37,
  sym__statement = 38,
  sym_type = 39,
  sym__expression = 40,
  sym_variable_declaration = 41,
  sym_variable_definition = 42,
  sym_context_definition = 43,
  sym_function_definition = 44,
  sym_parameter_definition = 45,
  sym_use_statement = 46,
  sym_return_statement = 47,
  sym_binary_expression = 48,
  sym_field_access_expression = 49,
  sym_bool_literal = 50,
  sym_binary_operator = 51,
  sym_qualified_name = 52,
  sym_string_literal = 53,
  sym_identifier = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_context_definition_repeat1 = 56,
  aux_sym_function_definition_repeat1 = 57,
  aux_sym_function_definition_repeat2 = 58,
  aux_sym_use_statement_repeat1 = 59,
  aux_sym_use_statement_repeat2 = 60,
  aux_sym_qualified_name_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_nat] = "nat",
  [anon_sym_bool] = "bool",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_const_keyword] = "const_keyword",
  [sym_use_keyword] = "use_keyword",
  [sym_from_keyword] = "from_keyword",
  [sym_context_keyword] = "context_keyword",
  [sym_function_keyword] = "function_keyword",
  [sym_return_keyword] = "return_keyword",
  [sym_comma_symbol] = "comma_symbol",
  [sym_semicolon_symbol] = "semicolon_symbol",
  [sym_terminal_symbol] = "terminal_symbol",
  [sym_assign_operator] = "assign_operator",
  [sym_expand_operator] = "expand_operator",
  [sym_attribute_access_operator] = "attribute_access_operator",
  [sym_less_operator] = "less_operator",
  [sym_greater_operator] = "greater_operator",
  [sym_less_equal_operator] = "less_equal_operator",
  [sym_greater_equal_operator] = "greater_equal_operator",
  [sym_equals_operator] = "equals_operator",
  [sym_not_equals_operator] = "not_equals_operator",
  [sym_rightarrow_operator] = "rightarrow_operator",
  [sym_lcb_symbol] = "lcb_symbol",
  [sym_rcb_symbol] = "rcb_symbol",
  [sym_lsb_symbol] = "lsb_symbol",
  [sym_rsb_symbol] = "rsb_symbol",
  [sym_lrb_symbol] = "lrb_symbol",
  [sym_rrb_symbol] = "rrb_symbol",
  [sym__identifier_token] = "_identifier_token",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DQUOTE] = "\"",
  [sym__string_literal_content] = "_string_literal_content",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__statement] = "_statement",
  [sym_type] = "type",
  [sym__expression] = "_expression",
  [sym_variable_declaration] = "variable_declaration",
  [sym_variable_definition] = "variable_definition",
  [sym_context_definition] = "context_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_definition] = "parameter_definition",
  [sym_use_statement] = "use_statement",
  [sym_return_statement] = "return_statement",
  [sym_binary_expression] = "binary_expression",
  [sym_field_access_expression] = "field_access_expression",
  [sym_bool_literal] = "bool_literal",
  [sym_binary_operator] = "binary_operator",
  [sym_qualified_name] = "qualified_name",
  [sym_string_literal] = "string_literal",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_context_definition_repeat1] = "context_definition_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_function_definition_repeat2] = "function_definition_repeat2",
  [aux_sym_use_statement_repeat1] = "use_statement_repeat1",
  [aux_sym_use_statement_repeat2] = "use_statement_repeat2",
  [aux_sym_qualified_name_repeat1] = "qualified_name_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_nat] = anon_sym_nat,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_const_keyword] = sym_const_keyword,
  [sym_use_keyword] = sym_use_keyword,
  [sym_from_keyword] = sym_from_keyword,
  [sym_context_keyword] = sym_context_keyword,
  [sym_function_keyword] = sym_function_keyword,
  [sym_return_keyword] = sym_return_keyword,
  [sym_comma_symbol] = sym_comma_symbol,
  [sym_semicolon_symbol] = sym_semicolon_symbol,
  [sym_terminal_symbol] = sym_terminal_symbol,
  [sym_assign_operator] = sym_assign_operator,
  [sym_expand_operator] = sym_expand_operator,
  [sym_attribute_access_operator] = sym_attribute_access_operator,
  [sym_less_operator] = sym_less_operator,
  [sym_greater_operator] = sym_greater_operator,
  [sym_less_equal_operator] = sym_less_equal_operator,
  [sym_greater_equal_operator] = sym_greater_equal_operator,
  [sym_equals_operator] = sym_equals_operator,
  [sym_not_equals_operator] = sym_not_equals_operator,
  [sym_rightarrow_operator] = sym_rightarrow_operator,
  [sym_lcb_symbol] = sym_lcb_symbol,
  [sym_rcb_symbol] = sym_rcb_symbol,
  [sym_lsb_symbol] = sym_lsb_symbol,
  [sym_rsb_symbol] = sym_rsb_symbol,
  [sym_lrb_symbol] = sym_lrb_symbol,
  [sym_rrb_symbol] = sym_rrb_symbol,
  [sym__identifier_token] = sym__identifier_token,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__string_literal_content] = sym__string_literal_content,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__statement] = sym__statement,
  [sym_type] = sym_type,
  [sym__expression] = sym__expression,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_variable_definition] = sym_variable_definition,
  [sym_context_definition] = sym_context_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_definition] = sym_parameter_definition,
  [sym_use_statement] = sym_use_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_binary_expression] = sym_binary_expression,
  [sym_field_access_expression] = sym_field_access_expression,
  [sym_bool_literal] = sym_bool_literal,
  [sym_binary_operator] = sym_binary_operator,
  [sym_qualified_name] = sym_qualified_name,
  [sym_string_literal] = sym_string_literal,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_context_definition_repeat1] = aux_sym_context_definition_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_function_definition_repeat2] = aux_sym_function_definition_repeat2,
  [aux_sym_use_statement_repeat1] = aux_sym_use_statement_repeat1,
  [aux_sym_use_statement_repeat2] = aux_sym_use_statement_repeat2,
  [aux_sym_qualified_name_repeat1] = aux_sym_qualified_name_repeat1,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
  [sym_return_keyword] = {
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
  [sym_terminal_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_expand_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_access_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_less_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_less_equal_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_equal_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_equals_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_not_equals_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_rightarrow_operator] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
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
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_field_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
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
  [aux_sym_qualified_name_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_expression = 1,
  field_field = 2,
  field_left = 3,
  field_name = 4,
  field_object = 5,
  field_right = 6,
  field_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_expression] = "expression",
  [field_field] = "field",
  [field_left] = "left",
  [field_name] = "name",
  [field_object] = "object",
  [field_right] = "right",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_expression, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 0},
    {field_name, 1, .inherited = true},
  [4] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [6] =
    {field_name, 0},
    {field_type, 2},
  [8] =
    {field_name, 1},
    {field_type, 3},
  [10] =
    {field_name, 2, .inherited = true},
  [11] =
    {field_field, 2},
    {field_object, 0},
  [13] =
    {field_left, 0},
    {field_right, 2},
  [15] =
    {field_name, 1},
    {field_type, 5},
  [17] =
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
  [10] = 9,
  [11] = 7,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 17,
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
  [39] = 38,
  [40] = 37,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 41,
  [47] = 45,
  [48] = 44,
  [49] = 43,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 35,
  [55] = 33,
  [56] = 24,
  [57] = 53,
  [58] = 22,
  [59] = 25,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 60,
  [66] = 61,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 67,
  [71] = 71,
  [72] = 72,
  [73] = 63,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 31,
  [80] = 29,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 83,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 81,
  [89] = 85,
  [90] = 32,
  [91] = 91,
  [92] = 34,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 94,
  [101] = 95,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 104,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 110,
  [119] = 103,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 116,
  [124] = 105,
  [125] = 112,
  [126] = 107,
  [127] = 120,
  [128] = 128,
  [129] = 129,
  [130] = 106,
  [131] = 115,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      ADVANCE_MAP(
        '!', 7,
        '"', 107,
        '$', 106,
        '(', 78,
        ')', 79,
        ',', 59,
        '-', 8,
        '.', 66,
        ':', 61,
        ';', 62,
        '<', 67,
        '=', 64,
        '>', 68,
        '[', 76,
        ']', 77,
        'b', 24,
        'c', 21,
        'f', 9,
        'n', 10,
        'r', 15,
        't', 25,
        'u', 27,
        '{', 74,
        '}', 75,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 't') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '{') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == '}') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(65);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(73);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 37:
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(108);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      ADVANCE_MAP(
        '$', 106,
        ':', 6,
        ';', 62,
        '@', 37,
        'c', 91,
        'f', 87,
        'r', 81,
        'u', 95,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_nat);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_const_keyword);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_const_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_use_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_from_keyword);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_context_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_function_keyword);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_function_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_return_keyword);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_return_keyword);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comma_symbol);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_semicolon_symbol);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_semicolon_symbol);
      if (lookahead == ':') ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_terminal_symbol);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_assign_operator);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_assign_operator);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_expand_operator);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_attribute_access_operator);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_less_operator);
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_greater_operator);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_less_equal_operator);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_greater_equal_operator);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_equals_operator);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_not_equals_operator);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_rightarrow_operator);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_lcb_symbol);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_rcb_symbol);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_lsb_symbol);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_rsb_symbol);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_lrb_symbol);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_rrb_symbol);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'a') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'e') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'e') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'e') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'e') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'e') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'l') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'n') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'n') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'n') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'n') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'o') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'o') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'r') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'r') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 's') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == 't') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 's') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 's') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 't') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 't') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 't') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'u') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'u') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier_token);
      if (lookahead == 'x') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier_token);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 39},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 39},
  [25] = {.lex_state = 39},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 39},
  [32] = {.lex_state = 39},
  [33] = {.lex_state = 39},
  [34] = {.lex_state = 39},
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 39},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 39},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 39},
  [88] = {.lex_state = 39},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 39},
  [98] = {.lex_state = 39},
  [99] = {.lex_state = 39},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 38},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_nat] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_const_keyword] = ACTIONS(1),
    [sym_use_keyword] = ACTIONS(1),
    [sym_from_keyword] = ACTIONS(1),
    [sym_context_keyword] = ACTIONS(1),
    [sym_function_keyword] = ACTIONS(1),
    [sym_return_keyword] = ACTIONS(1),
    [sym_comma_symbol] = ACTIONS(1),
    [sym_semicolon_symbol] = ACTIONS(1),
    [sym_terminal_symbol] = ACTIONS(1),
    [sym_assign_operator] = ACTIONS(1),
    [sym_expand_operator] = ACTIONS(1),
    [sym_attribute_access_operator] = ACTIONS(1),
    [sym_less_operator] = ACTIONS(1),
    [sym_greater_operator] = ACTIONS(1),
    [sym_less_equal_operator] = ACTIONS(1),
    [sym_greater_equal_operator] = ACTIONS(1),
    [sym_equals_operator] = ACTIONS(1),
    [sym_not_equals_operator] = ACTIONS(1),
    [sym_rightarrow_operator] = ACTIONS(1),
    [sym_lcb_symbol] = ACTIONS(1),
    [sym_rcb_symbol] = ACTIONS(1),
    [sym_lsb_symbol] = ACTIONS(1),
    [sym_rsb_symbol] = ACTIONS(1),
    [sym_lrb_symbol] = ACTIONS(1),
    [sym_rrb_symbol] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(111),
    [sym__definition] = STATE(3),
    [sym__statement] = STATE(3),
    [sym_variable_declaration] = STATE(113),
    [sym_variable_definition] = STATE(3),
    [sym_context_definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_use_statement] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym_qualified_name] = STATE(6),
    [sym_identifier] = STATE(117),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_const_keyword] = ACTIONS(5),
    [sym_use_keyword] = ACTIONS(7),
    [sym_context_keyword] = ACTIONS(9),
    [sym_function_keyword] = ACTIONS(11),
    [sym_return_keyword] = ACTIONS(13),
    [sym__identifier_token] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_const_keyword,
    ACTIONS(24), 1,
      sym_use_keyword,
    ACTIONS(27), 1,
      sym_context_keyword,
    ACTIONS(30), 1,
      sym_function_keyword,
    ACTIONS(33), 1,
      sym_return_keyword,
    ACTIONS(36), 1,
      sym__identifier_token,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    STATE(6), 1,
      sym_qualified_name,
    STATE(113), 1,
      sym_variable_declaration,
    STATE(117), 1,
      sym_identifier,
    STATE(2), 8,
      sym__definition,
      sym__statement,
      sym_variable_definition,
      sym_context_definition,
      sym_function_definition,
      sym_use_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [44] = 12,
    ACTIONS(5), 1,
      sym_const_keyword,
    ACTIONS(7), 1,
      sym_use_keyword,
    ACTIONS(9), 1,
      sym_context_keyword,
    ACTIONS(11), 1,
      sym_function_keyword,
    ACTIONS(13), 1,
      sym_return_keyword,
    ACTIONS(15), 1,
      sym__identifier_token,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_qualified_name,
    STATE(113), 1,
      sym_variable_declaration,
    STATE(117), 1,
      sym_identifier,
    STATE(2), 8,
      sym__definition,
      sym__statement,
      sym_variable_definition,
      sym_context_definition,
      sym_function_definition,
      sym_use_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [88] = 4,
    ACTIONS(48), 1,
      sym_attribute_access_operator,
    STATE(91), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(46), 4,
      sym_semicolon_symbol,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(44), 10,
      sym_comma_symbol,
      sym_terminal_symbol,
      sym_expand_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_lcb_symbol,
      sym_rcb_symbol,
      sym_lrb_symbol,
  [113] = 2,
    ACTIONS(52), 4,
      sym_semicolon_symbol,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(50), 11,
      sym_comma_symbol,
      sym_terminal_symbol,
      sym_expand_operator,
      sym_attribute_access_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_lcb_symbol,
      sym_rcb_symbol,
      sym_lrb_symbol,
  [133] = 2,
    ACTIONS(46), 4,
      sym_semicolon_symbol,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(44), 11,
      sym_comma_symbol,
      sym_terminal_symbol,
      sym_expand_operator,
      sym_attribute_access_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_lcb_symbol,
      sym_rcb_symbol,
      sym_lrb_symbol,
  [153] = 8,
    ACTIONS(15), 1,
      sym__identifier_token,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_number,
    STATE(6), 1,
      sym_qualified_name,
    STATE(16), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 5,
      sym__expression,
      sym_binary_expression,
      sym_field_access_expression,
      sym_bool_literal,
      sym_string_literal,
  [183] = 8,
    ACTIONS(15), 1,
      sym__identifier_token,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(60), 1,
      sym_number,
    STATE(6), 1,
      sym_qualified_name,
    STATE(15), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 5,
      sym__expression,
      sym_binary_expression,
      sym_field_access_expression,
      sym_bool_literal,
      sym_string_literal,
  [213] = 8,
    ACTIONS(15), 1,
      sym__identifier_token,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    STATE(6), 1,
      sym_qualified_name,
    STATE(16), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 5,
      sym__expression,
      sym_binary_expression,
      sym_field_access_expression,
      sym_bool_literal,
      sym_string_literal,
  [243] = 8,
    ACTIONS(15), 1,
      sym__identifier_token,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      sym_number,
    STATE(6), 1,
      sym_qualified_name,
    STATE(16), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 5,
      sym__expression,
      sym_binary_expression,
      sym_field_access_expression,
      sym_bool_literal,
      sym_string_literal,
  [273] = 8,
    ACTIONS(15), 1,
      sym__identifier_token,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      sym_number,
    STATE(6), 1,
      sym_qualified_name,
    STATE(16), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 5,
      sym__expression,
      sym_binary_expression,
      sym_field_access_expression,
      sym_bool_literal,
      sym_string_literal,
  [303] = 9,
    ACTIONS(5), 1,
      sym_const_keyword,
    ACTIONS(15), 1,
      sym__identifier_token,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(68), 1,
      sym_function_keyword,
    ACTIONS(70), 1,
      sym_rcb_symbol,
    STATE(6), 1,
      sym_qualified_name,
    STATE(104), 1,
      sym_variable_declaration,
    STATE(117), 1,
      sym_identifier,
    STATE(14), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [333] = 9,
    ACTIONS(5), 1,
      sym_const_keyword,
    ACTIONS(15), 1,
      sym__identifier_token,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(68), 1,
      sym_function_keyword,
    ACTIONS(72), 1,
      sym_rcb_symbol,
    STATE(6), 1,
      sym_qualified_name,
    STATE(104), 1,
      sym_variable_declaration,
    STATE(117), 1,
      sym_identifier,
    STATE(12), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [363] = 9,
    ACTIONS(74), 1,
      sym_const_keyword,
    ACTIONS(77), 1,
      sym_function_keyword,
    ACTIONS(80), 1,
      sym_rcb_symbol,
    ACTIONS(82), 1,
      sym__identifier_token,
    ACTIONS(85), 1,
      anon_sym_DOLLAR,
    STATE(6), 1,
      sym_qualified_name,
    STATE(104), 1,
      sym_variable_declaration,
    STATE(117), 1,
      sym_identifier,
    STATE(14), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [393] = 4,
    ACTIONS(92), 1,
      sym_attribute_access_operator,
    STATE(8), 1,
      sym_binary_operator,
    ACTIONS(90), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(88), 5,
      sym_terminal_symbol,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [412] = 4,
    ACTIONS(92), 1,
      sym_attribute_access_operator,
    STATE(8), 1,
      sym_binary_operator,
    ACTIONS(90), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(88), 5,
      sym_terminal_symbol,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [431] = 4,
    ACTIONS(94), 1,
      sym_terminal_symbol,
    STATE(8), 1,
      sym_binary_operator,
    ACTIONS(96), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(98), 4,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [449] = 4,
    ACTIONS(100), 1,
      sym_terminal_symbol,
    STATE(8), 1,
      sym_binary_operator,
    ACTIONS(96), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(98), 4,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [467] = 4,
    ACTIONS(102), 1,
      sym_terminal_symbol,
    STATE(8), 1,
      sym_binary_operator,
    ACTIONS(96), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(98), 4,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [485] = 4,
    ACTIONS(104), 1,
      sym_terminal_symbol,
    STATE(8), 1,
      sym_binary_operator,
    ACTIONS(96), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(98), 4,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [503] = 4,
    ACTIONS(106), 1,
      sym_terminal_symbol,
    STATE(8), 1,
      sym_binary_operator,
    ACTIONS(96), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(98), 4,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [521] = 2,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(110), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym__identifier_token,
  [534] = 2,
    ACTIONS(114), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(112), 5,
      sym_terminal_symbol,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [547] = 2,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(118), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym__identifier_token,
  [560] = 2,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(122), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym__identifier_token,
  [573] = 2,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(126), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym__identifier_token,
  [586] = 2,
    ACTIONS(130), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(128), 5,
      sym_terminal_symbol,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [599] = 2,
    ACTIONS(134), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(132), 5,
      sym_terminal_symbol,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [612] = 2,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(138), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym__identifier_token,
  [625] = 2,
    ACTIONS(142), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(140), 5,
      sym_terminal_symbol,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [638] = 2,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(146), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym__identifier_token,
  [651] = 2,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(150), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym__identifier_token,
  [664] = 2,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(154), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym__identifier_token,
  [677] = 2,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(158), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym__identifier_token,
  [690] = 2,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(162), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym__identifier_token,
  [703] = 2,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(166), 6,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym__identifier_token,
  [716] = 6,
    ACTIONS(168), 1,
      sym_rrb_symbol,
    STATE(6), 1,
      sym_qualified_name,
    STATE(38), 1,
      aux_sym_function_definition_repeat1,
    STATE(77), 1,
      sym_parameter_definition,
    STATE(114), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [736] = 6,
    ACTIONS(170), 1,
      sym_rrb_symbol,
    STATE(6), 1,
      sym_qualified_name,
    STATE(42), 1,
      aux_sym_function_definition_repeat1,
    STATE(77), 1,
      sym_parameter_definition,
    STATE(114), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [756] = 6,
    ACTIONS(172), 1,
      sym_rrb_symbol,
    STATE(6), 1,
      sym_qualified_name,
    STATE(42), 1,
      aux_sym_function_definition_repeat1,
    STATE(77), 1,
      sym_parameter_definition,
    STATE(114), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [776] = 6,
    ACTIONS(174), 1,
      sym_rrb_symbol,
    STATE(6), 1,
      sym_qualified_name,
    STATE(39), 1,
      aux_sym_function_definition_repeat1,
    STATE(77), 1,
      sym_parameter_definition,
    STATE(114), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [796] = 4,
    ACTIONS(176), 1,
      sym_use_keyword,
    ACTIONS(178), 1,
      sym_return_keyword,
    ACTIONS(180), 1,
      sym_rcb_symbol,
    STATE(47), 4,
      sym__statement,
      sym_use_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
  [812] = 6,
    ACTIONS(182), 1,
      sym_rrb_symbol,
    STATE(6), 1,
      sym_qualified_name,
    STATE(42), 1,
      aux_sym_function_definition_repeat1,
    STATE(77), 1,
      sym_parameter_definition,
    STATE(114), 1,
      sym_identifier,
    ACTIONS(184), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [832] = 4,
    ACTIONS(176), 1,
      sym_use_keyword,
    ACTIONS(178), 1,
      sym_return_keyword,
    ACTIONS(187), 1,
      sym_rcb_symbol,
    STATE(50), 4,
      sym__statement,
      sym_use_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
  [848] = 4,
    ACTIONS(176), 1,
      sym_use_keyword,
    ACTIONS(178), 1,
      sym_return_keyword,
    ACTIONS(189), 1,
      sym_rcb_symbol,
    STATE(43), 4,
      sym__statement,
      sym_use_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
  [864] = 4,
    ACTIONS(176), 1,
      sym_use_keyword,
    ACTIONS(178), 1,
      sym_return_keyword,
    ACTIONS(191), 1,
      sym_rcb_symbol,
    STATE(50), 4,
      sym__statement,
      sym_use_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
  [880] = 4,
    ACTIONS(176), 1,
      sym_use_keyword,
    ACTIONS(178), 1,
      sym_return_keyword,
    ACTIONS(193), 1,
      sym_rcb_symbol,
    STATE(45), 4,
      sym__statement,
      sym_use_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
  [896] = 4,
    ACTIONS(176), 1,
      sym_use_keyword,
    ACTIONS(178), 1,
      sym_return_keyword,
    ACTIONS(195), 1,
      sym_rcb_symbol,
    STATE(50), 4,
      sym__statement,
      sym_use_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
  [912] = 4,
    ACTIONS(176), 1,
      sym_use_keyword,
    ACTIONS(178), 1,
      sym_return_keyword,
    ACTIONS(197), 1,
      sym_rcb_symbol,
    STATE(49), 4,
      sym__statement,
      sym_use_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
  [928] = 4,
    ACTIONS(176), 1,
      sym_use_keyword,
    ACTIONS(178), 1,
      sym_return_keyword,
    ACTIONS(199), 1,
      sym_rcb_symbol,
    STATE(50), 4,
      sym__statement,
      sym_use_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
  [944] = 4,
    ACTIONS(201), 1,
      sym_use_keyword,
    ACTIONS(204), 1,
      sym_return_keyword,
    ACTIONS(207), 1,
      sym_rcb_symbol,
    STATE(50), 4,
      sym__statement,
      sym_use_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
  [960] = 2,
    ACTIONS(209), 3,
      anon_sym_true,
      anon_sym_false,
      sym__identifier_token,
    ACTIONS(211), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_number,
  [971] = 1,
    ACTIONS(213), 6,
      sym_comma_symbol,
      sym_assign_operator,
      sym_lcb_symbol,
      sym_rrb_symbol,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [980] = 4,
    ACTIONS(215), 1,
      sym_lcb_symbol,
    STATE(6), 1,
      sym_qualified_name,
    STATE(98), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [994] = 2,
    ACTIONS(160), 2,
      sym_rcb_symbol,
      anon_sym_DOLLAR,
    ACTIONS(162), 3,
      sym_const_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [1004] = 2,
    ACTIONS(152), 2,
      sym_rcb_symbol,
      anon_sym_DOLLAR,
    ACTIONS(154), 3,
      sym_const_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [1014] = 2,
    ACTIONS(116), 2,
      sym_rcb_symbol,
      anon_sym_DOLLAR,
    ACTIONS(118), 3,
      sym_const_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [1024] = 4,
    ACTIONS(217), 1,
      sym_lcb_symbol,
    STATE(6), 1,
      sym_qualified_name,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [1038] = 2,
    ACTIONS(108), 2,
      sym_rcb_symbol,
      anon_sym_DOLLAR,
    ACTIONS(110), 3,
      sym_const_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [1048] = 2,
    ACTIONS(120), 2,
      sym_rcb_symbol,
      anon_sym_DOLLAR,
    ACTIONS(122), 3,
      sym_const_keyword,
      sym_function_keyword,
      sym__identifier_token,
  [1058] = 3,
    STATE(6), 1,
      sym_qualified_name,
    STATE(89), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [1069] = 2,
    STATE(123), 1,
      sym_type,
    ACTIONS(219), 3,
      anon_sym_nat,
      anon_sym_bool,
      anon_sym_LPAREN_RPAREN,
  [1078] = 2,
    STATE(109), 1,
      sym_type,
    ACTIONS(219), 3,
      anon_sym_nat,
      anon_sym_bool,
      anon_sym_LPAREN_RPAREN,
  [1087] = 3,
    STATE(6), 1,
      sym_qualified_name,
    STATE(130), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [1098] = 3,
    STATE(6), 1,
      sym_qualified_name,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [1109] = 3,
    STATE(6), 1,
      sym_qualified_name,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [1120] = 2,
    STATE(116), 1,
      sym_type,
    ACTIONS(219), 3,
      anon_sym_nat,
      anon_sym_bool,
      anon_sym_LPAREN_RPAREN,
  [1129] = 2,
    STATE(115), 1,
      sym_type,
    ACTIONS(219), 3,
      anon_sym_nat,
      anon_sym_bool,
      anon_sym_LPAREN_RPAREN,
  [1138] = 3,
    STATE(6), 1,
      sym_qualified_name,
    STATE(96), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [1149] = 3,
    STATE(6), 1,
      sym_qualified_name,
    STATE(128), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [1160] = 2,
    STATE(131), 1,
      sym_type,
    ACTIONS(219), 3,
      anon_sym_nat,
      anon_sym_bool,
      anon_sym_LPAREN_RPAREN,
  [1169] = 3,
    STATE(6), 1,
      sym_qualified_name,
    STATE(102), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [1180] = 2,
    STATE(78), 1,
      sym_type,
    ACTIONS(219), 3,
      anon_sym_nat,
      anon_sym_bool,
      anon_sym_LPAREN_RPAREN,
  [1189] = 3,
    STATE(6), 1,
      sym_qualified_name,
    STATE(106), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [1200] = 3,
    STATE(6), 1,
      sym_qualified_name,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [1211] = 3,
    STATE(6), 1,
      sym_qualified_name,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [1222] = 2,
    STATE(108), 1,
      sym_type,
    ACTIONS(219), 3,
      anon_sym_nat,
      anon_sym_bool,
      anon_sym_LPAREN_RPAREN,
  [1231] = 2,
    ACTIONS(221), 1,
      sym_comma_symbol,
    ACTIONS(223), 3,
      sym_rrb_symbol,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [1240] = 1,
    ACTIONS(225), 4,
      sym_comma_symbol,
      sym_rrb_symbol,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [1247] = 1,
    ACTIONS(144), 3,
      sym_use_keyword,
      sym_return_keyword,
      sym_rcb_symbol,
  [1253] = 1,
    ACTIONS(136), 3,
      sym_use_keyword,
      sym_return_keyword,
      sym_rcb_symbol,
  [1259] = 3,
    ACTIONS(227), 1,
      sym_terminal_symbol,
    ACTIONS(229), 1,
      sym_expand_operator,
    STATE(87), 1,
      aux_sym_use_statement_repeat1,
  [1269] = 1,
    ACTIONS(182), 3,
      sym_rrb_symbol,
      sym__identifier_token,
      anon_sym_DOLLAR,
  [1275] = 3,
    ACTIONS(231), 1,
      sym_comma_symbol,
    ACTIONS(233), 1,
      sym_rcb_symbol,
    STATE(86), 1,
      aux_sym_use_statement_repeat2,
  [1285] = 3,
    ACTIONS(231), 1,
      sym_comma_symbol,
    ACTIONS(235), 1,
      sym_rcb_symbol,
    STATE(86), 1,
      aux_sym_use_statement_repeat2,
  [1295] = 3,
    ACTIONS(231), 1,
      sym_comma_symbol,
    ACTIONS(237), 1,
      sym_rcb_symbol,
    STATE(84), 1,
      aux_sym_use_statement_repeat2,
  [1305] = 3,
    ACTIONS(239), 1,
      sym_comma_symbol,
    ACTIONS(242), 1,
      sym_rcb_symbol,
    STATE(86), 1,
      aux_sym_use_statement_repeat2,
  [1315] = 3,
    ACTIONS(244), 1,
      sym_terminal_symbol,
    ACTIONS(246), 1,
      sym_expand_operator,
    STATE(87), 1,
      aux_sym_use_statement_repeat1,
  [1325] = 3,
    ACTIONS(229), 1,
      sym_expand_operator,
    ACTIONS(249), 1,
      sym_terminal_symbol,
    STATE(87), 1,
      aux_sym_use_statement_repeat1,
  [1335] = 3,
    ACTIONS(231), 1,
      sym_comma_symbol,
    ACTIONS(251), 1,
      sym_rcb_symbol,
    STATE(83), 1,
      aux_sym_use_statement_repeat2,
  [1345] = 1,
    ACTIONS(148), 3,
      sym_use_keyword,
      sym_return_keyword,
      sym_rcb_symbol,
  [1351] = 3,
    ACTIONS(48), 1,
      sym_attribute_access_operator,
    ACTIONS(253), 1,
      sym_terminal_symbol,
    STATE(93), 1,
      aux_sym_qualified_name_repeat1,
  [1361] = 1,
    ACTIONS(156), 3,
      sym_use_keyword,
      sym_return_keyword,
      sym_rcb_symbol,
  [1367] = 3,
    ACTIONS(255), 1,
      sym_terminal_symbol,
    ACTIONS(257), 1,
      sym_attribute_access_operator,
    STATE(93), 1,
      aux_sym_qualified_name_repeat1,
  [1377] = 2,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    STATE(118), 1,
      sym_string_literal,
  [1384] = 2,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      sym_string_literal,
  [1391] = 1,
    ACTIONS(260), 2,
      sym_terminal_symbol,
      sym_attribute_access_operator,
  [1396] = 2,
    ACTIONS(229), 1,
      sym_expand_operator,
    STATE(81), 1,
      aux_sym_use_statement_repeat1,
  [1403] = 2,
    ACTIONS(229), 1,
      sym_expand_operator,
    STATE(88), 1,
      aux_sym_use_statement_repeat1,
  [1410] = 1,
    ACTIONS(262), 2,
      sym_terminal_symbol,
      sym_expand_operator,
  [1415] = 2,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      sym_string_literal,
  [1422] = 2,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      sym_string_literal,
  [1429] = 1,
    ACTIONS(242), 2,
      sym_comma_symbol,
      sym_rcb_symbol,
  [1434] = 1,
    ACTIONS(264), 1,
      sym_from_keyword,
  [1438] = 1,
    ACTIONS(266), 1,
      sym_assign_operator,
  [1442] = 1,
    ACTIONS(268), 1,
      sym_terminal_symbol,
  [1446] = 1,
    ACTIONS(270), 1,
      sym_lrb_symbol,
  [1450] = 1,
    ACTIONS(272), 1,
      sym_rightarrow_operator,
  [1454] = 1,
    ACTIONS(274), 1,
      sym_assign_operator,
  [1458] = 1,
    ACTIONS(276), 1,
      sym_assign_operator,
  [1462] = 1,
    ACTIONS(278), 1,
      sym_terminal_symbol,
  [1466] = 1,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
  [1470] = 1,
    ACTIONS(282), 1,
      sym_rightarrow_operator,
  [1474] = 1,
    ACTIONS(284), 1,
      sym_assign_operator,
  [1478] = 1,
    ACTIONS(286), 1,
      sym_semicolon_symbol,
  [1482] = 1,
    ACTIONS(288), 1,
      sym_lcb_symbol,
  [1486] = 1,
    ACTIONS(290), 1,
      sym_lcb_symbol,
  [1490] = 1,
    ACTIONS(292), 1,
      sym_semicolon_symbol,
  [1494] = 1,
    ACTIONS(294), 1,
      sym_terminal_symbol,
  [1498] = 1,
    ACTIONS(296), 1,
      sym_from_keyword,
  [1502] = 1,
    ACTIONS(298), 1,
      sym_from_keyword,
  [1506] = 1,
    ACTIONS(300), 1,
      sym__string_literal_content,
  [1510] = 1,
    ACTIONS(302), 1,
      sym_semicolon_symbol,
  [1514] = 1,
    ACTIONS(304), 1,
      sym_lcb_symbol,
  [1518] = 1,
    ACTIONS(306), 1,
      sym_terminal_symbol,
  [1522] = 1,
    ACTIONS(308), 1,
      sym_rightarrow_operator,
  [1526] = 1,
    ACTIONS(310), 1,
      sym_rightarrow_operator,
  [1530] = 1,
    ACTIONS(312), 1,
      sym_from_keyword,
  [1534] = 1,
    ACTIONS(314), 1,
      sym_lcb_symbol,
  [1538] = 1,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
  [1542] = 1,
    ACTIONS(318), 1,
      sym_lrb_symbol,
  [1546] = 1,
    ACTIONS(320), 1,
      sym_lcb_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 113,
  [SMALL_STATE(6)] = 133,
  [SMALL_STATE(7)] = 153,
  [SMALL_STATE(8)] = 183,
  [SMALL_STATE(9)] = 213,
  [SMALL_STATE(10)] = 243,
  [SMALL_STATE(11)] = 273,
  [SMALL_STATE(12)] = 303,
  [SMALL_STATE(13)] = 333,
  [SMALL_STATE(14)] = 363,
  [SMALL_STATE(15)] = 393,
  [SMALL_STATE(16)] = 412,
  [SMALL_STATE(17)] = 431,
  [SMALL_STATE(18)] = 449,
  [SMALL_STATE(19)] = 467,
  [SMALL_STATE(20)] = 485,
  [SMALL_STATE(21)] = 503,
  [SMALL_STATE(22)] = 521,
  [SMALL_STATE(23)] = 534,
  [SMALL_STATE(24)] = 547,
  [SMALL_STATE(25)] = 560,
  [SMALL_STATE(26)] = 573,
  [SMALL_STATE(27)] = 586,
  [SMALL_STATE(28)] = 599,
  [SMALL_STATE(29)] = 612,
  [SMALL_STATE(30)] = 625,
  [SMALL_STATE(31)] = 638,
  [SMALL_STATE(32)] = 651,
  [SMALL_STATE(33)] = 664,
  [SMALL_STATE(34)] = 677,
  [SMALL_STATE(35)] = 690,
  [SMALL_STATE(36)] = 703,
  [SMALL_STATE(37)] = 716,
  [SMALL_STATE(38)] = 736,
  [SMALL_STATE(39)] = 756,
  [SMALL_STATE(40)] = 776,
  [SMALL_STATE(41)] = 796,
  [SMALL_STATE(42)] = 812,
  [SMALL_STATE(43)] = 832,
  [SMALL_STATE(44)] = 848,
  [SMALL_STATE(45)] = 864,
  [SMALL_STATE(46)] = 880,
  [SMALL_STATE(47)] = 896,
  [SMALL_STATE(48)] = 912,
  [SMALL_STATE(49)] = 928,
  [SMALL_STATE(50)] = 944,
  [SMALL_STATE(51)] = 960,
  [SMALL_STATE(52)] = 971,
  [SMALL_STATE(53)] = 980,
  [SMALL_STATE(54)] = 994,
  [SMALL_STATE(55)] = 1004,
  [SMALL_STATE(56)] = 1014,
  [SMALL_STATE(57)] = 1024,
  [SMALL_STATE(58)] = 1038,
  [SMALL_STATE(59)] = 1048,
  [SMALL_STATE(60)] = 1058,
  [SMALL_STATE(61)] = 1069,
  [SMALL_STATE(62)] = 1078,
  [SMALL_STATE(63)] = 1087,
  [SMALL_STATE(64)] = 1098,
  [SMALL_STATE(65)] = 1109,
  [SMALL_STATE(66)] = 1120,
  [SMALL_STATE(67)] = 1129,
  [SMALL_STATE(68)] = 1138,
  [SMALL_STATE(69)] = 1149,
  [SMALL_STATE(70)] = 1160,
  [SMALL_STATE(71)] = 1169,
  [SMALL_STATE(72)] = 1180,
  [SMALL_STATE(73)] = 1189,
  [SMALL_STATE(74)] = 1200,
  [SMALL_STATE(75)] = 1211,
  [SMALL_STATE(76)] = 1222,
  [SMALL_STATE(77)] = 1231,
  [SMALL_STATE(78)] = 1240,
  [SMALL_STATE(79)] = 1247,
  [SMALL_STATE(80)] = 1253,
  [SMALL_STATE(81)] = 1259,
  [SMALL_STATE(82)] = 1269,
  [SMALL_STATE(83)] = 1275,
  [SMALL_STATE(84)] = 1285,
  [SMALL_STATE(85)] = 1295,
  [SMALL_STATE(86)] = 1305,
  [SMALL_STATE(87)] = 1315,
  [SMALL_STATE(88)] = 1325,
  [SMALL_STATE(89)] = 1335,
  [SMALL_STATE(90)] = 1345,
  [SMALL_STATE(91)] = 1351,
  [SMALL_STATE(92)] = 1361,
  [SMALL_STATE(93)] = 1367,
  [SMALL_STATE(94)] = 1377,
  [SMALL_STATE(95)] = 1384,
  [SMALL_STATE(96)] = 1391,
  [SMALL_STATE(97)] = 1396,
  [SMALL_STATE(98)] = 1403,
  [SMALL_STATE(99)] = 1410,
  [SMALL_STATE(100)] = 1415,
  [SMALL_STATE(101)] = 1422,
  [SMALL_STATE(102)] = 1429,
  [SMALL_STATE(103)] = 1434,
  [SMALL_STATE(104)] = 1438,
  [SMALL_STATE(105)] = 1442,
  [SMALL_STATE(106)] = 1446,
  [SMALL_STATE(107)] = 1450,
  [SMALL_STATE(108)] = 1454,
  [SMALL_STATE(109)] = 1458,
  [SMALL_STATE(110)] = 1462,
  [SMALL_STATE(111)] = 1466,
  [SMALL_STATE(112)] = 1470,
  [SMALL_STATE(113)] = 1474,
  [SMALL_STATE(114)] = 1478,
  [SMALL_STATE(115)] = 1482,
  [SMALL_STATE(116)] = 1486,
  [SMALL_STATE(117)] = 1490,
  [SMALL_STATE(118)] = 1494,
  [SMALL_STATE(119)] = 1498,
  [SMALL_STATE(120)] = 1502,
  [SMALL_STATE(121)] = 1506,
  [SMALL_STATE(122)] = 1510,
  [SMALL_STATE(123)] = 1514,
  [SMALL_STATE(124)] = 1518,
  [SMALL_STATE(125)] = 1522,
  [SMALL_STATE(126)] = 1526,
  [SMALL_STATE(127)] = 1530,
  [SMALL_STATE(128)] = 1534,
  [SMALL_STATE(129)] = 1538,
  [SMALL_STATE(130)] = 1542,
  [SMALL_STATE(131)] = 1546,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3, 0, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3, 0, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, 0, 11),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9, 0, 11),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access_expression, 3, 0, 8),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access_expression, 3, 0, 8),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, 0, 11),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 10, 0, 11),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 5, 0, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_definition, 5, 0, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, 0, 7),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 4, 0, 7),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 4, 0, 9),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 4, 0, 9),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 7, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 7, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 8, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 8, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 10),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8, 0, 10),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, 0, 10),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9, 0, 10),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 4, 0, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_definition, 4, 0, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(57),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(11),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 3, 0, 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat2, 2, 0, 0), SHIFT_REPEAT(71),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat2, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, 0, 4),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, 0, 4), SHIFT_REPEAT(74),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2, 0, 4),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2, 0, 4), SHIFT_REPEAT(68),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2, 0, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, 0, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 6),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [280] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
