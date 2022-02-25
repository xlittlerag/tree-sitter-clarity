(comment) @comment

; Literals
[(ascii_string_lit) (utf8_string_lit)] @string
[
 (int_lit)
 (uint_lit)
 (buffer_lit)
 (standard_principal_lit)
 (contract_principal_lit)
] @number
(bool_lit) @constant.builtin

(constant) @constant

; Type
[
  (type_name)
  (trait_type)
] @type
(trait_usage trait_alias: (identifier) @type)


; Functions and parameters

(function_signature (identifier) @function)
(function_signature_for_trait (identifier) @function)
(common_statement
  function_name:  [(identifier) (arithmetic_function) (boolean_function)] @function)
[
 "let"
] @function


; Function parameters
(function_parameter) @variable.parameter

(tuple_lit key: (identifier) @property)
(tuple_lit ((identifier) @property . ":"))
(tuple_type key: (identifier) @property)
(tuple_type ((identifier) @property . ":"))
(tuple_type_for_signature key: (identifier) @property)


; Keywords
[
 "impl-trait"
 "use-trait"
 "define-trait"
 "define-read-only"
 "define-private"
 "define-public"
 "define-data-var"
 "define-constant"
 "define-map"
 "block-height"
 "burn-block-height"
 "contract-caller"
 "is-in-regtest"
 "stx-liquid-supply"
 "tx-sender"
 (none_lit)
 "some"
 "ok"
 "err"
 (list_lit_token)
] @keyword

; Punctuation

[
  "("
  ")"
  "{"
  "}"
]  @punctuation.bracket


[
  ","
] @punctuation.delimiter


(identifier) @variable
