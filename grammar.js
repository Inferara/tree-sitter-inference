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
    EXPRESSION: 300,
    QUALIFIED_NAME: 200,
    IDENTIFIER: 100,
}

module.exports = grammar({
    name: 'inference',

    conflicts: $ => [
        [$._lval_expression, $._name],
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
            $.assign_expression,
            $.literal
        ),

        member_access_expression: $ => prec(PRECEDENCE.DOT, seq(
            field('expression', choice($.expression, $.type, $._name)),
            $.attribute_access_operator,
            field('name', $.identifier),
        )),

        assign_expression: $ => prec.left(seq(
            field('left', $._lval_expression),
            $.assign_operator,
            field('right', $.expression)
        )),

        binary_expression: $ => prec.left(seq(
            field('left', $.expression),
            $.binary_operator,
            field('right', $.expression)
        )),

        variable_definition: $ => seq(
            'let',
            field('name', $.identifier),
            optional(seq($.assign_operator, $.expression)),
        ),

        constant_definition: $ => seq(
            $.const_keyword,
            field('name', $.identifier),
            $.semicolon_symbol,
            field('type', $.type),
            $.assign_operator,
            field('value', $.literal),
            $.terminal_symbol
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

        function_definition: $ => seq(
            $.function_keyword,
            field('name', $.identifier),
            $._lrb_symbol,
            repeat(
                seq(
                    $.parameter_definition,
                    optional($.comma_symbol),
                ),
            ),
            $._rrb_symbol,
            $.rightarrow_operator,
            field('returns', $.type),
            $._lcb_symbol,
            repeat($._statement),
            $._rcb_symbol
        ),

        parameter_definition: $ => seq(
            field('name', $.identifier),
            $.semicolon_symbol,
            field('type', $.type),
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
                        $.comma_symbol
                    ),
                    $._rcb_symbol,
                    $.from_keyword,
                    $.string_literal
                )
            ),
            $.terminal_symbol
        ),

        expression_statement: $ => seq($._expression_statement, $.terminal_symbol),

        _expression_statement: $ => seq(
            $.assign_expression,
        ),

        return_statement: $ => seq(
            $.return_keyword,
            field('expression', $.expression),
            $.terminal_symbol
        ),

        type_qualified_name: $ => seq(
            field('base', $.identifier),
            $.expand_operator,
            field('name', $.identifier)
        ),

        const_keyword: $ => 'const',
        use_keyword: $ => 'use',
        from_keyword: $ => 'from',
        context_keyword: $ => 'context',
        function_keyword: $ => 'fn',
        return_keyword: $ => 'return',

        comma_symbol: $ => ',',
        semicolon_symbol: $ => ':',
        terminal_symbol: $ => ';',

        binary_operator: $ => choice(
            $.add_operator,
            $.subtract_operator,
            $.multiply_operator,
            $.less_operator,
            $.greater_operator,
            $.less_equal_operator,
            $.greater_equal_operator,
            $.equals_operator,
            $.not_equals_operator,
        ),

        add_operator: $ => '+',
        subtract_operator: $ => '-',
        multiply_operator: $ => '*',
        assign_operator: $ => '=',
        less_operator: $ => '<',
        greater_operator: $ => '>',
        less_equal_operator: $ => '<=',
        greater_equal_operator: $ => '>=',
        equals_operator: $ => '==',
        not_equals_operator: $ => '!=',

        expand_operator: $ => '::',
        attribute_access_operator: $ => '.',

        rightarrow_operator: $ => '->',

        _lcb_symbol: $ => '{',
        _rcb_symbol: $ => '}',
        _lrb_symbol: $ => '(',
        _rrb_symbol: $ => ')',


        bool_literal: $ => choice(
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
            $.alias_qualified_name,
            $.qualified_name,
            $.identifier,
        ),

        alias_qualified_name: $ => seq(
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
