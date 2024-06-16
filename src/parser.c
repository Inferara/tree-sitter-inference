#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 117
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  sym__embedded_type = 1,
  anon_sym_ctx = 2,
  anon_sym_let = 3,
  sym_const_keyword = 4,
  sym_use_keyword = 5,
  sym_from_keyword = 6,
  sym_context_keyword = 7,
  sym_function_keyword = 8,
  sym_return_keyword = 9,
  sym__comma_symbol = 10,
  sym__typedef_symbol = 11,
  sym__terminal_symbol = 12,
  sym_add_operator = 13,
  sym_sub_operator = 14,
  sym_mul_operator = 15,
  sym_pow_operator = 16,
  sym_mod_operator = 17,
  sym_and_operator = 18,
  sym_or_operator = 19,
  sym_less_operator = 20,
  sym_greater_operator = 21,
  sym_less_equal_operator = 22,
  sym_greater_equal_operator = 23,
  sym_equals_operator = 24,
  sym_not_equals_operator = 25,
  sym_assign_operator = 26,
  sym_expand_operator = 27,
  sym_attribute_access_operator = 28,
  sym_rightarrow_operator = 29,
  sym__lcb_symbol = 30,
  sym__rcb_symbol = 31,
  sym__lrb_symbol = 32,
  sym__rrb_symbol = 33,
  anon_sym_true = 34,
  anon_sym_false = 35,
  anon_sym_DQUOTE = 36,
  sym__string_literal_content = 37,
  sym_number_literal = 38,
  anon_sym_constructor = 39,
  sym__identifier = 40,
  sym_comment = 41,
  sym_source_file = 42,
  sym__definition = 43,
  sym__statement = 44,
  sym_type = 45,
  sym_literal = 46,
  sym_expression = 47,
  sym__lval_expression = 48,
  sym__non_lval_expression = 49,
  sym_member_access_expression = 50,
  sym_assign_expression = 51,
  sym_binary_expression = 52,
  sym_variable_definition = 53,
  sym_constant_definition = 54,
  sym_context_definition = 55,
  sym_block = 56,
  sym_function_definition = 57,
  sym_parameter_definition = 58,
  sym_use_directive = 59,
  sym_expression_statement = 60,
  sym__expression_statement = 61,
  sym_return_statement = 62,
  sym_bool_literal = 63,
  sym_string_literal = 64,
  sym__name = 65,
  sym_type_qualified_name = 66,
  sym_qualified_name = 67,
  sym__reserved_identifier = 68,
  sym_identifier = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym_context_definition_repeat1 = 71,
  aux_sym_block_repeat1 = 72,
  aux_sym_function_definition_repeat1 = 73,
  aux_sym_use_directive_repeat1 = 74,
  aux_sym_use_directive_repeat2 = 75,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__embedded_type] = "_embedded_type",
  [anon_sym_ctx] = "ctx",
  [anon_sym_let] = "let",
  [sym_const_keyword] = "const_keyword",
  [sym_use_keyword] = "use_keyword",
  [sym_from_keyword] = "from_keyword",
  [sym_context_keyword] = "context_keyword",
  [sym_function_keyword] = "function_keyword",
  [sym_return_keyword] = "return_keyword",
  [sym__comma_symbol] = "_comma_symbol",
  [sym__typedef_symbol] = "_typedef_symbol",
  [sym__terminal_symbol] = "_terminal_symbol",
  [sym_add_operator] = "add_operator",
  [sym_sub_operator] = "sub_operator",
  [sym_mul_operator] = "mul_operator",
  [sym_pow_operator] = "pow_operator",
  [sym_mod_operator] = "mod_operator",
  [sym_and_operator] = "and_operator",
  [sym_or_operator] = "or_operator",
  [sym_less_operator] = "less_operator",
  [sym_greater_operator] = "greater_operator",
  [sym_less_equal_operator] = "less_equal_operator",
  [sym_greater_equal_operator] = "greater_equal_operator",
  [sym_equals_operator] = "equals_operator",
  [sym_not_equals_operator] = "not_equals_operator",
  [sym_assign_operator] = "assign_operator",
  [sym_expand_operator] = "expand_operator",
  [sym_attribute_access_operator] = "attribute_access_operator",
  [sym_rightarrow_operator] = "rightarrow_operator",
  [sym__lcb_symbol] = "_lcb_symbol",
  [sym__rcb_symbol] = "_rcb_symbol",
  [sym__lrb_symbol] = "_lrb_symbol",
  [sym__rrb_symbol] = "_rrb_symbol",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [sym__string_literal_content] = "_string_literal_content",
  [sym_number_literal] = "number_literal",
  [anon_sym_constructor] = "constructor",
  [sym__identifier] = "_identifier",
  [sym_comment] = "comment",
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
  [sym_block] = "block",
  [sym_function_definition] = "function_definition",
  [sym_parameter_definition] = "parameter_definition",
  [sym_use_directive] = "use_directive",
  [sym_expression_statement] = "expression_statement",
  [sym__expression_statement] = "_expression_statement",
  [sym_return_statement] = "return_statement",
  [sym_bool_literal] = "bool_literal",
  [sym_string_literal] = "string_literal",
  [sym__name] = "_name",
  [sym_type_qualified_name] = "type_qualified_name",
  [sym_qualified_name] = "qualified_name",
  [sym__reserved_identifier] = "_reserved_identifier",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_context_definition_repeat1] = "context_definition_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_use_directive_repeat1] = "use_directive_repeat1",
  [aux_sym_use_directive_repeat2] = "use_directive_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__embedded_type] = sym__embedded_type,
  [anon_sym_ctx] = anon_sym_ctx,
  [anon_sym_let] = anon_sym_let,
  [sym_const_keyword] = sym_const_keyword,
  [sym_use_keyword] = sym_use_keyword,
  [sym_from_keyword] = sym_from_keyword,
  [sym_context_keyword] = sym_context_keyword,
  [sym_function_keyword] = sym_function_keyword,
  [sym_return_keyword] = sym_return_keyword,
  [sym__comma_symbol] = sym__comma_symbol,
  [sym__typedef_symbol] = sym__typedef_symbol,
  [sym__terminal_symbol] = sym__terminal_symbol,
  [sym_add_operator] = sym_add_operator,
  [sym_sub_operator] = sym_sub_operator,
  [sym_mul_operator] = sym_mul_operator,
  [sym_pow_operator] = sym_pow_operator,
  [sym_mod_operator] = sym_mod_operator,
  [sym_and_operator] = sym_and_operator,
  [sym_or_operator] = sym_or_operator,
  [sym_less_operator] = sym_less_operator,
  [sym_greater_operator] = sym_greater_operator,
  [sym_less_equal_operator] = sym_less_equal_operator,
  [sym_greater_equal_operator] = sym_greater_equal_operator,
  [sym_equals_operator] = sym_equals_operator,
  [sym_not_equals_operator] = sym_not_equals_operator,
  [sym_assign_operator] = sym_assign_operator,
  [sym_expand_operator] = sym_expand_operator,
  [sym_attribute_access_operator] = sym_attribute_access_operator,
  [sym_rightarrow_operator] = sym_rightarrow_operator,
  [sym__lcb_symbol] = sym__lcb_symbol,
  [sym__rcb_symbol] = sym__rcb_symbol,
  [sym__lrb_symbol] = sym__lrb_symbol,
  [sym__rrb_symbol] = sym__rrb_symbol,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__string_literal_content] = sym__string_literal_content,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_constructor] = anon_sym_constructor,
  [sym__identifier] = sym__identifier,
  [sym_comment] = sym_comment,
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
  [sym_block] = sym_block,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_definition] = sym_parameter_definition,
  [sym_use_directive] = sym_use_directive,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression_statement] = sym__expression_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_bool_literal] = sym_bool_literal,
  [sym_string_literal] = sym_string_literal,
  [sym__name] = sym__name,
  [sym_type_qualified_name] = sym_type_qualified_name,
  [sym_qualified_name] = sym_qualified_name,
  [sym__reserved_identifier] = sym__reserved_identifier,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_context_definition_repeat1] = aux_sym_context_definition_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_use_directive_repeat1] = aux_sym_use_directive_repeat1,
  [aux_sym_use_directive_repeat2] = aux_sym_use_directive_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__embedded_type] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ctx] = {
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
  [sym__comma_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__typedef_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__terminal_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym_add_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_mul_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_pow_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_and_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_or_operator] = {
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
  [sym_rightarrow_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__lcb_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__rcb_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__lrb_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__rrb_symbol] = {
    .visible = false,
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
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
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
  [sym_block] = {
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
  [sym_use_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
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
  [sym_type_qualified_name] = {
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
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_directive_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_body = 2,
  field_expression = 3,
  field_left = 4,
  field_name = 5,
  field_operator = 6,
  field_qualifier = 7,
  field_returns = 8,
  field_right = 9,
  field_type = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_body] = "body",
  [field_expression] = "expression",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_qualifier] = "qualifier",
  [field_returns] = "returns",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 3},
  [9] = {.index = 17, .length = 3},
  [10] = {.index = 20, .length = 3},
  [11] = {.index = 23, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_expression, 0},
    {field_name, 2},
  [3] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [6] =
    {field_left, 0},
    {field_right, 2},
  [8] =
    {field_name, 2},
    {field_qualifier, 0},
  [10] =
    {field_alias, 0},
    {field_name, 2},
  [12] =
    {field_name, 0},
    {field_type, 2},
  [14] =
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
  [17] =
    {field_body, 6},
    {field_name, 1},
    {field_returns, 5},
  [20] =
    {field_body, 7},
    {field_name, 1},
    {field_returns, 6},
  [23] =
    {field_expression, 1},
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
  [54] = 5,
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
  [72] = 60,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 78,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 77,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 69,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
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
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        '!', 12,
        '"', 90,
        '%', 68,
        '&', 4,
        '(', 84,
        ')', 85,
        '*', 66,
        '+', 63,
        ',', 59,
        '-', 65,
        '.', 80,
        '/', 10,
        ':', 61,
        ';', 62,
        '<', 71,
        '=', 78,
        '>', 72,
        'c', 27,
        'f', 14,
        'l', 15,
        'r', 20,
        't', 29,
        'u', 31,
        '{', 82,
        '|', 42,
        '}', 83,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '/') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(95);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 12,
        '"', 90,
        '%', 68,
        '&', 4,
        '(', 7,
        '*', 66,
        '+', 63,
        '-', 64,
        '.', 80,
        '/', 10,
        ':', 11,
        ';', 62,
        '<', 71,
        '=', 78,
        '>', 72,
        'b', 113,
        'c', 111,
        'f', 102,
        'i', 100,
        'r', 104,
        't', 116,
        'u', 100,
        '{', 82,
        '|', 42,
        '}', 83,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 90,
        '(', 7,
        '-', 13,
        '/', 10,
        ':', 60,
        'b', 113,
        'c', 111,
        'f', 102,
        'i', 100,
        't', 116,
        'u', 100,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(69);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '(', 84,
        ')', 85,
        ',', 59,
        '.', 80,
        '/', 10,
        ':', 11,
        '=', 77,
        'c', 112,
        '{', 82,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'b') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(130);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == '|') ADVANCE(70);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 44:
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        '!', 12,
        '%', 68,
        '&', 4,
        '*', 66,
        '+', 63,
        ',', 59,
        '-', 64,
        '.', 80,
        '/', 10,
        ':', 61,
        ';', 62,
        '<', 71,
        '=', 78,
        '>', 72,
        'c', 26,
        'f', 23,
        'l', 15,
        'u', 31,
        '{', 82,
        '|', 42,
        '}', 83,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        '!', 12,
        '%', 68,
        '&', 4,
        '*', 66,
        '+', 63,
        '-', 64,
        '.', 80,
        '/', 10,
        ':', 11,
        ';', 62,
        '<', 71,
        '=', 78,
        '>', 72,
        'c', 26,
        'f', 23,
        'l', 15,
        'u', 31,
        '|', 42,
        '}', 83,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__embedded_type);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__embedded_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_ctx);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_ctx);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_const_keyword);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_from_keyword);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_function_keyword);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_return_keyword);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_return_keyword);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__comma_symbol);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__typedef_symbol);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__typedef_symbol);
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__terminal_symbol);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_add_operator);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_sub_operator);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_sub_operator);
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_mul_operator);
      if (lookahead == '*') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_pow_operator);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_mod_operator);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_and_operator);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_or_operator);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_less_operator);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_greater_operator);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_less_equal_operator);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_greater_equal_operator);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_equals_operator);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_not_equals_operator);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_assign_operator);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_assign_operator);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_expand_operator);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_attribute_access_operator);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_rightarrow_operator);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__lcb_symbol);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__rcb_symbol);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__lrb_symbol);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__rrb_symbol);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead == '\r') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(99);
      if (lookahead == '6') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '4') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(130);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 44},
  [6] = {.lex_state = 45},
  [7] = {.lex_state = 45},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 45},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 45},
  [13] = {.lex_state = 45},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 45},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 45},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 45},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 45},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 45},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 45},
  [29] = {.lex_state = 45},
  [30] = {.lex_state = 45},
  [31] = {.lex_state = 45},
  [32] = {.lex_state = 45},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ctx] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [sym_const_keyword] = ACTIONS(1),
    [sym_use_keyword] = ACTIONS(1),
    [sym_from_keyword] = ACTIONS(1),
    [sym_context_keyword] = ACTIONS(1),
    [sym_function_keyword] = ACTIONS(1),
    [sym_return_keyword] = ACTIONS(1),
    [sym__comma_symbol] = ACTIONS(1),
    [sym__typedef_symbol] = ACTIONS(1),
    [sym__terminal_symbol] = ACTIONS(1),
    [sym_add_operator] = ACTIONS(1),
    [sym_sub_operator] = ACTIONS(1),
    [sym_mul_operator] = ACTIONS(1),
    [sym_pow_operator] = ACTIONS(1),
    [sym_mod_operator] = ACTIONS(1),
    [sym_and_operator] = ACTIONS(1),
    [sym_or_operator] = ACTIONS(1),
    [sym_less_operator] = ACTIONS(1),
    [sym_greater_operator] = ACTIONS(1),
    [sym_less_equal_operator] = ACTIONS(1),
    [sym_greater_equal_operator] = ACTIONS(1),
    [sym_equals_operator] = ACTIONS(1),
    [sym_not_equals_operator] = ACTIONS(1),
    [sym_assign_operator] = ACTIONS(1),
    [sym_expand_operator] = ACTIONS(1),
    [sym_attribute_access_operator] = ACTIONS(1),
    [sym_rightarrow_operator] = ACTIONS(1),
    [sym__lcb_symbol] = ACTIONS(1),
    [sym__rcb_symbol] = ACTIONS(1),
    [sym__lrb_symbol] = ACTIONS(1),
    [sym__rrb_symbol] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(116),
    [sym__definition] = STATE(36),
    [sym_variable_definition] = STATE(36),
    [sym_constant_definition] = STATE(36),
    [sym_context_definition] = STATE(36),
    [sym_function_definition] = STATE(36),
    [sym_use_directive] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [sym_const_keyword] = ACTIONS(9),
    [sym_use_keyword] = ACTIONS(11),
    [sym_context_keyword] = ACTIONS(13),
    [sym_function_keyword] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__embedded_type,
    ACTIONS(20), 1,
      anon_sym_ctx,
    ACTIONS(23), 1,
      sym_return_keyword,
    ACTIONS(26), 1,
      sym__rcb_symbol,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(34), 1,
      sym_number_literal,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(35), 1,
      sym_expression,
    ACTIONS(28), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(6), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(33), 2,
      sym_assign_expression,
      sym__expression_statement,
    STATE(11), 3,
      sym_literal,
      sym__non_lval_expression,
      sym_binary_expression,
    STATE(100), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(2), 4,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [67] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__embedded_type,
    ACTIONS(42), 1,
      anon_sym_ctx,
    ACTIONS(44), 1,
      sym_return_keyword,
    ACTIONS(46), 1,
      sym__rcb_symbol,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_number_literal,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(35), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(6), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(33), 2,
      sym_assign_expression,
      sym__expression_statement,
    STATE(11), 3,
      sym_literal,
      sym__non_lval_expression,
      sym_binary_expression,
    STATE(100), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(2), 4,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [134] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__embedded_type,
    ACTIONS(42), 1,
      anon_sym_ctx,
    ACTIONS(44), 1,
      sym_return_keyword,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_number_literal,
    ACTIONS(56), 1,
      sym__rcb_symbol,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(35), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(6), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(33), 2,
      sym_assign_expression,
      sym__expression_statement,
    STATE(11), 3,
      sym_literal,
      sym__non_lval_expression,
      sym_binary_expression,
    STATE(100), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(3), 4,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 5,
      sym__typedef_symbol,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
      sym_assign_operator,
    ACTIONS(58), 22,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__comma_symbol,
      sym__terminal_symbol,
      sym_add_operator,
      sym_sub_operator,
      sym_pow_operator,
      sym_mod_operator,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_expand_operator,
      sym_attribute_access_operator,
      sym__lcb_symbol,
      sym__rcb_symbol,
  [236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_assign_operator,
    ACTIONS(64), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(62), 20,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__terminal_symbol,
      sym_add_operator,
      sym_sub_operator,
      sym_pow_operator,
      sym_mod_operator,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_expand_operator,
      sym_attribute_access_operator,
      sym__rcb_symbol,
  [270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(70), 4,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
      sym_assign_operator,
    ACTIONS(68), 18,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__terminal_symbol,
      sym_add_operator,
      sym_sub_operator,
      sym_pow_operator,
      sym_mod_operator,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__rcb_symbol,
  [304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 4,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
      sym_assign_operator,
    ACTIONS(68), 20,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__terminal_symbol,
      sym_add_operator,
      sym_sub_operator,
      sym_pow_operator,
      sym_mod_operator,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_expand_operator,
      sym_attribute_access_operator,
      sym__rcb_symbol,
  [336] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_expand_operator,
    ACTIONS(83), 1,
      sym_attribute_access_operator,
    ACTIONS(77), 4,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
      sym_assign_operator,
    ACTIONS(75), 18,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__terminal_symbol,
      sym_add_operator,
      sym_sub_operator,
      sym_pow_operator,
      sym_mod_operator,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__rcb_symbol,
  [372] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__embedded_type,
    ACTIONS(42), 1,
      anon_sym_ctx,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_number_literal,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(16), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(6), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(100), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(62), 20,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__terminal_symbol,
      sym_add_operator,
      sym_sub_operator,
      sym_pow_operator,
      sym_mod_operator,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_expand_operator,
      sym_attribute_access_operator,
      sym__rcb_symbol,
  [456] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_mul_operator,
    ACTIONS(92), 1,
      sym_pow_operator,
    ACTIONS(94), 1,
      sym_mod_operator,
    ACTIONS(88), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(96), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(98), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(100), 2,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(102), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(86), 10,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__terminal_symbol,
      sym_and_operator,
      sym_or_operator,
      sym__rcb_symbol,
  [501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(104), 20,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__terminal_symbol,
      sym_add_operator,
      sym_sub_operator,
      sym_pow_operator,
      sym_mod_operator,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_expand_operator,
      sym_attribute_access_operator,
      sym__rcb_symbol,
  [532] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__embedded_type,
    ACTIONS(42), 1,
      anon_sym_ctx,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_number_literal,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(31), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(6), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(100), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [585] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__embedded_type,
    ACTIONS(42), 1,
      anon_sym_ctx,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_number_literal,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(29), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(6), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(100), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [638] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_mul_operator,
    ACTIONS(92), 1,
      sym_pow_operator,
    ACTIONS(94), 1,
      sym_mod_operator,
    ACTIONS(88), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(96), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(98), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(102), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(86), 12,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__terminal_symbol,
      sym_and_operator,
      sym_or_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__rcb_symbol,
  [681] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__embedded_type,
    ACTIONS(42), 1,
      anon_sym_ctx,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_number_literal,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(12), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(6), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(100), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [734] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_mul_operator,
    ACTIONS(92), 1,
      sym_pow_operator,
    ACTIONS(94), 1,
      sym_mod_operator,
    ACTIONS(110), 1,
      sym_and_operator,
    ACTIONS(112), 1,
      sym_or_operator,
    ACTIONS(88), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(96), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(98), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(100), 2,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(102), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(108), 8,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__terminal_symbol,
      sym__rcb_symbol,
  [783] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__embedded_type,
    ACTIONS(42), 1,
      anon_sym_ctx,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_number_literal,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(32), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(6), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(100), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [836] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__embedded_type,
    ACTIONS(42), 1,
      anon_sym_ctx,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_number_literal,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(21), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(6), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(100), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(114), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(86), 18,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__terminal_symbol,
      sym_add_operator,
      sym_sub_operator,
      sym_pow_operator,
      sym_mod_operator,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__rcb_symbol,
  [922] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__embedded_type,
    ACTIONS(42), 1,
      anon_sym_ctx,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_number_literal,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(18), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(6), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(100), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [975] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_pow_operator,
    ACTIONS(102), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(114), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(86), 17,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__terminal_symbol,
      sym_add_operator,
      sym_sub_operator,
      sym_mod_operator,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__rcb_symbol,
  [1010] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__embedded_type,
    ACTIONS(42), 1,
      anon_sym_ctx,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_number_literal,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(23), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(6), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(100), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [1063] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_mul_operator,
    ACTIONS(92), 1,
      sym_pow_operator,
    ACTIONS(94), 1,
      sym_mod_operator,
    ACTIONS(102), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(114), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(86), 16,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__terminal_symbol,
      sym_add_operator,
      sym_sub_operator,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__rcb_symbol,
  [1102] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__embedded_type,
    ACTIONS(42), 1,
      anon_sym_ctx,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_number_literal,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(6), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(100), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [1155] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__embedded_type,
    ACTIONS(42), 1,
      anon_sym_ctx,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_number_literal,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(34), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(6), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(100), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [1208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(116), 20,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__terminal_symbol,
      sym_add_operator,
      sym_sub_operator,
      sym_pow_operator,
      sym_mod_operator,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_expand_operator,
      sym_attribute_access_operator,
      sym__rcb_symbol,
  [1239] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_mul_operator,
    ACTIONS(92), 1,
      sym_pow_operator,
    ACTIONS(94), 1,
      sym_mod_operator,
    ACTIONS(110), 1,
      sym_and_operator,
    ACTIONS(88), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(96), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(98), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(100), 2,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(102), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(86), 9,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__terminal_symbol,
      sym_or_operator,
      sym__rcb_symbol,
  [1286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(120), 20,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__terminal_symbol,
      sym_add_operator,
      sym_sub_operator,
      sym_pow_operator,
      sym_mod_operator,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_expand_operator,
      sym_attribute_access_operator,
      sym__rcb_symbol,
  [1317] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_mul_operator,
    ACTIONS(92), 1,
      sym_pow_operator,
    ACTIONS(94), 1,
      sym_mod_operator,
    ACTIONS(88), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(102), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(114), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(86), 14,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__terminal_symbol,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__rcb_symbol,
  [1358] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_mul_operator,
    ACTIONS(92), 1,
      sym_pow_operator,
    ACTIONS(94), 1,
      sym_mod_operator,
    ACTIONS(110), 1,
      sym_and_operator,
    ACTIONS(112), 1,
      sym_or_operator,
    ACTIONS(88), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(96), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(98), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(100), 2,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(102), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(124), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym__terminal_symbol,
    ACTIONS(130), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(128), 12,
      sym_add_operator,
      sym_sub_operator,
      sym_pow_operator,
      sym_mod_operator,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_expand_operator,
      sym_attribute_access_operator,
  [1432] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_mul_operator,
    ACTIONS(92), 1,
      sym_pow_operator,
    ACTIONS(94), 1,
      sym_mod_operator,
    ACTIONS(110), 1,
      sym_and_operator,
    ACTIONS(112), 1,
      sym_or_operator,
    ACTIONS(132), 1,
      sym__terminal_symbol,
    ACTIONS(88), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(96), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(98), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(100), 2,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(102), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
  [1474] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_mul_operator,
    ACTIONS(92), 1,
      sym_pow_operator,
    ACTIONS(94), 1,
      sym_mod_operator,
    ACTIONS(110), 1,
      sym_and_operator,
    ACTIONS(112), 1,
      sym_or_operator,
    ACTIONS(88), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(96), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(98), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(100), 2,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(102), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
  [1513] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      sym_const_keyword,
    ACTIONS(11), 1,
      sym_use_keyword,
    ACTIONS(13), 1,
      sym_context_keyword,
    ACTIONS(15), 1,
      sym_function_keyword,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    STATE(37), 7,
      sym__definition,
      sym_variable_definition,
      sym_constant_definition,
      sym_context_definition,
      sym_function_definition,
      sym_use_directive,
      aux_sym_source_file_repeat1,
  [1544] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      anon_sym_let,
    ACTIONS(141), 1,
      sym_const_keyword,
    ACTIONS(144), 1,
      sym_use_keyword,
    ACTIONS(147), 1,
      sym_context_keyword,
    ACTIONS(150), 1,
      sym_function_keyword,
    STATE(37), 7,
      sym__definition,
      sym_variable_definition,
      sym_constant_definition,
      sym_context_definition,
      sym_function_definition,
      sym_use_directive,
      aux_sym_source_file_repeat1,
  [1575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      sym__rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(153), 8,
      sym__embedded_type,
      anon_sym_ctx,
      sym_return_keyword,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_constructor,
      sym__identifier,
  [1593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      sym__rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(157), 8,
      sym__embedded_type,
      anon_sym_ctx,
      sym_return_keyword,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_constructor,
      sym__identifier,
  [1611] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__embedded_type,
    STATE(54), 1,
      sym__reserved_identifier,
    STATE(60), 1,
      sym_identifier,
    STATE(75), 1,
      sym_type,
    ACTIONS(163), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(69), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
  [1636] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__embedded_type,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(72), 1,
      sym_identifier,
    STATE(99), 1,
      sym_type,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(93), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
  [1661] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__embedded_type,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(72), 1,
      sym_identifier,
    STATE(96), 1,
      sym_type,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(93), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
  [1686] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__embedded_type,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(72), 1,
      sym_identifier,
    STATE(106), 1,
      sym_type,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(93), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
  [1711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_constructor,
      sym__identifier,
    ACTIONS(165), 6,
      sym__comma_symbol,
      sym_assign_operator,
      sym_expand_operator,
      sym_attribute_access_operator,
      sym__lcb_symbol,
      sym__rrb_symbol,
  [1727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_assign_operator,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_constructor,
      sym__identifier,
    ACTIONS(173), 5,
      sym__comma_symbol,
      sym_assign_operator,
      sym_attribute_access_operator,
      sym__lcb_symbol,
      sym__rrb_symbol,
  [1758] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym_number_literal,
    STATE(110), 1,
      sym_literal,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 2,
      sym_bool_literal,
      sym_string_literal,
  [1779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1792] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__rrb_symbol,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(55), 1,
      aux_sym_function_definition_repeat1,
    STATE(82), 1,
      sym_parameter_definition,
    STATE(113), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [1815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1841] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__rrb_symbol,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(49), 1,
      aux_sym_function_definition_repeat1,
    STATE(82), 1,
      sym_parameter_definition,
    STATE(113), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [1864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 2,
      anon_sym_constructor,
      sym__identifier,
    ACTIONS(58), 5,
      sym__comma_symbol,
      sym_expand_operator,
      sym_attribute_access_operator,
      sym__lrb_symbol,
      sym__rrb_symbol,
  [1892] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym__rrb_symbol,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(55), 1,
      aux_sym_function_definition_repeat1,
    STATE(82), 1,
      sym_parameter_definition,
    STATE(113), 1,
      sym_identifier,
    ACTIONS(195), 2,
      anon_sym_constructor,
      sym__identifier,
  [1915] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      sym_function_keyword,
    ACTIONS(198), 1,
      sym__rcb_symbol,
    STATE(57), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [1933] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      sym_function_keyword,
    ACTIONS(200), 1,
      sym__rcb_symbol,
    STATE(64), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [1951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_expand_operator,
    ACTIONS(210), 2,
      anon_sym_constructor,
      sym__identifier,
    ACTIONS(206), 3,
      sym__comma_symbol,
      sym_attribute_access_operator,
      sym__rrb_symbol,
  [1991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [2003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [2015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [2027] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_let,
    ACTIONS(221), 1,
      sym_function_keyword,
    ACTIONS(224), 1,
      sym__rcb_symbol,
    STATE(64), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [2045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [2057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 2,
      anon_sym_constructor,
      sym__identifier,
    ACTIONS(228), 4,
      sym__comma_symbol,
      sym_assign_operator,
      sym__lcb_symbol,
      sym__rrb_symbol,
  [2071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [2083] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym__lcb_symbol,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(89), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_attribute_access_operator,
    ACTIONS(228), 2,
      sym__comma_symbol,
      sym__rrb_symbol,
    ACTIONS(230), 2,
      anon_sym_constructor,
      sym__identifier,
  [2115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(54), 1,
      sym__reserved_identifier,
    STATE(111), 1,
      sym_identifier,
    ACTIONS(163), 2,
      anon_sym_constructor,
      sym__identifier,
  [2143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_expand_operator,
    ACTIONS(206), 3,
      sym_assign_operator,
      sym_attribute_access_operator,
      sym__lcb_symbol,
  [2155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(87), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(112), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 2,
      sym__comma_symbol,
      sym__rrb_symbol,
    ACTIONS(242), 2,
      anon_sym_constructor,
      sym__identifier,
  [2195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(46), 1,
      sym_identifier,
    STATE(54), 1,
      sym__reserved_identifier,
    ACTIONS(163), 2,
      anon_sym_constructor,
      sym__identifier,
  [2223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      sym_identifier,
    STATE(54), 1,
      sym__reserved_identifier,
    ACTIONS(163), 2,
      anon_sym_constructor,
      sym__identifier,
  [2237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(44), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(7), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(45), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym__comma_symbol,
    ACTIONS(246), 1,
      sym__rrb_symbol,
    ACTIONS(248), 2,
      anon_sym_constructor,
      sym__identifier,
  [2293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(8), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(114), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(46), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym__rrb_symbol,
    ACTIONS(250), 2,
      anon_sym_constructor,
      sym__identifier,
  [2346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym__comma_symbol,
    ACTIONS(254), 1,
      sym__rcb_symbol,
    STATE(91), 1,
      aux_sym_use_directive_repeat2,
  [2359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym__terminal_symbol,
    ACTIONS(258), 1,
      sym_expand_operator,
    STATE(90), 1,
      aux_sym_use_directive_repeat1,
  [2372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_expand_operator,
    ACTIONS(260), 1,
      sym__terminal_symbol,
    STATE(88), 1,
      aux_sym_use_directive_repeat1,
  [2385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym__terminal_symbol,
    ACTIONS(264), 1,
      sym_expand_operator,
    STATE(90), 1,
      aux_sym_use_directive_repeat1,
  [2398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym__comma_symbol,
    ACTIONS(267), 1,
      sym__rcb_symbol,
    STATE(92), 1,
      aux_sym_use_directive_repeat2,
  [2411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym__comma_symbol,
    ACTIONS(272), 1,
      sym__rcb_symbol,
    STATE(92), 1,
      aux_sym_use_directive_repeat2,
  [2424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_attribute_access_operator,
    ACTIONS(228), 2,
      sym_assign_operator,
      sym__lcb_symbol,
  [2435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      sym__comma_symbol,
      sym__rcb_symbol,
  [2443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      sym_string_literal,
  [2453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym__lcb_symbol,
    STATE(50), 1,
      sym_block,
  [2463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 2,
      sym__terminal_symbol,
      sym_expand_operator,
  [2471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_string_literal,
  [2481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym__lcb_symbol,
    STATE(48), 1,
      sym_block,
  [2491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_expand_operator,
    ACTIONS(278), 1,
      sym_attribute_access_operator,
  [2501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
  [2509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
  [2516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_from_keyword,
  [2523] = 2,
    ACTIONS(284), 1,
      sym__string_literal_content,
    ACTIONS(286), 1,
      sym_comment,
  [2530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym__terminal_symbol,
  [2537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_assign_operator,
  [2544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_rightarrow_operator,
  [2551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym__terminal_symbol,
  [2558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_rightarrow_operator,
  [2565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym__terminal_symbol,
  [2572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym__lrb_symbol,
  [2579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym__lcb_symbol,
  [2586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym__typedef_symbol,
  [2593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__typedef_symbol,
  [2600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_from_keyword,
  [2607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 134,
  [SMALL_STATE(5)] = 201,
  [SMALL_STATE(6)] = 236,
  [SMALL_STATE(7)] = 270,
  [SMALL_STATE(8)] = 304,
  [SMALL_STATE(9)] = 336,
  [SMALL_STATE(10)] = 372,
  [SMALL_STATE(11)] = 425,
  [SMALL_STATE(12)] = 456,
  [SMALL_STATE(13)] = 501,
  [SMALL_STATE(14)] = 532,
  [SMALL_STATE(15)] = 585,
  [SMALL_STATE(16)] = 638,
  [SMALL_STATE(17)] = 681,
  [SMALL_STATE(18)] = 734,
  [SMALL_STATE(19)] = 783,
  [SMALL_STATE(20)] = 836,
  [SMALL_STATE(21)] = 889,
  [SMALL_STATE(22)] = 922,
  [SMALL_STATE(23)] = 975,
  [SMALL_STATE(24)] = 1010,
  [SMALL_STATE(25)] = 1063,
  [SMALL_STATE(26)] = 1102,
  [SMALL_STATE(27)] = 1155,
  [SMALL_STATE(28)] = 1208,
  [SMALL_STATE(29)] = 1239,
  [SMALL_STATE(30)] = 1286,
  [SMALL_STATE(31)] = 1317,
  [SMALL_STATE(32)] = 1358,
  [SMALL_STATE(33)] = 1406,
  [SMALL_STATE(34)] = 1432,
  [SMALL_STATE(35)] = 1474,
  [SMALL_STATE(36)] = 1513,
  [SMALL_STATE(37)] = 1544,
  [SMALL_STATE(38)] = 1575,
  [SMALL_STATE(39)] = 1593,
  [SMALL_STATE(40)] = 1611,
  [SMALL_STATE(41)] = 1636,
  [SMALL_STATE(42)] = 1661,
  [SMALL_STATE(43)] = 1686,
  [SMALL_STATE(44)] = 1711,
  [SMALL_STATE(45)] = 1727,
  [SMALL_STATE(46)] = 1743,
  [SMALL_STATE(47)] = 1758,
  [SMALL_STATE(48)] = 1779,
  [SMALL_STATE(49)] = 1792,
  [SMALL_STATE(50)] = 1815,
  [SMALL_STATE(51)] = 1828,
  [SMALL_STATE(52)] = 1841,
  [SMALL_STATE(53)] = 1864,
  [SMALL_STATE(54)] = 1877,
  [SMALL_STATE(55)] = 1892,
  [SMALL_STATE(56)] = 1915,
  [SMALL_STATE(57)] = 1933,
  [SMALL_STATE(58)] = 1951,
  [SMALL_STATE(59)] = 1963,
  [SMALL_STATE(60)] = 1975,
  [SMALL_STATE(61)] = 1991,
  [SMALL_STATE(62)] = 2003,
  [SMALL_STATE(63)] = 2015,
  [SMALL_STATE(64)] = 2027,
  [SMALL_STATE(65)] = 2045,
  [SMALL_STATE(66)] = 2057,
  [SMALL_STATE(67)] = 2071,
  [SMALL_STATE(68)] = 2083,
  [SMALL_STATE(69)] = 2100,
  [SMALL_STATE(70)] = 2115,
  [SMALL_STATE(71)] = 2129,
  [SMALL_STATE(72)] = 2143,
  [SMALL_STATE(73)] = 2155,
  [SMALL_STATE(74)] = 2169,
  [SMALL_STATE(75)] = 2183,
  [SMALL_STATE(76)] = 2195,
  [SMALL_STATE(77)] = 2209,
  [SMALL_STATE(78)] = 2223,
  [SMALL_STATE(79)] = 2237,
  [SMALL_STATE(80)] = 2251,
  [SMALL_STATE(81)] = 2265,
  [SMALL_STATE(82)] = 2279,
  [SMALL_STATE(83)] = 2293,
  [SMALL_STATE(84)] = 2307,
  [SMALL_STATE(85)] = 2321,
  [SMALL_STATE(86)] = 2335,
  [SMALL_STATE(87)] = 2346,
  [SMALL_STATE(88)] = 2359,
  [SMALL_STATE(89)] = 2372,
  [SMALL_STATE(90)] = 2385,
  [SMALL_STATE(91)] = 2398,
  [SMALL_STATE(92)] = 2411,
  [SMALL_STATE(93)] = 2424,
  [SMALL_STATE(94)] = 2435,
  [SMALL_STATE(95)] = 2443,
  [SMALL_STATE(96)] = 2453,
  [SMALL_STATE(97)] = 2463,
  [SMALL_STATE(98)] = 2471,
  [SMALL_STATE(99)] = 2481,
  [SMALL_STATE(100)] = 2491,
  [SMALL_STATE(101)] = 2501,
  [SMALL_STATE(102)] = 2509,
  [SMALL_STATE(103)] = 2516,
  [SMALL_STATE(104)] = 2523,
  [SMALL_STATE(105)] = 2530,
  [SMALL_STATE(106)] = 2537,
  [SMALL_STATE(107)] = 2544,
  [SMALL_STATE(108)] = 2551,
  [SMALL_STATE(109)] = 2558,
  [SMALL_STATE(110)] = 2565,
  [SMALL_STATE(111)] = 2572,
  [SMALL_STATE(112)] = 2579,
  [SMALL_STATE(113)] = 2586,
  [SMALL_STATE(114)] = 2593,
  [SMALL_STATE(115)] = 2600,
  [SMALL_STATE(116)] = 2607,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access_expression, 3, 0, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_access_expression, 3, 0, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_member_access_expression, 3, 0, 2), REDUCE(sym_qualified_name, 3, 0, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lval_expression, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lval_expression, 1, 0, 0),
  [79] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__lval_expression, 1, 0, 0), REDUCE(sym__name, 1, 0, 0), SHIFT(79),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__lval_expression, 1, 0, 0), REDUCE(sym__name, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expression, 3, 0, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, 0, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__non_lval_expression, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__non_lval_expression, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 11),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 11),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_qualified_name, 3, 0, 6),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_qualified_name, 3, 0, 6),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 2, 0, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3, 0, 5),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3, 0, 5),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 10),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 9),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 4, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 4, 0, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 7, 0, 8),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 7, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 8, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 5, 0, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 3, 0, 7),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_definition, 3, 0, 7),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat2, 2, 0, 0), SHIFT_REPEAT(70),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat2, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [310] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
