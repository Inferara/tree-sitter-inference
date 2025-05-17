;; comments
(comment) @comment

;; punctuation
[  ";" "," "{" "}" "(" ")" "[" "]" ] @punctuation

;; operators
[ "=" "->" "::" "+" "-" "*" "**" "%" "==" "!=" "<" ">" "<=" ">=" "&&" "||" "&" "|" "^" "<<" ">>" ] @operator
(">") @operator
("<=") @operator
(">=") @operator
("&&") @operator
("||") @operator
("&") @operator
("|") @operator
("^") @operator
("<<") @operator
(">>") @operator

;; keywords
(function_keyword) @keyword
(forall_keyword) @keyword
("exists") @keyword
("assume") @keyword
("unique") @keyword
("loop") @keyword
("if") @keyword
("else") @keyword
("break") @keyword
("return") @keyword
("let") @keyword
("const") @keyword
("type") @keyword
("enum") @keyword
("struct") @keyword
("use") @keyword
("spec") @keyword
("external") @keyword

;; boolean literals
(bool_literal) @boolean

;; types
(type_i8) @type
(type_i16) @type
(type_i32) @type
(type_i64) @type
(type_u8) @type
(type_u16) @type
(type_u32) @type
(type_u64) @type
(type_bool) @type
(type_unit) @type

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
  name: (identifier) @type.definition)
