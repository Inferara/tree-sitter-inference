;; Comments
(comment) @comment

;; Punctuation symbols
[ ";" ":" "," "{" "}" "(" ")" "[" "]" "<" ">" ] @punctuation

[ "struct" "enum" "const" "spec" "return" "self" "loop" "let" "assume" "exists" "unique" "if" "else" "break" "use" "from" "assert" "type" "external" ] @keyword

;; Operators (node types from grammar.js)
(assign_operator) @operator
(rightarrow_operator) @operator
(expand_operator) @operator
(attribute_access_operator) @operator
(add_operator) @operator
(sub_operator) @operator
(mul_operator) @operator
(pow_operator) @operator
(mod_operator) @operator
(equals_operator) @operator
(not_equals_operator) @operator
(less_operator) @operator
(greater_operator) @operator
(less_equal_operator) @operator
(greater_equal_operator) @operator
(and_operator) @operator
(or_operator) @operator
(bit_and_operator) @operator
(bit_or_operator) @operator
(bit_xor_operator) @operator
(shift_left_operator) @operator
(shift_right_operator) @operator
(unary_not) @operator

;; Keywords (token nodes)

((function_keyword) @keyword)
((forall_keyword) @keyword)
((mut_keyword) @keyword)

;; Boolean literals
(bool_literal) @boolean

;; Types
(type_i8) @type (type_i16) @type (type_i32) @type (type_i64) @type
(type_u8) @type (type_u16) @type (type_u32) @type (type_u64) @type
(type_bool) @type (type_unit) @type

;; Literals
(string_literal) @string
(number_literal) @number
(unit_literal) @constant
(uzumaki_keyword) @constant

;; Identifiers
(identifier) @identifier

;; Name definitions
(variable_definition_statement
  name: (identifier) @variable)
(constant_definition
  name: (identifier) @constant)
(function_definition
  name: (identifier) @function)
(external_function_definition
  name: (identifier) @function)
(type_definition_statement
  name: (identifier) @type.definition)
(enum_definition
  name: (identifier) @type.definition)
(struct_definition
  name: (identifier) @type.definition)
(member_access_expression
  expression: ( (identifier) @type.definition)
)
(function_call_expression
  function: ( (identifier) @function)
)
(qualified_name
  qualifier: ( (identifier) @type.definition)
  name: (identifier) @type.definition)
