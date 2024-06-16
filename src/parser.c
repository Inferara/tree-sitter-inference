#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 109
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 10
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
  sym_comma_symbol = 10,
  sym_semicolon_symbol = 11,
  sym_terminal_symbol = 12,
  sym_add_operator = 13,
  sym_subtract_operator = 14,
  sym_multiply_operator = 15,
  sym_assign_operator = 16,
  sym_less_operator = 17,
  sym_greater_operator = 18,
  sym_less_equal_operator = 19,
  sym_greater_equal_operator = 20,
  sym_equals_operator = 21,
  sym_not_equals_operator = 22,
  sym_expand_operator = 23,
  sym_attribute_access_operator = 24,
  sym_rightarrow_operator = 25,
  sym__lcb_symbol = 26,
  sym__rcb_symbol = 27,
  sym__lrb_symbol = 28,
  sym__rrb_symbol = 29,
  anon_sym_true = 30,
  anon_sym_false = 31,
  anon_sym_DQUOTE = 32,
  sym__string_literal_content = 33,
  sym_number_literal = 34,
  anon_sym_constructor = 35,
  sym__identifier = 36,
  sym_comment = 37,
  sym_source_file = 38,
  sym__definition = 39,
  sym__statement = 40,
  sym_type = 41,
  sym_literal = 42,
  sym_expression = 43,
  sym__lval_expression = 44,
  sym__non_lval_expression = 45,
  sym_member_access_expression = 46,
  sym_assign_expression = 47,
  sym_binary_expression = 48,
  sym_variable_definition = 49,
  sym_constant_definition = 50,
  sym_context_definition = 51,
  sym_function_definition = 52,
  sym_parameter_definition = 53,
  sym_use_directive = 54,
  sym_expression_statement = 55,
  sym__expression_statement = 56,
  sym_return_statement = 57,
  sym_binary_operator = 58,
  sym_bool_literal = 59,
  sym_string_literal = 60,
  sym__name = 61,
  sym_alias_qualified_name = 62,
  sym_qualified_name = 63,
  sym__reserved_identifier = 64,
  sym_identifier = 65,
  aux_sym_source_file_repeat1 = 66,
  aux_sym_context_definition_repeat1 = 67,
  aux_sym_function_definition_repeat1 = 68,
  aux_sym_function_definition_repeat2 = 69,
  aux_sym_use_directive_repeat1 = 70,
  aux_sym_use_directive_repeat2 = 71,
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
  [sym_comma_symbol] = "comma_symbol",
  [sym_semicolon_symbol] = "semicolon_symbol",
  [sym_terminal_symbol] = "terminal_symbol",
  [sym_add_operator] = "add_operator",
  [sym_subtract_operator] = "subtract_operator",
  [sym_multiply_operator] = "multiply_operator",
  [sym_assign_operator] = "assign_operator",
  [sym_less_operator] = "less_operator",
  [sym_greater_operator] = "greater_operator",
  [sym_less_equal_operator] = "less_equal_operator",
  [sym_greater_equal_operator] = "greater_equal_operator",
  [sym_equals_operator] = "equals_operator",
  [sym_not_equals_operator] = "not_equals_operator",
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
  [sym_function_definition] = "function_definition",
  [sym_parameter_definition] = "parameter_definition",
  [sym_use_directive] = "use_directive",
  [sym_expression_statement] = "expression_statement",
  [sym__expression_statement] = "_expression_statement",
  [sym_return_statement] = "return_statement",
  [sym_binary_operator] = "binary_operator",
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
  [sym_comma_symbol] = sym_comma_symbol,
  [sym_semicolon_symbol] = sym_semicolon_symbol,
  [sym_terminal_symbol] = sym_terminal_symbol,
  [sym_add_operator] = sym_add_operator,
  [sym_subtract_operator] = sym_subtract_operator,
  [sym_multiply_operator] = sym_multiply_operator,
  [sym_assign_operator] = sym_assign_operator,
  [sym_less_operator] = sym_less_operator,
  [sym_greater_operator] = sym_greater_operator,
  [sym_less_equal_operator] = sym_less_equal_operator,
  [sym_greater_equal_operator] = sym_greater_equal_operator,
  [sym_equals_operator] = sym_equals_operator,
  [sym_not_equals_operator] = sym_not_equals_operator,
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
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_definition] = sym_parameter_definition,
  [sym_use_directive] = sym_use_directive,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression_statement] = sym__expression_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_binary_operator] = sym_binary_operator,
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
  [sym_add_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_subtract_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_multiply_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_operator] = {
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
  [sym_binary_operator] = {
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
  field_expression = 2,
  field_left = 3,
  field_name = 4,
  field_qualifier = 5,
  field_returns = 6,
  field_right = 7,
  field_type = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_expression] = "expression",
  [field_left] = "left",
  [field_name] = "name",
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
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 2},
  [10] = {.index = 18, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_expression, 0},
    {field_name, 2},
  [3] =
    {field_left, 0},
    {field_right, 2},
  [5] =
    {field_name, 2},
    {field_qualifier, 0},
  [7] =
    {field_alias, 0},
    {field_name, 2},
  [9] =
    {field_name, 0},
    {field_type, 2},
  [11] =
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
  [14] =
    {field_name, 1},
    {field_returns, 5},
  [16] =
    {field_name, 1},
    {field_returns, 6},
  [18] =
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
  [38] = 8,
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
  [64] = 50,
  [65] = 65,
  [66] = 63,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 69,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 59,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(44);
      ADVANCE_MAP(
        '!', 11,
        '"', 84,
        '(', 78,
        ')', 79,
        '*', 64,
        '+', 61,
        ',', 57,
        '-', 63,
        '.', 74,
        '/', 9,
        ':', 59,
        ';', 60,
        '<', 67,
        '=', 66,
        '>', 68,
        'c', 26,
        'f', 13,
        'l', 14,
        'r', 19,
        't', 28,
        'u', 30,
        '{', 76,
        '}', 77,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '/') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 11,
        '"', 84,
        '(', 6,
        '*', 64,
        '+', 61,
        '-', 62,
        '.', 74,
        '/', 9,
        ':', 10,
        ';', 60,
        '<', 67,
        '=', 66,
        '>', 68,
        'b', 107,
        'c', 105,
        'f', 96,
        'i', 94,
        'r', 98,
        't', 110,
        'u', 94,
        '{', 76,
        '}', 77,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 84,
        '(', 6,
        '-', 12,
        '/', 9,
        ':', 58,
        'b', 107,
        'c', 105,
        'f', 96,
        'i', 94,
        't', 110,
        'u', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '(', 78,
        ')', 79,
        ',', 57,
        '.', 74,
        '/', 9,
        ':', 10,
        '=', 65,
        'c', 106,
        '{', 76,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(124);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 42:
      if (eof) ADVANCE(44);
      ADVANCE_MAP(
        '!', 11,
        '*', 64,
        '+', 61,
        ',', 57,
        '-', 62,
        '.', 74,
        '/', 9,
        ':', 59,
        ';', 60,
        '<', 67,
        '=', 66,
        '>', 68,
        'c', 25,
        'f', 22,
        'l', 14,
        'u', 30,
        '{', 76,
        '}', 77,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      ADVANCE_MAP(
        '!', 11,
        '*', 64,
        '+', 61,
        '-', 62,
        '.', 74,
        '/', 9,
        ':', 10,
        ';', 60,
        '<', 67,
        '=', 66,
        '>', 68,
        'c', 25,
        'f', 22,
        'l', 14,
        'u', 30,
        '}', 77,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__embedded_type);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__embedded_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_ctx);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_ctx);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_const_keyword);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_from_keyword);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_function_keyword);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_return_keyword);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_return_keyword);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comma_symbol);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_semicolon_symbol);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_semicolon_symbol);
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_terminal_symbol);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_add_operator);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_subtract_operator);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_subtract_operator);
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_multiply_operator);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_assign_operator);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_assign_operator);
      if (lookahead == '=') ADVANCE(71);
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
      ACCEPT_TOKEN(sym_expand_operator);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_attribute_access_operator);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_rightarrow_operator);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__lcb_symbol);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__rcb_symbol);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__lrb_symbol);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__rrb_symbol);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__string_literal_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(93);
      if (lookahead == '6') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '4') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(124);
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
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 42},
  [14] = {.lex_state = 42},
  [15] = {.lex_state = 42},
  [16] = {.lex_state = 42},
  [17] = {.lex_state = 42},
  [18] = {.lex_state = 42},
  [19] = {.lex_state = 42},
  [20] = {.lex_state = 42},
  [21] = {.lex_state = 42},
  [22] = {.lex_state = 42},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
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
    [sym_comma_symbol] = ACTIONS(1),
    [sym_semicolon_symbol] = ACTIONS(1),
    [sym_terminal_symbol] = ACTIONS(1),
    [sym_add_operator] = ACTIONS(1),
    [sym_subtract_operator] = ACTIONS(1),
    [sym_multiply_operator] = ACTIONS(1),
    [sym_assign_operator] = ACTIONS(1),
    [sym_less_operator] = ACTIONS(1),
    [sym_greater_operator] = ACTIONS(1),
    [sym_less_equal_operator] = ACTIONS(1),
    [sym_greater_equal_operator] = ACTIONS(1),
    [sym_equals_operator] = ACTIONS(1),
    [sym_not_equals_operator] = ACTIONS(1),
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
    [sym_source_file] = STATE(91),
    [sym__definition] = STATE(23),
    [sym_variable_definition] = STATE(23),
    [sym_constant_definition] = STATE(23),
    [sym_context_definition] = STATE(23),
    [sym_function_definition] = STATE(23),
    [sym_use_directive] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
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
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__embedded_type,
    ACTIONS(19), 1,
      anon_sym_ctx,
    ACTIONS(21), 1,
      sym_return_keyword,
    ACTIONS(23), 1,
      sym__rcb_symbol,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_number_literal,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(12), 1,
      sym_identifier,
    STATE(26), 1,
      sym_assign_expression,
    STATE(27), 1,
      sym_expression,
    STATE(93), 1,
      sym__expression_statement,
    STATE(97), 1,
      sym_type,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(18), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(22), 3,
      sym_literal,
      sym__non_lval_expression,
      sym_binary_expression,
    STATE(96), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(3), 4,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
  [72] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__embedded_type,
    ACTIONS(36), 1,
      anon_sym_ctx,
    ACTIONS(39), 1,
      sym_return_keyword,
    ACTIONS(42), 1,
      sym__rcb_symbol,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      sym_number_literal,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(12), 1,
      sym_identifier,
    STATE(26), 1,
      sym_assign_expression,
    STATE(27), 1,
      sym_expression,
    STATE(93), 1,
      sym__expression_statement,
    STATE(97), 1,
      sym_type,
    ACTIONS(44), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(18), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(22), 3,
      sym_literal,
      sym__non_lval_expression,
      sym_binary_expression,
    STATE(96), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(3), 4,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
  [144] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__embedded_type,
    ACTIONS(19), 1,
      anon_sym_ctx,
    ACTIONS(21), 1,
      sym_return_keyword,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_number_literal,
    ACTIONS(56), 1,
      sym__rcb_symbol,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(12), 1,
      sym_identifier,
    STATE(26), 1,
      sym_assign_expression,
    STATE(27), 1,
      sym_expression,
    STATE(93), 1,
      sym__expression_statement,
    STATE(97), 1,
      sym_type,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(18), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(22), 3,
      sym_literal,
      sym__non_lval_expression,
      sym_binary_expression,
    STATE(96), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(2), 4,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
  [216] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__embedded_type,
    ACTIONS(19), 1,
      anon_sym_ctx,
    ACTIONS(21), 1,
      sym_return_keyword,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_number_literal,
    ACTIONS(58), 1,
      sym__rcb_symbol,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(12), 1,
      sym_identifier,
    STATE(26), 1,
      sym_assign_expression,
    STATE(27), 1,
      sym_expression,
    STATE(93), 1,
      sym__expression_statement,
    STATE(97), 1,
      sym_type,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(18), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(22), 3,
      sym_literal,
      sym__non_lval_expression,
      sym_binary_expression,
    STATE(96), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(3), 4,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
  [288] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__embedded_type,
    ACTIONS(19), 1,
      anon_sym_ctx,
    ACTIONS(21), 1,
      sym_return_keyword,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_number_literal,
    ACTIONS(60), 1,
      sym__rcb_symbol,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(12), 1,
      sym_identifier,
    STATE(26), 1,
      sym_assign_expression,
    STATE(27), 1,
      sym_expression,
    STATE(93), 1,
      sym__expression_statement,
    STATE(97), 1,
      sym_type,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(18), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(22), 3,
      sym_literal,
      sym__non_lval_expression,
      sym_binary_expression,
    STATE(96), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(5), 4,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      aux_sym_function_definition_repeat2,
  [360] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__embedded_type,
    ACTIONS(19), 1,
      anon_sym_ctx,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_number_literal,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(12), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expression,
    STATE(97), 1,
      sym_type,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(18), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(96), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(22), 4,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
  [415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 4,
      sym_semicolon_symbol,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(62), 19,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_comma_symbol,
      sym_terminal_symbol,
      sym_add_operator,
      sym_subtract_operator,
      sym_multiply_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_expand_operator,
      sym_attribute_access_operator,
      sym__lcb_symbol,
      sym__rcb_symbol,
  [446] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__embedded_type,
    ACTIONS(19), 1,
      anon_sym_ctx,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_number_literal,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(12), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expression,
    STATE(97), 1,
      sym_type,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(18), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(96), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(22), 4,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
  [501] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__embedded_type,
    ACTIONS(19), 1,
      anon_sym_ctx,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_number_literal,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(12), 1,
      sym_identifier,
    STATE(15), 1,
      sym_expression,
    STATE(97), 1,
      sym_type,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(18), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(96), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(22), 4,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
  [556] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__embedded_type,
    ACTIONS(19), 1,
      anon_sym_ctx,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_number_literal,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(12), 1,
      sym_identifier,
    STATE(21), 1,
      sym_expression,
    STATE(97), 1,
      sym_type,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(17), 2,
      sym__lval_expression,
      sym_member_access_expression,
    STATE(18), 2,
      sym_bool_literal,
      sym_string_literal,
    STATE(96), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
    STATE(22), 4,
      sym_literal,
      sym__non_lval_expression,
      sym_assign_expression,
      sym_binary_expression,
  [611] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_expand_operator,
    ACTIONS(72), 1,
      sym_attribute_access_operator,
    ACTIONS(68), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(66), 15,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_terminal_symbol,
      sym_add_operator,
      sym_subtract_operator,
      sym_multiply_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__rcb_symbol,
  [643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_attribute_access_operator,
    ACTIONS(77), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(75), 15,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_terminal_symbol,
      sym_add_operator,
      sym_subtract_operator,
      sym_multiply_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__rcb_symbol,
  [672] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_attribute_access_operator,
    STATE(10), 1,
      sym_binary_operator,
    ACTIONS(84), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(82), 15,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_terminal_symbol,
      sym_add_operator,
      sym_subtract_operator,
      sym_multiply_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__rcb_symbol,
  [703] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_attribute_access_operator,
    STATE(10), 1,
      sym_binary_operator,
    ACTIONS(90), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(88), 15,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_terminal_symbol,
      sym_add_operator,
      sym_subtract_operator,
      sym_multiply_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym__rcb_symbol,
  [734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      sym_assign_operator,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(75), 16,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_terminal_symbol,
      sym_add_operator,
      sym_subtract_operator,
      sym_multiply_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_attribute_access_operator,
      sym__rcb_symbol,
  [761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_assign_operator,
    ACTIONS(96), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(92), 16,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_terminal_symbol,
      sym_add_operator,
      sym_subtract_operator,
      sym_multiply_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_attribute_access_operator,
      sym__rcb_symbol,
  [790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(98), 16,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_terminal_symbol,
      sym_add_operator,
      sym_subtract_operator,
      sym_multiply_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_attribute_access_operator,
      sym__rcb_symbol,
  [816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(102), 16,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_terminal_symbol,
      sym_add_operator,
      sym_subtract_operator,
      sym_multiply_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_attribute_access_operator,
      sym__rcb_symbol,
  [842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(106), 16,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_terminal_symbol,
      sym_add_operator,
      sym_subtract_operator,
      sym_multiply_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_attribute_access_operator,
      sym__rcb_symbol,
  [868] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_attribute_access_operator,
    STATE(10), 1,
      sym_binary_operator,
    ACTIONS(114), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(110), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
    ACTIONS(112), 7,
      sym_add_operator,
      sym_subtract_operator,
      sym_multiply_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(92), 16,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym_terminal_symbol,
      sym_add_operator,
      sym_subtract_operator,
      sym_multiply_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_attribute_access_operator,
      sym__rcb_symbol,
  [926] = 8,
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
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(24), 7,
      sym__definition,
      sym_variable_definition,
      sym_constant_definition,
      sym_context_definition,
      sym_function_definition,
      sym_use_directive,
      aux_sym_source_file_repeat1,
  [957] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      anon_sym_let,
    ACTIONS(123), 1,
      sym_const_keyword,
    ACTIONS(126), 1,
      sym_use_keyword,
    ACTIONS(129), 1,
      sym_context_keyword,
    ACTIONS(132), 1,
      sym_function_keyword,
    STATE(24), 7,
      sym__definition,
      sym_variable_definition,
      sym_constant_definition,
      sym_context_definition,
      sym_function_definition,
      sym_use_directive,
      aux_sym_source_file_repeat1,
  [988] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_attribute_access_operator,
    ACTIONS(135), 1,
      sym_terminal_symbol,
    STATE(10), 1,
      sym_binary_operator,
    ACTIONS(114), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(112), 7,
      sym_add_operator,
      sym_subtract_operator,
      sym_multiply_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [1014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_terminal_symbol,
    ACTIONS(141), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(139), 8,
      sym_add_operator,
      sym_subtract_operator,
      sym_multiply_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
      sym_attribute_access_operator,
  [1035] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_attribute_access_operator,
    STATE(10), 1,
      sym_binary_operator,
    ACTIONS(114), 2,
      sym_less_operator,
      sym_greater_operator,
    ACTIONS(112), 7,
      sym_add_operator,
      sym_subtract_operator,
      sym_multiply_operator,
      sym_less_equal_operator,
      sym_greater_equal_operator,
      sym_equals_operator,
      sym_not_equals_operator,
  [1058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 2,
      sym__rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(143), 8,
      sym__embedded_type,
      anon_sym_ctx,
      sym_return_keyword,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_constructor,
      sym__identifier,
  [1076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      sym__rcb_symbol,
      anon_sym_DQUOTE,
    ACTIONS(147), 8,
      sym__embedded_type,
      anon_sym_ctx,
      sym_return_keyword,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_constructor,
      sym__identifier,
  [1094] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__embedded_type,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(64), 1,
      sym_identifier,
    STATE(92), 1,
      sym_type,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(79), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
  [1119] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__embedded_type,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(64), 1,
      sym_identifier,
    STATE(102), 1,
      sym_type,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(79), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
  [1144] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__embedded_type,
    STATE(38), 1,
      sym__reserved_identifier,
    STATE(50), 1,
      sym_identifier,
    STATE(75), 1,
      sym_type,
    ACTIONS(151), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(59), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
  [1169] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__embedded_type,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(64), 1,
      sym_identifier,
    STATE(90), 1,
      sym_type,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
    STATE(79), 3,
      sym__name,
      sym_alias_qualified_name,
      sym_qualified_name,
  [1194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 7,
      sym__embedded_type,
      anon_sym_ctx,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_constructor,
      sym__identifier,
  [1210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_assign_operator,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 2,
      anon_sym_constructor,
      sym__identifier,
    ACTIONS(62), 5,
      sym_comma_symbol,
      sym_expand_operator,
      sym_attribute_access_operator,
      sym__lrb_symbol,
      sym__rrb_symbol,
  [1267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_constructor,
      sym__identifier,
    ACTIONS(165), 5,
      sym_comma_symbol,
      sym_assign_operator,
      sym_attribute_access_operator,
      sym__lcb_symbol,
      sym__rrb_symbol,
  [1282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_constructor,
      sym__identifier,
    ACTIONS(169), 5,
      sym_comma_symbol,
      sym_assign_operator,
      sym_attribute_access_operator,
      sym__lcb_symbol,
      sym__rrb_symbol,
  [1297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_constructor,
      sym__identifier,
    ACTIONS(173), 5,
      sym_comma_symbol,
      sym_assign_operator,
      sym_attribute_access_operator,
      sym__lcb_symbol,
      sym__rrb_symbol,
  [1312] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym__rrb_symbol,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(46), 1,
      aux_sym_function_definition_repeat1,
    STATE(71), 1,
      sym_parameter_definition,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
  [1335] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym__rrb_symbol,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(43), 1,
      aux_sym_function_definition_repeat1,
    STATE(71), 1,
      sym_parameter_definition,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(181), 2,
      anon_sym_constructor,
      sym__identifier,
  [1358] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      sym_number_literal,
    STATE(104), 1,
      sym_literal,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_bool_literal,
      sym_string_literal,
  [1379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1392] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym__rrb_symbol,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(43), 1,
      aux_sym_function_definition_repeat1,
    STATE(71), 1,
      sym_parameter_definition,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
  [1415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 7,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
      sym__rcb_symbol,
  [1428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_expand_operator,
    ACTIONS(202), 2,
      anon_sym_constructor,
      sym__identifier,
    ACTIONS(198), 3,
      sym_comma_symbol,
      sym_attribute_access_operator,
      sym__rrb_symbol,
  [1468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      sym_function_keyword,
    ACTIONS(206), 1,
      sym__rcb_symbol,
    STATE(55), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [1498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1522] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      sym_function_keyword,
    ACTIONS(212), 1,
      sym__rcb_symbol,
    STATE(57), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [1540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1552] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_let,
    ACTIONS(219), 1,
      sym_function_keyword,
    ACTIONS(222), 1,
      sym__rcb_symbol,
    STATE(57), 3,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_context_definition_repeat1,
  [1570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      sym_const_keyword,
      sym_use_keyword,
      sym_context_keyword,
      sym_function_keyword,
  [1582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_attribute_access_operator,
    ACTIONS(173), 2,
      sym_comma_symbol,
      sym__rrb_symbol,
    ACTIONS(175), 2,
      anon_sym_constructor,
      sym__identifier,
  [1597] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__lcb_symbol,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(80), 1,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
  [1614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
  [1628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(105), 1,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
  [1642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
  [1656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_expand_operator,
    ACTIONS(198), 3,
      sym_assign_operator,
      sym_attribute_access_operator,
      sym__lcb_symbol,
  [1668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(13), 1,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
  [1682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym__reserved_identifier,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_constructor,
      sym__identifier,
  [1696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
  [1710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym__reserved_identifier,
    STATE(89), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_constructor,
      sym__identifier,
  [1724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
  [1738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym__reserved_identifier,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_constructor,
      sym__identifier,
  [1752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_comma_symbol,
    ACTIONS(232), 1,
      sym__rrb_symbol,
    ACTIONS(234), 2,
      anon_sym_constructor,
      sym__identifier,
  [1766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(35), 1,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
  [1780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(83), 1,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
  [1794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(16), 1,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
  [1808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 2,
      sym_comma_symbol,
      sym__rrb_symbol,
    ACTIONS(238), 2,
      anon_sym_constructor,
      sym__identifier,
  [1820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym__reserved_identifier,
    STATE(86), 1,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_constructor,
      sym__identifier,
  [1834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_comma_symbol,
    ACTIONS(242), 1,
      sym__rcb_symbol,
    STATE(84), 1,
      aux_sym_use_directive_repeat2,
  [1847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_terminal_symbol,
    ACTIONS(246), 1,
      sym_expand_operator,
    STATE(81), 1,
      aux_sym_use_directive_repeat1,
  [1860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_attribute_access_operator,
    ACTIONS(173), 2,
      sym_assign_operator,
      sym__lcb_symbol,
  [1871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_expand_operator,
    ACTIONS(250), 1,
      sym_terminal_symbol,
    STATE(78), 1,
      aux_sym_use_directive_repeat1,
  [1884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_terminal_symbol,
    ACTIONS(254), 1,
      sym_expand_operator,
    STATE(81), 1,
      aux_sym_use_directive_repeat1,
  [1897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym__rrb_symbol,
    ACTIONS(257), 2,
      anon_sym_constructor,
      sym__identifier,
  [1908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_comma_symbol,
    ACTIONS(259), 1,
      sym__rcb_symbol,
    STATE(77), 1,
      aux_sym_use_directive_repeat2,
  [1921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_comma_symbol,
    ACTIONS(264), 1,
      sym__rcb_symbol,
    STATE(84), 1,
      aux_sym_use_directive_repeat2,
  [1934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_string_literal,
  [1944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      sym_terminal_symbol,
      sym_expand_operator,
  [1952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      sym_string_literal,
  [1962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      sym_comma_symbol,
      sym__rcb_symbol,
  [1970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym__lrb_symbol,
  [1977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym__lcb_symbol,
  [1984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
  [1991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_assign_operator,
  [1998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_terminal_symbol,
  [2005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_from_keyword,
  [2012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_rightarrow_operator,
  [2019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_attribute_access_operator,
  [2026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_attribute_access_operator,
  [2033] = 2,
    ACTIONS(282), 1,
      sym__string_literal_content,
    ACTIONS(284), 1,
      sym_comment,
  [2040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym__lcb_symbol,
  [2047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_terminal_symbol,
  [2054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_from_keyword,
  [2061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym__lcb_symbol,
  [2068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_terminal_symbol,
  [2075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_terminal_symbol,
  [2082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_semicolon_symbol,
  [2089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_rightarrow_operator,
  [2096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
  [2103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_semicolon_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 216,
  [SMALL_STATE(6)] = 288,
  [SMALL_STATE(7)] = 360,
  [SMALL_STATE(8)] = 415,
  [SMALL_STATE(9)] = 446,
  [SMALL_STATE(10)] = 501,
  [SMALL_STATE(11)] = 556,
  [SMALL_STATE(12)] = 611,
  [SMALL_STATE(13)] = 643,
  [SMALL_STATE(14)] = 672,
  [SMALL_STATE(15)] = 703,
  [SMALL_STATE(16)] = 734,
  [SMALL_STATE(17)] = 761,
  [SMALL_STATE(18)] = 790,
  [SMALL_STATE(19)] = 816,
  [SMALL_STATE(20)] = 842,
  [SMALL_STATE(21)] = 868,
  [SMALL_STATE(22)] = 900,
  [SMALL_STATE(23)] = 926,
  [SMALL_STATE(24)] = 957,
  [SMALL_STATE(25)] = 988,
  [SMALL_STATE(26)] = 1014,
  [SMALL_STATE(27)] = 1035,
  [SMALL_STATE(28)] = 1058,
  [SMALL_STATE(29)] = 1076,
  [SMALL_STATE(30)] = 1094,
  [SMALL_STATE(31)] = 1119,
  [SMALL_STATE(32)] = 1144,
  [SMALL_STATE(33)] = 1169,
  [SMALL_STATE(34)] = 1194,
  [SMALL_STATE(35)] = 1210,
  [SMALL_STATE(36)] = 1226,
  [SMALL_STATE(37)] = 1239,
  [SMALL_STATE(38)] = 1252,
  [SMALL_STATE(39)] = 1267,
  [SMALL_STATE(40)] = 1282,
  [SMALL_STATE(41)] = 1297,
  [SMALL_STATE(42)] = 1312,
  [SMALL_STATE(43)] = 1335,
  [SMALL_STATE(44)] = 1358,
  [SMALL_STATE(45)] = 1379,
  [SMALL_STATE(46)] = 1392,
  [SMALL_STATE(47)] = 1415,
  [SMALL_STATE(48)] = 1428,
  [SMALL_STATE(49)] = 1440,
  [SMALL_STATE(50)] = 1452,
  [SMALL_STATE(51)] = 1468,
  [SMALL_STATE(52)] = 1480,
  [SMALL_STATE(53)] = 1498,
  [SMALL_STATE(54)] = 1510,
  [SMALL_STATE(55)] = 1522,
  [SMALL_STATE(56)] = 1540,
  [SMALL_STATE(57)] = 1552,
  [SMALL_STATE(58)] = 1570,
  [SMALL_STATE(59)] = 1582,
  [SMALL_STATE(60)] = 1597,
  [SMALL_STATE(61)] = 1614,
  [SMALL_STATE(62)] = 1628,
  [SMALL_STATE(63)] = 1642,
  [SMALL_STATE(64)] = 1656,
  [SMALL_STATE(65)] = 1668,
  [SMALL_STATE(66)] = 1682,
  [SMALL_STATE(67)] = 1696,
  [SMALL_STATE(68)] = 1710,
  [SMALL_STATE(69)] = 1724,
  [SMALL_STATE(70)] = 1738,
  [SMALL_STATE(71)] = 1752,
  [SMALL_STATE(72)] = 1766,
  [SMALL_STATE(73)] = 1780,
  [SMALL_STATE(74)] = 1794,
  [SMALL_STATE(75)] = 1808,
  [SMALL_STATE(76)] = 1820,
  [SMALL_STATE(77)] = 1834,
  [SMALL_STATE(78)] = 1847,
  [SMALL_STATE(79)] = 1860,
  [SMALL_STATE(80)] = 1871,
  [SMALL_STATE(81)] = 1884,
  [SMALL_STATE(82)] = 1897,
  [SMALL_STATE(83)] = 1908,
  [SMALL_STATE(84)] = 1921,
  [SMALL_STATE(85)] = 1934,
  [SMALL_STATE(86)] = 1944,
  [SMALL_STATE(87)] = 1952,
  [SMALL_STATE(88)] = 1962,
  [SMALL_STATE(89)] = 1970,
  [SMALL_STATE(90)] = 1977,
  [SMALL_STATE(91)] = 1984,
  [SMALL_STATE(92)] = 1991,
  [SMALL_STATE(93)] = 1998,
  [SMALL_STATE(94)] = 2005,
  [SMALL_STATE(95)] = 2012,
  [SMALL_STATE(96)] = 2019,
  [SMALL_STATE(97)] = 2026,
  [SMALL_STATE(98)] = 2033,
  [SMALL_STATE(99)] = 2040,
  [SMALL_STATE(100)] = 2047,
  [SMALL_STATE(101)] = 2054,
  [SMALL_STATE(102)] = 2061,
  [SMALL_STATE(103)] = 2068,
  [SMALL_STATE(104)] = 2075,
  [SMALL_STATE(105)] = 2082,
  [SMALL_STATE(106)] = 2089,
  [SMALL_STATE(107)] = 2096,
  [SMALL_STATE(108)] = 2103,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(41),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(17),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(7),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(20),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(98),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(18),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lval_expression, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lval_expression, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__lval_expression, 1, 0, 0), REDUCE(sym__name, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access_expression, 3, 0, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_access_expression, 3, 0, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_member_access_expression, 3, 0, 2), REDUCE(sym_qualified_name, 3, 0, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expression, 3, 0, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_expression, 3, 0, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, 0, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__non_lval_expression, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__non_lval_expression, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 10),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 10),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 2, 0, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, 0, 8),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 8),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3, 0, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3, 0, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_qualified_name, 3, 0, 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_qualified_name, 3, 0, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, 0, 9),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, 0, 9),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 7, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 4, 0, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 8, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 7, 0, 7),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 5, 0, 1),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_definition_repeat1, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 4, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 3, 0, 6),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_definition, 3, 0, 6),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat2, 2, 0, 0), SHIFT_REPEAT(67),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat2, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [270] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
