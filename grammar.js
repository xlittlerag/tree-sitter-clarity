const GLOBALS = [
  "block-height",
  "burn-block-height",
  "tx-sender",
  "contract-caller",
  "is-in-regtest",
  "stx-liquid-supply",
];

const NUMBER = /\d+/;

module.exports = grammar({
  name: "clarity",

  // Extras is an array of tokens that is allowed anywhere in the document.
  extras: ($) => [
    // Allow comments to be placed anywhere in the file
    $.comment,
    // Allow characters such as whitespaces to be placed anywhere in the file
    /[\s\uFEFF\u2060\u200B\u00A0]/,
  ],

  // The word token allows tree-sitter to appropriately handle scenario's where an identifier includes a keyword.
  // Documentation: https://tree-sitter.github.io/tree-sitter/creating-parsers#keywords
  word: ($) => $.identifier,

  rules: {
    //  -- [ Contract ] --
    source: ($) => seq(repeat($._declaration)),

    _declaration: ($) =>
      choice(
        $.trait_definition,
        $.trait_implementation,
        $.trait_usage,
        $.token_definition,
        $.constant_definition,
        $.variable_definition,
        $.mapping_definition,
        $.function_definition,
        $.common_statement,
        $.let_statement
      ),

    trait_definition: ($) =>
      enclosed(
        seq(
          "define-trait",
          $.identifier,
          enclosed(repeat($.function_signature_for_trait))
        )
      ),

    trait_implementation: ($) =>
      enclosed(seq("impl-trait", $.contract_principal_lit, ".", $.identifier)),

    trait_usage: ($) =>
      enclosed(
        seq(
          "use-trait",
          field("trait_alias", $.identifier),
          $.contract_principal_lit,
          ".",
          field("trait_name", $.identifier)
        )
      ),

    token_definition: $ =>
      choice($.fungible_token_definition, $.non_fungible_token_definition),

    fungible_token_definition: ($) =>
      enclosed(seq("define-fungible-token", $.identifier)),

    non_fungible_token_definition: ($) =>
      enclosed(seq("define-non-fungible-token", $.identifier, $.type_name)),

    constant_definition: ($) =>
      enclosed(seq("define-constant", $.identifier, $._parameter)),

    constant: (_) => /[A-Z_][A-Z1-9_]*/, // TODO(): Can we make a rule to identify lowercase constants?

    variable_definition: ($) =>
      enclosed(seq("define-data-var", $.identifier, $.type_name, $._parameter)),

    mapping_definition: ($) =>
      prec(
        4,
        enclosed(
          seq(
            "define-map",
            $.identifier,
            field("key_type", choice($.type_name, $.tuple_type)),
            field("value_type", choice($.type_name, $.tuple_type))
          )
        )
      ),

    function_definition: ($) =>
      enclosed(
        seq(
          choice("define-read-only", "define-private", "define-public"),
          $.function_signature,
          choice($.common_statement, $.let_statement)
        )
      ),

    common_statement: ($) =>
      enclosed(
        seq(
          field(
            "function_name",
            choice($.identifier, $.arithmetic_function, $.boolean_function)
          ),
          optional(repeat($._parameter))
        )
      ),

    let_statement: ($) =>
      enclosed(
        seq(
          "let",
          enclosed(repeat($.let_variable_definition)),
          repeat($.common_statement),
          $._parameter
        )
      ),

    let_variable_definition: ($) => enclosed(seq($.identifier, $._parameter)),

    function_signature: ($) =>
      enclosed(seq($.identifier, optional(repeat($.function_parameter)))),

    function_parameter: ($) => enclosed(seq($.identifier, $._parameter_type)),

    function_signature_for_trait: ($) =>
      enclosed(
        seq(
          $.identifier,
          enclosed(optional(repeat($._parameter_type))),
          $.type_name
        )
      ),

    _parameter_type: ($) => choice($.type_name, $.trait_type),

    trait_type: ($) => seq("<", $.identifier, ">"),

    type_name: ($) =>
      choice(
        "int",
        "uint",
        "bool",
        "principal",
        $.buffer_type,
        $.ascii_string_type,
        $.utf8_string_type,
        $.list_type,
        $.optional_type,
        $.tuple_type,
        $.tuple_type_for_trait,
        $.response_type
      ),

    buffer_type: (_) => enclosed(seq("buff", NUMBER)),
    ascii_string_type: (_) => enclosed(seq("string-ascii", NUMBER)),
    utf8_string_type: (_) => enclosed(seq("string-utf8", NUMBER)),
    list_type: ($) => enclosed(seq("list", NUMBER, $.type_name)),

    optional_type: ($) => enclosed(seq("optional", $.type_name)),
    tuple_type_for_trait: ($) =>
      enclosed(
        seq(
          "tuple",
          repeat(
            enclosed(
              seq(field("key", $.identifier), field("value_type", $.type_name))
            )
          )
        )
      ),

    tuple_type: ($) =>
      seq(
        "{",
        optional(repeat(seq($._tuple_type_pair, ","))),
        seq($._tuple_type_pair, optional(",")),
        "}"
      ),

    _tuple_type_pair: ($) =>
      seq(field("key", $.identifier), ":", field("value_type", $.type_name)),

    response_type: ($) => enclosed(seq("response", $.type_name, "uint")),

    _parameter: ($) =>
      choice(
        $._literal,
        $.global,
        $.common_statement,
        $.let_statement,
        $.constant,
        $.identifier
      ),

    _literal: ($) =>
      choice(
        $.int_lit,
        $.uint_lit,
        $.bool_lit,
        $.standard_principal_lit,
        $.contract_principal_lit,
        $.buffer_lit,
        $.ascii_string_lit,
        $.utf8_string_lit,
        $.list_lit,
        $.tuple_lit,
        $.none_lit,
        $.some_lit,
        $.response_lit
      ),

    int_lit: (_) => seq(optional("-"), NUMBER),
    uint_lit: (_) => token(/u\d+/),
    bool_lit: (_) => choice("true", "false"),

    standard_principal_lit: (_) => seq("'", /[A-Z0-9]{41}/),
    contract_principal_lit: ($) =>
      prec(4, seq(optional($.standard_principal_lit), ".", $.identifier)),

    buffer_lit: (_) => seq("0x", /[a-fA-F0-9]+/),

    ascii_string_lit: (_) => seq('"', optional(/[^"\\\n]+|\\\r?\n/), '"'),
    utf8_string_lit: (_) => token(seq("u", '"', optional(/[^"\n]+|\\\r?\n/), '"')),

    list_lit: ($) =>
      enclosed(seq($.list_lit_token, optional(repeat($._parameter)))),
    list_lit_token: (_) => "list",

    some_lit: ($) => enclosed(seq("some", $._parameter)),
    none_lit: (_) => "none",

    tuple_lit: ($) =>
      seq(
        "{",
        optional(repeat(seq($._tuple_lit_pair, ","))),
        $._tuple_lit_pair,
        optional(','),
        "}"
      ),

    _tuple_lit_pair: ($) =>
      seq(field("key", $.identifier), ":", field("value", $._parameter)),

    response_lit: ($) => enclosed(seq(choice("ok", "err"), $._parameter)),

    global: (_) => choice(...GLOBALS),

    arithmetic_function: (_) => choice("+", "-", "/", "*"),
    boolean_function: (_) => choice("<", "<=", ">", ">="),

    identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_?!\-]*/,

    comment: (_) => token(seq(";;", /(\\(.|\r?\n)|[^\\\n])*/)),
  },
});

function enclosed(rule) {
  return seq("(", rule, ")");
}
