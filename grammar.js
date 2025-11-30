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
  DOT: 2000,
  FUNC_CALL: 1500,
  UNARY: 1000,

  POW: 990,
  MUL: 980,
  ADD: 970,
  SHIFT: 800,
  COMPARE: 700,
  EQUALS: 600,
  AND: 590,
  XOR: 580,
  OR: 570,
  LOGICAL_AND: 490,
  LOGICAL_OR: 480,

  EXPRESSION: 300,
};

module.exports = grammar({
  name: 'inference',

  conflicts: $ => [
    [$._simple_name, $.generic_name],

    [$._lval_expression, $._name],

    [$.qualified_name, $.member_access_expression],
    [$._bracketed_generic_name, $._simple_name],
  ],

  extras: $ => [
    /\s/,
    $._docstring,
    $._comment,
  ],

  rules: {
    source_file: $ => repeat(
      choice(
        $.use_directive,
        $.spec_definition,
        $._definition,
      ),
    ),

    word: $ => $.identifier,

    _statement: $ => choice(
      $._block,
      $.expression_statement,
      $.assign_statement,
      $.return_statement,
      $.loop_statement,
      $.if_statement,
      $.variable_definition_statement,
      $.constant_definition,
      $.type_definition_statement,
      $.assert_statement,
      $.break_statement,
    ),

    _definition: $ => choice(
      $.constant_definition,
      $.function_definition,
      $.external_function_definition,
      $.type_definition_statement,
      $.enum_definition,
      $.struct_definition,
    ),

    _type: $ => choice(
      $._embedded_type,
      $._bracketed_generic_name,
      $._name,
    ),

    _embedded_type: $ => choice(
      $.type_i8,
      $.type_i16,
      $.type_i32,
      $.type_i64,
      $.type_u8,
      $.type_u16,
      $.type_u32,
      $.type_u64,
      $.type_bool,
      $.type_unit,
      $.type_array,
      $.type_fn,
    ),

    type_i8: _ => token('i8'),
    type_i16: _ => token('i16'),
    type_i32: _ => token('i32'),
    type_i64: _ => token('i64'),
    type_u8: _ => token('u8'),
    type_u16: _ => token('u16'),
    type_u32: _ => token('u32'),
    type_u64: _ => token('u64'),
    type_bool: _ => token('bool'),
    type_unit: $ => seq('(', token.immediate(')')),
    type_array: $ => seq(
      '[',
      field('type', $._type),
      optional(
        seq(
          ';',
          field('length', choice($.number_literal, $._name)),
        ),
      ),
      ']',
    ),
    type_fn: $ => seq(
      prec(
        PRECEDENCE.FUNC_CALL,
        seq(
          'fn',
          field('arguments', $.argument_list),
        ),
      ),
      optional(seq('->', field('returns', $._type))),
    ),

    _literal: $ => choice(
      $.array_literal,
      $.bool_literal,
      $.string_literal,
      $.number_literal,
      $.unit_literal,
    ),

    _expression: $ => prec(PRECEDENCE.EXPRESSION, choice(
      $._non_lval_expression,
      $._lval_expression,
    )),

    _lval_expression: $ => choice(
      $._simple_name,
      $.member_access_expression,
      $.array_index_access_expression,
      $.function_call_expression,
    ),

    _non_lval_expression: $ => choice(
      $._literal,
      $.type_member_access_expression,
      $.binary_expression,
      $.struct_expression,
      $.prefix_unary_expression,
      $.parenthesized_expression,
      $.uzumaki_keyword
    ),

    _block: $ => choice(
      $.block,
      $.assume_block,
      $.forall_block,
      $.exists_block,
      $.unique_block,
    ),

    array_index_access_expression: $ => seq(
      field('array', $._lval_expression),
      '[',
      field('index', $._expression),
      ']',
    ),

    member_access_expression: $ => prec(PRECEDENCE.DOT, seq(
      field('expression', choice($._name, $.member_access_expression)),
      '.',
      field('name', $._simple_name),
    )),

    _identifier_like_embedded_type: $ => choice(
      $.type_i8, $.type_i16, $.type_i32, $.type_i64,
      $.type_u8, $.type_u16, $.type_u32, $.type_u64,
      $.type_bool, $.type_fn
    ),

    type_member_access_expression: $ => choice(prec(PRECEDENCE.DOT, seq(
      field('expression', choice(
        $.type_member_access_expression,
        $._identifier_like_embedded_type,
        $._name,
        $.parenthesized_expression
      )),
      alias(token.immediate('::'), '::'),
      field('name', $._simple_name),
    )),
    prec(PRECEDENCE.DOT, seq(
      field('expression', $._bracketed_generic_name),
      alias(token.immediate('::'), '::'),
      field('name', $._simple_name),
    )),
    ),

    function_call_expression: $ => prec.dynamic(PRECEDENCE.FUNC_CALL, seq(
      field('function', choice($._lval_expression, $.type_member_access_expression, $.parenthesized_expression)),
      '(',
      optional(
        sep1(
          seq(
            optional(seq(field('argument_name', $._name), ':')),
            field('argument', $._expression)
          ),
          ','
        ),
      ),
      ')',
    )),

    struct_expression: $ => seq(
      field('name', $._name),
      '{',
      optional(sep1(
        seq(field('field_name', $._name), ':', field('field_value', $._expression)), ',')),
      '}',
    ),

    expression_statement: $ => seq(
      $._expression,
      ';'
    ),

    assign_statement: $ => prec.left(seq(
      field('left', $._lval_expression),
      '=',
      field('right', $._expression),
      ';',
    )),

    assert_statement: $ => seq(
      'assert',
      $._expression,
      ';',
    ),

    break_statement: _ => prec.left(seq('break', ';')),

    parenthesized_expression: $ => prec(1, seq(
      '(',
      $._expression,
      ')',
    )),

    prefix_unary_expression: $ => prec(PRECEDENCE.UNARY, seq(
      field('operator', $.unary_not),
      $._expression,
    )),

    binary_expression: $ => choice(
      prec.right(PRECEDENCE.POW, seq(
        field('left',  $._expression),
        field('operator', '**'),
        field('right', $._expression),
      )),
      ...[
        ['&&', PRECEDENCE.LOGICAL_AND],
        ['||', PRECEDENCE.LOGICAL_OR],
        ['&', PRECEDENCE.AND],
        ['|', PRECEDENCE.OR],
        ['^', PRECEDENCE.XOR],
        ['<<', PRECEDENCE.SHIFT],
        ['>>', PRECEDENCE.SHIFT],
        ['+', PRECEDENCE.ADD],
        ['-', PRECEDENCE.ADD],
        ['*', PRECEDENCE.MUL],
        ['%', PRECEDENCE.MUL],
        ['<', PRECEDENCE.COMPARE],
        ['<=', PRECEDENCE.COMPARE],
        ['==', PRECEDENCE.EQUALS],
        ['!=', PRECEDENCE.EQUALS],
        ['>=', PRECEDENCE.COMPARE],
        ['>', PRECEDENCE.COMPARE],
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
      optional(field('mut', $.mut_keyword)),
      field('name', $.identifier),
      ':',
      field('type', $._type),
      optional(seq('=', field('value', $._expression))),
      ';',
    ),

    type_definition_statement: $ => seq(
      'type',
      field('name', $.identifier),
      '=',
      field('type', $._type),
      ';',
    ),

    constant_definition: $ => seq(
      'const',
      field('name', $.identifier),
      ':',
      field('type', $._type),
      '=',
      field('value', $._expression),
      ';',
    ),

    spec_definition: $ => seq(
      'spec',
      field('name', $.identifier),
      '{',
      repeat($._definition),
      '}',
    ),

    enum_definition: $ => seq(
      'enum',
      field('name', $.identifier),
      '{',
      sep1(field('variant', $.identifier), ','),
      '}',
    ),

    struct_definition: $ => seq(
      'struct',
      field('name', $.identifier),
      '{',
      repeat(choice(
        seq(field('field', $.struct_field), ';'),
        field('value', $.function_definition),
      )),
      '}',
    ),

    struct_field: $ => seq(
      field('name', $.identifier),
      ':',
      field('type', $._type),
    ),

    block: $ => seq(
      '{',
      repeat(field('statement', $._statement)),
      '}',
    ),

    function_definition: $ => seq(
      'fn',
      field('name', $.identifier),
      optional(field('type_parameters', $.type_argument_list_definition)),
      field('argument_list', $.argument_list),
      optional(seq('->', field('returns', $._type))),
      field('body', $._block),
    ),

    external_function_definition: $ => seq(
      'external',
      'fn',
      field('name', $.identifier),
      field('argument_list', $.argument_list),
      optional(seq('->', field('returns', $._type))),
      ';',
    ),

    argument_list: $ => seq(
      '(',
      optional(
        sep1(
          field('argument',
            choice($.argument_declaration, $.self_reference, $.ignore_argument, $._type)
          ),
          ','
        )
      ),
      ')',
    ),

    argument_declaration: $ => seq(
      optional(field('mut', $.mut_keyword)),
      field('name', $.identifier),
      ':',
      field('type', $._type),
    ),

    self_reference: $ => seq(
      optional(field('mut', $.mut_keyword)),
      'self'
    ),

    ignore_argument: $ => seq(
      '_',
      ':',
      field('type', $._type)
    ),

    assume_block: $ => seq(
      'assume',
      field('body', $.block),
    ),

    forall_block: $ => seq(
      'forall',
      field('body', $.block),
    ),

    exists_block: $ => seq(
      'exists',
      field('body', $.block),
    ),

    unique_block: $ => seq(
      'unique',
      field('body', $.block),
    ),

    if_statement: $ => prec.right(seq(
      'if',
      field('condition', $._expression),
      field('if_arm', $._block),
      repeat(seq('else', 'if', field('else_if_condition', $._expression), field('else_if_arm', $._block))),
      optional(seq('else', field('else_arm', $._block))),
    )),

    loop_statement: $ => seq(
      'loop',
      optional(field('condition', $._expression)),
      field('body', $._block),
    ),

    use_directive: $ => seq(
      'use',
      choice(
        seq(
          sep1(field('segment', $.identifier), '::'),
          optional(
            seq(
              '::',
              '{',
              sep1(field('imported_type', $.identifier), ','),
              '}',
            ),
          ),
        ),
        seq(
          '{',
          sep1(field('imported_type', $.identifier), ','),
          '}',
          'from',
          field('from_literal', $.string_literal),
        ),
      ),
      ';',
    ),

    return_statement: $ => seq(
      'return',
      optional(field('expression', $._expression)),
      ';',
    ),

    uzumaki_keyword: _ => '@',
    mut_keyword: _ => 'mut',
    unary_not: _ => '!',
    bool_literal: _ => choice(
      token('true'),
      token('false'),
    ),

    string_literal: $ => seq(
      '"',
      optional($._string_literal_content),
      '"',
    ),

    _string_literal_content: _ => token.immediate(prec(1, /[^"\\\n]+/)),

    number_literal: _ => seq(optional('-'), /\d+/),

    unit_literal: _ => seq('(', token.immediate(')')),

    array_literal: $ => seq(
      '[',
      optional(sep1(
        $._expression,
        ',',
      )),
      ']',
    ),

    qualified_identifier: $ => sep1($.identifier, '.'),

    _name: $ => choice(
      $.type_qualified_name,
      $.qualified_name,
      $._simple_name,
    ),

    type_qualified_name: $ => seq(
      field('alias', $.identifier),
      '::',
      field('name', $._simple_name),
    ),

    _simple_name: $ => choice(
      $.identifier,
      $.generic_name,
    ),

    qualified_name: $ => prec(PRECEDENCE.DOT, seq(
      field('qualifier', $._name),
      '.',
      field('name', $._simple_name),
    )),

    generic_name: $ => seq(
      field('base_type', $.identifier),
      $.type_argument_list,
    ),

    _bracketed_generic_name: $ => seq(
      '(',
      $.generic_name,
      ')'
    ),

    type_argument_list_definition: $ => prec.left(seq(
      seq(field('type', $.identifier), token.immediate('\'')),
      repeat(
        seq(field('type', $.identifier), token.immediate('\'')),
      )
    )),

    type_argument_list: $ => prec.left(seq(
      choice(
        sep1(seq(field('type', $._type), token.immediate('\'')), ','),
      ),
    )),

    _reserved_identifier: _ => choice(
      'constructor',
      'proof',
      'uzumaki',
    ),

    _identifier: _ => /[A-Za-z_]\w*/,
    identifier: $ => choice(
      $._identifier,
      $._reserved_identifier,
    ),

    _docstring: _ => token(prec(1, /\/\/\/[^\n\r]*/)),
    _comment: _ => token(prec(0, /\/\/[^\n\r]*/)),
  },
});
