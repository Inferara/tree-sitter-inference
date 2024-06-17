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
    FUNC_CALL : 900,

    POW : 600,
    MUL : 590,
    ADD : 580,
    COMPARE : 570,
    EQUALS : 560,
    AND : 550,
    OR : 540,
    AND : 530,
    OR : 520,

    EXPRESSION: 300,
    QUALIFIED_NAME: 200,
    IDENTIFIER: 100,
}

module.exports = grammar({
    name: 'inference',

    conflicts: $ => [
        [$._lval_expression, $._name],
        [$._lval_expression, $._name, $.type_qualified_name],
        [$.qualified_name, $.member_access_expression],
    ],

    extras: $ => [
        /\s/,
        $.comment,
    ],

    rules: {
        source_file: $ => repeat(
            choice(
                $._definition,
                $.use_directive,
                $.constant_definition
            ),
        ),

        word: $ => $.identifier,

        _definition: $ => choice(
            $.context_definition,
            $.function_definition,
            $.variable_definition,
        ),

        _statement: $ => choice(
            $.expression_statement,
            $.return_statement,
        ),

        type: $ => choice(
            $._name,
            $._embedded_type,
        ),

        _embedded_type: _ => token(choice(
            'i32',
            'i64',
            'u32',
            'u64',
            'bool',
            '()'
        )),

        literal: $ => choice(
            $.bool_literal,
            $.string_literal,
            $.number_literal,
        ),

        expression: $ => prec(PRECEDENCE.EXPRESSION, choice(
            $._non_lval_expression,
            $._lval_expression,
        )),

        _lval_expression: $ => choice(
            'ctx',
            $.member_access_expression,
            $.identifier
        ),

        _non_lval_expression: $ => choice(
            $.binary_expression,
            $.literal,
            $._expression_statement
        ),

        member_access_expression: $ => prec(PRECEDENCE.DOT, seq(
            field('expression', choice($.expression, $._embedded_type, $._name)),
            choice($.attribute_access_operator, $.expand_operator),
            field('name', $.identifier),
        )),

        assign_expression: $ => prec.left(seq(
            field('left', $._lval_expression),
            $.assign_operator,
            field('right', $.expression)
        )),

        function_call_expression: $ => prec(PRECEDENCE.FUNC_CALL, seq(
            field('function', $._lval_expression),
            '(',
            optional(sep1($.expression, ',')),
            ')'
        )),

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
                  field('left', $.expression),
                  field('operator', operator),
                  field('right', $.expression),
                )),
              ),
        ),

        variable_definition: $ => seq(
            'let',
            field('name', $.identifier),
            $._typedef_symbol,
            field('type', $.type),
            optional(seq($.assign_operator, $.expression)),
            $._terminal_symbol
        ),

        constant_definition: $ => seq(
            $.const_keyword,
            field('name', $.identifier),
            $._typedef_symbol,
            field('type', $.type),
            $.assign_operator,
            field('value', $.literal),
            $._terminal_symbol
        ),

        context_definition: $ => seq(
            $.context_keyword,
            field('name', $.identifier),
            $._lcb_symbol,
            repeat(
                choice(
                    $.variable_definition,
                    $.function_definition,
                )
            ),
            $._rcb_symbol
        ),

        block : $ => seq(
            $._lcb_symbol,
            repeat($._statement),
            $._rcb_symbol
        ),

        function_definition: $ => seq(
            $.function_keyword,
            field('name', $.identifier),
            $.argument_list,
            $.rightarrow_operator,
            field('returns', $.type),
            field('body', $.block)
        ),

        argument_list: $ => seq(
            $._lrb_symbol,
            optional(sep1($.argument_declaration, $._comma_symbol)),
            $._rrb_symbol,
        ),

        argument_declaration: $ => seq(
            field('name', $.identifier),
            $._typedef_symbol,
            field('type', $.type)
        ),

        use_directive: $ => seq(
            $.use_keyword,
            choice(
                sep1(
                    $.identifier,
                    $.expand_operator
                ),
                seq(
                    $._lcb_symbol,
                    sep1(
                        $.identifier,
                        $._comma_symbol
                    ),
                    $._rcb_symbol,
                    $.from_keyword,
                    $.string_literal
                )
            ),
            $._terminal_symbol
        ),

        expression_statement: $ => seq($._expression_statement, $._terminal_symbol),

        _expression_statement: $ => choice(
            $.assign_expression,
            $.function_call_expression,
        ),

        return_statement: $ => seq(
            $.return_keyword,
            field('expression', $.expression),
            $._terminal_symbol
        ),

        const_keyword: $ => 'const',
        use_keyword: $ => 'use',
        from_keyword: $ => 'from',
        context_keyword: $ => 'context',
        function_keyword: $ => 'fn',
        return_keyword: $ => 'return',

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
            '"'
        ),

        _string_literal_content: _ => token.immediate(prec(1, /[^"\\\n]+/)),

        number_literal: $ => /\d+/,

        qualified_identifier: $ => sep1($.identifier, $.attribute_access_operator),

        _name: $ => choice(
            $.type_qualified_name,
            $.qualified_name,
            $.identifier,
        ),

        type_qualified_name: $ => seq(
            field('alias', $.identifier),
            $.expand_operator,
            field('name', $.identifier),
        ),

        qualified_name: $ => prec(PRECEDENCE.DOT, seq(
            field('qualifier', $._name),
            $.attribute_access_operator,
            field('name', $.identifier),
        )),

        _reserved_identifier: _ => choice(
            'constructor'
        ),

        _identifier: _ => /\w*[_a-zA-Z]\w*/,
        identifier: $ => choice(
            $._identifier,
            $._reserved_identifier,
        ),

        comment: _ => token(seq('///', /[^\n\r]*/))
    }
});
