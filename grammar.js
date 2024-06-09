module.exports = grammar({
    name: 'inference',

    rules: {
        source_file: $ => repeat($._definition),

        word : $ => $.identifier,

        _definition: $ => choice(
            $.const_definition,
        ),

        _type : $ => choice(
            'nat',
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

        const_keyword : $ => 'const',

        semicolon_symbol : $ => ':',
        equals_symbol: $ => '=',
        terminal_symbol : $ => ';',

        identifier: $ => choice(
            $._identifier_token,
            $._reserved_identifier
        ),


        _reserved_identifier: $ => choice(
            'const',
        ),

        _identifier_token: $ => /[a-zA-z_]+/,

        number: $ => /\d+/,
    }
});
