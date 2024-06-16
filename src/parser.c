#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 11

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
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 3},
  [9] = {.index = 17, .length = 3},
  [10] = {.index = 20, .length = 1},
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
    {field_body, 5},
    {field_name, 1},
    {field_returns, 4},
  [17] =
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
  [20] =
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
  [112] = 5,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        '!', 12,
        '"', 89,
        '%', 64,
        '&', 4,
        '(', 79,
        ')', 80,
        '*', 62,
        '+', 59,
        ',', 81,
        '-', 61,
        '.', 75,
        '/', 10,
        ':', 83,
        ';', 84,
        '<', 67,
        '=', 73,
        '>', 68,
        'c', 27,
        'f', 14,
        'l', 15,
        'r', 20,
        't', 29,
        'u', 31,
        '{', 77,
        '|', 42,
        '}', 78,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '/') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 12,
        '"', 89,
        '%', 64,
        '&', 4,
        '(', 7,
        ')', 80,
        '*', 62,
        '+', 59,
        ',', 81,
        '-', 60,
        '.', 75,
        '/', 10,
        ':', 11,
        ';', 84,
        '<', 67,
        '=', 73,
        '>', 68,
        'b', 112,
        'c', 110,
        'f', 101,
        'i', 99,
        'r', 103,
        't', 115,
        'u', 99,
        '{', 77,
        '|', 42,
        '}', 78,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 89,
        '(', 7,
        '-', 13,
        '/', 10,
        ':', 82,
        'b', 112,
        'c', 110,
        'f', 101,
        'i', 99,
        't', 115,
        'u', 99,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(65);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'b') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == '{') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
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
      if (lookahead == '/') ADVANCE(129);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(76);
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
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(87);
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
      if (lookahead == '|') ADVANCE(66);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 44:
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        '!', 12,
        '%', 64,
        '&', 4,
        ')', 80,
        '*', 62,
        '+', 59,
        ',', 81,
        '-', 60,
        '.', 75,
        '/', 10,
        ':', 83,
        ';', 84,
        '<', 67,
        '=', 73,
        '>', 68,
        'c', 26,
        'f', 23,
        'l', 15,
        'u', 31,
        '{', 77,
        '|', 42,
        '}', 78,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        '!', 12,
        '%', 64,
        '&', 4,
        '*', 62,
        '+', 59,
        '-', 60,
        '.', 75,
        '/', 10,
        ':', 11,
        ';', 84,
        '<', 67,
        '=', 73,
        '>', 68,
        'c', 26,
        'f', 23,
        'l', 15,
        'u', 31,
        '|', 42,
        '}', 78,
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_ctx);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_ctx);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_add_operator);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_sub_operator);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_sub_operator);
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_mul_operator);
      if (lookahead == '*') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_pow_operator);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_mod_operator);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_and_operator);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_or_operator);
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
      ACCEPT_TOKEN(sym_assign_operator);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_expand_operator);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_attribute_access_operator);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_rightarrow_operator);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__lcb_symbol);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__rcb_symbol);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__lrb_symbol);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__rrb_symbol);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__comma_symbol);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__typedef_symbol);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__typedef_symbol);
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__terminal_symbol);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(98);
      if (lookahead == '6') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '4') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(129);
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
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 45},
  [17] = {.lex_state = 45},
  [18] = {.lex_state = 45},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 45},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 45},
  [26] = {.lex_state = 45},
  [27] = {.lex_state = 45},
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
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 0},
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
    [sym_source_file] = STATE(99),
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
    STATE(6), 1,
      sym_identifier,
    STATE(35), 1,
      sym_expression,
    ACTIONS(28), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(9), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(31), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(33), 2,
      sym_assign_expression,
      sym__expression_statement,
    STATE(11), 3,
      sym_literal,
      sym__non_lval_expression,
      sym_binary_expression,
    STATE(94), 3,
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
    STATE(6), 1,
      sym_identifier,
    STATE(35), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(9), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(31), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(33), 2,
      sym_assign_expression,
      sym__expression_statement,
    STATE(11), 3,
      sym_literal,
      sym__non_lval_expression,
      sym_binary_expression,
    STATE(94), 3,
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
    STATE(6), 1,
      sym_identifier,
    STATE(35), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(9), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(31), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(33), 2,
      sym_assign_expression,
      sym__expression_statement,
    STATE(11), 3,
      sym_literal,
      sym__non_lval_expression,
      sym_binary_expression,
    STATE(94), 3,
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
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
      sym_assign_operator,
      sym__typedef_symbol,
    ACTIONS(58), 23,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
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
      sym__rrb_symbol,
      sym__comma_symbol,
      sym__terminal_symbol,
  [237] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_expand_operator,
    ACTIONS(70), 1,
      sym_attribute_access_operator,
    ACTIONS(64), 4,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
      sym_assign_operator,
    ACTIONS(62), 18,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
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
      sym__terminal_symbol,
  [273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(75), 4,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
      sym_assign_operator,
    ACTIONS(73), 18,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
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
      sym__terminal_symbol,
  [307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 4,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
      sym_assign_operator,
    ACTIONS(73), 20,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
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
      sym__terminal_symbol,
  [339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_assign_operator,
    ACTIONS(82), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(80), 20,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
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
      sym__terminal_symbol,
  [373] = 14,
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
    STATE(6), 1,
      sym_identifier,
    STATE(30), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(9), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(31), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(94), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(80), 20,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
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
      sym__terminal_symbol,
  [457] = 14,
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
    STATE(6), 1,
      sym_identifier,
    STATE(20), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(9), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(31), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(94), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [510] = 14,
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
    STATE(6), 1,
      sym_identifier,
    STATE(27), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(9), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(31), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(94), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [563] = 14,
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
    STATE(6), 1,
      sym_identifier,
    STATE(18), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(9), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(31), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(94), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [616] = 14,
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
    STATE(6), 1,
      sym_identifier,
    STATE(28), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(9), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(31), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(94), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(86), 20,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
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
      sym__terminal_symbol,
  [700] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_mul_operator,
    ACTIONS(94), 1,
      sym_pow_operator,
    ACTIONS(96), 1,
      sym_mod_operator,
    ACTIONS(98), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(100), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(90), 16,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_add_operator,
      sym_sub_operator,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__rcb_symbol,
      sym__terminal_symbol,
  [739] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_pow_operator,
    ACTIONS(100), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(98), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(90), 17,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
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
      sym__terminal_symbol,
  [774] = 14,
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
    STATE(6), 1,
      sym_identifier,
    STATE(32), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(9), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(31), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(94), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(98), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(90), 18,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
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
      sym__terminal_symbol,
  [860] = 14,
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
    STATE(6), 1,
      sym_identifier,
    STATE(26), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(9), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(31), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(94), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [913] = 14,
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
    STATE(6), 1,
      sym_identifier,
    STATE(17), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(9), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(31), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(94), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [966] = 14,
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
    STATE(6), 1,
      sym_identifier,
    STATE(34), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(9), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(31), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(94), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [1019] = 14,
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
    STATE(6), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expression,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(9), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(31), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(94), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
    STATE(11), 5,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
      sym__expression_statement,
  [1072] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_mul_operator,
    ACTIONS(94), 1,
      sym_pow_operator,
    ACTIONS(96), 1,
      sym_mod_operator,
    ACTIONS(106), 1,
      sym_and_operator,
    ACTIONS(108), 1,
      sym_or_operator,
    ACTIONS(100), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(104), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(110), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(112), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(114), 2,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(102), 8,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
      sym__terminal_symbol,
  [1121] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_mul_operator,
    ACTIONS(94), 1,
      sym_pow_operator,
    ACTIONS(96), 1,
      sym_mod_operator,
    ACTIONS(100), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(104), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(110), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(112), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(90), 12,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_and_operator,
      sym_or_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__rcb_symbol,
      sym__terminal_symbol,
  [1164] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_mul_operator,
    ACTIONS(94), 1,
      sym_pow_operator,
    ACTIONS(96), 1,
      sym_mod_operator,
    ACTIONS(98), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(100), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(104), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(90), 14,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_and_operator,
      sym_or_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__rcb_symbol,
      sym__terminal_symbol,
  [1205] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_mul_operator,
    ACTIONS(94), 1,
      sym_pow_operator,
    ACTIONS(96), 1,
      sym_mod_operator,
    ACTIONS(106), 1,
      sym_and_operator,
    ACTIONS(100), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(104), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(110), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(112), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(114), 2,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(90), 9,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_or_operator,
      sym__rcb_symbol,
      sym__terminal_symbol,
  [1252] = 3,
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
      sym__terminal_symbol,
  [1283] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_mul_operator,
    ACTIONS(94), 1,
      sym_pow_operator,
    ACTIONS(96), 1,
      sym_mod_operator,
    ACTIONS(100), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(104), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(110), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(112), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(114), 2,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(90), 10,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_and_operator,
      sym_or_operator,
      sym__rcb_symbol,
      sym__terminal_symbol,
  [1328] = 3,
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
      sym__terminal_symbol,
  [1359] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_mul_operator,
    ACTIONS(94), 1,
      sym_pow_operator,
    ACTIONS(96), 1,
      sym_mod_operator,
    ACTIONS(106), 1,
      sym_and_operator,
    ACTIONS(108), 1,
      sym_or_operator,
    ACTIONS(100), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(104), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(110), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(112), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(114), 2,
      sym_equals_operator,
      sym_not_equals_operator,
    ACTIONS(124), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym__terminal_symbol,
    ACTIONS(128), 3,
      sym_mul_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(126), 12,
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
  [1433] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_mul_operator,
    ACTIONS(94), 1,
      sym_pow_operator,
    ACTIONS(96), 1,
      sym_mod_operator,
    ACTIONS(106), 1,
      sym_and_operator,
    ACTIONS(108), 1,
      sym_or_operator,
    ACTIONS(132), 1,
      sym__terminal_symbol,
    ACTIONS(100), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(104), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(110), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(112), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(114), 2,
      sym_equals_operator,
      sym_not_equals_operator,
  [1475] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_mul_operator,
    ACTIONS(94), 1,
      sym_pow_operator,
    ACTIONS(96), 1,
      sym_mod_operator,
    ACTIONS(106), 1,
      sym_and_operator,
    ACTIONS(108), 1,
      sym_or_operator,
    ACTIONS(100), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
    ACTIONS(104), 2,
      sym_add_operator,
      sym_sub_operator,
    ACTIONS(110), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(112), 2,
      sym_less_equal_operator,
      sym_greater_equal_operator,
    ACTIONS(114), 2,
      sym_equals_operator,
      sym_not_equals_operator,
  [1514] = 8,
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
  [1545] = 8,
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
  [1576] = 3,
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
  [1594] = 3,
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
  [1612] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__embedded_type,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(55), 1,
      sym_identifier,
    STATE(98), 1,
      sym_type,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(62), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
  [1637] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__embedded_type,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(55), 1,
      sym_identifier,
    STATE(95), 1,
      sym_type,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(62), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
  [1662] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__embedded_type,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(55), 1,
      sym_identifier,
    STATE(90), 1,
      sym_type,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(62), 3,
      sym__name,
      sym_type_qualified_name,
      sym_qualified_name,
  [1687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_assign_operator,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1703] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      sym_number_literal,
    STATE(101), 1,
      sym_literal,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 2,
      sym_bool_literal,
      sym_string_literal,
  [1724] = 2,
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
  [1737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 6,
      sym_assign_operator,
      sym_expand_operator,
      sym_attribute_access_operator,
      sym__lcb_symbol,
      sym__rrb_symbol,
      sym__comma_symbol,
  [1775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      sym_function_keyword,
    ACTIONS(183), 1,
      sym__rcb_symbol,
    STATE(53), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [1817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1829] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      sym_function_keyword,
    ACTIONS(187), 1,
      sym__rcb_symbol,
    STATE(60), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [1847] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__rrb_symbol,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(83), 1,
      sym_argument_declaration,
    STATE(110), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [1867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_expand_operator,
    ACTIONS(191), 5,
      sym_assign_operator,
      sym_attribute_access_operator,
      sym__lcb_symbol,
      sym__rrb_symbol,
      sym__comma_symbol,
  [1881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1929] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_let,
    ACTIONS(206), 1,
      sym_function_keyword,
    ACTIONS(209), 1,
      sym__rcb_symbol,
    STATE(60), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [1947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 5,
      sym_assign_operator,
      sym_attribute_access_operator,
      sym__lcb_symbol,
      sym__rrb_symbol,
      sym__comma_symbol,
  [1958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_attribute_access_operator,
    ACTIONS(213), 4,
      sym_assign_operator,
      sym__lcb_symbol,
      sym__rrb_symbol,
      sym__comma_symbol,
  [1971] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(92), 1,
      sym_argument_declaration,
    STATE(110), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [1988] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym__lcb_symbol,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2005] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(8), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(87), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(77), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(61), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(89), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(43), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(7), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(48), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 4,
      sym_assign_operator,
      sym__lcb_symbol,
      sym__rrb_symbol,
      sym__comma_symbol,
  [2141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(88), 1,
      sym_identifier,
    STATE(112), 1,
      sym__reserved_identifier,
    ACTIONS(219), 2,
      anon_sym_constructor,
      sym__identifier,
  [2155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__reserved_identifier,
    STATE(106), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_constructor,
      sym__identifier,
  [2169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym__rcb_symbol,
    ACTIONS(223), 1,
      sym__comma_symbol,
    STATE(79), 1,
      aux_sym_use_directive_repeat2,
  [2182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym__rcb_symbol,
    ACTIONS(227), 1,
      sym__comma_symbol,
    STATE(78), 1,
      aux_sym_use_directive_repeat2,
  [2195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym__comma_symbol,
    ACTIONS(230), 1,
      sym__rcb_symbol,
    STATE(78), 1,
      aux_sym_use_directive_repeat2,
  [2208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__rrb_symbol,
    ACTIONS(234), 1,
      sym__comma_symbol,
    STATE(85), 1,
      aux_sym_argument_list_repeat1,
  [2221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_expand_operator,
    ACTIONS(238), 1,
      sym__terminal_symbol,
    STATE(84), 1,
      aux_sym_use_directive_repeat1,
  [2234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_expand_operator,
    ACTIONS(240), 1,
      sym__terminal_symbol,
    STATE(81), 1,
      aux_sym_use_directive_repeat1,
  [2247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym__comma_symbol,
    ACTIONS(242), 1,
      sym__rrb_symbol,
    STATE(80), 1,
      aux_sym_argument_list_repeat1,
  [2260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_expand_operator,
    ACTIONS(247), 1,
      sym__terminal_symbol,
    STATE(84), 1,
      aux_sym_use_directive_repeat1,
  [2273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym__rrb_symbol,
    ACTIONS(251), 1,
      sym__comma_symbol,
    STATE(85), 1,
      aux_sym_argument_list_repeat1,
  [2286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      sym_string_literal,
  [2296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      sym_expand_operator,
      sym__terminal_symbol,
  [2304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym__lrb_symbol,
    STATE(107), 1,
      sym_argument_list,
  [2314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      sym__rcb_symbol,
      sym__comma_symbol,
  [2322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym__lcb_symbol,
    STATE(45), 1,
      sym_block,
  [2332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_string_literal,
  [2342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      sym__rrb_symbol,
      sym__comma_symbol,
  [2350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      sym_expand_operator,
      sym_attribute_access_operator,
  [2358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_expand_operator,
    ACTIONS(258), 1,
      sym_attribute_access_operator,
  [2368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 2,
      sym__rrb_symbol,
      sym__comma_symbol,
  [2376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_rightarrow_operator,
  [2383] = 2,
    ACTIONS(264), 1,
      sym__string_literal_content,
    ACTIONS(266), 1,
      sym_comment,
  [2390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_assign_operator,
  [2397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
  [2404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym__terminal_symbol,
  [2411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym__terminal_symbol,
  [2418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_from_keyword,
  [2425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_rightarrow_operator,
  [2432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_from_keyword,
  [2439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym__terminal_symbol,
  [2446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym__typedef_symbol,
  [2453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_rightarrow_operator,
  [2460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym__lcb_symbol,
  [2467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
  [2474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym__typedef_symbol,
  [2481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_rightarrow_operator,
  [2488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym__lrb_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 134,
  [SMALL_STATE(5)] = 201,
  [SMALL_STATE(6)] = 237,
  [SMALL_STATE(7)] = 273,
  [SMALL_STATE(8)] = 307,
  [SMALL_STATE(9)] = 339,
  [SMALL_STATE(10)] = 373,
  [SMALL_STATE(11)] = 426,
  [SMALL_STATE(12)] = 457,
  [SMALL_STATE(13)] = 510,
  [SMALL_STATE(14)] = 563,
  [SMALL_STATE(15)] = 616,
  [SMALL_STATE(16)] = 669,
  [SMALL_STATE(17)] = 700,
  [SMALL_STATE(18)] = 739,
  [SMALL_STATE(19)] = 774,
  [SMALL_STATE(20)] = 827,
  [SMALL_STATE(21)] = 860,
  [SMALL_STATE(22)] = 913,
  [SMALL_STATE(23)] = 966,
  [SMALL_STATE(24)] = 1019,
  [SMALL_STATE(25)] = 1072,
  [SMALL_STATE(26)] = 1121,
  [SMALL_STATE(27)] = 1164,
  [SMALL_STATE(28)] = 1205,
  [SMALL_STATE(29)] = 1252,
  [SMALL_STATE(30)] = 1283,
  [SMALL_STATE(31)] = 1328,
  [SMALL_STATE(32)] = 1359,
  [SMALL_STATE(33)] = 1407,
  [SMALL_STATE(34)] = 1433,
  [SMALL_STATE(35)] = 1475,
  [SMALL_STATE(36)] = 1514,
  [SMALL_STATE(37)] = 1545,
  [SMALL_STATE(38)] = 1576,
  [SMALL_STATE(39)] = 1594,
  [SMALL_STATE(40)] = 1612,
  [SMALL_STATE(41)] = 1637,
  [SMALL_STATE(42)] = 1662,
  [SMALL_STATE(43)] = 1687,
  [SMALL_STATE(44)] = 1703,
  [SMALL_STATE(45)] = 1724,
  [SMALL_STATE(46)] = 1737,
  [SMALL_STATE(47)] = 1750,
  [SMALL_STATE(48)] = 1763,
  [SMALL_STATE(49)] = 1775,
  [SMALL_STATE(50)] = 1787,
  [SMALL_STATE(51)] = 1799,
  [SMALL_STATE(52)] = 1817,
  [SMALL_STATE(53)] = 1829,
  [SMALL_STATE(54)] = 1847,
  [SMALL_STATE(55)] = 1867,
  [SMALL_STATE(56)] = 1881,
  [SMALL_STATE(57)] = 1893,
  [SMALL_STATE(58)] = 1905,
  [SMALL_STATE(59)] = 1917,
  [SMALL_STATE(60)] = 1929,
  [SMALL_STATE(61)] = 1947,
  [SMALL_STATE(62)] = 1958,
  [SMALL_STATE(63)] = 1971,
  [SMALL_STATE(64)] = 1988,
  [SMALL_STATE(65)] = 2005,
  [SMALL_STATE(66)] = 2019,
  [SMALL_STATE(67)] = 2033,
  [SMALL_STATE(68)] = 2047,
  [SMALL_STATE(69)] = 2061,
  [SMALL_STATE(70)] = 2075,
  [SMALL_STATE(71)] = 2089,
  [SMALL_STATE(72)] = 2103,
  [SMALL_STATE(73)] = 2117,
  [SMALL_STATE(74)] = 2131,
  [SMALL_STATE(75)] = 2141,
  [SMALL_STATE(76)] = 2155,
  [SMALL_STATE(77)] = 2169,
  [SMALL_STATE(78)] = 2182,
  [SMALL_STATE(79)] = 2195,
  [SMALL_STATE(80)] = 2208,
  [SMALL_STATE(81)] = 2221,
  [SMALL_STATE(82)] = 2234,
  [SMALL_STATE(83)] = 2247,
  [SMALL_STATE(84)] = 2260,
  [SMALL_STATE(85)] = 2273,
  [SMALL_STATE(86)] = 2286,
  [SMALL_STATE(87)] = 2296,
  [SMALL_STATE(88)] = 2304,
  [SMALL_STATE(89)] = 2314,
  [SMALL_STATE(90)] = 2322,
  [SMALL_STATE(91)] = 2332,
  [SMALL_STATE(92)] = 2342,
  [SMALL_STATE(93)] = 2350,
  [SMALL_STATE(94)] = 2358,
  [SMALL_STATE(95)] = 2368,
  [SMALL_STATE(96)] = 2376,
  [SMALL_STATE(97)] = 2383,
  [SMALL_STATE(98)] = 2390,
  [SMALL_STATE(99)] = 2397,
  [SMALL_STATE(100)] = 2404,
  [SMALL_STATE(101)] = 2411,
  [SMALL_STATE(102)] = 2418,
  [SMALL_STATE(103)] = 2425,
  [SMALL_STATE(104)] = 2432,
  [SMALL_STATE(105)] = 2439,
  [SMALL_STATE(106)] = 2446,
  [SMALL_STATE(107)] = 2453,
  [SMALL_STATE(108)] = 2460,
  [SMALL_STATE(109)] = 2467,
  [SMALL_STATE(110)] = 2474,
  [SMALL_STATE(111)] = 2481,
  [SMALL_STATE(112)] = 2488,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lval_expression, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lval_expression, 1, 0, 0),
  [66] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__lval_expression, 1, 0, 0), REDUCE(sym__name, 1, 0, 0), SHIFT(73),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__lval_expression, 1, 0, 0), REDUCE(sym__name, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access_expression, 3, 0, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_access_expression, 3, 0, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_member_access_expression, 3, 0, 2), REDUCE(sym_qualified_name, 3, 0, 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expression, 3, 0, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, 0, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__non_lval_expression, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__non_lval_expression, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 10),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 10),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 2, 0, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 8),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_qualified_name, 3, 0, 6),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 5, 0, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 4, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 4, 0, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 7, 0, 9),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 8, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 7, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 3, 0, 0),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3, 0, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat2, 2, 0, 0),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat2, 2, 0, 0), SHIFT_REPEAT(69),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_declaration, 3, 0, 7),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [270] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
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
