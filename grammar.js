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
    DOT : 1000,
    EXPRESSION: 300,
    QUALIFIED_NAME: 200,
    IDENTIFIER: 100,
}

module.exports = grammar({
    name: 'inference',

    conflicts: $ => [
        [$._lval_expression, $._name],

        [$.member_access_expression, $.qualified_name]
    ],

    extras: $ => [
        /\s/,
        $.comment,
    ],

    rules: {
        source_file: $ => repeat(
            choice(
                $._definition,
                $._statement,
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
            $.use_statement,
            $.return_statement,
        ),

        type: $ => choice(
            'i32',
            'i64',
            'u32',
            'u64',
            'bool',
            '()'
        ),

        literal : $ => choice(
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
            '.',
            field('name', $.identifier),
        )),

        assign_expression: $ => seq(
            field('left', $._lval_expression),
            $.assign_operator,
            field('right', $.expression),
            $.terminal_symbol
        ),

        binary_expression: $ => seq(
            field('left', $.expression),
            $.binary_operator,
            field('right', $.expression),
            $.terminal_symbol
        ),

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
            $.lcb_symbol,
            repeat(
                choice(
                    $.variable_definition,
                    $.function_definition,
                )
            ),
            $.rcb_symbol
        ),

        function_definition: $ => seq(
            $.function_keyword,
            field('name', $.identifier),
            $.lrb_symbol,
            repeat(
                seq(
                    $.parameter_definition,
                    optional($.comma_symbol),
                ),
            ),
            $.rrb_symbol,
            $.rightarrow_operator,
            field('type', $.type),
            $.lcb_symbol,
            repeat(
                choice(
                    $._statement,
                    $.expression
                )
            ),
            $.rcb_symbol
        ),

        parameter_definition: $ => seq(
            field('name', $.identifier),
            $.semicolon_symbol,
            field('type', $.type),
        ),

        use_statement: $ => seq(
            $.use_keyword,
            choice(
                sep1(
                    $.identifier,
                    $.expand_operator
                ),
                seq(
                    $.lcb_symbol,
                    sep1(
                        $.identifier,
                        $.comma_symbol
                    ),
                    $.rcb_symbol,
                    $.from_keyword,
                    $.string_literal
                )
            ),
            $.terminal_symbol
        ),

        return_statement: $ => seq(
            $.return_keyword,
            field('expression', $.expression),
            $.terminal_symbol
        ),

        type_qualified_name: $ => seq(
            field('base', $.identifier),
            $.expand_operator,
            field('name', $.identifier),
            $.terminal_symbol,
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
            $.assign_operator,
            $.less_operator,
            $.greater_operator,
            $.less_equal_operator,
            $.greater_equal_operator,
            $.equals_operator,
            $.not_equals_operator,
        ),

        assign_operator: $ => '=',
        expand_operator: $ => '::',
        attribute_access_operator: $ => '.',
        less_operator: $ => '<',
        greater_operator: $ => '>',
        less_equal_operator: $ => '<=',
        greater_equal_operator: $ => '>=',
        equals_operator: $ => '==',
        not_equals_operator: $ => '!=',

        rightarrow_operator: $ => '->',

        lcb_symbol: $ => '{',
        rcb_symbol: $ => '}',
        lsb_symbol: $ => '[',
        rsb_symbol: $ => ']',
        lrb_symbol: $ => '(',
        rrb_symbol: $ => ')',


        bool_literal: $ => choice(
            'true',
            'false',
        ),

        string_literal: $ => seq(
            '"',
            $._string_literal_content,
            '"'
        ),

        _string_literal_content: $ => token.immediate(prec(1, /[^"\\\n]+/)),

        number_literal: $ => /\d+/,

        qualified_identifier: $ => sep1($.identifier, '.'),

        _name: $ => choice(
            $.alias_qualified_name,
            $.qualified_name,
            $.identifier,
        ),

        alias_qualified_name: $ => seq(
            field('alias', $.identifier),
            '::',
            field('name', $.identifier),
        ),

        qualified_name: $ => prec(PRECEDENCE.DOT, seq(
            field('qualifier', $._name),
            '.',
            field('name', $.identifier),
        )),

        _reserved_identifier: $ => choice(
            
        ),

        _identifier: _ => /\w*[A-Za-z]\w*/,
        identifier: $ => choice(
            $._identifier,
            $._reserved_identifier,
        ),

        comment: _ => token(seq('///', /[^\n\r]*/))
    }
});
