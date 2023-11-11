#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 201
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 16

enum {
  sym_identifier = 1,
  anon_sym_LPAREN = 2,
  anon_sym_define_DASHtrait = 3,
  anon_sym_RPAREN = 4,
  anon_sym_impl_DASHtrait = 5,
  anon_sym_DOT = 6,
  anon_sym_use_DASHtrait = 7,
  anon_sym_define_DASHfungible_DASHtoken = 8,
  anon_sym_define_DASHnon_DASHfungible_DASHtoken = 9,
  anon_sym_define_DASHconstant = 10,
  sym_constant = 11,
  anon_sym_define_DASHdata_DASHvar = 12,
  anon_sym_define_DASHmap = 13,
  anon_sym_define_DASHread_DASHonly = 14,
  anon_sym_define_DASHprivate = 15,
  anon_sym_define_DASHpublic = 16,
  anon_sym_let = 17,
  anon_sym_LT = 18,
  anon_sym_GT = 19,
  anon_sym_int = 20,
  anon_sym_uint = 21,
  anon_sym_bool = 22,
  anon_sym_principal = 23,
  anon_sym_buff = 24,
  aux_sym_buffer_type_token1 = 25,
  anon_sym_string_DASHascii = 26,
  anon_sym_string_DASHutf8 = 27,
  anon_sym_list = 28,
  anon_sym_optional = 29,
  anon_sym_tuple = 30,
  anon_sym_LBRACE = 31,
  anon_sym_COMMA = 32,
  anon_sym_RBRACE = 33,
  anon_sym_COLON = 34,
  anon_sym_response = 35,
  anon_sym_DASH = 36,
  sym_uint_lit = 37,
  anon_sym_true = 38,
  anon_sym_false = 39,
  anon_sym_SQUOTE = 40,
  aux_sym_standard_principal_lit_token1 = 41,
  anon_sym_0x = 42,
  aux_sym_buffer_lit_token1 = 43,
  anon_sym_DQUOTE = 44,
  aux_sym_ascii_string_lit_token1 = 45,
  sym_utf8_string_lit = 46,
  anon_sym_some = 47,
  sym_none_lit = 48,
  anon_sym_ok = 49,
  anon_sym_err = 50,
  anon_sym_block_DASHheight = 51,
  anon_sym_burn_DASHblock_DASHheight = 52,
  anon_sym_tx_DASHsender = 53,
  anon_sym_contract_DASHcaller = 54,
  anon_sym_is_DASHin_DASHregtest = 55,
  anon_sym_stx_DASHliquid_DASHsupply = 56,
  anon_sym_PLUS = 57,
  anon_sym_SLASH = 58,
  anon_sym_STAR = 59,
  anon_sym_LT_EQ = 60,
  anon_sym_GT_EQ = 61,
  sym_comment = 62,
  sym_source = 63,
  sym__declaration = 64,
  sym_trait_definition = 65,
  sym_trait_implementation = 66,
  sym_trait_usage = 67,
  sym_token_definition = 68,
  sym_fungible_token_definition = 69,
  sym_non_fungible_token_definition = 70,
  sym_constant_definition = 71,
  sym_variable_definition = 72,
  sym_mapping_definition = 73,
  sym_function_definition = 74,
  sym_common_statement = 75,
  sym_let_statement = 76,
  sym_let_variable_definition = 77,
  sym_function_signature = 78,
  sym_function_parameter = 79,
  sym_function_signature_for_trait = 80,
  sym__parameter_type = 81,
  sym_trait_type = 82,
  sym_type_name = 83,
  sym_buffer_type = 84,
  sym_ascii_string_type = 85,
  sym_utf8_string_type = 86,
  sym_list_type = 87,
  sym_optional_type = 88,
  sym_tuple_type_for_trait = 89,
  sym_tuple_type = 90,
  sym__tuple_type_pair = 91,
  sym_response_type = 92,
  sym__parameter = 93,
  sym__literal = 94,
  sym_int_lit = 95,
  sym_bool_lit = 96,
  sym_standard_principal_lit = 97,
  sym_contract_principal_lit = 98,
  sym_buffer_lit = 99,
  sym_ascii_string_lit = 100,
  sym_list_lit = 101,
  sym_list_lit_token = 102,
  sym_some_lit = 103,
  sym_tuple_lit = 104,
  sym__tuple_lit_pair = 105,
  sym_response_lit = 106,
  sym_global = 107,
  sym_arithmetic_function = 108,
  sym_boolean_function = 109,
  aux_sym_source_repeat1 = 110,
  aux_sym_trait_definition_repeat1 = 111,
  aux_sym_common_statement_repeat1 = 112,
  aux_sym_let_statement_repeat1 = 113,
  aux_sym_let_statement_repeat2 = 114,
  aux_sym_function_signature_repeat1 = 115,
  aux_sym_function_signature_for_trait_repeat1 = 116,
  aux_sym_tuple_type_for_trait_repeat1 = 117,
  aux_sym_tuple_type_repeat1 = 118,
  aux_sym_tuple_lit_repeat1 = 119,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_define_DASHtrait] = "define-trait",
  [anon_sym_RPAREN] = ")",
  [anon_sym_impl_DASHtrait] = "impl-trait",
  [anon_sym_DOT] = ".",
  [anon_sym_use_DASHtrait] = "use-trait",
  [anon_sym_define_DASHfungible_DASHtoken] = "define-fungible-token",
  [anon_sym_define_DASHnon_DASHfungible_DASHtoken] = "define-non-fungible-token",
  [anon_sym_define_DASHconstant] = "define-constant",
  [sym_constant] = "constant",
  [anon_sym_define_DASHdata_DASHvar] = "define-data-var",
  [anon_sym_define_DASHmap] = "define-map",
  [anon_sym_define_DASHread_DASHonly] = "define-read-only",
  [anon_sym_define_DASHprivate] = "define-private",
  [anon_sym_define_DASHpublic] = "define-public",
  [anon_sym_let] = "let",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_int] = "int",
  [anon_sym_uint] = "uint",
  [anon_sym_bool] = "bool",
  [anon_sym_principal] = "principal",
  [anon_sym_buff] = "buff",
  [aux_sym_buffer_type_token1] = "buffer_type_token1",
  [anon_sym_string_DASHascii] = "string-ascii",
  [anon_sym_string_DASHutf8] = "string-utf8",
  [anon_sym_list] = "list",
  [anon_sym_optional] = "optional",
  [anon_sym_tuple] = "tuple",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_response] = "response",
  [anon_sym_DASH] = "-",
  [sym_uint_lit] = "uint_lit",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_standard_principal_lit_token1] = "standard_principal_lit_token1",
  [anon_sym_0x] = "0x",
  [aux_sym_buffer_lit_token1] = "buffer_lit_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_ascii_string_lit_token1] = "ascii_string_lit_token1",
  [sym_utf8_string_lit] = "utf8_string_lit",
  [anon_sym_some] = "some",
  [sym_none_lit] = "none_lit",
  [anon_sym_ok] = "ok",
  [anon_sym_err] = "err",
  [anon_sym_block_DASHheight] = "block-height",
  [anon_sym_burn_DASHblock_DASHheight] = "burn-block-height",
  [anon_sym_tx_DASHsender] = "tx-sender",
  [anon_sym_contract_DASHcaller] = "contract-caller",
  [anon_sym_is_DASHin_DASHregtest] = "is-in-regtest",
  [anon_sym_stx_DASHliquid_DASHsupply] = "stx-liquid-supply",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym__declaration] = "_declaration",
  [sym_trait_definition] = "trait_definition",
  [sym_trait_implementation] = "trait_implementation",
  [sym_trait_usage] = "trait_usage",
  [sym_token_definition] = "token_definition",
  [sym_fungible_token_definition] = "fungible_token_definition",
  [sym_non_fungible_token_definition] = "non_fungible_token_definition",
  [sym_constant_definition] = "constant_definition",
  [sym_variable_definition] = "variable_definition",
  [sym_mapping_definition] = "mapping_definition",
  [sym_function_definition] = "function_definition",
  [sym_common_statement] = "common_statement",
  [sym_let_statement] = "let_statement",
  [sym_let_variable_definition] = "let_variable_definition",
  [sym_function_signature] = "function_signature",
  [sym_function_parameter] = "function_parameter",
  [sym_function_signature_for_trait] = "function_signature_for_trait",
  [sym__parameter_type] = "_parameter_type",
  [sym_trait_type] = "trait_type",
  [sym_type_name] = "type_name",
  [sym_buffer_type] = "buffer_type",
  [sym_ascii_string_type] = "ascii_string_type",
  [sym_utf8_string_type] = "utf8_string_type",
  [sym_list_type] = "list_type",
  [sym_optional_type] = "optional_type",
  [sym_tuple_type_for_trait] = "tuple_type_for_trait",
  [sym_tuple_type] = "tuple_type",
  [sym__tuple_type_pair] = "_tuple_type_pair",
  [sym_response_type] = "response_type",
  [sym__parameter] = "_parameter",
  [sym__literal] = "_literal",
  [sym_int_lit] = "int_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_standard_principal_lit] = "standard_principal_lit",
  [sym_contract_principal_lit] = "contract_principal_lit",
  [sym_buffer_lit] = "buffer_lit",
  [sym_ascii_string_lit] = "ascii_string_lit",
  [sym_list_lit] = "list_lit",
  [sym_list_lit_token] = "list_lit_token",
  [sym_some_lit] = "some_lit",
  [sym_tuple_lit] = "tuple_lit",
  [sym__tuple_lit_pair] = "_tuple_lit_pair",
  [sym_response_lit] = "response_lit",
  [sym_global] = "global",
  [sym_arithmetic_function] = "arithmetic_function",
  [sym_boolean_function] = "boolean_function",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_trait_definition_repeat1] = "trait_definition_repeat1",
  [aux_sym_common_statement_repeat1] = "common_statement_repeat1",
  [aux_sym_let_statement_repeat1] = "let_statement_repeat1",
  [aux_sym_let_statement_repeat2] = "let_statement_repeat2",
  [aux_sym_function_signature_repeat1] = "function_signature_repeat1",
  [aux_sym_function_signature_for_trait_repeat1] = "function_signature_for_trait_repeat1",
  [aux_sym_tuple_type_for_trait_repeat1] = "tuple_type_for_trait_repeat1",
  [aux_sym_tuple_type_repeat1] = "tuple_type_repeat1",
  [aux_sym_tuple_lit_repeat1] = "tuple_lit_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_define_DASHtrait] = anon_sym_define_DASHtrait,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_impl_DASHtrait] = anon_sym_impl_DASHtrait,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_use_DASHtrait] = anon_sym_use_DASHtrait,
  [anon_sym_define_DASHfungible_DASHtoken] = anon_sym_define_DASHfungible_DASHtoken,
  [anon_sym_define_DASHnon_DASHfungible_DASHtoken] = anon_sym_define_DASHnon_DASHfungible_DASHtoken,
  [anon_sym_define_DASHconstant] = anon_sym_define_DASHconstant,
  [sym_constant] = sym_constant,
  [anon_sym_define_DASHdata_DASHvar] = anon_sym_define_DASHdata_DASHvar,
  [anon_sym_define_DASHmap] = anon_sym_define_DASHmap,
  [anon_sym_define_DASHread_DASHonly] = anon_sym_define_DASHread_DASHonly,
  [anon_sym_define_DASHprivate] = anon_sym_define_DASHprivate,
  [anon_sym_define_DASHpublic] = anon_sym_define_DASHpublic,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_principal] = anon_sym_principal,
  [anon_sym_buff] = anon_sym_buff,
  [aux_sym_buffer_type_token1] = aux_sym_buffer_type_token1,
  [anon_sym_string_DASHascii] = anon_sym_string_DASHascii,
  [anon_sym_string_DASHutf8] = anon_sym_string_DASHutf8,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_response] = anon_sym_response,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_uint_lit] = sym_uint_lit,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_standard_principal_lit_token1] = aux_sym_standard_principal_lit_token1,
  [anon_sym_0x] = anon_sym_0x,
  [aux_sym_buffer_lit_token1] = aux_sym_buffer_lit_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_ascii_string_lit_token1] = aux_sym_ascii_string_lit_token1,
  [sym_utf8_string_lit] = sym_utf8_string_lit,
  [anon_sym_some] = anon_sym_some,
  [sym_none_lit] = sym_none_lit,
  [anon_sym_ok] = anon_sym_ok,
  [anon_sym_err] = anon_sym_err,
  [anon_sym_block_DASHheight] = anon_sym_block_DASHheight,
  [anon_sym_burn_DASHblock_DASHheight] = anon_sym_burn_DASHblock_DASHheight,
  [anon_sym_tx_DASHsender] = anon_sym_tx_DASHsender,
  [anon_sym_contract_DASHcaller] = anon_sym_contract_DASHcaller,
  [anon_sym_is_DASHin_DASHregtest] = anon_sym_is_DASHin_DASHregtest,
  [anon_sym_stx_DASHliquid_DASHsupply] = anon_sym_stx_DASHliquid_DASHsupply,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym__declaration] = sym__declaration,
  [sym_trait_definition] = sym_trait_definition,
  [sym_trait_implementation] = sym_trait_implementation,
  [sym_trait_usage] = sym_trait_usage,
  [sym_token_definition] = sym_token_definition,
  [sym_fungible_token_definition] = sym_fungible_token_definition,
  [sym_non_fungible_token_definition] = sym_non_fungible_token_definition,
  [sym_constant_definition] = sym_constant_definition,
  [sym_variable_definition] = sym_variable_definition,
  [sym_mapping_definition] = sym_mapping_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_common_statement] = sym_common_statement,
  [sym_let_statement] = sym_let_statement,
  [sym_let_variable_definition] = sym_let_variable_definition,
  [sym_function_signature] = sym_function_signature,
  [sym_function_parameter] = sym_function_parameter,
  [sym_function_signature_for_trait] = sym_function_signature_for_trait,
  [sym__parameter_type] = sym__parameter_type,
  [sym_trait_type] = sym_trait_type,
  [sym_type_name] = sym_type_name,
  [sym_buffer_type] = sym_buffer_type,
  [sym_ascii_string_type] = sym_ascii_string_type,
  [sym_utf8_string_type] = sym_utf8_string_type,
  [sym_list_type] = sym_list_type,
  [sym_optional_type] = sym_optional_type,
  [sym_tuple_type_for_trait] = sym_tuple_type_for_trait,
  [sym_tuple_type] = sym_tuple_type,
  [sym__tuple_type_pair] = sym__tuple_type_pair,
  [sym_response_type] = sym_response_type,
  [sym__parameter] = sym__parameter,
  [sym__literal] = sym__literal,
  [sym_int_lit] = sym_int_lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_standard_principal_lit] = sym_standard_principal_lit,
  [sym_contract_principal_lit] = sym_contract_principal_lit,
  [sym_buffer_lit] = sym_buffer_lit,
  [sym_ascii_string_lit] = sym_ascii_string_lit,
  [sym_list_lit] = sym_list_lit,
  [sym_list_lit_token] = sym_list_lit_token,
  [sym_some_lit] = sym_some_lit,
  [sym_tuple_lit] = sym_tuple_lit,
  [sym__tuple_lit_pair] = sym__tuple_lit_pair,
  [sym_response_lit] = sym_response_lit,
  [sym_global] = sym_global,
  [sym_arithmetic_function] = sym_arithmetic_function,
  [sym_boolean_function] = sym_boolean_function,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_trait_definition_repeat1] = aux_sym_trait_definition_repeat1,
  [aux_sym_common_statement_repeat1] = aux_sym_common_statement_repeat1,
  [aux_sym_let_statement_repeat1] = aux_sym_let_statement_repeat1,
  [aux_sym_let_statement_repeat2] = aux_sym_let_statement_repeat2,
  [aux_sym_function_signature_repeat1] = aux_sym_function_signature_repeat1,
  [aux_sym_function_signature_for_trait_repeat1] = aux_sym_function_signature_for_trait_repeat1,
  [aux_sym_tuple_type_for_trait_repeat1] = aux_sym_tuple_type_for_trait_repeat1,
  [aux_sym_tuple_type_repeat1] = aux_sym_tuple_type_repeat1,
  [aux_sym_tuple_lit_repeat1] = aux_sym_tuple_lit_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHtrait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_impl_DASHtrait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use_DASHtrait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHfungible_DASHtoken] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHnon_DASHfungible_DASHtoken] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHconstant] = {
    .visible = true,
    .named = false,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_define_DASHdata_DASHvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHmap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHread_DASHonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHprivate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHpublic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_principal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_buff] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_buffer_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_string_DASHascii] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string_DASHutf8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_response] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_uint_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_standard_principal_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_buffer_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ascii_string_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_utf8_string_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [sym_none_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ok] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_err] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block_DASHheight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_burn_DASHblock_DASHheight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tx_DASHsender] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contract_DASHcaller] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_DASHin_DASHregtest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stx_DASHliquid_DASHsupply] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_trait_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_implementation] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_usage] = {
    .visible = true,
    .named = true,
  },
  [sym_token_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_fungible_token_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_non_fungible_token_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_mapping_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_common_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_let_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_let_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_function_signature_for_trait] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter_type] = {
    .visible = false,
    .named = true,
  },
  [sym_trait_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_buffer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_ascii_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_utf8_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_list_type] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type_for_trait] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple_type_pair] = {
    .visible = false,
    .named = true,
  },
  [sym_response_type] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_int_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_standard_principal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_contract_principal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_buffer_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_ascii_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_list_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_list_lit_token] = {
    .visible = true,
    .named = true,
  },
  [sym_some_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_lit] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple_lit_pair] = {
    .visible = false,
    .named = true,
  },
  [sym_response_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic_function] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_function] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trait_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_common_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_statement_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_signature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_signature_for_trait_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_type_for_trait_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_function_name = 1,
  field_key = 2,
  field_key_type = 3,
  field_trait_alias = 4,
  field_trait_name = 5,
  field_value = 6,
  field_value_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function_name] = "function_name",
  [field_key] = "key",
  [field_key_type] = "key_type",
  [field_trait_alias] = "trait_alias",
  [field_trait_name] = "trait_name",
  [field_value] = "value",
  [field_value_type] = "value_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 4},
  [5] = {.index = 9, .length = 2},
  [6] = {.index = 11, .length = 2},
  [7] = {.index = 13, .length = 4},
  [8] = {.index = 17, .length = 2},
  [9] = {.index = 19, .length = 2},
  [10] = {.index = 21, .length = 4},
  [11] = {.index = 25, .length = 2},
  [12] = {.index = 27, .length = 2},
  [13] = {.index = 29, .length = 2},
  [14] = {.index = 31, .length = 4},
  [15] = {.index = 35, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function_name, 1},
  [1] =
    {field_key, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [3] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [5] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [9] =
    {field_key, 0, .inherited = true},
    {field_value_type, 0, .inherited = true},
  [11] =
    {field_key, 1, .inherited = true},
    {field_value_type, 1, .inherited = true},
  [13] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value_type, 0, .inherited = true},
    {field_value_type, 1, .inherited = true},
  [17] =
    {field_key_type, 3},
    {field_value_type, 4},
  [19] =
    {field_key, 0},
    {field_value, 2},
  [21] =
    {field_key, 1, .inherited = true},
    {field_key, 2, .inherited = true},
    {field_value, 1, .inherited = true},
    {field_value, 2, .inherited = true},
  [25] =
    {field_trait_alias, 2},
    {field_trait_name, 5},
  [27] =
    {field_key, 2, .inherited = true},
    {field_value_type, 2, .inherited = true},
  [29] =
    {field_key, 0},
    {field_value_type, 2},
  [31] =
    {field_key, 1, .inherited = true},
    {field_key, 2, .inherited = true},
    {field_value_type, 1, .inherited = true},
    {field_value_type, 2, .inherited = true},
  [35] =
    {field_key, 1},
    {field_value_type, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(83);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(74);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 10:
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(85);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(13);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(14);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(17);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(19);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(29);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(86);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_buffer_type_token1);
      if (lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_buffer_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_standard_principal_lit_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_buffer_lit_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_utf8_string_lit);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'k') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 's') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_constant);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_ok);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_uint_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_err);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(88);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_buff);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_none_lit);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'b') ADVANCE(104);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(108);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 113:
      if (lookahead == 'q') ADVANCE(126);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 131:
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 141:
      if (lookahead == 'g') ADVANCE(163);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 150:
      if (lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 151:
      if (lookahead == 'k') ADVANCE(171);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(179);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_principal);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 166:
      if (lookahead == 'f') ADVANCE(185);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_tx_DASHsender);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_use_DASHtrait);
      END_STATE();
    case 170:
      if (lookahead == 'h') ADVANCE(187);
      END_STATE();
    case 171:
      if (lookahead == '-') ADVANCE(188);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 175:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_define_DASHmap);
      END_STATE();
    case 177:
      if (lookahead == '-') ADVANCE(193);
      END_STATE();
    case 178:
      if (lookahead == 'v') ADVANCE(194);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_impl_DASHtrait);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 185:
      if (lookahead == '8') ADVANCE(200);
      END_STATE();
    case 186:
      if (lookahead == '-') ADVANCE(201);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 188:
      if (lookahead == 'h') ADVANCE(203);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 191:
      if (lookahead == '-') ADVANCE(206);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 193:
      if (lookahead == 'f') ADVANCE(208);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 196:
      if (lookahead == '-') ADVANCE(211);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_string_DASHutf8);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_block_DASHheight);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 206:
      if (lookahead == 'v') ADVANCE(219);
      END_STATE();
    case 207:
      if (lookahead == 'b') ADVANCE(220);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_define_DASHtrait);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_string_DASHascii);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_define_DASHpublic);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_is_DASHin_DASHregtest);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 227:
      if (lookahead == 'g') ADVANCE(236);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 232:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_define_DASHprivate);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(243);
      END_STATE();
    case 236:
      if (lookahead == 'h') ADVANCE(244);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_contract_DASHcaller);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_define_DASHconstant);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_define_DASHdata_DASHvar);
      END_STATE();
    case 240:
      if (lookahead == '-') ADVANCE(245);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 242:
      if (lookahead == 'y') ADVANCE(247);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 246:
      if (lookahead == 'b') ADVANCE(251);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_define_DASHread_DASHonly);
      END_STATE();
    case 248:
      if (lookahead == 'y') ADVANCE(252);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_burn_DASHblock_DASHheight);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_stx_DASHliquid_DASHsupply);
      END_STATE();
    case 253:
      if (lookahead == 'k') ADVANCE(255);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 256:
      if (lookahead == '-') ADVANCE(258);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_define_DASHfungible_DASHtoken);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 'k') ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_define_DASHnon_DASHfungible_DASHtoken);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 11},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 9},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_define_DASHtrait] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_impl_DASHtrait] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_use_DASHtrait] = ACTIONS(1),
    [anon_sym_define_DASHfungible_DASHtoken] = ACTIONS(1),
    [anon_sym_define_DASHnon_DASHfungible_DASHtoken] = ACTIONS(1),
    [anon_sym_define_DASHconstant] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
    [anon_sym_define_DASHdata_DASHvar] = ACTIONS(1),
    [anon_sym_define_DASHmap] = ACTIONS(1),
    [anon_sym_define_DASHread_DASHonly] = ACTIONS(1),
    [anon_sym_define_DASHprivate] = ACTIONS(1),
    [anon_sym_define_DASHpublic] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_principal] = ACTIONS(1),
    [anon_sym_buff] = ACTIONS(1),
    [aux_sym_buffer_type_token1] = ACTIONS(1),
    [anon_sym_string_DASHascii] = ACTIONS(1),
    [anon_sym_string_DASHutf8] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_response] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_uint_lit] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_utf8_string_lit] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
    [sym_none_lit] = ACTIONS(1),
    [anon_sym_ok] = ACTIONS(1),
    [anon_sym_err] = ACTIONS(1),
    [anon_sym_block_DASHheight] = ACTIONS(1),
    [anon_sym_burn_DASHblock_DASHheight] = ACTIONS(1),
    [anon_sym_tx_DASHsender] = ACTIONS(1),
    [anon_sym_contract_DASHcaller] = ACTIONS(1),
    [anon_sym_is_DASHin_DASHregtest] = ACTIONS(1),
    [anon_sym_stx_DASHliquid_DASHsupply] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(148),
    [sym__declaration] = STATE(65),
    [sym_trait_definition] = STATE(65),
    [sym_trait_implementation] = STATE(65),
    [sym_trait_usage] = STATE(65),
    [sym_token_definition] = STATE(65),
    [sym_fungible_token_definition] = STATE(125),
    [sym_non_fungible_token_definition] = STATE(125),
    [sym_constant_definition] = STATE(65),
    [sym_variable_definition] = STATE(65),
    [sym_mapping_definition] = STATE(65),
    [sym_function_definition] = STATE(65),
    [sym_common_statement] = STATE(65),
    [sym_let_statement] = STATE(65),
    [aux_sym_source_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_0x,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(5), 15,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_common_statement_repeat1,
  [72] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_0x,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(2), 15,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_common_statement_repeat1,
  [144] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_0x,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_utf8_string_lit,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(5), 15,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_common_statement_repeat1,
  [216] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(54), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_DASH,
    ACTIONS(66), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_0x,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(78), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(5), 15,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_common_statement_repeat1,
  [288] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_0x,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(85), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(4), 15,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_common_statement_repeat1,
  [360] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_0x,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_utf8_string_lit,
    STATE(9), 1,
      aux_sym_let_statement_repeat2,
    STATE(43), 1,
      sym_standard_principal_lit,
    STATE(57), 1,
      sym_common_statement,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(135), 13,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [433] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_0x,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym_utf8_string_lit,
    STATE(10), 1,
      aux_sym_let_statement_repeat2,
    STATE(43), 1,
      sym_standard_principal_lit,
    STATE(57), 1,
      sym_common_statement,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(91), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(147), 13,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [506] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_0x,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    STATE(54), 1,
      aux_sym_let_statement_repeat2,
    STATE(57), 1,
      sym_common_statement,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(91), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(147), 13,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [579] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_0x,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    STATE(54), 1,
      aux_sym_let_statement_repeat2,
    STATE(57), 1,
      sym_common_statement,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(95), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(180), 13,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [652] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_0x,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(170), 14,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [720] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_0x,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(103), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(153), 14,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [788] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_0x,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(136), 14,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [856] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_0x,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(111), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(146), 14,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [924] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_0x,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(115), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(104), 14,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [992] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_0x,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(119), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(145), 14,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [1060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(123), 17,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(127), 17,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(131), 17,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(135), 17,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(139), 17,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(143), 17,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(147), 17,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(151), 17,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(155), 17,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(159), 17,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(163), 17,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(167), 17,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(171), 17,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(177), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(181), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(185), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(189), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(193), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(195), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(199), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(203), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(207), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(211), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(215), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(219), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(223), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_DOT,
    ACTIONS(229), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(227), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(233), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(237), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(241), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(245), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(249), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(253), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(257), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(261), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(265), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(269), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2316] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    STATE(54), 2,
      sym_common_statement,
      aux_sym_let_statement_repeat2,
    ACTIONS(278), 7,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(273), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2351] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_define_DASHtrait,
    ACTIONS(284), 1,
      anon_sym_impl_DASHtrait,
    ACTIONS(286), 1,
      anon_sym_use_DASHtrait,
    ACTIONS(288), 1,
      anon_sym_define_DASHfungible_DASHtoken,
    ACTIONS(290), 1,
      anon_sym_define_DASHnon_DASHfungible_DASHtoken,
    ACTIONS(292), 1,
      anon_sym_define_DASHconstant,
    ACTIONS(294), 1,
      anon_sym_define_DASHdata_DASHvar,
    ACTIONS(296), 1,
      anon_sym_define_DASHmap,
    ACTIONS(300), 1,
      anon_sym_let,
    ACTIONS(302), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(306), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(6), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(298), 3,
      anon_sym_define_DASHread_DASHonly,
      anon_sym_define_DASHprivate,
      anon_sym_define_DASHpublic,
    ACTIONS(304), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(308), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    ACTIONS(314), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(312), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(318), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(322), 13,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2530] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    ACTIONS(330), 1,
      anon_sym_LT,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(61), 4,
      sym__parameter_type,
      sym_trait_type,
      sym_type_name,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(22), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2568] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    ACTIONS(341), 1,
      anon_sym_LT,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(344), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(61), 4,
      sym__parameter_type,
      sym_trait_type,
      sym_type_name,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(22), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2606] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_LT,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(60), 4,
      sym__parameter_type,
      sym_trait_type,
      sym_type_name,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(22), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2644] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_LT,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(176), 3,
      sym__parameter_type,
      sym_trait_type,
      sym_type_name,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(22), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2678] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_let,
    ACTIONS(352), 1,
      anon_sym_list,
    ACTIONS(354), 1,
      anon_sym_some,
    STATE(3), 1,
      sym_list_lit_token,
    ACTIONS(302), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(306), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 2,
      anon_sym_ok,
      anon_sym_err,
    STATE(6), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(304), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2719] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    STATE(125), 2,
      sym_fungible_token_definition,
      sym_non_fungible_token_definition,
    STATE(66), 12,
      sym__declaration,
      sym_trait_definition,
      sym_trait_implementation,
      sym_trait_usage,
      sym_token_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_mapping_definition,
      sym_function_definition,
      sym_common_statement,
      sym_let_statement,
      aux_sym_source_repeat1,
  [2747] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
    STATE(125), 2,
      sym_fungible_token_definition,
      sym_non_fungible_token_definition,
    STATE(66), 12,
      sym__declaration,
      sym_trait_definition,
      sym_trait_implementation,
      sym_trait_usage,
      sym_token_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_mapping_definition,
      sym_function_definition,
      sym_common_statement,
      sym_let_statement,
      aux_sym_source_repeat1,
  [2775] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_type_name,
    STATE(70), 1,
      sym_tuple_type,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(22), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [2806] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_type_name,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(22), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2835] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_tuple_type,
    STATE(152), 1,
      sym_type_name,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(22), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [2866] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_tuple_type,
    STATE(152), 1,
      sym_type_name,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(22), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [2897] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_type_name,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(22), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2926] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_type_name,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(22), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2955] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(193), 1,
      sym_type_name,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(22), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2984] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_type_name,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(22), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3013] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(142), 1,
      sym_type_name,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(22), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3042] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(199), 1,
      sym_type_name,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(22), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3071] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_type_name,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(22), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3100] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(171), 1,
      sym_type_name,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(22), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3129] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_let,
    ACTIONS(302), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(306), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(6), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(304), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3157] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_identifier,
    ACTIONS(302), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(306), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(6), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(304), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      anon_sym_LBRACE,
  [3196] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_buff,
    ACTIONS(371), 1,
      anon_sym_string_DASHascii,
    ACTIONS(373), 1,
      anon_sym_string_DASHutf8,
    ACTIONS(375), 1,
      anon_sym_list,
    ACTIONS(377), 1,
      anon_sym_optional,
    ACTIONS(379), 1,
      anon_sym_tuple,
    ACTIONS(381), 1,
      anon_sym_response,
  [3221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(88), 2,
      sym_let_variable_definition,
      aux_sym_let_statement_repeat1,
  [3235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(84), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3249] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(172), 1,
      sym_contract_principal_lit,
    STATE(184), 1,
      sym_standard_principal_lit,
  [3265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(84), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(183), 1,
      sym_contract_principal_lit,
    STATE(184), 1,
      sym_standard_principal_lit,
  [3295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(90), 2,
      sym_let_variable_definition,
      aux_sym_let_statement_repeat1,
  [3309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(89), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(90), 2,
      sym_let_variable_definition,
      aux_sym_let_statement_repeat1,
  [3337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(93), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(86), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(89), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_tuple_type_repeat1,
    STATE(113), 1,
      sym__tuple_type_pair,
  [3405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym_identifier,
    STATE(96), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(157), 1,
      sym__tuple_lit_pair,
  [3418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    STATE(168), 2,
      sym_common_statement,
      sym_let_statement,
  [3442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
    STATE(103), 1,
      aux_sym_tuple_type_repeat1,
    STATE(126), 1,
      sym__tuple_type_pair,
  [3455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(102), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(127), 1,
      sym__tuple_lit_pair,
  [3468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(96), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(114), 1,
      sym__tuple_lit_pair,
  [3494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_identifier,
    STATE(103), 1,
      aux_sym_tuple_type_repeat1,
    STATE(174), 1,
      sym__tuple_type_pair,
  [3507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_function_signature,
  [3541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
  [3583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
  [3593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
  [3603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
  [3637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3669] = 3,
    ACTIONS(483), 1,
      anon_sym_DQUOTE,
    ACTIONS(485), 1,
      aux_sym_ascii_string_lit_token1,
    ACTIONS(487), 1,
      sym_comment,
  [3679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
  [3689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
  [3707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
  [3717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
  [3743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_identifier,
  [3758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
  [3765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_uint,
  [3772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
  [3779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
  [3786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
  [3793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
  [3800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
  [3807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
  [3814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
  [3821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
  [3828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
  [3835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym_identifier,
  [3842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
  [3849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
  [3856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
  [3863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
  [3870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
  [3877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym_identifier,
  [3884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
  [3891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
  [3898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
  [3905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COLON,
  [3912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      aux_sym_buffer_type_token1,
  [3919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      aux_sym_buffer_type_token1,
  [3926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_COMMA,
  [3933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      aux_sym_buffer_type_token1,
  [3940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_buffer_type_token1,
  [3947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym_identifier,
  [3954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
  [3961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
  [3968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_identifier,
  [3975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
  [3982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
  [3989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_COLON,
  [3996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_identifier,
  [4003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
  [4010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
  [4017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
  [4024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
  [4031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_DOT,
  [4038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym_identifier,
  [4045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_COMMA,
  [4052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_identifier,
  [4059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
  [4066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      aux_sym_buffer_lit_token1,
  [4073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      aux_sym_buffer_type_token1,
  [4080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym_identifier,
  [4087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
  [4094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
  [4101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_identifier,
  [4108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_DOT,
  [4115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_DOT,
  [4122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      aux_sym_standard_principal_lit_token1,
  [4129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
  [4136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym_identifier,
  [4143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LPAREN,
  [4150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_identifier,
  [4157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_GT,
  [4164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
  [4171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym_identifier,
  [4178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
  [4185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_identifier,
  [4192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_identifier,
  [4199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym_identifier,
  [4206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym_identifier,
  [4213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym_identifier,
  [4220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
  [4227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 216,
  [SMALL_STATE(6)] = 288,
  [SMALL_STATE(7)] = 360,
  [SMALL_STATE(8)] = 433,
  [SMALL_STATE(9)] = 506,
  [SMALL_STATE(10)] = 579,
  [SMALL_STATE(11)] = 652,
  [SMALL_STATE(12)] = 720,
  [SMALL_STATE(13)] = 788,
  [SMALL_STATE(14)] = 856,
  [SMALL_STATE(15)] = 924,
  [SMALL_STATE(16)] = 992,
  [SMALL_STATE(17)] = 1060,
  [SMALL_STATE(18)] = 1097,
  [SMALL_STATE(19)] = 1134,
  [SMALL_STATE(20)] = 1171,
  [SMALL_STATE(21)] = 1208,
  [SMALL_STATE(22)] = 1245,
  [SMALL_STATE(23)] = 1282,
  [SMALL_STATE(24)] = 1319,
  [SMALL_STATE(25)] = 1356,
  [SMALL_STATE(26)] = 1393,
  [SMALL_STATE(27)] = 1430,
  [SMALL_STATE(28)] = 1467,
  [SMALL_STATE(29)] = 1504,
  [SMALL_STATE(30)] = 1541,
  [SMALL_STATE(31)] = 1574,
  [SMALL_STATE(32)] = 1607,
  [SMALL_STATE(33)] = 1640,
  [SMALL_STATE(34)] = 1673,
  [SMALL_STATE(35)] = 1706,
  [SMALL_STATE(36)] = 1738,
  [SMALL_STATE(37)] = 1770,
  [SMALL_STATE(38)] = 1802,
  [SMALL_STATE(39)] = 1834,
  [SMALL_STATE(40)] = 1866,
  [SMALL_STATE(41)] = 1898,
  [SMALL_STATE(42)] = 1930,
  [SMALL_STATE(43)] = 1962,
  [SMALL_STATE(44)] = 1996,
  [SMALL_STATE(45)] = 2028,
  [SMALL_STATE(46)] = 2060,
  [SMALL_STATE(47)] = 2092,
  [SMALL_STATE(48)] = 2124,
  [SMALL_STATE(49)] = 2156,
  [SMALL_STATE(50)] = 2188,
  [SMALL_STATE(51)] = 2220,
  [SMALL_STATE(52)] = 2252,
  [SMALL_STATE(53)] = 2284,
  [SMALL_STATE(54)] = 2316,
  [SMALL_STATE(55)] = 2351,
  [SMALL_STATE(56)] = 2408,
  [SMALL_STATE(57)] = 2438,
  [SMALL_STATE(58)] = 2470,
  [SMALL_STATE(59)] = 2500,
  [SMALL_STATE(60)] = 2530,
  [SMALL_STATE(61)] = 2568,
  [SMALL_STATE(62)] = 2606,
  [SMALL_STATE(63)] = 2644,
  [SMALL_STATE(64)] = 2678,
  [SMALL_STATE(65)] = 2719,
  [SMALL_STATE(66)] = 2747,
  [SMALL_STATE(67)] = 2775,
  [SMALL_STATE(68)] = 2806,
  [SMALL_STATE(69)] = 2835,
  [SMALL_STATE(70)] = 2866,
  [SMALL_STATE(71)] = 2897,
  [SMALL_STATE(72)] = 2926,
  [SMALL_STATE(73)] = 2955,
  [SMALL_STATE(74)] = 2984,
  [SMALL_STATE(75)] = 3013,
  [SMALL_STATE(76)] = 3042,
  [SMALL_STATE(77)] = 3071,
  [SMALL_STATE(78)] = 3100,
  [SMALL_STATE(79)] = 3129,
  [SMALL_STATE(80)] = 3157,
  [SMALL_STATE(81)] = 3182,
  [SMALL_STATE(82)] = 3196,
  [SMALL_STATE(83)] = 3221,
  [SMALL_STATE(84)] = 3235,
  [SMALL_STATE(85)] = 3249,
  [SMALL_STATE(86)] = 3265,
  [SMALL_STATE(87)] = 3279,
  [SMALL_STATE(88)] = 3295,
  [SMALL_STATE(89)] = 3309,
  [SMALL_STATE(90)] = 3323,
  [SMALL_STATE(91)] = 3337,
  [SMALL_STATE(92)] = 3351,
  [SMALL_STATE(93)] = 3365,
  [SMALL_STATE(94)] = 3379,
  [SMALL_STATE(95)] = 3392,
  [SMALL_STATE(96)] = 3405,
  [SMALL_STATE(97)] = 3418,
  [SMALL_STATE(98)] = 3431,
  [SMALL_STATE(99)] = 3442,
  [SMALL_STATE(100)] = 3455,
  [SMALL_STATE(101)] = 3468,
  [SMALL_STATE(102)] = 3481,
  [SMALL_STATE(103)] = 3494,
  [SMALL_STATE(104)] = 3507,
  [SMALL_STATE(105)] = 3515,
  [SMALL_STATE(106)] = 3523,
  [SMALL_STATE(107)] = 3531,
  [SMALL_STATE(108)] = 3541,
  [SMALL_STATE(109)] = 3549,
  [SMALL_STATE(110)] = 3557,
  [SMALL_STATE(111)] = 3565,
  [SMALL_STATE(112)] = 3573,
  [SMALL_STATE(113)] = 3583,
  [SMALL_STATE(114)] = 3593,
  [SMALL_STATE(115)] = 3603,
  [SMALL_STATE(116)] = 3611,
  [SMALL_STATE(117)] = 3619,
  [SMALL_STATE(118)] = 3627,
  [SMALL_STATE(119)] = 3637,
  [SMALL_STATE(120)] = 3645,
  [SMALL_STATE(121)] = 3653,
  [SMALL_STATE(122)] = 3661,
  [SMALL_STATE(123)] = 3669,
  [SMALL_STATE(124)] = 3679,
  [SMALL_STATE(125)] = 3689,
  [SMALL_STATE(126)] = 3697,
  [SMALL_STATE(127)] = 3707,
  [SMALL_STATE(128)] = 3717,
  [SMALL_STATE(129)] = 3725,
  [SMALL_STATE(130)] = 3733,
  [SMALL_STATE(131)] = 3743,
  [SMALL_STATE(132)] = 3751,
  [SMALL_STATE(133)] = 3758,
  [SMALL_STATE(134)] = 3765,
  [SMALL_STATE(135)] = 3772,
  [SMALL_STATE(136)] = 3779,
  [SMALL_STATE(137)] = 3786,
  [SMALL_STATE(138)] = 3793,
  [SMALL_STATE(139)] = 3800,
  [SMALL_STATE(140)] = 3807,
  [SMALL_STATE(141)] = 3814,
  [SMALL_STATE(142)] = 3821,
  [SMALL_STATE(143)] = 3828,
  [SMALL_STATE(144)] = 3835,
  [SMALL_STATE(145)] = 3842,
  [SMALL_STATE(146)] = 3849,
  [SMALL_STATE(147)] = 3856,
  [SMALL_STATE(148)] = 3863,
  [SMALL_STATE(149)] = 3870,
  [SMALL_STATE(150)] = 3877,
  [SMALL_STATE(151)] = 3884,
  [SMALL_STATE(152)] = 3891,
  [SMALL_STATE(153)] = 3898,
  [SMALL_STATE(154)] = 3905,
  [SMALL_STATE(155)] = 3912,
  [SMALL_STATE(156)] = 3919,
  [SMALL_STATE(157)] = 3926,
  [SMALL_STATE(158)] = 3933,
  [SMALL_STATE(159)] = 3940,
  [SMALL_STATE(160)] = 3947,
  [SMALL_STATE(161)] = 3954,
  [SMALL_STATE(162)] = 3961,
  [SMALL_STATE(163)] = 3968,
  [SMALL_STATE(164)] = 3975,
  [SMALL_STATE(165)] = 3982,
  [SMALL_STATE(166)] = 3989,
  [SMALL_STATE(167)] = 3996,
  [SMALL_STATE(168)] = 4003,
  [SMALL_STATE(169)] = 4010,
  [SMALL_STATE(170)] = 4017,
  [SMALL_STATE(171)] = 4024,
  [SMALL_STATE(172)] = 4031,
  [SMALL_STATE(173)] = 4038,
  [SMALL_STATE(174)] = 4045,
  [SMALL_STATE(175)] = 4052,
  [SMALL_STATE(176)] = 4059,
  [SMALL_STATE(177)] = 4066,
  [SMALL_STATE(178)] = 4073,
  [SMALL_STATE(179)] = 4080,
  [SMALL_STATE(180)] = 4087,
  [SMALL_STATE(181)] = 4094,
  [SMALL_STATE(182)] = 4101,
  [SMALL_STATE(183)] = 4108,
  [SMALL_STATE(184)] = 4115,
  [SMALL_STATE(185)] = 4122,
  [SMALL_STATE(186)] = 4129,
  [SMALL_STATE(187)] = 4136,
  [SMALL_STATE(188)] = 4143,
  [SMALL_STATE(189)] = 4150,
  [SMALL_STATE(190)] = 4157,
  [SMALL_STATE(191)] = 4164,
  [SMALL_STATE(192)] = 4171,
  [SMALL_STATE(193)] = 4178,
  [SMALL_STATE(194)] = 4185,
  [SMALL_STATE(195)] = 4192,
  [SMALL_STATE(196)] = 4199,
  [SMALL_STATE(197)] = 4206,
  [SMALL_STATE(198)] = 4213,
  [SMALL_STATE(199)] = 4220,
  [SMALL_STATE(200)] = 4227,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(5),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(64),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(187),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(36),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(100),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(178),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(39),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(185),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(177),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(123),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(5),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(42),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_type, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_type, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3, .production_id = 6),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3, .production_id = 6),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_type, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_type, 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_type, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 5),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4, .production_id = 6),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4, .production_id = 6),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5, .production_id = 14),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5, .production_id = 14),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 4, .production_id = 12),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 4, .production_id = 12),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_type, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_type, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_utf8_string_type, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_string_type, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4, .production_id = 14),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4, .production_id = 14),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_statement, 3, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_common_statement, 3, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 6),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 6),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 8),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 8),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 7),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 7),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_statement, 4, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_common_statement, 4, .production_id = 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_lit, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_lit, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_some_lit, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_some_lit, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_principal_lit, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_principal_lit, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 3, .production_id = 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 3, .production_id = 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, .production_id = 10),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, .production_id = 10),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 5, .production_id = 10),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 5, .production_id = 10),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, .production_id = 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, .production_id = 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_lit, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_lit, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_statement_repeat2, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat2, 2), SHIFT_REPEAT(80),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat2, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit_token, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit_token, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_statement_repeat2, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat2, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_function, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_function, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic_function, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_function, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(82),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(175),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(22),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(95),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(55),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_type, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2), SHIFT_REPEAT(163),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2), SHIFT_REPEAT(150),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat1, 2), SHIFT_REPEAT(167),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat1, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, .production_id = 7), SHIFT_REPEAT(144),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, .production_id = 7),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, .production_id = 4), SHIFT_REPEAT(166),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, .production_id = 7), SHIFT_REPEAT(154),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_lit_pair, 3, .production_id = 9),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 7),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 4, .production_id = 15),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_fungible_token_definition, 5),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, .production_id = 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_type_pair, 3, .production_id = 13),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 6),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 6),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_implementation, 6),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 7),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_usage, 7, .production_id = 11),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_variable_definition, 4),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, .production_id = 5),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_definition, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_definition, 6, .production_id = 8),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fungible_token_definition, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [543] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_clarity(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
