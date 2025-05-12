;; comments
(comment) @comment

;; punctuation
[  ";" "," "{" "}" "(" ")" "[" "]" ] @punctuation

;; operators
[  "=" "->" "::" "+" "-" "*" "**" "%"
   "==" "!=" "<" ">" "<=" ">="
   "&&" "||" "&" "|" "^" "<<" ">>"
] @operator

;; keywords
[  "fn" "forall" "exists" "assume" "unique"
   "loop" "if" "else" "break" "return"
   "let" "const" "type" "enum" "struct" "use" "spec" "external"
] @keyword

;; boolean literals
[  "true" "false" ] @boolean

;; types
[  type_i8 type_i16 type_i32 type_i64
   type_u8 type_u16 type_u32 type_u64
   type_bool type_unit
] @type

;; literals
(string_literal)        @string
(number_literal)        @number
(unit_literal)          @constant

;; identifiers
(identifier) @identifier

;; define-captures for names
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
  struct_name: (identifier) @type.definition)
