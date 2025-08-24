;; Punctuation

[ ";" "," ] @punctuation.delimiter
[ "(" ")" "{" "}" "[" "]" ] @punctuation.bracket
"->" @punctuation.special

;; Keywords
"const" @keyword.modifier

(forall_block
  ("forall" @keyword.modifier))

(assume_block
  ("assume" @keyword.modifier) )

(unique_block
  ("unique" @keyword.modifier) )

(exists_block
  ("exists" @keyword.modifier))

"spec" @keyword.type
"struct" @keyword.type
"enum" @keyword.type
"return" @keyword.return
"fn" @keyword.function
[ "use" "external" ] @keyword.import
[ "if" "else" ] @keyword.conditional
"let" @keyword
"type" @keyword
;; Types

(type_i8) @type.builtin
(type_i16) @type.builtin
(type_i32) @type.builtin
(type_i64) @type.builtin
(type_u8) @type.builtin
(type_u16) @type.builtin
(type_u32) @type.builtin
(type_u64) @type.builtin
(type_bool) @type.builtin
(type_unit) @type.builtin
(type_array) @type.builtin
(type_fn) @type.builtin

;; Literals
(number_literal) @number
(bool_literal) @boolean
(unit_literal) @number.float

;; Definitions
(constant_definition
  name: (identifier) @constant)

(enum_definition
  name: (identifier) @type.definition
  variant: (identifier) @variable.member)

(function_definition
  name: (identifier) @function)

(struct_definition
  name: (identifier) @type.definition
  (struct_field
    name: (identifier) @variable.member
    type: (identifier) @type))

(spec_definition
  name: (identifier) @type.definition)

;; Expressions
(function_call_expression
  function: (identifier) @function.call)

