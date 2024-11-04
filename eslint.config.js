module.exports = [
    {
        rules: {
            "arrow-parens": "off",
            "camel-case": "off",
            "indent": [
                "error",
                2,
                {
                    "SwitchCase": 1
                }
            ],
            "max-len": [
                "error",
                {
                    "code": 160,
                    "ignoreComments": true,
                    "ignoreUrls": true,
                    "ignoreStrings": true
                }
            ],
            "spaced-comment": [
                "warn",
                "always",
                {
                    "line": {
                        "markers": [
                            "/"
                        ]
                    }
                }
            ]
        }
    }
];