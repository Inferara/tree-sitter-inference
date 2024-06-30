# tree-sitter-inference

[![CI][ci]](https://github.com/Inferara/tree-sitter-inference/actions/workflows/ci.yml)
[![crates][crates]](https://crates.io/crates/tree-sitter-inference)

Inference grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter) based on Inference Language spec.

## Status

- [ ] Discord

## Development

For the simplifying development and testing process the number of `npm` scripts is provided.

It can be used with the following options:

- `b` build the grammar
- `t` test the grammar with the test files in `test/corpus`
- `bt` build and test the grammar
- `te` run parse with the latest grammar build on the `example.inf` file

## References

- [Inference Language spec](https://github.com/Inferara/inference-language-spec)

[ci]: https://img.shields.io/github/actions/workflow/status/Inferara/tree-sitter-inference/ci.yml?logo=github&label=CI
[crates]: https://img.shields.io/crates/v/tree-sitter-inference?logo=rust
