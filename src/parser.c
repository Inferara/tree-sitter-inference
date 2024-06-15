#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 136
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 13

enum ts_symbol_identifiers {
  anon_sym_i32 = 1,
  anon_sym_i64 = 2,
  anon_sym_u32 = 3,
  anon_sym_u64 = 4,
  anon_sym_bool = 5,
  anon_sym_LPAREN_RPAREN = 6,
  anon_sym_ctx = 7,
  anon_sym_DOT = 8,
  anon_sym_let = 9,
  sym_const_keyword = 10,
  sym_use_keyword = 11,
  sym_from_keyword = 12,
  sym_context_keyword = 13,
  sym_function_keyword = 14,
  sym_return_keyword = 15,
  sym_comma_symbol = 16,
  sym_semicolon_symbol = 17,
  sym_terminal_symbol = 18,
  sym_assign_operator = 19,
  anon_sym_COLON_COLON = 20,
  sym_less_operator = 21,
  sym_greater_operator = 22,
  sym_less_equal_operator = 23,
  sym_greater_equal_operator = 24,
  sym_equals_operator = 25,
  sym_not_equals_operator = 26,
  sym_rightarrow_operator = 27,
  sym_lcb_symbol = 28,
  sym_rcb_symbol = 29,
  sym_lsb_symbol = 30,
  sym_rsb_symbol = 31,
  sym_lrb_symbol = 32,
  sym_rrb_symbol = 33,
  anon_sym_true = 34,
  anon_sym_false = 35,
  anon_sym_DQUOTE = 36,
  sym__string_literal_content = 37,
  sym_number_literal = 38,
  sym__identifier = 39,
  sym_source_file = 40,
  sym__definition = 41,
  sym__statement = 42,
  sym_type = 43,
  sym_literal = 44,
  sym_expression = 45,
  sym__lval_expression = 46,
  sym__non_lval_expression = 47,
  sym_member_access_expression = 48,
  sym_assign_expression = 49,
  sym_binary_expression = 50,
  sym_variable_definition = 51,
  sym_constant_definition = 52,
  sym_context_definition = 53,
  sym_function_definition = 54,
  sym_parameter_definition = 55,
  sym_use_statement = 56,
  sym_return_statement = 57,
  sym_binary_operator = 58,
  sym_expand_operator = 59,
  sym_bool_literal = 60,
  sym_string_literal = 61,
  sym__name = 62,
  sym_alias_qualified_name = 63,
  sym_qualified_name = 64,
  sym__reserved_identifier = 65,
  sym_identifier = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_context_definition_repeat1 = 68,
  aux_sym_function_definition_repeat1 = 69,
  aux_sym_function_definition_repeat2 = 70,
  aux_sym_use_statement_repeat1 = 71,
  aux_sym_use_statement_repeat2 = 72,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_bool] = "bool",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_ctx] = "ctx",
  [anon_sym_DOT] = ".",
  [anon_sym_let] = "let",
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
  [anon_sym_COLON_COLON] = "::",
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [sym__string_literal_content] = "_string_literal_content",
  [sym_number_literal] = "number_literal",
  [sym__identifier] = "_identifier",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__statement] = "_statement",
  [sym_type] = "type",
  [sym_literal] = "literal",
  [sym_expression] = "expression",
  [sym__lval_expression] = "_lval_expression",
  [sym__non_lval_expression] = "_non_lval_expression",
  [sym_member_access_expression] = "member_access_expression",
  [sym_assign_expression] = "assign_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_variable_definition] = "variable_definition",
  [sym_constant_definition] = "constant_definition",
  [sym_context_definition] = "context_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_definition] = "parameter_definition",
  [sym_use_statement] = "use_statement",
  [sym_return_statement] = "return_statement",
  [sym_binary_operator] = "binary_operator",
  [sym_expand_operator] = "expand_operator",
  [sym_bool_literal] = "bool_literal",
  [sym_string_literal] = "string_literal",
  [sym__name] = "_name",
  [sym_alias_qualified_name] = "alias_qualified_name",
  [sym_qualified_name] = "qualified_name",
  [sym__reserved_identifier] = "_reserved_identifier",
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
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_ctx] = anon_sym_ctx,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_let] = anon_sym_let,
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
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__string_literal_content] = sym__string_literal_content,
  [sym_number_literal] = sym_number_literal,
  [sym__identifier] = sym__identifier,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__statement] = sym__statement,
  [sym_type] = sym_type,
  [sym_literal] = sym_literal,
  [sym_expression] = sym_expression,
  [sym__lval_expression] = sym__lval_expression,
  [sym__non_lval_expression] = sym__non_lval_expression,
  [sym_member_access_expression] = sym_member_access_expression,
  [sym_assign_expression] = sym_assign_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_variable_definition] = sym_variable_definition,
  [sym_constant_definition] = sym_constant_definition,
  [sym_context_definition] = sym_context_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_definition] = sym_parameter_definition,
  [sym_use_statement] = sym_use_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_binary_operator] = sym_binary_operator,
  [sym_expand_operator] = sym_expand_operator,
  [sym_bool_literal] = sym_bool_literal,
  [sym_string_literal] = sym_string_literal,
  [sym__name] = sym__name,
  [sym_alias_qualified_name] = sym_alias_qualified_name,
  [sym_qualified_name] = sym_qualified_name,
  [sym__reserved_identifier] = sym__reserved_identifier,
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
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
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
  [anon_sym_ctx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
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
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__lval_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__non_lval_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_member_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_definition] = {
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
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_expand_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym_alias_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym__reserved_identifier] = {
    .visible = false,
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
  field_alias = 1,
  field_expression = 2,
  field_left = 3,
  field_name = 4,
  field_qualifier = 5,
  field_right = 6,
  field_type = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_expression] = "expression",
  [field_left] = "left",
  [field_name] = "name",
  [field_qualifier] = "qualifier",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_expression, 1},
  [2] =
    {field_name, 2, .inherited = true},
  [3] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [5] =
    {field_expression, 0},
    {field_name, 2},
  [7] =
    {field_name, 2},
    {field_qualifier, 0},
  [9] =
    {field_alias, 0},
    {field_name, 2},
  [11] =
    {field_left, 0},
    {field_right, 2},
  [13] =
    {field_name, 0},
    {field_type, 2},
  [15] =
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
  [18] =
    {field_name, 1},
    {field_type, 5},
  [20] =
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
  [9] = 8,
  [10] = 7,
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
  [24] = 14,
  [25] = 12,
  [26] = 21,
  [27] = 22,
  [28] = 20,
  [29] = 23,
  [30] = 15,
  [31] = 19,
  [32] = 32,
  [33] = 17,
  [34] = 18,
  [35] = 16,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 44,
  [46] = 43,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 39,
  [55] = 55,
  [56] = 56,
  [57] = 38,
  [58] = 58,
  [59] = 40,
  [60] = 60,
  [61] = 41,
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
  [74] = 73,
  [75] = 75,
  [76] = 75,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 86,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 89,
  [92] = 92,
  [93] = 80,
  [94] = 94,
  [95] = 95,
  [96] = 81,
  [97] = 88,
  [98] = 90,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 104,
  [106] = 102,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 112,
  [116] = 116,
  [117] = 109,
  [118] = 118,
  [119] = 119,
  [120] = 119,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 108,
  [127] = 127,
  [128] = 123,
  [129] = 129,
  [130] = 122,
  [131] = 124,
  [132] = 113,
  [133] = 133,
  [134] = 134,
  [135] = 135,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      ADVANCE_MAP(
        '!', 12,
        '"', 95,
        '(', 89,
        ')', 90,
        ',', 71,
        '-', 13,
        '.', 61,
        ':', 73,
        ';', 74,
        '<', 78,
        '=', 76,
        '>', 79,
        '[', 87,
        ']', 88,
        'b', 30,
        'c', 28,
        'f', 14,
        'i', 7,
        'l', 15,
        'r', 20,
        't', 32,
        'u', 8,
        '{', 85,
        '}', 86,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 12,
        '"', 95,
        '(', 4,
        '.', 61,
        ':', 11,
        ';', 74,
        '<', 78,
        '=', 76,
        '>', 79,
        '_', 44,
        'b', 114,
        'c', 119,
        'f', 106,
        'i', 101,
        'r', 110,
        't', 116,
        'u', 102,
        '}', 86,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 95,
        '(', 4,
        ':', 72,
        '_', 44,
        'b', 114,
        'c', 119,
        'f', 106,
        'i', 101,
        't', 116,
        'u', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '{') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(54);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(77);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 'x') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 45:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      ADVANCE_MAP(
        '!', 12,
        '(', 4,
        '.', 61,
        ':', 11,
        ';', 74,
        '<', 78,
        '=', 76,
        '>', 79,
        'b', 30,
        'c', 27,
        'f', 24,
        'i', 7,
        'l', 15,
        'r', 20,
        'u', 8,
        '}', 86,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_ctx);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_ctx);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_const_keyword);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_use_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_from_keyword);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_function_keyword);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_return_keyword);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_return_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comma_symbol);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_semicolon_symbol);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_semicolon_symbol);
      if (lookahead == ':') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_terminal_symbol);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_assign_operator);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_assign_operator);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_less_operator);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_greater_operator);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_less_equal_operator);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_greater_equal_operator);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_equals_operator);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_not_equals_operator);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_rightarrow_operator);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_lcb_symbol);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_rcb_symbol);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_lsb_symbol);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_rsb_symbol);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_lrb_symbol);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_rrb_symbol);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(99);
      if (lookahead == '6') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(100);
      if (lookahead == '6') ADVANCE(105);
      if (lookahead == 's') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(100);
      if (lookahead == '6') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '4') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '4') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 46},
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
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 46},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 46},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 46},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 46},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 45},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 45},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_ctx] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
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
    [anon_sym_COLON_COLON] = ACTIONS(1),
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(116),
    [sym__definition] = STATE(37),
    [sym__statement] = STATE(37),
    [sym_variable_definition] = STATE(37),
    [sym_constant_definition] = STATE(37),
    [sym_context_definition] = STATE(37),
    [sym_function_definition] = STATE(37),
    [sym_use_statement] = STATE(37),
    [sym_return_statement] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [sym_const_keyword] = ACTIONS(7),
    [sym_use_keyword] = ACTIONS(9),
    [sym_context_keyword] = ACTIONS(11),
    [sym_function_keyword] = ACTIONS(13),
    [sym_return_keyword] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(19), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(21), 1,
      anon_sym_ctx,
    ACTIONS(23), 1,
      sym_use_keyword,
    ACTIONS(25), 1,
      sym_return_keyword,
    ACTIONS(27), 1,
      sym_rcb_symbol,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_number_literal,
    ACTIONS(35), 1,
      sym__identifier,
    STATE(12), 1,
      sym_identifier,
    STATE(13), 1,
      sym_expression,
    STATE(14), 1,
      sym__reserved_identifier,
    STATE(115), 1,
      sym_type,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(21), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(117), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(3), 4,
      sym__statement,
      sym_use_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
    STATE(22), 4,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
    ACTIONS(17), 5,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
  [73] = 19,
    ACTIONS(19), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(21), 1,
      anon_sym_ctx,
    ACTIONS(23), 1,
      sym_use_keyword,
    ACTIONS(25), 1,
      sym_return_keyword,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_number_literal,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(37), 1,
      sym_rcb_symbol,
    STATE(12), 1,
      sym_identifier,
    STATE(13), 1,
      sym_expression,
    STATE(14), 1,
      sym__reserved_identifier,
    STATE(115), 1,
      sym_type,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(21), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(117), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(5), 4,
      sym__statement,
      sym_use_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
    STATE(22), 4,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
    ACTIONS(17), 5,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
  [146] = 19,
    ACTIONS(19), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(21), 1,
      anon_sym_ctx,
    ACTIONS(23), 1,
      sym_use_keyword,
    ACTIONS(25), 1,
      sym_return_keyword,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_number_literal,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(39), 1,
      sym_rcb_symbol,
    STATE(12), 1,
      sym_identifier,
    STATE(13), 1,
      sym_expression,
    STATE(14), 1,
      sym__reserved_identifier,
    STATE(115), 1,
      sym_type,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(21), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(117), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(6), 4,
      sym__statement,
      sym_use_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
    STATE(22), 4,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
    ACTIONS(17), 5,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
  [219] = 19,
    ACTIONS(44), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(47), 1,
      anon_sym_ctx,
    ACTIONS(50), 1,
      sym_use_keyword,
    ACTIONS(53), 1,
      sym_return_keyword,
    ACTIONS(56), 1,
      sym_rcb_symbol,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      sym__identifier,
    STATE(12), 1,
      sym_identifier,
    STATE(13), 1,
      sym_expression,
    STATE(14), 1,
      sym__reserved_identifier,
    STATE(115), 1,
      sym_type,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(21), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(117), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(5), 4,
      sym__statement,
      sym_use_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
    STATE(22), 4,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
    ACTIONS(41), 5,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
  [292] = 19,
    ACTIONS(19), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(21), 1,
      anon_sym_ctx,
    ACTIONS(23), 1,
      sym_use_keyword,
    ACTIONS(25), 1,
      sym_return_keyword,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_number_literal,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(70), 1,
      sym_rcb_symbol,
    STATE(12), 1,
      sym_identifier,
    STATE(13), 1,
      sym_expression,
    STATE(14), 1,
      sym__reserved_identifier,
    STATE(115), 1,
      sym_type,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(21), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(117), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(5), 4,
      sym__statement,
      sym_use_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
    STATE(22), 4,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
    ACTIONS(17), 5,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
  [365] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(72), 1,
      anon_sym_ctx,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      sym_number_literal,
    ACTIONS(80), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(25), 1,
      sym_identifier,
    STATE(48), 1,
      sym_expression,
    STATE(112), 1,
      sym_type,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(109), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(27), 4,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
    ACTIONS(17), 5,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
  [423] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(72), 1,
      anon_sym_ctx,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      sym_number_literal,
    ACTIONS(80), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(25), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expression,
    STATE(112), 1,
      sym_type,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(109), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(27), 4,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
    ACTIONS(17), 5,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
  [481] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(72), 1,
      anon_sym_ctx,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      sym_number_literal,
    ACTIONS(80), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(25), 1,
      sym_identifier,
    STATE(44), 1,
      sym_expression,
    STATE(112), 1,
      sym_type,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(109), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(27), 4,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
    ACTIONS(17), 5,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
  [539] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(72), 1,
      anon_sym_ctx,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      sym_number_literal,
    ACTIONS(80), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(25), 1,
      sym_identifier,
    STATE(47), 1,
      sym_expression,
    STATE(112), 1,
      sym_type,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(109), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(27), 4,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
    ACTIONS(17), 5,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
  [597] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(72), 1,
      anon_sym_ctx,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      sym_number_literal,
    ACTIONS(80), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(25), 1,
      sym_identifier,
    STATE(32), 1,
      sym_expression,
    STATE(112), 1,
      sym_type,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(109), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(27), 4,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
    ACTIONS(17), 5,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
  [655] = 4,
    ACTIONS(86), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_COLON_COLON,
    ACTIONS(84), 7,
      anon_sym_LPAREN_RPAREN,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(82), 15,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      sym_use_keyword,
      sym_return_keyword,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [688] = 6,
    ACTIONS(95), 1,
      anon_sym_DOT,
    STATE(7), 1,
      sym_binary_operator,
    ACTIONS(93), 3,
      anon_sym_LPAREN_RPAREN,
      sym_rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(97), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(99), 4,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(91), 12,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      sym_use_keyword,
      sym_return_keyword,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [725] = 2,
    ACTIONS(103), 9,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(101), 15,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      sym_use_keyword,
      sym_return_keyword,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [754] = 2,
    ACTIONS(107), 8,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(105), 15,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      sym_use_keyword,
      sym_return_keyword,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [782] = 2,
    ACTIONS(111), 8,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(109), 15,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      sym_use_keyword,
      sym_return_keyword,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [810] = 2,
    ACTIONS(115), 8,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(113), 15,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      sym_use_keyword,
      sym_return_keyword,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [838] = 2,
    ACTIONS(119), 8,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(117), 15,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      sym_use_keyword,
      sym_return_keyword,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [866] = 2,
    ACTIONS(123), 8,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(121), 15,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      sym_use_keyword,
      sym_return_keyword,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [894] = 2,
    ACTIONS(127), 8,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(125), 15,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      sym_use_keyword,
      sym_return_keyword,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [922] = 2,
    ACTIONS(131), 8,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(129), 15,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      sym_use_keyword,
      sym_return_keyword,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [950] = 2,
    ACTIONS(131), 8,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(129), 15,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      sym_use_keyword,
      sym_return_keyword,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [978] = 3,
    ACTIONS(133), 1,
      anon_sym_DOT,
    ACTIONS(115), 7,
      anon_sym_LPAREN_RPAREN,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(113), 15,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      sym_use_keyword,
      sym_return_keyword,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [1008] = 2,
    ACTIONS(101), 4,
      sym_semicolon_symbol,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(103), 18,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_comma_symbol,
      sym_terminal_symbol,
      anon_sym_COLON_COLON,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_lcb_symbol,
      sym_rcb_symbol,
      sym_lrb_symbol,
  [1035] = 4,
    ACTIONS(86), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_COLON_COLON,
    ACTIONS(82), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(84), 13,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_terminal_symbol,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
  [1062] = 2,
    ACTIONS(129), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(131), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_terminal_symbol,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
  [1084] = 2,
    ACTIONS(129), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(131), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_terminal_symbol,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
  [1106] = 2,
    ACTIONS(125), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(127), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_terminal_symbol,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
  [1128] = 3,
    ACTIONS(133), 1,
      anon_sym_DOT,
    ACTIONS(113), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(115), 13,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_terminal_symbol,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
  [1152] = 2,
    ACTIONS(105), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(107), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_terminal_symbol,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
  [1174] = 2,
    ACTIONS(121), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(123), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_terminal_symbol,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
  [1196] = 5,
    ACTIONS(138), 1,
      anon_sym_DOT,
    STATE(10), 1,
      sym_binary_operator,
    ACTIONS(97), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(99), 4,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(136), 8,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_rcb_symbol,
  [1224] = 2,
    ACTIONS(113), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(115), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_terminal_symbol,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
  [1246] = 2,
    ACTIONS(117), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(119), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_terminal_symbol,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
  [1268] = 2,
    ACTIONS(109), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(111), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_terminal_symbol,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_rcb_symbol,
  [1290] = 8,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(145), 1,
      sym_const_keyword,
    ACTIONS(148), 1,
      sym_use_keyword,
    ACTIONS(151), 1,
      sym_context_keyword,
    ACTIONS(154), 1,
      sym_function_keyword,
    ACTIONS(157), 1,
      sym_return_keyword,
    STATE(36), 9,
      sym__definition,
      sym__statement,
      sym_variable_definition,
      sym_constant_definition,
      sym_context_definition,
      sym_function_definition,
      sym_use_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [1323] = 8,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      sym_const_keyword,
    ACTIONS(9), 1,
      sym_use_keyword,
    ACTIONS(11), 1,
      sym_context_keyword,
    ACTIONS(13), 1,
      sym_function_keyword,
    ACTIONS(15), 1,
      sym_return_keyword,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    STATE(36), 9,
      sym__definition,
      sym__statement,
      sym_variable_definition,
      sym_constant_definition,
      sym_context_definition,
      sym_function_definition,
      sym_use_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [1356] = 2,
    ACTIONS(164), 3,
      anon_sym_LPAREN_RPAREN,
      sym_rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(162), 12,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      sym_use_keyword,
      sym_return_keyword,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [1376] = 2,
    ACTIONS(168), 3,
      anon_sym_LPAREN_RPAREN,
      sym_rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(166), 12,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      sym_use_keyword,
      sym_return_keyword,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [1396] = 2,
    ACTIONS(172), 3,
      anon_sym_LPAREN_RPAREN,
      sym_rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(170), 12,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      sym_use_keyword,
      sym_return_keyword,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [1416] = 2,
    ACTIONS(176), 3,
      anon_sym_LPAREN_RPAREN,
      sym_rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(174), 12,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      sym_use_keyword,
      sym_return_keyword,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [1436] = 2,
    ACTIONS(180), 2,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DQUOTE,
    ACTIONS(178), 10,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_ctx,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      sym__identifier,
  [1453] = 5,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(182), 1,
      sym_terminal_symbol,
    STATE(10), 1,
      sym_binary_operator,
    ACTIONS(97), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(99), 4,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [1474] = 5,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      sym_terminal_symbol,
    STATE(10), 1,
      sym_binary_operator,
    ACTIONS(97), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(99), 4,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [1495] = 5,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(186), 1,
      sym_terminal_symbol,
    STATE(10), 1,
      sym_binary_operator,
    ACTIONS(97), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(99), 4,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [1516] = 5,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(188), 1,
      sym_terminal_symbol,
    STATE(10), 1,
      sym_binary_operator,
    ACTIONS(97), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(99), 4,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [1537] = 5,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(190), 1,
      sym_terminal_symbol,
    STATE(10), 1,
      sym_binary_operator,
    ACTIONS(97), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(99), 4,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [1558] = 5,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(192), 1,
      sym_terminal_symbol,
    STATE(10), 1,
      sym_binary_operator,
    ACTIONS(97), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(99), 4,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [1579] = 2,
    ACTIONS(196), 1,
      sym_assign_operator,
    ACTIONS(194), 8,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_rcb_symbol,
  [1593] = 1,
    ACTIONS(198), 8,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_rcb_symbol,
  [1604] = 1,
    ACTIONS(200), 8,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_rcb_symbol,
  [1615] = 1,
    ACTIONS(202), 8,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_rcb_symbol,
  [1626] = 1,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
      sym_rcb_symbol,
  [1637] = 1,
    ACTIONS(168), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
  [1647] = 2,
    STATE(125), 1,
      sym_type,
    ACTIONS(19), 6,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_LPAREN_RPAREN,
  [1659] = 1,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
  [1669] = 1,
    ACTIONS(164), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
  [1679] = 2,
    STATE(129), 1,
      sym_type,
    ACTIONS(19), 6,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_LPAREN_RPAREN,
  [1691] = 1,
    ACTIONS(172), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
  [1701] = 1,
    ACTIONS(208), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
  [1711] = 1,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
  [1721] = 2,
    STATE(121), 1,
      sym_type,
    ACTIONS(19), 6,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_LPAREN_RPAREN,
  [1733] = 5,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      sym_number_literal,
    STATE(133), 1,
      sym_literal,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
  [1751] = 2,
    STATE(78), 1,
      sym_type,
    ACTIONS(19), 6,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_bool,
      anon_sym_LPAREN_RPAREN,
  [1763] = 1,
    ACTIONS(214), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_return_keyword,
  [1773] = 6,
    ACTIONS(216), 1,
      sym_rrb_symbol,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(67), 1,
      aux_sym_function_definition_repeat1,
    STATE(84), 1,
      sym_parameter_definition,
    STATE(107), 1,
      sym_identifier,
  [1792] = 6,
    ACTIONS(218), 1,
      sym__identifier,
    ACTIONS(220), 1,
      sym_rrb_symbol,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(72), 1,
      aux_sym_function_definition_repeat1,
    STATE(84), 1,
      sym_parameter_definition,
    STATE(107), 1,
      sym_identifier,
  [1811] = 1,
    ACTIONS(222), 6,
      anon_sym_DOT,
      sym_comma_symbol,
      sym_assign_operator,
      sym_lcb_symbol,
      sym_rrb_symbol,
      sym__identifier,
  [1820] = 4,
    ACTIONS(224), 1,
      anon_sym_let,
    ACTIONS(227), 1,
      sym_function_keyword,
    ACTIONS(230), 1,
      sym_rcb_symbol,
    STATE(69), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [1835] = 4,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      sym_function_keyword,
    ACTIONS(232), 1,
      sym_rcb_symbol,
    STATE(71), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [1850] = 4,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      sym_function_keyword,
    ACTIONS(234), 1,
      sym_rcb_symbol,
    STATE(69), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [1865] = 6,
    ACTIONS(236), 1,
      sym_rrb_symbol,
    ACTIONS(238), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(72), 1,
      aux_sym_function_definition_repeat1,
    STATE(84), 1,
      sym_parameter_definition,
    STATE(107), 1,
      sym_identifier,
  [1884] = 4,
    ACTIONS(218), 1,
      sym__identifier,
    ACTIONS(241), 1,
      sym_lcb_symbol,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(87), 1,
      sym_identifier,
  [1897] = 4,
    ACTIONS(218), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym_lcb_symbol,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(86), 1,
      sym_identifier,
  [1910] = 4,
    ACTIONS(245), 1,
      sym_terminal_symbol,
    ACTIONS(247), 1,
      anon_sym_COLON_COLON,
    STATE(77), 1,
      aux_sym_use_statement_repeat1,
    STATE(99), 1,
      sym_expand_operator,
  [1923] = 4,
    ACTIONS(247), 1,
      anon_sym_COLON_COLON,
    ACTIONS(249), 1,
      sym_terminal_symbol,
    STATE(77), 1,
      aux_sym_use_statement_repeat1,
    STATE(99), 1,
      sym_expand_operator,
  [1936] = 4,
    ACTIONS(251), 1,
      sym_terminal_symbol,
    ACTIONS(253), 1,
      anon_sym_COLON_COLON,
    STATE(77), 1,
      aux_sym_use_statement_repeat1,
    STATE(99), 1,
      sym_expand_operator,
  [1949] = 1,
    ACTIONS(256), 3,
      sym_comma_symbol,
      sym_rrb_symbol,
      sym__identifier,
  [1955] = 3,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(100), 1,
      sym_identifier,
  [1965] = 3,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(98), 1,
      sym_identifier,
  [1975] = 3,
    ACTIONS(258), 1,
      sym__identifier,
    STATE(14), 1,
      sym__reserved_identifier,
    STATE(23), 1,
      sym_identifier,
  [1985] = 3,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(49), 1,
      sym_identifier,
  [1995] = 3,
    ACTIONS(260), 1,
      sym_comma_symbol,
    ACTIONS(263), 1,
      sym_rcb_symbol,
    STATE(83), 1,
      aux_sym_use_statement_repeat2,
  [2005] = 2,
    ACTIONS(265), 1,
      sym_comma_symbol,
    ACTIONS(267), 2,
      sym_rrb_symbol,
      sym__identifier,
  [2013] = 3,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(114), 1,
      sym_identifier,
  [2023] = 3,
    ACTIONS(247), 1,
      anon_sym_COLON_COLON,
    STATE(76), 1,
      aux_sym_use_statement_repeat1,
    STATE(99), 1,
      sym_expand_operator,
  [2033] = 3,
    ACTIONS(247), 1,
      anon_sym_COLON_COLON,
    STATE(75), 1,
      aux_sym_use_statement_repeat1,
    STATE(99), 1,
      sym_expand_operator,
  [2043] = 3,
    ACTIONS(258), 1,
      sym__identifier,
    STATE(14), 1,
      sym__reserved_identifier,
    STATE(17), 1,
      sym_identifier,
  [2053] = 3,
    ACTIONS(269), 1,
      sym_comma_symbol,
    ACTIONS(271), 1,
      sym_rcb_symbol,
    STATE(83), 1,
      aux_sym_use_statement_repeat2,
  [2063] = 3,
    ACTIONS(269), 1,
      sym_comma_symbol,
    ACTIONS(273), 1,
      sym_rcb_symbol,
    STATE(91), 1,
      aux_sym_use_statement_repeat2,
  [2073] = 3,
    ACTIONS(269), 1,
      sym_comma_symbol,
    ACTIONS(275), 1,
      sym_rcb_symbol,
    STATE(83), 1,
      aux_sym_use_statement_repeat2,
  [2083] = 3,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(111), 1,
      sym_identifier,
  [2093] = 3,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(90), 1,
      sym_identifier,
  [2103] = 3,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(110), 1,
      sym_identifier,
  [2113] = 3,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(134), 1,
      sym_identifier,
  [2123] = 3,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(29), 1,
      sym_identifier,
  [2133] = 3,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(33), 1,
      sym_identifier,
  [2143] = 3,
    ACTIONS(269), 1,
      sym_comma_symbol,
    ACTIONS(277), 1,
      sym_rcb_symbol,
    STATE(89), 1,
      aux_sym_use_statement_repeat2,
  [2153] = 3,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(24), 1,
      sym__reserved_identifier,
    STATE(103), 1,
      sym_identifier,
  [2163] = 1,
    ACTIONS(263), 2,
      sym_comma_symbol,
      sym_rcb_symbol,
  [2168] = 1,
    ACTIONS(236), 2,
      sym_rrb_symbol,
      sym__identifier,
  [2173] = 2,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      sym_string_literal,
  [2180] = 1,
    ACTIONS(279), 2,
      sym_terminal_symbol,
      anon_sym_COLON_COLON,
  [2185] = 2,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      sym_string_literal,
  [2192] = 2,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      sym_string_literal,
  [2199] = 2,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      sym_string_literal,
  [2206] = 1,
    ACTIONS(281), 1,
      sym_semicolon_symbol,
  [2210] = 1,
    ACTIONS(283), 1,
      sym__string_literal_content,
  [2214] = 1,
    ACTIONS(285), 1,
      anon_sym_DOT,
  [2218] = 1,
    ACTIONS(287), 1,
      sym_lrb_symbol,
  [2222] = 1,
    ACTIONS(289), 1,
      sym_lcb_symbol,
  [2226] = 1,
    ACTIONS(138), 1,
      anon_sym_DOT,
  [2230] = 1,
    ACTIONS(291), 1,
      sym_from_keyword,
  [2234] = 1,
    ACTIONS(293), 1,
      sym_semicolon_symbol,
  [2238] = 1,
    ACTIONS(95), 1,
      anon_sym_DOT,
  [2242] = 1,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
  [2246] = 1,
    ACTIONS(297), 1,
      anon_sym_DOT,
  [2250] = 1,
    ACTIONS(299), 1,
      sym__identifier,
  [2254] = 1,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
  [2258] = 1,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
  [2262] = 1,
    ACTIONS(305), 1,
      sym_assign_operator,
  [2266] = 1,
    ACTIONS(307), 1,
      sym_terminal_symbol,
  [2270] = 1,
    ACTIONS(309), 1,
      sym_terminal_symbol,
  [2274] = 1,
    ACTIONS(311), 1,
      sym_from_keyword,
  [2278] = 1,
    ACTIONS(313), 1,
      sym_lcb_symbol,
  [2282] = 1,
    ACTIONS(315), 1,
      sym__string_literal_content,
  [2286] = 1,
    ACTIONS(317), 1,
      sym_rightarrow_operator,
  [2290] = 1,
    ACTIONS(319), 1,
      sym_terminal_symbol,
  [2294] = 1,
    ACTIONS(321), 1,
      sym_lcb_symbol,
  [2298] = 1,
    ACTIONS(323), 1,
      sym_terminal_symbol,
  [2302] = 1,
    ACTIONS(325), 1,
      sym_from_keyword,
  [2306] = 1,
    ACTIONS(327), 1,
      sym_from_keyword,
  [2310] = 1,
    ACTIONS(329), 1,
      sym_terminal_symbol,
  [2314] = 1,
    ACTIONS(331), 1,
      anon_sym_DOT,
  [2318] = 1,
    ACTIONS(333), 1,
      sym_rightarrow_operator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 219,
  [SMALL_STATE(6)] = 292,
  [SMALL_STATE(7)] = 365,
  [SMALL_STATE(8)] = 423,
  [SMALL_STATE(9)] = 481,
  [SMALL_STATE(10)] = 539,
  [SMALL_STATE(11)] = 597,
  [SMALL_STATE(12)] = 655,
  [SMALL_STATE(13)] = 688,
  [SMALL_STATE(14)] = 725,
  [SMALL_STATE(15)] = 754,
  [SMALL_STATE(16)] = 782,
  [SMALL_STATE(17)] = 810,
  [SMALL_STATE(18)] = 838,
  [SMALL_STATE(19)] = 866,
  [SMALL_STATE(20)] = 894,
  [SMALL_STATE(21)] = 922,
  [SMALL_STATE(22)] = 950,
  [SMALL_STATE(23)] = 978,
  [SMALL_STATE(24)] = 1008,
  [SMALL_STATE(25)] = 1035,
  [SMALL_STATE(26)] = 1062,
  [SMALL_STATE(27)] = 1084,
  [SMALL_STATE(28)] = 1106,
  [SMALL_STATE(29)] = 1128,
  [SMALL_STATE(30)] = 1152,
  [SMALL_STATE(31)] = 1174,
  [SMALL_STATE(32)] = 1196,
  [SMALL_STATE(33)] = 1224,
  [SMALL_STATE(34)] = 1246,
  [SMALL_STATE(35)] = 1268,
  [SMALL_STATE(36)] = 1290,
  [SMALL_STATE(37)] = 1323,
  [SMALL_STATE(38)] = 1356,
  [SMALL_STATE(39)] = 1376,
  [SMALL_STATE(40)] = 1396,
  [SMALL_STATE(41)] = 1416,
  [SMALL_STATE(42)] = 1436,
  [SMALL_STATE(43)] = 1453,
  [SMALL_STATE(44)] = 1474,
  [SMALL_STATE(45)] = 1495,
  [SMALL_STATE(46)] = 1516,
  [SMALL_STATE(47)] = 1537,
  [SMALL_STATE(48)] = 1558,
  [SMALL_STATE(49)] = 1579,
  [SMALL_STATE(50)] = 1593,
  [SMALL_STATE(51)] = 1604,
  [SMALL_STATE(52)] = 1615,
  [SMALL_STATE(53)] = 1626,
  [SMALL_STATE(54)] = 1637,
  [SMALL_STATE(55)] = 1647,
  [SMALL_STATE(56)] = 1659,
  [SMALL_STATE(57)] = 1669,
  [SMALL_STATE(58)] = 1679,
  [SMALL_STATE(59)] = 1691,
  [SMALL_STATE(60)] = 1701,
  [SMALL_STATE(61)] = 1711,
  [SMALL_STATE(62)] = 1721,
  [SMALL_STATE(63)] = 1733,
  [SMALL_STATE(64)] = 1751,
  [SMALL_STATE(65)] = 1763,
  [SMALL_STATE(66)] = 1773,
  [SMALL_STATE(67)] = 1792,
  [SMALL_STATE(68)] = 1811,
  [SMALL_STATE(69)] = 1820,
  [SMALL_STATE(70)] = 1835,
  [SMALL_STATE(71)] = 1850,
  [SMALL_STATE(72)] = 1865,
  [SMALL_STATE(73)] = 1884,
  [SMALL_STATE(74)] = 1897,
  [SMALL_STATE(75)] = 1910,
  [SMALL_STATE(76)] = 1923,
  [SMALL_STATE(77)] = 1936,
  [SMALL_STATE(78)] = 1949,
  [SMALL_STATE(79)] = 1955,
  [SMALL_STATE(80)] = 1965,
  [SMALL_STATE(81)] = 1975,
  [SMALL_STATE(82)] = 1985,
  [SMALL_STATE(83)] = 1995,
  [SMALL_STATE(84)] = 2005,
  [SMALL_STATE(85)] = 2013,
  [SMALL_STATE(86)] = 2023,
  [SMALL_STATE(87)] = 2033,
  [SMALL_STATE(88)] = 2043,
  [SMALL_STATE(89)] = 2053,
  [SMALL_STATE(90)] = 2063,
  [SMALL_STATE(91)] = 2073,
  [SMALL_STATE(92)] = 2083,
  [SMALL_STATE(93)] = 2093,
  [SMALL_STATE(94)] = 2103,
  [SMALL_STATE(95)] = 2113,
  [SMALL_STATE(96)] = 2123,
  [SMALL_STATE(97)] = 2133,
  [SMALL_STATE(98)] = 2143,
  [SMALL_STATE(99)] = 2153,
  [SMALL_STATE(100)] = 2163,
  [SMALL_STATE(101)] = 2168,
  [SMALL_STATE(102)] = 2173,
  [SMALL_STATE(103)] = 2180,
  [SMALL_STATE(104)] = 2185,
  [SMALL_STATE(105)] = 2192,
  [SMALL_STATE(106)] = 2199,
  [SMALL_STATE(107)] = 2206,
  [SMALL_STATE(108)] = 2210,
  [SMALL_STATE(109)] = 2214,
  [SMALL_STATE(110)] = 2218,
  [SMALL_STATE(111)] = 2222,
  [SMALL_STATE(112)] = 2226,
  [SMALL_STATE(113)] = 2230,
  [SMALL_STATE(114)] = 2234,
  [SMALL_STATE(115)] = 2238,
  [SMALL_STATE(116)] = 2242,
  [SMALL_STATE(117)] = 2246,
  [SMALL_STATE(118)] = 2250,
  [SMALL_STATE(119)] = 2254,
  [SMALL_STATE(120)] = 2258,
  [SMALL_STATE(121)] = 2262,
  [SMALL_STATE(122)] = 2266,
  [SMALL_STATE(123)] = 2270,
  [SMALL_STATE(124)] = 2274,
  [SMALL_STATE(125)] = 2278,
  [SMALL_STATE(126)] = 2282,
  [SMALL_STATE(127)] = 2286,
  [SMALL_STATE(128)] = 2290,
  [SMALL_STATE(129)] = 2294,
  [SMALL_STATE(130)] = 2298,
  [SMALL_STATE(131)] = 2302,
  [SMALL_STATE(132)] = 2306,
  [SMALL_STATE(133)] = 2310,
  [SMALL_STATE(134)] = 2314,
  [SMALL_STATE(135)] = 2318,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(68),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(68),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(21),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(74),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(19),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(126),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(15),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(14),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lval_expression, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lval_expression, 1, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__lval_expression, 1, 0, 0), REDUCE(sym__name, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_expression, 4, 0, 8),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expression, 4, 0, 8),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_access_expression, 3, 0, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access_expression, 3, 0, 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 4, 0, 8),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 4, 0, 8),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_member_access_expression, 3, 0, 5), REDUCE(sym_qualified_name, 3, 0, 6),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, 0, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 4, 0, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, 0, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 7, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 7, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 8, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 8, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 2, 0, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, 0, 12),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, 0, 12),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 11),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, 0, 11),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 7, 0, 10),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 4, 0, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 5, 0, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, 0, 4),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, 0, 4), SHIFT_REPEAT(118),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 3, 0, 9),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat2, 2, 0, 0), SHIFT_REPEAT(79),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat2, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, 0, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [295] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expand_operator, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_qualified_name, 3, 0, 7),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
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
