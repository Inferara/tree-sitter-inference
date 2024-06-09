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
    *)
        usage
        ;;
esac
