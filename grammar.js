const PRECEDENCE = {
    EXPRESSION: 300,
    QUALIFIED_NAME: 200,
    IDENTIFIER: 100,
}

module.exports = grammar({
    name: 'inference',

    rules: {
        source_file: $ => repeat(
            choice(
                $._definition,
                $._statement,
                $._definition,
            ),
        ),

        word: $ => $.identifier,

        _definition: $ => choice(
            $.variable_definition,
            $.context_definition,
            $.function_definition,
        ),

        _statement: $ => choice(
            $.use_statement,
            $.return_statement,
        ),

        type: $ => choice(
            'nat',
            'bool',
            '()'
        ),

        _expression: $ => prec(PRECEDENCE.EXPRESSION, choice(
            $.binary_expression,
            $.field_access_expression,
            $.bool_literal,
            $.string_literal,
            $.number,
            $.identifier,  // Allow identifiers as expressions
        )),

        variable_declaration: $ => seq(
            optional($.const_keyword),
            field('name', $.identifier),
            $.semicolon_symbol,
            field('type', $.type),
        ),

        variable_definition: $ => seq(
            $.variable_declaration,
            $.assign_operator,
            $._expression,
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
                seq(
                    $.identifier,
                    repeat1(
                        seq(
                            $.expand_operator,
                            field('name', $.identifier),
                        )
                    )
                ),
                seq(
                    $.lcb_symbol,
                    $.identifier,
                    repeat(
                        seq(
                            $.comma_symbol,
                            $.identifier
                        )
                    )
                    ,
                    $.rcb_symbol,
                    $.from_keyword,
                    $.string_literal
                )
            ),
            $.terminal_symbol
        ),

        return_statement: $ => seq(
            $.return_keyword,
            field('expression', $._expression),
            $.terminal_symbol
        ),

        type_qualified_name: $ => seq(
            field('base', $.identifier),
            $.expand_operator,
            field('name', $.identifier),
            $.terminal_symbol,
        ),

        binary_expression: $ => seq(
            field('left', choice($._expression, $.identifier)),
            $.binary_operator,
            field('right', choice($._expression, $.identifier)),
            $.terminal_symbol
        ),

        field_access_expression: $ => prec.left(seq(
            field('object', $.identifier),
            $.attribute_access_operator,
            field('field', $.identifier)
        )),

        bool_literal: $ => choice(
            'true',
            'false',
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

        _reserved_identifier: $ => choice(
            $.const_keyword,
            $.use_keyword,
            $.from_keyword,
            $.context_keyword,
            $.function_keyword,
            $.return_keyword,
        ),

        _identifier_token: $ => token(seq(optional('@'), /[aA-zZ_]+/)),

        qualified_name: $ => prec(PRECEDENCE.QUALIFIED_NAME, seq(
            field(
                'name', 
                choice($._identifier_token, '$')
            ),
            repeat1(
                seq(
                    $.attribute_access_operator,
                    field('name', $.identifier)
                )
            ),
            $.terminal_symbol,
        )),

        string_literal: $ => seq(
            '"',
            $._string_literal_content,
            '"'
        ),

        _string_literal_content: $ => token.immediate(prec(1, /[^"\\\n]+/)),

        identifier: $ => choice(
            $.qualified_name,
            $._identifier_token,
            '$',
        ),

        number: $ => /\d+/,
    }
});
