#!/bin/bash

if [ "$#" -ne 1 ]; then
    usage
fi

case "$1" in
    b)
        tree-sitter generate
        ;;
    bt)
        tree-sitter test
        ;;
    t)
        tree-sitter test
        ;;
    te)
        tree-sitter parse ./example.inf
        ;;
    *)
        tree-sitter generate
        ;;
esac
