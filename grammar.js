/**
 * Creates a rule to match one or more of the rules separated by `separator`
 *
 * @param {RuleOrLiteral} rule
 *
 * @param {RuleOrLiteral} separator
 *
 * @return {SeqRule}
 *
 */
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

const PRECEDENCE = {
  DOT: 1000,
  FUNC_CALL: 900,
  UNARY: 800,

  POW: 600,
  MUL: 590,
  ADD: 580,
  COMPARE: 570,
  EQUALS: 560,
  AND: 550,
  OR: 540,
  AND: 530,
  OR: 520,

  EXPRESSION: 300,
};

module.exports = grammar({
  name: 'inference',

  conflicts: $ => [
    [$._simple_name, $.generic_name],
    [$._simple_name, $.type_qualified_name],

    [$._expression_statement, $._lval_expression],
    [$._lval_expression, $._name],

    [$.qualified_name, $.member_access_expression],
  ],

  extras: $ => [
    /\s/,
    $._comment,
  ],

  rules: {
    source_file: $ => repeat(
      choice(
        $.use_directive,
        $.context_definition,
        $._definition,
      ),
    ),

    word: $ => $.identifier,

    _statement: $ => choice(
      $.block,
      $.expression_statement,
      $.return_statement,
      $.filter_statement,
      $.for_statement,
      $.if_statement,
      $.variable_definition_statement,
      $.type_definition_statement,
    ),

    _definition: $ => choice(
      $.constant_definition,
      $.function_definition,
      $.external_function_definition,
      $.type_definition_statement,
    ),

    _type: $ => choice(
      $._name,
      $._embedded_type,
    ),

    _embedded_type: $ => choice(
      $.type_i32,
      $.type_i64,
      $.type_u32,
      $.type_u64,
      $.type_bool,
      $.type_unit,
    ),

    type_i32: _ => token('i32'),
    type_i64: _ => token('i64'),
    type_u32: _ => token('u32'),
    type_u64: _ => token('u64'),
    type_bool: _ => token('bool'),
    type_unit: _ => token('()'),

    _literal: $ => choice(
      $.bool_literal,
      $.string_literal,
      $.number_literal,
    ),

    _expression: $ => prec(PRECEDENCE.EXPRESSION, choice(
      $._non_lval_expression,
      $._lval_expression,
    )),

    _lval_expression: $ => choice(
      $.member_access_expression,
      $._simple_name,
      $.prefix_unary_expression,
      $.parenthesized_expression,
    ),

    _non_lval_expression: $ => choice(
      $.binary_expression,
      $._literal,
      $._expression_statement,
    ),

    member_access_expression: $ => prec(PRECEDENCE.DOT, seq(
      field('expression', choice($._expression, $._embedded_type, $._name)),
      choice($.attribute_access_operator, $.expand_operator),
      field('name', $._simple_name),
    )),

    assign_expression: $ => prec.left(seq(
      field('left', $._lval_expression),
      $.assign_operator,
      field('right', $._expression),
    )),

    function_call_expression: $ => prec(PRECEDENCE.FUNC_CALL, seq(
      field('function', $._lval_expression),
      '(',
      optional(sep1(field('argument', $._expression), ',')),
      ')',
    )),

    assert_expression: $ => seq(
      'assert',
      $._expression,
    ),

    apply_expression: $ => prec.right(PRECEDENCE.UNARY, seq(
      'apply',
      $.function_call_expression,
    )),

    parenthesized_expression: $ => seq(
      '(',
      $._non_lval_expression,
      ')',
    ),

    prefix_unary_expression: $ => prec(PRECEDENCE.UNARY, seq(
      '!',
      $._expression,
    )),

    typeof_expression: $ => seq(
      'typeof',
      '(',
      field('typeref', $._name),
      ')',
    ),

    binary_expression: $ => choice(
      ...[
        [$.pow_operator, PRECEDENCE.POW],
        [$.and_operator, PRECEDENCE.AND],
        [$.or_operator, PRECEDENCE.OR],
        [$.add_operator, PRECEDENCE.ADD],
        [$.sub_operator, PRECEDENCE.ADD],
        [$.mul_operator, PRECEDENCE.MUL],
        [$.mod_operator, PRECEDENCE.MUL],
        [$.less_operator, PRECEDENCE.COMPARE],
        [$.less_equal_operator, PRECEDENCE.COMPARE],
        [$.equals_operator, PRECEDENCE.EQUALS],
        [$.not_equals_operator, PRECEDENCE.EQUALS],
        [$.greater_equal_operator, PRECEDENCE.COMPARE],
        [$.greater_operator, PRECEDENCE.COMPARE],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression),
        )),
      ),
    ),

    variable_definition_statement: $ => seq(
      'let',
      field('name', $.identifier),
      $._typedef_symbol,
      field('type', $._type),
      optional(seq($.assign_operator, $._expression)),
      $._terminal_symbol,
    ),

    type_definition_statement: $ => seq(
      'type',
      field('name', $.identifier),
      $.assign_operator,
      field('typeof_expression', $.typeof_expression),
      $._terminal_symbol,
    ),

    constant_definition: $ => seq(
      'const',
      field('name', $.identifier),
      $._typedef_symbol,
      field('type', $._type),
      $.assign_operator,
      field('value', $._literal),
      $._terminal_symbol,
    ),

    context_definition: $ => seq(
      'context',
      field('name', $.identifier),
      $._lcb_symbol,
      repeat($._definition),
      $._rcb_symbol,
    ),

    block: $ => seq(
      $._lcb_symbol,
      repeat($._statement),
      $._rcb_symbol,
    ),

    function_definition: $ => seq(
      optional($.total_keyword),
      $.function_keyword,
      field('name', $.identifier),
      $.argument_list,
      optional(seq($.rightarrow_operator, field('returns', $._type))),
      field('body', $.block),
    ),

    external_function_definition: $ => seq(
      'external',
      optional($.total_keyword),
      $.function_keyword,
      field('name', $.identifier),
      $._lrb_symbol,
      sep1(field('argument', $._name), $._comma_symbol),
      $._rrb_symbol,
      optional(seq($.rightarrow_operator, field('returns', $._type))),
      ';',
    ),

    argument_list: $ => seq(
      $._lrb_symbol,
      optional(sep1(field('argument', $.argument_declaration), $._comma_symbol)),
      $._rrb_symbol,
    ),

    argument_declaration: $ => seq(
      field('name', $.identifier),
      $._typedef_symbol,
      field('type', $._type),
    ),

    filter_statement: $ => seq(
      'filter',
      $.block,
    ),

    if_statement: $ => prec.right(seq(
      'if',
      field('condition', $._expression),
      field('if_arm', $.block),
      optional(seq('else', field('else_arm', $.block))),
    )),

    for_statement: $ => seq(
      'for',
      '(',
      field('initializer', optional(
        choice(
          $.variable_definition_statement,
          seq(
            sep1($._expression, $._comma_symbol),
            ';',
          ),
        ),
      )),
      field('condition', optional($._expression)),
      ';',
      field('update', optional($._expression)),
      ')',
      field('body', $._statement),
    ),

    use_directive: $ => seq(
      'use',
      choice(
        seq(
          sep1(field('segment', $.identifier), $.expand_operator),
          optional(
            seq(
              $.expand_operator,
              $._lcb_symbol,
              sep1(field('imported_type', $.identifier), $._comma_symbol),
              $._rcb_symbol,
            ),
          ),
        ),
        seq(
          $._lcb_symbol,
          sep1(field('imported_type', $.identifier), $._comma_symbol),
          $._rcb_symbol,
          'from',
          field('from_literal', $.string_literal),
        ),
      ),
      $._terminal_symbol,
    ),

    expression_statement: $ => seq(
      $._expression_statement,
      $._terminal_symbol,
    ),

    _expression_statement: $ => choice(
      $.assign_expression,
      $.function_call_expression,
      $.prefix_unary_expression,
      $.assert_expression,
      $.apply_expression,
      $.parenthesized_expression,
      $.typeof_expression,
    ),

    return_statement: $ => seq(
      'return',
      field('expression', $._expression),
      $._terminal_symbol,
    ),

    function_keyword: $ => 'fn',
    total_keyword: $ => 'total',

    add_operator: _ => '+',
    sub_operator: _ => '-',
    mul_operator: _ => '*',
    pow_operator: _ => '**',
    mod_operator: _ => '%',

    and_operator: _ => '&&',
    or_operator: _ => '||',

    less_operator: _ => '<',
    greater_operator: _ => '>',
    less_equal_operator: _ => '<=',
    greater_equal_operator: _ => '>=',
    equals_operator: _ => '==',
    not_equals_operator: _ => '!=',

    assign_operator: _ => '=',
    expand_operator: _ => '::',
    attribute_access_operator: _ => '.',

    rightarrow_operator: _ => '->',

    _lcb_symbol: _ => '{',
    _rcb_symbol: _ => '}',
    _lrb_symbol: _ => '(',
    _rrb_symbol: _ => ')',
    _comma_symbol: $ => ',',
    _typedef_symbol: $ => ':',
    _terminal_symbol: $ => ';',


    bool_literal: _ => choice(
      'true',
      'false',
    ),

    string_literal: $ => seq(
      '"',
      $._string_literal_content,
      '"',
    ),

    _string_literal_content: _ => token.immediate(prec(1, /[^"\\\n]+/)),

    number_literal: $ => seq(optional('-'), /\d+/),

    qualified_identifier: $ => sep1($.identifier, $.attribute_access_operator),

    _name: $ => choice(
      $.type_qualified_name,
      $.qualified_name,
      $._simple_name,
    ),

    type_qualified_name: $ => seq(
      field('alias', $.identifier),
      $.expand_operator,
      field('name', $._simple_name),
    ),

    _simple_name: $ => choice(
      $.identifier,
      $.generic_name,
    ),

    qualified_name: $ => prec(PRECEDENCE.DOT, seq(
      field('qualifier', $._name),
      $.attribute_access_operator,
      field('name', $._simple_name),
    )),

    generic_name: $ => seq(field('base_type', $.identifier), $.type_argument_list),

    type_argument_list: $ => seq(
      '<',
      choice(
        repeat(','),
        sep1(field('type', $._type), $._comma_symbol),
      ),
      '>',
    ),

    _reserved_identifier: _ => choice(
      'constructor',
      'proof',
      'filter',
      'type',
      'ctx',
    ),

    _identifier: _ => /\w*[_a-zA-Z]\w*/,
    identifier: $ => choice(
      $._identifier,
      $._reserved_identifier,
    ),

    _comment: _ => token(seq('///', /[^\n\r]*/)),
  },
});
