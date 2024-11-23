const GLOBALS = [
  "block-height",
  "burn-block-height",
  "chain_id",
  "contract-caller",
  "is-in_mainnet",
  "is-in-regtest",
  "stx-liquid-supply",
  "tenure-height",
  "tx-sender",
  "tx-sponsor?",
  // Block info
  "block-reward",
  "burnchain-header-hash",
  "id-header-hash",
  "header-hash",
  "miner-address",
  "miner-spend-total",
  "miner-spend-winner",
  "time",
  "vrf-seed",
  // Burn block info
  "header-hash",
  "pox-addrs",
];

// Non-relevant functions.
const OTHER_NATIVE_FUNCTIONS = [
  "+", "-", "*", "/", "mod", "pow", // Math
  "<", "<=", ">", ">=", "and", "or", "xor", // Boolean
  "append",
  "as-contract",
  "as-max-len?",
  "asserts!",
  "at-block",
  "begin",
  "bit-and", "bit-not", "bit-or", "bit-shift-left", "bit-shift-right", "bit-xor",
  "buff-to-int-be", "buff-to-int-le", "buff-to-uint-be", "buff-to-uint-le",
  "concat",
  "contract-call?",
  "contract-of",
  "default-to",
  "element-at", "element-at?",
  "filter",
  "fold",
  "from-consensus-buff?",
  "ft-burn?", "ft-mint?", "ft-transfer?", "ft-get-supply", "ft-get-balance",
  "get",
  "get-block-info?", "get-burn-block-info?",
  "hash160",
  "if",
  "index-of", "index-of?",
  "int-to-ascii", "int-to-utf8",
  "is-eq", "is-err", "is-none", "is-ok", "is-some", "is-standard",
  "keccak256",
  "len",
  "log2",
  "map",
  "map-delete", "map-get?", "map-insert", "map-set",
  "match",
  "merge",
  "nft-burn?", "nft-mint?", "nft-get-owner?", "nft-transfer?",
  "not",
  "principal-construct?", "principal-destruct?", "principal-of?",
  "print",
  "replace-at?",
  "secp256k1-recover?", "secp256k1-verify",
  "sha256", "sha512", "sha512/256",
  "slice?",
  "sqrti",
  "string-to-int?", "string-to-uint?",
  "stx-account", "stx-burn?", "stx-get-balance", "stx-transfer-memo?", "stx-transfer?",
  "to-consensus-buff?", "to-int", "to-uint",
  "try!", "unwrap!", "unwrap-err!", "unwrap-err-panic", "unwrap-panic",
  "var-get", "var-set",
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
    source: ($) => seq(repeat($._expression)),

    _expression: ($) =>
      choice(
        $.trait_definition,
        $.trait_implementation,
        $.trait_usage,
        $.token_definition,
        $.constant_definition,
        $.variable_definition,
        $.mapping_definition,
        $.function_definition,
        $._function_call,
      ),

    _function_call: ($) =>
      choice(
        $._native_function_call,
        $.contract_function_call,
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
      enclosed(
        seq(
          "impl-trait",
          $.contract_principal_lit,
          ".",
          field("trait_name", $.identifier)
        )
      ),

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
      enclosed(seq("define-non-fungible-token", $.identifier, $.native_type)),

    constant_definition: ($) =>
      enclosed(seq("define-constant", $.identifier, $._parameter)),

    variable_definition: ($) =>
      enclosed(seq("define-data-var", $.identifier, $.native_type, $._parameter)),

    mapping_definition: ($) =>
      prec(
        4,
        enclosed(
          seq(
            "define-map",
            $.identifier,
            field("key_type", choice($.native_type, $.tuple_type)),
            field("value_type", choice($.native_type, $.tuple_type))
          )
        )
      ),


    function_definition: ($) => choice($.private_function, $.read_only_function, $.public_function),

    private_function: ($) => enclosed(
      seq("define-private",
        $.function_signature,
        $._function_call
      )
    ),

    read_only_function: ($) => enclosed(
      seq("define-read-only",
        $.function_signature,
        $._function_call
      )
    ),

    public_function: ($) => enclosed(
      seq("define-public",
        $.function_signature,
        $._function_call
      )
    ),

    _native_function_call: ($) =>
      choice(
        $.let_expression,
        $.basic_native_form
      ),

    basic_native_form: ($) =>
      enclosed(
        seq(
          field(
            "operator",
            $.native_identifier,
          ),
          optional(repeat($._parameter))
        )
      ),

    contract_function_call: ($) =>
      enclosed(
        seq(
          field(
            "operator",
            $.identifier,
          ),
          optional(repeat($._parameter))
        )
      ),

    let_expression: ($) =>
      enclosed(
        seq(
          field("operator", "let"),
          enclosed(repeat($.local_binding)),
          repeat($._function_call),
          $._parameter
        )
      ),

    local_binding: ($) => enclosed(seq($.identifier, $._parameter)),

    function_signature: ($) =>
      enclosed(seq($.identifier, optional(repeat($.function_parameter)))),

    function_parameter: ($) => enclosed(seq($.identifier, $.parameter_type)),

    function_signature_for_trait: ($) =>
      enclosed(
        seq(
          $.identifier,
          enclosed(optional(repeat($.parameter_type))),
          $.native_type
        )
      ),

    parameter_type: ($) => choice($.native_type, $.trait_type),

    trait_type: ($) => seq("<", $.identifier, ">"),

    native_type: ($) =>
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
    list_type: ($) => enclosed(seq("list", NUMBER, $.parameter_type)),

    optional_type: ($) => enclosed(seq("optional", $.native_type)),
    tuple_type_for_trait: ($) =>
      enclosed(
        seq(
          "tuple",
          repeat(
            enclosed(
              seq(field("key", $.identifier), field("value_type", $.native_type))
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
      seq(field("key", $.identifier), ":", field("value_type", $.native_type)),

    response_type: ($) => enclosed(seq("response", $.native_type, "uint")),

    _parameter: ($) =>
      choice(
        $._literal,
        $.global,
        $._function_call,
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

    native_identifier: (_) => choice(...OTHER_NATIVE_FUNCTIONS),
    global: (_) => choice(...GLOBALS),

    identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_?!\-]*/,

    comment: (_) => token(seq(";;", /(\\(.|\r?\n)|[^\\\n])*/)),
  },
});

function enclosed(rule) {
  return seq("(", rule, ")");
}
