#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
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
  sym_add_operator = 10,
  sym_sub_operator = 11,
  sym_mul_operator = 12,
  sym_pow_operator = 13,
  sym_mod_operator = 14,
  sym_and_operator = 15,
  sym_or_operator = 16,
  sym_less_operator = 17,
  sym_greater_operator = 18,
  sym_less_equal_operator = 19,
  sym_greater_equal_operator = 20,
  sym_equals_operator = 21,
  sym_not_equals_operator = 22,
  sym_assign_operator = 23,
  sym_expand_operator = 24,
  sym_attribute_access_operator = 25,
  sym_rightarrow_operator = 26,
  sym__lcb_symbol = 27,
  sym__rcb_symbol = 28,
  sym__lrb_symbol = 29,
  sym__rrb_symbol = 30,
  sym__comma_symbol = 31,
  sym__typedef_symbol = 32,
  sym__terminal_symbol = 33,
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
  sym_argument_list = 58,
  sym_argument_declaration = 59,
  sym_use_directive = 60,
  sym_expression_statement = 61,
  sym__expression_statement = 62,
  sym_return_statement = 63,
  sym_bool_literal = 64,
  sym_string_literal = 65,
  sym__name = 66,
  sym_type_qualified_name = 67,
  sym_qualified_name = 68,
  sym__reserved_identifier = 69,
  sym_identifier = 70,
  aux_sym_source_file_repeat1 = 71,
  aux_sym_context_definition_repeat1 = 72,
  aux_sym_block_repeat1 = 73,
  aux_sym_argument_list_repeat1 = 74,
  aux_sym_use_directive_repeat1 = 75,
  aux_sym_use_directive_repeat2 = 76,
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
  [sym__comma_symbol] = "_comma_symbol",
  [sym__typedef_symbol] = "_typedef_symbol",
  [sym__terminal_symbol] = "_terminal_symbol",
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
  [sym_argument_list] = "argument_list",
  [sym_argument_declaration] = "argument_declaration",
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
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
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
  [sym__comma_symbol] = sym__comma_symbol,
  [sym__typedef_symbol] = sym__typedef_symbol,
  [sym__terminal_symbol] = sym__terminal_symbol,
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
  [sym_argument_list] = sym_argument_list,
  [sym_argument_declaration] = sym_argument_declaration,
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
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
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
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_declaration] = {
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
  [aux_sym_argument_list_repeat1] = {
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
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 3},
  [8] = {.index = 15, .length = 2},
  [9] = {.index = 17, .length = 3},
  [10] = {.index = 20, .length = 2},
  [11] = {.index = 22, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_type, 3},
  [3] =
    {field_name, 2},
    {field_qualifier, 0},
  [5] =
    {field_alias, 0},
    {field_name, 2},
  [7] =
    {field_name, 0},
    {field_type, 2},
  [9] =
    {field_body, 5},
    {field_name, 1},
    {field_returns, 4},
  [12] =
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
  [15] =
    {field_expression, 0},
    {field_name, 2},
  [17] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [20] =
    {field_left, 0},
    {field_right, 2},
  [22] =
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
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      ADVANCE_MAP(
        '!', 12,
        '"', 85,
        '%', 60,
        '&', 5,
        '(', 75,
        ')', 76,
        '*', 58,
        '+', 55,
        ',', 77,
        '-', 57,
        '.', 71,
        '/', 10,
        ':', 79,
        ';', 80,
        '<', 63,
        '=', 69,
        '>', 64,
        'c', 25,
        'f', 14,
        'l', 15,
        'r', 20,
        't', 27,
        'u', 29,
        '{', 73,
        '|', 40,
        '}', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '/') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 12,
        '"', 85,
        '%', 60,
        '&', 5,
        '(', 7,
        ')', 76,
        '*', 58,
        '+', 55,
        ',', 77,
        '-', 56,
        '.', 71,
        '/', 10,
        ':', 11,
        ';', 80,
        '<', 63,
        '=', 69,
        '>', 64,
        'b', 108,
        'c', 106,
        'f', 97,
        'i', 95,
        'r', 99,
        't', 111,
        'u', 95,
        '{', 73,
        '|', 40,
        '}', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 12,
        '%', 60,
        '&', 5,
        '(', 75,
        ')', 76,
        '*', 58,
        '+', 55,
        ',', 77,
        '-', 56,
        '.', 71,
        '/', 10,
        ':', 79,
        ';', 80,
        '<', 63,
        '=', 69,
        '>', 64,
        'c', 107,
        '{', 73,
        '|', 40,
        '}', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 85,
        '(', 7,
        '-', 13,
        '/', 10,
        ':', 78,
        'b', 108,
        'c', 106,
        'f', 97,
        'i', 95,
        't', 111,
        'u', 95,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(61);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(125);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 38:
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == '|') ADVANCE(62);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__embedded_type);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__embedded_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_ctx);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_ctx);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_const_keyword);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_from_keyword);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_function_keyword);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_return_keyword);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_return_keyword);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_add_operator);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_sub_operator);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_sub_operator);
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_mul_operator);
      if (lookahead == '*') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_pow_operator);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_mod_operator);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_and_operator);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_or_operator);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_less_operator);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_greater_operator);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_less_equal_operator);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_greater_equal_operator);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_equals_operator);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_not_equals_operator);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_assign_operator);
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_expand_operator);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_attribute_access_operator);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_rightarrow_operator);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__lcb_symbol);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__rcb_symbol);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__lrb_symbol);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__rrb_symbol);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__comma_symbol);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__typedef_symbol);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__typedef_symbol);
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__terminal_symbol);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(94);
      if (lookahead == '6') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '4') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(125);
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
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
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
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
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
    [sym__comma_symbol] = ACTIONS(1),
    [sym__typedef_symbol] = ACTIONS(1),
    [sym__terminal_symbol] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(111),
    [sym__definition] = STATE(37),
    [sym_variable_definition] = STATE(37),
    [sym_constant_definition] = STATE(37),
    [sym_context_definition] = STATE(37),
    [sym_function_definition] = STATE(37),
    [sym_use_directive] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(37),
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
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(18), 1,
      sym_identifier,
    STATE(35), 1,
      sym_expression,
    ACTIONS(28), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(24), 2,
      sym_assign_expression,
      sym__expression_statement,
    STATE(26), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(28), 3,
      sym_literal,
      sym__non_lval_expression,
      sym_binary_expression,
    STATE(96), 3,
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
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(18), 1,
      sym_identifier,
    STATE(35), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(24), 2,
      sym_assign_expression,
      sym__expression_statement,
    STATE(26), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(28), 3,
      sym_literal,
      sym__non_lval_expression,
      sym_binary_expression,
    STATE(96), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(4), 4,
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
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(18), 1,
      sym_identifier,
    STATE(35), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(24), 2,
      sym_assign_expression,
      sym__expression_statement,
    STATE(26), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(28), 3,
      sym_literal,
      sym__non_lval_expression,
      sym_binary_expression,
    STATE(96), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(2), 4,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [201] = 14,
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
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(18), 1,
      sym_identifier,
    STATE(27), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(26), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(96), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(28), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [254] = 14,
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
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(18), 1,
      sym_identifier,
    STATE(22), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(26), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(96), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(28), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 5,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
      sym_assign_operator,
      sym__typedef_symbol,
    ACTIONS(58), 18,
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
      sym__lrb_symbol,
      sym__rrb_symbol,
      sym__comma_symbol,
      sym__terminal_symbol,
  [338] = 14,
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
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(18), 1,
      sym_identifier,
    STATE(31), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(26), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(96), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(28), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [391] = 14,
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
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(18), 1,
      sym_identifier,
    STATE(29), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(26), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(96), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(28), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [444] = 14,
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
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(18), 1,
      sym_identifier,
    STATE(30), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(26), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(96), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(28), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [497] = 14,
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
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(18), 1,
      sym_identifier,
    STATE(20), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(26), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(96), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(28), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [550] = 14,
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
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(18), 1,
      sym_identifier,
    STATE(32), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(26), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(96), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(28), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [603] = 14,
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
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(18), 1,
      sym_identifier,
    STATE(33), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(26), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(96), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(28), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [656] = 14,
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
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(18), 1,
      sym_identifier,
    STATE(34), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(26), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(96), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(28), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [709] = 14,
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
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(18), 1,
      sym_identifier,
    STATE(21), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(26), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(96), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(28), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 4,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
      sym_assign_operator,
    ACTIONS(62), 13,
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
      sym__terminal_symbol,
  [787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_assign_operator,
    ACTIONS(68), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(66), 13,
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
      sym__terminal_symbol,
  [814] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_expand_operator,
    ACTIONS(80), 1,
      sym_attribute_access_operator,
    ACTIONS(74), 4,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
      sym_assign_operator,
    ACTIONS(72), 11,
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
      sym__terminal_symbol,
  [843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(64), 4,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
      sym_assign_operator,
    ACTIONS(62), 11,
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
      sym__terminal_symbol,
  [870] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_mul_operator,
    ACTIONS(90), 1,
      sym_pow_operator,
    ACTIONS(92), 1,
      sym_mod_operator,
    ACTIONS(94), 1,
      sym_and_operator,
    ACTIONS(86), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(96), 2,
      sym_or_operator,
      sym__terminal_symbol,
    ACTIONS(98), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(100), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(102), 2,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(104), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
  [910] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_mul_operator,
    ACTIONS(90), 1,
      sym_pow_operator,
    ACTIONS(92), 1,
      sym_mod_operator,
    ACTIONS(94), 1,
      sym_and_operator,
    ACTIONS(106), 1,
      sym_or_operator,
    ACTIONS(108), 1,
      sym__terminal_symbol,
    ACTIONS(86), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(98), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(100), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(102), 2,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(104), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
  [952] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_mul_operator,
    ACTIONS(90), 1,
      sym_pow_operator,
    ACTIONS(92), 1,
      sym_mod_operator,
    ACTIONS(104), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(110), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(96), 9,
      sym_add_operator,
      sym_sub_operator,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__terminal_symbol,
  [984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(112), 13,
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
      sym__terminal_symbol,
  [1008] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym__terminal_symbol,
    ACTIONS(118), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(116), 12,
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
  [1034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(122), 13,
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
      sym__terminal_symbol,
  [1058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(126), 13,
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
      sym__terminal_symbol,
  [1082] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_mul_operator,
    ACTIONS(90), 1,
      sym_pow_operator,
    ACTIONS(92), 1,
      sym_mod_operator,
    ACTIONS(94), 1,
      sym_and_operator,
    ACTIONS(106), 1,
      sym_or_operator,
    ACTIONS(130), 1,
      sym__terminal_symbol,
    ACTIONS(86), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(98), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(100), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(102), 2,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(104), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
  [1124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(66), 13,
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
      sym__terminal_symbol,
  [1148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(110), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(96), 11,
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
      sym__terminal_symbol,
  [1174] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_mul_operator,
    ACTIONS(90), 1,
      sym_pow_operator,
    ACTIONS(92), 1,
      sym_mod_operator,
    ACTIONS(86), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(98), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(100), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(102), 2,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(104), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(96), 3,
      sym_and_operator,
      sym_or_operator,
      sym__terminal_symbol,
  [1212] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_pow_operator,
    ACTIONS(104), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(110), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(96), 10,
      sym_add_operator,
      sym_sub_operator,
      sym_mod_operator,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__terminal_symbol,
  [1240] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_mul_operator,
    ACTIONS(90), 1,
      sym_pow_operator,
    ACTIONS(92), 1,
      sym_mod_operator,
    ACTIONS(86), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(104), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(110), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(96), 7,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__terminal_symbol,
  [1274] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_mul_operator,
    ACTIONS(90), 1,
      sym_pow_operator,
    ACTIONS(92), 1,
      sym_mod_operator,
    ACTIONS(86), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(98), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(100), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(104), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(96), 5,
      sym_and_operator,
      sym_or_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__terminal_symbol,
  [1310] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_mul_operator,
    ACTIONS(90), 1,
      sym_pow_operator,
    ACTIONS(92), 1,
      sym_mod_operator,
    ACTIONS(94), 1,
      sym_and_operator,
    ACTIONS(106), 1,
      sym_or_operator,
    ACTIONS(132), 1,
      sym__terminal_symbol,
    ACTIONS(86), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(98), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(100), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(102), 2,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(104), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
  [1352] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_mul_operator,
    ACTIONS(90), 1,
      sym_pow_operator,
    ACTIONS(92), 1,
      sym_mod_operator,
    ACTIONS(94), 1,
      sym_and_operator,
    ACTIONS(106), 1,
      sym_or_operator,
    ACTIONS(86), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(98), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(100), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(102), 2,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(104), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
  [1391] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      sym_const_keyword,
    ACTIONS(142), 1,
      sym_use_keyword,
    ACTIONS(145), 1,
      sym_context_keyword,
    ACTIONS(148), 1,
      sym_function_keyword,
    STATE(36), 7,
      sym__definition,
      sym_variable_definition,
      sym_constant_definition,
      sym_context_definition,
      sym_function_definition,
      sym_use_directive,
      aux_sym_source_file_repeat1,
  [1422] = 8,
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
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    STATE(36), 7,
      sym__definition,
      sym_variable_definition,
      sym_constant_definition,
      sym_context_definition,
      sym_function_definition,
      sym_use_directive,
      aux_sym_source_file_repeat1,
  [1453] = 3,
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
  [1471] = 3,
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
  [1489] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__embedded_type,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(51), 1,
      sym_identifier,
    STATE(93), 1,
      sym_type,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(52), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
  [1514] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__embedded_type,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(51), 1,
      sym_identifier,
    STATE(98), 1,
      sym_type,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(52), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
  [1539] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__embedded_type,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(51), 1,
      sym_identifier,
    STATE(95), 1,
      sym_type,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(52), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
  [1564] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__embedded_type,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(51), 1,
      sym_identifier,
    STATE(106), 1,
      sym_type,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(52), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
  [1589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 7,
      sym_assign_operator,
      sym_expand_operator,
      sym_attribute_access_operator,
      sym__lcb_symbol,
      sym__rrb_symbol,
      sym__comma_symbol,
      sym__terminal_symbol,
  [1602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1654] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_number_literal,
    STATE(99), 1,
      sym_literal,
    ACTIONS(173), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 2,
      sym_bool_literal,
      sym_string_literal,
  [1675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_expand_operator,
    ACTIONS(179), 6,
      sym_assign_operator,
      sym_attribute_access_operator,
      sym__lcb_symbol,
      sym__rrb_symbol,
      sym__comma_symbol,
      sym__terminal_symbol,
  [1703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_attribute_access_operator,
    ACTIONS(183), 5,
      sym_assign_operator,
      sym__lcb_symbol,
      sym__rrb_symbol,
      sym__comma_symbol,
      sym__terminal_symbol,
  [1717] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      sym_function_keyword,
    ACTIONS(187), 1,
      sym__rcb_symbol,
    STATE(63), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [1735] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_let,
    ACTIONS(192), 1,
      sym_function_keyword,
    ACTIONS(195), 1,
      sym__rcb_symbol,
    STATE(54), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [1753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1789] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym__rrb_symbol,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(86), 1,
      sym_argument_declaration,
    STATE(113), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [1809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1857] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      sym_function_keyword,
    ACTIONS(213), 1,
      sym__rcb_symbol,
    STATE(54), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [1875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 6,
      sym_assign_operator,
      sym_attribute_access_operator,
      sym__lcb_symbol,
      sym__rrb_symbol,
      sym__comma_symbol,
      sym__terminal_symbol,
  [1887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 5,
      sym_assign_operator,
      sym__lcb_symbol,
      sym__rrb_symbol,
      sym__comma_symbol,
      sym__terminal_symbol,
  [1898] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym__lcb_symbol,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(80), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [1915] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(92), 1,
      sym_argument_declaration,
    STATE(113), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [1932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [1946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(89), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [1960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [1974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(44), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [1988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(105), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(81), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(16), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2058] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(19), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym__reserved_identifier,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym__rrb_symbol,
    ACTIONS(221), 1,
      sym__comma_symbol,
    STATE(79), 1,
      aux_sym_argument_list_repeat1,
  [2099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_expand_operator,
    ACTIONS(226), 1,
      sym__terminal_symbol,
    STATE(82), 1,
      aux_sym_use_directive_repeat1,
  [2112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__rcb_symbol,
    ACTIONS(230), 1,
      sym__comma_symbol,
    STATE(87), 1,
      aux_sym_use_directive_repeat2,
  [2125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_expand_operator,
    ACTIONS(232), 1,
      sym__terminal_symbol,
    STATE(85), 1,
      aux_sym_use_directive_repeat1,
  [2138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym__rrb_symbol,
    ACTIONS(236), 1,
      sym__comma_symbol,
    STATE(79), 1,
      aux_sym_argument_list_repeat1,
  [2151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym__rcb_symbol,
    ACTIONS(240), 1,
      sym__comma_symbol,
    STATE(84), 1,
      aux_sym_use_directive_repeat2,
  [2164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_expand_operator,
    ACTIONS(246), 1,
      sym__terminal_symbol,
    STATE(85), 1,
      aux_sym_use_directive_repeat1,
  [2177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym__comma_symbol,
    ACTIONS(248), 1,
      sym__rrb_symbol,
    STATE(83), 1,
      aux_sym_argument_list_repeat1,
  [2190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym__comma_symbol,
    ACTIONS(250), 1,
      sym__rcb_symbol,
    STATE(84), 1,
      aux_sym_use_directive_repeat2,
  [2203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      sym_string_literal,
  [2213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 2,
      sym__rcb_symbol,
      sym__comma_symbol,
  [2221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 2,
      sym_expand_operator,
      sym__terminal_symbol,
  [2229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym_string_literal,
  [2239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      sym__rrb_symbol,
      sym__comma_symbol,
  [2247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      sym__rrb_symbol,
      sym__comma_symbol,
  [2255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
  [2263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_assign_operator,
    ACTIONS(256), 1,
      sym__terminal_symbol,
  [2273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_expand_operator,
    ACTIONS(258), 1,
      sym_attribute_access_operator,
  [2283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym__lrb_symbol,
    STATE(104), 1,
      sym_argument_list,
  [2293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym__lcb_symbol,
    STATE(45), 1,
      sym_block,
  [2303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym__terminal_symbol,
  [2310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_from_keyword,
  [2317] = 2,
    ACTIONS(268), 1,
      sym__string_literal_content,
    ACTIONS(270), 1,
      sym_comment,
  [2324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_rightarrow_operator,
  [2331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
  [2338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_rightarrow_operator,
  [2345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__lcb_symbol,
  [2352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_assign_operator,
  [2359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym__terminal_symbol,
  [2366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym__typedef_symbol,
  [2373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym__typedef_symbol,
  [2380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_rightarrow_operator,
  [2387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
  [2394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_rightarrow_operator,
  [2401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym__typedef_symbol,
  [2408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_from_keyword,
  [2415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym__terminal_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 134,
  [SMALL_STATE(5)] = 201,
  [SMALL_STATE(6)] = 254,
  [SMALL_STATE(7)] = 307,
  [SMALL_STATE(8)] = 338,
  [SMALL_STATE(9)] = 391,
  [SMALL_STATE(10)] = 444,
  [SMALL_STATE(11)] = 497,
  [SMALL_STATE(12)] = 550,
  [SMALL_STATE(13)] = 603,
  [SMALL_STATE(14)] = 656,
  [SMALL_STATE(15)] = 709,
  [SMALL_STATE(16)] = 762,
  [SMALL_STATE(17)] = 787,
  [SMALL_STATE(18)] = 814,
  [SMALL_STATE(19)] = 843,
  [SMALL_STATE(20)] = 870,
  [SMALL_STATE(21)] = 910,
  [SMALL_STATE(22)] = 952,
  [SMALL_STATE(23)] = 984,
  [SMALL_STATE(24)] = 1008,
  [SMALL_STATE(25)] = 1034,
  [SMALL_STATE(26)] = 1058,
  [SMALL_STATE(27)] = 1082,
  [SMALL_STATE(28)] = 1124,
  [SMALL_STATE(29)] = 1148,
  [SMALL_STATE(30)] = 1174,
  [SMALL_STATE(31)] = 1212,
  [SMALL_STATE(32)] = 1240,
  [SMALL_STATE(33)] = 1274,
  [SMALL_STATE(34)] = 1310,
  [SMALL_STATE(35)] = 1352,
  [SMALL_STATE(36)] = 1391,
  [SMALL_STATE(37)] = 1422,
  [SMALL_STATE(38)] = 1453,
  [SMALL_STATE(39)] = 1471,
  [SMALL_STATE(40)] = 1489,
  [SMALL_STATE(41)] = 1514,
  [SMALL_STATE(42)] = 1539,
  [SMALL_STATE(43)] = 1564,
  [SMALL_STATE(44)] = 1589,
  [SMALL_STATE(45)] = 1602,
  [SMALL_STATE(46)] = 1615,
  [SMALL_STATE(47)] = 1628,
  [SMALL_STATE(48)] = 1641,
  [SMALL_STATE(49)] = 1654,
  [SMALL_STATE(50)] = 1675,
  [SMALL_STATE(51)] = 1688,
  [SMALL_STATE(52)] = 1703,
  [SMALL_STATE(53)] = 1717,
  [SMALL_STATE(54)] = 1735,
  [SMALL_STATE(55)] = 1753,
  [SMALL_STATE(56)] = 1765,
  [SMALL_STATE(57)] = 1777,
  [SMALL_STATE(58)] = 1789,
  [SMALL_STATE(59)] = 1809,
  [SMALL_STATE(60)] = 1821,
  [SMALL_STATE(61)] = 1833,
  [SMALL_STATE(62)] = 1845,
  [SMALL_STATE(63)] = 1857,
  [SMALL_STATE(64)] = 1875,
  [SMALL_STATE(65)] = 1887,
  [SMALL_STATE(66)] = 1898,
  [SMALL_STATE(67)] = 1915,
  [SMALL_STATE(68)] = 1932,
  [SMALL_STATE(69)] = 1946,
  [SMALL_STATE(70)] = 1960,
  [SMALL_STATE(71)] = 1974,
  [SMALL_STATE(72)] = 1988,
  [SMALL_STATE(73)] = 2002,
  [SMALL_STATE(74)] = 2016,
  [SMALL_STATE(75)] = 2030,
  [SMALL_STATE(76)] = 2044,
  [SMALL_STATE(77)] = 2058,
  [SMALL_STATE(78)] = 2072,
  [SMALL_STATE(79)] = 2086,
  [SMALL_STATE(80)] = 2099,
  [SMALL_STATE(81)] = 2112,
  [SMALL_STATE(82)] = 2125,
  [SMALL_STATE(83)] = 2138,
  [SMALL_STATE(84)] = 2151,
  [SMALL_STATE(85)] = 2164,
  [SMALL_STATE(86)] = 2177,
  [SMALL_STATE(87)] = 2190,
  [SMALL_STATE(88)] = 2203,
  [SMALL_STATE(89)] = 2213,
  [SMALL_STATE(90)] = 2221,
  [SMALL_STATE(91)] = 2229,
  [SMALL_STATE(92)] = 2239,
  [SMALL_STATE(93)] = 2247,
  [SMALL_STATE(94)] = 2255,
  [SMALL_STATE(95)] = 2263,
  [SMALL_STATE(96)] = 2273,
  [SMALL_STATE(97)] = 2283,
  [SMALL_STATE(98)] = 2293,
  [SMALL_STATE(99)] = 2303,
  [SMALL_STATE(100)] = 2310,
  [SMALL_STATE(101)] = 2317,
  [SMALL_STATE(102)] = 2324,
  [SMALL_STATE(103)] = 2331,
  [SMALL_STATE(104)] = 2338,
  [SMALL_STATE(105)] = 2345,
  [SMALL_STATE(106)] = 2352,
  [SMALL_STATE(107)] = 2359,
  [SMALL_STATE(108)] = 2366,
  [SMALL_STATE(109)] = 2373,
  [SMALL_STATE(110)] = 2380,
  [SMALL_STATE(111)] = 2387,
  [SMALL_STATE(112)] = 2394,
  [SMALL_STATE(113)] = 2401,
  [SMALL_STATE(114)] = 2408,
  [SMALL_STATE(115)] = 2415,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access_expression, 3, 0, 8),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_access_expression, 3, 0, 8),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lval_expression, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lval_expression, 1, 0, 0),
  [76] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__lval_expression, 1, 0, 0), REDUCE(sym__name, 1, 0, 0), SHIFT(71),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__lval_expression, 1, 0, 0), REDUCE(sym__name, 1, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_member_access_expression, 3, 0, 8), REDUCE(sym_qualified_name, 3, 0, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 9),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 9),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__non_lval_expression, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__non_lval_expression, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expression, 3, 0, 10),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 11),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 11),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_qualified_name, 3, 0, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 6),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 7, 0, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 8, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 5, 0, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 7, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 7, 0, 7),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 4, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 4, 0, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3, 0, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat2, 2, 0, 0),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat2, 2, 0, 0), SHIFT_REPEAT(69),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_declaration, 3, 0, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
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
