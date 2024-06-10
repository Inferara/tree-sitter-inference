module.exports = grammar({
    name: 'inference',

    rules: {
        source_file: $ => repeat(
            choice(
                $._definition,
                $._statement,
                $.context_assign_expression,
            ),
        ),

        word: $ => $.identifier,

        _definition: $ => choice(
            $.const_definition,
            $.context_definition,
        ),

        _statement: $ => choice(
            $.use_statement
        ),

        _type: $ => choice(
            'nat',
        ),

        _expression: $ => choice(
            $.assign_expression,
            $.type_member_access_expression,
            $.member_access_expression,
            $.context_access_expression,
        ),

        const_definition: $ => seq(
            $.const_keyword,
            field('name', $.identifier),
            $.semicolon_symbol,
            field('type', $._type),
            $.equals_symbol,
            field('value', $.number),
            $.terminal_symbol
        ),

        context_definition: $ => seq(
            $.context_keyword,
            field('name', $.identifier),
            $.lcb_symbol,
            repeat(
                choice(
                    $.const_definition
                )
            ),
            $.rcb_symbol
        ),

        use_statement: $ => seq(
            $.use_keyword,
            choice(
                seq(
                    $.identifier,
                    repeat1(
                        seq(
                            $.expand_symbol,
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

        type_member_access_expression: $ => seq(
            field('name', $.identifier),
            repeat1(
                seq(
                    $.expand_symbol,
                    field('name', $.identifier)
                )
            ),
            $.terminal_symbol,
        ),

        context_access_expression: $ => seq(
            $.context_access_symbol,
            $.attribute_access_symbol,
        ),

        context_assign_expression: $ => seq(
            $.context_access_expression,
            $.assign_expression,
        ),

        member_access_expression: $ => seq(
            field('name', $.identifier),
            repeat1(
                seq(
                    $.attribute_access_symbol,
                    field('name', $.identifier)
                )
            ),
            $.terminal_symbol,
        ),

        assign_expression: $ => seq(
            field('name', $.identifier),
            $.equals_symbol,
            field('value', $.identifier),
            $.terminal_symbol
        ),

        const_keyword: $ => 'const',
        use_keyword: $ => 'use',
        from_keyword: $ => 'from',
        context_keyword: $ => 'context',

        comma_symbol: $ => ',',
        semicolon_symbol: $ => ':',
        expand_symbol: $ => '::',
        equals_symbol: $ => '=',
        terminal_symbol: $ => ';',
        context_access_symbol: $ => '$',
        attribute_access_symbol: $ => '.',

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
        ),

        _identifier_token: $ => /[a-zA-z_]+/,

        string_literal: $ => seq(
            '"',
            $._string_literal_content,
            '"'
        ),

        _string_literal_content: $ => token.immediate(prec(1, /[^"\\\n]+/)),

        identifier: $ => choice(
            $._identifier_token,
            $._reserved_identifier,
            $.context_access_symbol,
        ),

        number: $ => /\d+/,
    }
});
