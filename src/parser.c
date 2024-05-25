#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 204
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
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
  anon_sym_PLUS = 51,
  anon_sym_STAR = 52,
  anon_sym_SLASH = 53,
  anon_sym_mod = 54,
  anon_sym_LT_EQ = 55,
  anon_sym_GT_EQ = 56,
  anon_sym_and = 57,
  anon_sym_as_DASHcontract = 58,
  anon_sym_asserts_BANG = 59,
  anon_sym_begin = 60,
  anon_sym_contract_DASHcall_QMARK = 61,
  anon_sym_block_DASHheight = 62,
  anon_sym_burn_DASHblock_DASHheight = 63,
  anon_sym_chain_id = 64,
  anon_sym_contract_DASHcaller = 65,
  anon_sym_is_DASHin_mainnet = 66,
  anon_sym_is_DASHin_DASHregtest = 67,
  anon_sym_stx_DASHliquid_DASHsupply = 68,
  anon_sym_tx_DASHsender = 69,
  anon_sym_tx_DASHsponsor_QMARK = 70,
  sym_comment = 71,
  sym_source = 72,
  sym__expression = 73,
  sym__function_call = 74,
  sym_trait_definition = 75,
  sym_trait_implementation = 76,
  sym_trait_usage = 77,
  sym_token_definition = 78,
  sym_fungible_token_definition = 79,
  sym_non_fungible_token_definition = 80,
  sym_constant_definition = 81,
  sym_variable_definition = 82,
  sym_mapping_definition = 83,
  sym_function_definition = 84,
  sym__native_function_call = 85,
  sym_basic_native_form = 86,
  sym_contract_function_call = 87,
  sym_let_expression = 88,
  sym_local_binding = 89,
  sym_function_signature = 90,
  sym_function_parameter = 91,
  sym_function_signature_for_trait = 92,
  sym_parameter_type = 93,
  sym_trait_type = 94,
  sym_native_type = 95,
  sym_buffer_type = 96,
  sym_ascii_string_type = 97,
  sym_utf8_string_type = 98,
  sym_list_type = 99,
  sym_optional_type = 100,
  sym_tuple_type_for_trait = 101,
  sym_tuple_type = 102,
  sym__tuple_type_pair = 103,
  sym_response_type = 104,
  sym__parameter = 105,
  sym__literal = 106,
  sym_int_lit = 107,
  sym_bool_lit = 108,
  sym_standard_principal_lit = 109,
  sym_contract_principal_lit = 110,
  sym_buffer_lit = 111,
  sym_ascii_string_lit = 112,
  sym_list_lit = 113,
  sym_list_lit_token = 114,
  sym_some_lit = 115,
  sym_tuple_lit = 116,
  sym__tuple_lit_pair = 117,
  sym_response_lit = 118,
  sym_native_identifier = 119,
  sym_global = 120,
  aux_sym_source_repeat1 = 121,
  aux_sym_trait_definition_repeat1 = 122,
  aux_sym_basic_native_form_repeat1 = 123,
  aux_sym_let_expression_repeat1 = 124,
  aux_sym_let_expression_repeat2 = 125,
  aux_sym_function_signature_repeat1 = 126,
  aux_sym_function_signature_for_trait_repeat1 = 127,
  aux_sym_tuple_type_for_trait_repeat1 = 128,
  aux_sym_tuple_type_repeat1 = 129,
  aux_sym_tuple_lit_repeat1 = 130,
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
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_mod] = "mod",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_and] = "and",
  [anon_sym_as_DASHcontract] = "as-contract",
  [anon_sym_asserts_BANG] = "asserts!",
  [anon_sym_begin] = "begin",
  [anon_sym_contract_DASHcall_QMARK] = "contract-call\?",
  [anon_sym_block_DASHheight] = "block-height",
  [anon_sym_burn_DASHblock_DASHheight] = "burn-block-height",
  [anon_sym_chain_id] = "chain_id",
  [anon_sym_contract_DASHcaller] = "contract-caller",
  [anon_sym_is_DASHin_mainnet] = "is-in_mainnet",
  [anon_sym_is_DASHin_DASHregtest] = "is-in-regtest",
  [anon_sym_stx_DASHliquid_DASHsupply] = "stx-liquid-supply",
  [anon_sym_tx_DASHsender] = "tx-sender",
  [anon_sym_tx_DASHsponsor_QMARK] = "tx-sponsor\?",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym__expression] = "_expression",
  [sym__function_call] = "_function_call",
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
  [sym__native_function_call] = "_native_function_call",
  [sym_basic_native_form] = "basic_native_form",
  [sym_contract_function_call] = "contract_function_call",
  [sym_let_expression] = "let_expression",
  [sym_local_binding] = "local_binding",
  [sym_function_signature] = "function_signature",
  [sym_function_parameter] = "function_parameter",
  [sym_function_signature_for_trait] = "function_signature_for_trait",
  [sym_parameter_type] = "parameter_type",
  [sym_trait_type] = "trait_type",
  [sym_native_type] = "native_type",
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
  [sym_native_identifier] = "native_identifier",
  [sym_global] = "global",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_trait_definition_repeat1] = "trait_definition_repeat1",
  [aux_sym_basic_native_form_repeat1] = "basic_native_form_repeat1",
  [aux_sym_let_expression_repeat1] = "let_expression_repeat1",
  [aux_sym_let_expression_repeat2] = "let_expression_repeat2",
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_as_DASHcontract] = anon_sym_as_DASHcontract,
  [anon_sym_asserts_BANG] = anon_sym_asserts_BANG,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_contract_DASHcall_QMARK] = anon_sym_contract_DASHcall_QMARK,
  [anon_sym_block_DASHheight] = anon_sym_block_DASHheight,
  [anon_sym_burn_DASHblock_DASHheight] = anon_sym_burn_DASHblock_DASHheight,
  [anon_sym_chain_id] = anon_sym_chain_id,
  [anon_sym_contract_DASHcaller] = anon_sym_contract_DASHcaller,
  [anon_sym_is_DASHin_mainnet] = anon_sym_is_DASHin_mainnet,
  [anon_sym_is_DASHin_DASHregtest] = anon_sym_is_DASHin_DASHregtest,
  [anon_sym_stx_DASHliquid_DASHsupply] = anon_sym_stx_DASHliquid_DASHsupply,
  [anon_sym_tx_DASHsender] = anon_sym_tx_DASHsender,
  [anon_sym_tx_DASHsponsor_QMARK] = anon_sym_tx_DASHsponsor_QMARK,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym__expression] = sym__expression,
  [sym__function_call] = sym__function_call,
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
  [sym__native_function_call] = sym__native_function_call,
  [sym_basic_native_form] = sym_basic_native_form,
  [sym_contract_function_call] = sym_contract_function_call,
  [sym_let_expression] = sym_let_expression,
  [sym_local_binding] = sym_local_binding,
  [sym_function_signature] = sym_function_signature,
  [sym_function_parameter] = sym_function_parameter,
  [sym_function_signature_for_trait] = sym_function_signature_for_trait,
  [sym_parameter_type] = sym_parameter_type,
  [sym_trait_type] = sym_trait_type,
  [sym_native_type] = sym_native_type,
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
  [sym_native_identifier] = sym_native_identifier,
  [sym_global] = sym_global,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_trait_definition_repeat1] = aux_sym_trait_definition_repeat1,
  [aux_sym_basic_native_form_repeat1] = aux_sym_basic_native_form_repeat1,
  [aux_sym_let_expression_repeat1] = aux_sym_let_expression_repeat1,
  [aux_sym_let_expression_repeat2] = aux_sym_let_expression_repeat2,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
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
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as_DASHcontract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asserts_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contract_DASHcall_QMARK] = {
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
  [anon_sym_chain_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contract_DASHcaller] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_DASHin_mainnet] = {
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
  [anon_sym_tx_DASHsender] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tx_DASHsponsor_QMARK] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__function_call] = {
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
  [sym__native_function_call] = {
    .visible = false,
    .named = true,
  },
  [sym_basic_native_form] = {
    .visible = true,
    .named = true,
  },
  [sym_contract_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_local_binding] = {
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
  [sym_parameter_type] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_type] = {
    .visible = true,
    .named = true,
  },
  [sym_native_type] = {
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
  [sym_native_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
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
  [aux_sym_basic_native_form_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_expression_repeat2] = {
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

enum ts_field_identifiers {
  field_key = 1,
  field_key_type = 2,
  field_operator = 3,
  field_trait_alias = 4,
  field_trait_name = 5,
  field_value = 6,
  field_value_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_key_type] = "key_type",
  [field_operator] = "operator",
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
    {field_operator, 1},
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
  [201] = 201,
  [202] = 202,
  [203] = 203,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      ADVANCE_MAP(
        '"', 71,
        '\'', 67,
        '(', 55,
        ')', 56,
        '*', 79,
        '+', 78,
        ',', 63,
        '-', 66,
        '.', 57,
        '/', 80,
        '0', 60,
        ':', 65,
        ';', 13,
        '<', 58,
        '>', 59,
        'u', 83,
        '{', 62,
        '}', 64,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(74);
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
      if (lookahead == '\r') ADVANCE(86);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '(', 55,
        ')', 56,
        '*', 79,
        '+', 78,
        '-', 66,
        '/', 80,
        ';', 13,
        '<', 58,
        '>', 59,
        '{', 62,
        '}', 64,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == ';') ADVANCE(85);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
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
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
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
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(8);
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
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(85);
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
      ADVANCE_MAP(
        'a', 1,
        'b', 2,
        'c', 3,
        'd', 4,
        'e', 5,
        'f', 6,
        'i', 7,
        'l', 8,
        'm', 9,
        'n', 10,
        'o', 11,
        'p', 12,
        'r', 13,
        's', 14,
        't', 15,
        'u', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'k') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_constant);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_ok);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_uint_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_err);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(108);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_buff);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(109);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(114);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_none_lit);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 108:
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 109:
      if (lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(129);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 115:
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '_') ADVANCE(134);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(145);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 131:
      if (lookahead == '-') ADVANCE(149);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 138:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 139:
      if (lookahead == 'q') ADVANCE(157);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 144:
      if (lookahead == '!') ADVANCE(162);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 149:
      ADVANCE_MAP(
        'c', 167,
        'd', 168,
        'f', 169,
        'm', 170,
        'n', 171,
        'p', 172,
        'r', 173,
        't', 174,
      );
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_asserts_BANG);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_chain_id);
      END_STATE();
    case 166:
      if (lookahead == '-') ADVANCE(190);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 176:
      if (lookahead == 'g') ADVANCE(201);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 188:
      if (lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 189:
      if (lookahead == 'k') ADVANCE(212);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(220);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_principal);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(226);
      END_STATE();
    case 205:
      if (lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_tx_DASHsender);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_use_DASHtrait);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 211:
      if (lookahead == 'h') ADVANCE(231);
      END_STATE();
    case 212:
      if (lookahead == '-') ADVANCE(232);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 216:
      if (lookahead == 'g') ADVANCE(236);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_define_DASHmap);
      END_STATE();
    case 218:
      if (lookahead == '-') ADVANCE(237);
      END_STATE();
    case 219:
      if (lookahead == 'v') ADVANCE(238);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_impl_DASHtrait);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 227:
      if (lookahead == '8') ADVANCE(245);
      END_STATE();
    case 228:
      if (lookahead == '-') ADVANCE(246);
      END_STATE();
    case 229:
      if (lookahead == '?') ADVANCE(247);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_as_DASHcontract);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 232:
      if (lookahead == 'h') ADVANCE(249);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 235:
      if (lookahead == '-') ADVANCE(252);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 237:
      if (lookahead == 'f') ADVANCE(254);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 240:
      if (lookahead == '-') ADVANCE(257);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_string_DASHutf8);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_tx_DASHsponsor_QMARK);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_block_DASHheight);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 251:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 252:
      if (lookahead == 'v') ADVANCE(266);
      END_STATE();
    case 253:
      if (lookahead == 'b') ADVANCE(267);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 256:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_define_DASHtrait);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_string_DASHascii);
      END_STATE();
    case 262:
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 264:
      if (lookahead == '?') ADVANCE(276);
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_define_DASHpublic);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_is_DASHin_DASHregtest);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_is_DASHin_mainnet);
      END_STATE();
    case 274:
      if (lookahead == 'p') ADVANCE(284);
      END_STATE();
    case 275:
      if (lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_contract_DASHcall_QMARK);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 281:
      if (lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_define_DASHprivate);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 284:
      if (lookahead == 'p') ADVANCE(292);
      END_STATE();
    case 285:
      if (lookahead == 'h') ADVANCE(293);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_contract_DASHcaller);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_define_DASHconstant);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_define_DASHdata_DASHvar);
      END_STATE();
    case 289:
      if (lookahead == '-') ADVANCE(294);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 291:
      if (lookahead == 'y') ADVANCE(296);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 295:
      if (lookahead == 'b') ADVANCE(300);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_define_DASHread_DASHonly);
      END_STATE();
    case 297:
      if (lookahead == 'y') ADVANCE(301);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_burn_DASHblock_DASHheight);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_stx_DASHliquid_DASHsupply);
      END_STATE();
    case 302:
      if (lookahead == 'k') ADVANCE(304);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 305:
      if (lookahead == '-') ADVANCE(307);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_define_DASHfungible_DASHtoken);
      END_STATE();
    case 309:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == 'k') ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 313:
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
  [40] = {.lex_state = 10},
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
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 10},
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_as_DASHcontract] = ACTIONS(1),
    [anon_sym_asserts_BANG] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_contract_DASHcall_QMARK] = ACTIONS(1),
    [anon_sym_block_DASHheight] = ACTIONS(1),
    [anon_sym_burn_DASHblock_DASHheight] = ACTIONS(1),
    [anon_sym_chain_id] = ACTIONS(1),
    [anon_sym_contract_DASHcaller] = ACTIONS(1),
    [anon_sym_is_DASHin_mainnet] = ACTIONS(1),
    [anon_sym_is_DASHin_DASHregtest] = ACTIONS(1),
    [anon_sym_stx_DASHliquid_DASHsupply] = ACTIONS(1),
    [anon_sym_tx_DASHsender] = ACTIONS(1),
    [anon_sym_tx_DASHsponsor_QMARK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(153),
    [sym__expression] = STATE(68),
    [sym__function_call] = STATE(68),
    [sym_trait_definition] = STATE(68),
    [sym_trait_implementation] = STATE(68),
    [sym_trait_usage] = STATE(68),
    [sym_token_definition] = STATE(68),
    [sym_fungible_token_definition] = STATE(134),
    [sym_non_fungible_token_definition] = STATE(134),
    [sym_constant_definition] = STATE(68),
    [sym_variable_definition] = STATE(68),
    [sym_mapping_definition] = STATE(68),
    [sym_function_definition] = STATE(68),
    [sym__native_function_call] = STATE(68),
    [sym_basic_native_form] = STATE(68),
    [sym_contract_function_call] = STATE(68),
    [sym_let_expression] = STATE(68),
    [aux_sym_source_repeat1] = STATE(68),
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
    ACTIONS(33), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(4), 18,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
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
      aux_sym_basic_native_form_repeat1,
  [78] = 16,
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
    ACTIONS(35), 1,
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
    ACTIONS(33), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(4), 18,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
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
      aux_sym_basic_native_form_repeat1,
  [156] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(48), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(60), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(72), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(4), 18,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
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
      aux_sym_basic_native_form_repeat1,
  [234] = 16,
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
    ACTIONS(75), 1,
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
    ACTIONS(33), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(4), 18,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
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
      aux_sym_basic_native_form_repeat1,
  [312] = 16,
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
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(77), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(3), 18,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
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
      aux_sym_basic_native_form_repeat1,
  [390] = 16,
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
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(87), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(5), 18,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
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
      aux_sym_basic_native_form_repeat1,
  [468] = 16,
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
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(2), 18,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
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
      aux_sym_basic_native_form_repeat1,
  [546] = 17,
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
    STATE(11), 1,
      aux_sym_let_expression_repeat2,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(95), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(61), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
    ACTIONS(33), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(150), 12,
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
  [625] = 17,
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
    STATE(32), 1,
      aux_sym_let_expression_repeat2,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(95), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(61), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
    ACTIONS(33), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(150), 12,
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
  [704] = 17,
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
    STATE(32), 1,
      aux_sym_let_expression_repeat2,
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
    STATE(61), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
    ACTIONS(33), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(183), 12,
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
  [783] = 17,
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
    STATE(10), 1,
      aux_sym_let_expression_repeat2,
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
    STATE(61), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
    ACTIONS(33), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(152), 12,
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
  [862] = 15,
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
    ACTIONS(33), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(140), 17,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
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
  [936] = 15,
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
    ACTIONS(33), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(123), 17,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
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
  [1010] = 15,
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
    ACTIONS(33), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(173), 17,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
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
  [1084] = 15,
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
    ACTIONS(33), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(148), 17,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
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
  [1158] = 15,
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
    ACTIONS(125), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(156), 17,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
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
  [1232] = 15,
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
    ACTIONS(129), 1,
      sym_utf8_string_lit,
    STATE(43), 1,
      sym_standard_principal_lit,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(127), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(33), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(138), 17,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
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
  [1306] = 3,
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
    ACTIONS(131), 20,
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
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1346] = 3,
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
    ACTIONS(135), 20,
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
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1386] = 3,
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
    ACTIONS(139), 20,
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
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1426] = 3,
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
    ACTIONS(143), 20,
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
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1466] = 3,
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
    ACTIONS(147), 20,
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
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1506] = 3,
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
    ACTIONS(151), 20,
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
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1546] = 3,
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
    ACTIONS(155), 20,
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
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1586] = 3,
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
    ACTIONS(159), 20,
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
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1626] = 3,
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
    ACTIONS(163), 20,
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
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1666] = 3,
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
    ACTIONS(167), 20,
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
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1706] = 3,
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
    ACTIONS(171), 20,
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
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 12,
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
    ACTIONS(175), 20,
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
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 12,
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
    ACTIONS(179), 20,
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
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1826] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    STATE(32), 6,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      aux_sym_let_expression_repeat2,
    ACTIONS(188), 7,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(183), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 12,
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
    ACTIONS(192), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 12,
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
    ACTIONS(196), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 12,
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
    ACTIONS(200), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 12,
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
    ACTIONS(204), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 12,
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
    ACTIONS(208), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 12,
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
    ACTIONS(212), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 12,
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
    ACTIONS(216), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2120] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_define_DASHtrait,
    ACTIONS(222), 1,
      anon_sym_impl_DASHtrait,
    ACTIONS(224), 1,
      anon_sym_use_DASHtrait,
    ACTIONS(226), 1,
      anon_sym_define_DASHfungible_DASHtoken,
    ACTIONS(228), 1,
      anon_sym_define_DASHnon_DASHfungible_DASHtoken,
    ACTIONS(230), 1,
      anon_sym_define_DASHconstant,
    ACTIONS(232), 1,
      anon_sym_define_DASHdata_DASHvar,
    ACTIONS(234), 1,
      anon_sym_define_DASHmap,
    ACTIONS(238), 1,
      anon_sym_let,
    STATE(8), 1,
      sym_native_identifier,
    ACTIONS(236), 3,
      anon_sym_define_DASHread_DASHonly,
      anon_sym_define_DASHprivate,
      anon_sym_define_DASHpublic,
    ACTIONS(242), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(240), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_mod,
      anon_sym_and,
      anon_sym_as_DASHcontract,
      anon_sym_asserts_BANG,
      anon_sym_begin,
      anon_sym_contract_DASHcall_QMARK,
  [2180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 11,
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
    ACTIONS(244), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 11,
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
    ACTIONS(248), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(254), 10,
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
    ACTIONS(252), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 11,
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
    ACTIONS(258), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 11,
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
    ACTIONS(262), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 11,
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
    ACTIONS(266), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 11,
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
    ACTIONS(270), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 11,
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
    ACTIONS(274), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 11,
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
    ACTIONS(278), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 11,
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
    ACTIONS(282), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 11,
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
    ACTIONS(286), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 11,
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
    ACTIONS(290), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 11,
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
    ACTIONS(294), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 11,
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
    ACTIONS(298), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 11,
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
    ACTIONS(302), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 11,
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
    ACTIONS(306), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 11,
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
    ACTIONS(310), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 11,
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
    ACTIONS(314), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 11,
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
    ACTIONS(318), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2847] = 3,
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
    ACTIONS(322), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(328), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(326), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(332), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2948] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_let,
    ACTIONS(336), 1,
      anon_sym_list,
    ACTIONS(338), 1,
      anon_sym_some,
    STATE(6), 1,
      sym_list_lit_token,
    STATE(8), 1,
      sym_native_identifier,
    ACTIONS(340), 2,
      anon_sym_ok,
      anon_sym_err,
    ACTIONS(242), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(240), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_mod,
      anon_sym_and,
      anon_sym_as_DASHcontract,
      anon_sym_asserts_BANG,
      anon_sym_begin,
      anon_sym_contract_DASHcall_QMARK,
  [2992] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    ACTIONS(347), 1,
      anon_sym_LT,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
    STATE(64), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(84), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(350), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3032] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    ACTIONS(360), 1,
      anon_sym_LT,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(66), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(84), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(362), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3072] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_LT,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(64), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(84), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(362), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3112] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    STATE(134), 2,
      sym_fungible_token_definition,
      sym_non_fungible_token_definition,
    STATE(67), 15,
      sym__expression,
      sym__function_call,
      sym_trait_definition,
      sym_trait_implementation,
      sym_trait_usage,
      sym_token_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_mapping_definition,
      sym_function_definition,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      aux_sym_source_repeat1,
  [3143] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    STATE(134), 2,
      sym_fungible_token_definition,
      sym_non_fungible_token_definition,
    STATE(67), 15,
      sym__expression,
      sym__function_call,
      sym_trait_definition,
      sym_trait_implementation,
      sym_trait_usage,
      sym_token_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_mapping_definition,
      sym_function_definition,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      aux_sym_source_repeat1,
  [3174] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_LT,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_parameter_type,
    STATE(84), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(362), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3210] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_let,
    STATE(8), 1,
      sym_native_identifier,
    ACTIONS(242), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(240), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_mod,
      anon_sym_and,
      anon_sym_as_DASHcontract,
      anon_sym_asserts_BANG,
      anon_sym_begin,
      anon_sym_contract_DASHcall_QMARK,
  [3241] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_native_type,
    ACTIONS(362), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3270] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_native_type,
    ACTIONS(362), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3299] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_tuple_type,
    STATE(155), 1,
      sym_native_type,
    ACTIONS(362), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [3330] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_native_type,
    ACTIONS(362), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3359] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_native_type,
    ACTIONS(362), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3388] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(202), 1,
      sym_native_type,
    ACTIONS(362), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3417] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_tuple_type,
    STATE(155), 1,
      sym_native_type,
    ACTIONS(362), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [3448] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_native_type,
    ACTIONS(362), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3477] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym_native_type,
    ACTIONS(362), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3506] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_native_type,
    ACTIONS(362), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3535] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(137), 1,
      sym_native_type,
    ACTIONS(362), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3564] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_tuple_type,
    STATE(77), 1,
      sym_native_type,
    ACTIONS(362), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [3595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      anon_sym_LBRACE,
  [3609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      anon_sym_LBRACE,
  [3623] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_buff,
    ACTIONS(381), 1,
      anon_sym_string_DASHascii,
    ACTIONS(383), 1,
      anon_sym_string_DASHutf8,
    ACTIONS(385), 1,
      anon_sym_list,
    ACTIONS(387), 1,
      anon_sym_optional,
    ACTIONS(389), 1,
      anon_sym_tuple,
    ACTIONS(391), 1,
      anon_sym_response,
  [3648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    STATE(171), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
  [3662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(87), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [3676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(88), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(92), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3704] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(186), 1,
      sym_contract_principal_lit,
    STATE(187), 1,
      sym_standard_principal_lit,
  [3720] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(175), 1,
      sym_contract_principal_lit,
    STATE(187), 1,
      sym_standard_principal_lit,
  [3736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(92), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(94), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [3764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(87), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [3778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(96), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(88), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(89), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_identifier,
    STATE(103), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(115), 1,
      sym__tuple_lit_pair,
  [3833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_tuple_type_repeat1,
    STATE(177), 1,
      sym__tuple_type_pair,
  [3846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_tuple_type_repeat1,
    STATE(127), 1,
      sym__tuple_type_pair,
  [3885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_identifier,
    STATE(103), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(160), 1,
      sym__tuple_lit_pair,
  [3898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_identifier,
    STATE(98), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(110), 1,
      sym__tuple_lit_pair,
  [3924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
    STATE(102), 1,
      aux_sym_tuple_type_repeat1,
    STATE(121), 1,
      sym__tuple_type_pair,
  [3937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
  [3963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
  [3973] = 3,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
    ACTIONS(463), 1,
      aux_sym_ascii_string_lit_token1,
    ACTIONS(465), 1,
      sym_comment,
  [3983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
  [4001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
  [4019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
  [4069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_function_signature,
  [4079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
  [4105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
  [4123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
  [4165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_identifier,
  [4188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
  [4195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_uint,
  [4202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
  [4209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
  [4216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
  [4223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym_identifier,
  [4230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
  [4237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
  [4244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
  [4251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
  [4258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
  [4265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
  [4272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
  [4279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
  [4286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
  [4293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym_identifier,
  [4300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
  [4307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      ts_builtin_sym_end,
  [4314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
  [4321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
  [4328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
  [4335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COLON,
  [4342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      aux_sym_buffer_type_token1,
  [4349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym_buffer_type_token1,
  [4356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
  [4363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      aux_sym_buffer_type_token1,
  [4370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      aux_sym_buffer_type_token1,
  [4377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym_identifier,
  [4384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
  [4391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
  [4398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
  [4405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
  [4412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_DQUOTE,
  [4419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COLON,
  [4426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym_identifier,
  [4433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [4440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
  [4447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
  [4454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
  [4461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_DOT,
  [4468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym_identifier,
  [4475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
  [4482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym_identifier,
  [4489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
  [4496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      aux_sym_buffer_lit_token1,
  [4503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      aux_sym_buffer_type_token1,
  [4510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_identifier,
  [4517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
  [4524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
  [4531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
  [4538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_DOT,
  [4545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_DOT,
  [4552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      aux_sym_standard_principal_lit_token1,
  [4559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
  [4566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym_identifier,
  [4573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
  [4580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
  [4587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_GT,
  [4594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
  [4601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym_identifier,
  [4608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
  [4615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      sym_identifier,
  [4622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_identifier,
  [4629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      sym_identifier,
  [4636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_identifier,
  [4643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym_identifier,
  [4650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
  [4657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 156,
  [SMALL_STATE(5)] = 234,
  [SMALL_STATE(6)] = 312,
  [SMALL_STATE(7)] = 390,
  [SMALL_STATE(8)] = 468,
  [SMALL_STATE(9)] = 546,
  [SMALL_STATE(10)] = 625,
  [SMALL_STATE(11)] = 704,
  [SMALL_STATE(12)] = 783,
  [SMALL_STATE(13)] = 862,
  [SMALL_STATE(14)] = 936,
  [SMALL_STATE(15)] = 1010,
  [SMALL_STATE(16)] = 1084,
  [SMALL_STATE(17)] = 1158,
  [SMALL_STATE(18)] = 1232,
  [SMALL_STATE(19)] = 1306,
  [SMALL_STATE(20)] = 1346,
  [SMALL_STATE(21)] = 1386,
  [SMALL_STATE(22)] = 1426,
  [SMALL_STATE(23)] = 1466,
  [SMALL_STATE(24)] = 1506,
  [SMALL_STATE(25)] = 1546,
  [SMALL_STATE(26)] = 1586,
  [SMALL_STATE(27)] = 1626,
  [SMALL_STATE(28)] = 1666,
  [SMALL_STATE(29)] = 1706,
  [SMALL_STATE(30)] = 1746,
  [SMALL_STATE(31)] = 1786,
  [SMALL_STATE(32)] = 1826,
  [SMALL_STATE(33)] = 1868,
  [SMALL_STATE(34)] = 1904,
  [SMALL_STATE(35)] = 1940,
  [SMALL_STATE(36)] = 1976,
  [SMALL_STATE(37)] = 2012,
  [SMALL_STATE(38)] = 2048,
  [SMALL_STATE(39)] = 2084,
  [SMALL_STATE(40)] = 2120,
  [SMALL_STATE(41)] = 2180,
  [SMALL_STATE(42)] = 2215,
  [SMALL_STATE(43)] = 2250,
  [SMALL_STATE(44)] = 2287,
  [SMALL_STATE(45)] = 2322,
  [SMALL_STATE(46)] = 2357,
  [SMALL_STATE(47)] = 2392,
  [SMALL_STATE(48)] = 2427,
  [SMALL_STATE(49)] = 2462,
  [SMALL_STATE(50)] = 2497,
  [SMALL_STATE(51)] = 2532,
  [SMALL_STATE(52)] = 2567,
  [SMALL_STATE(53)] = 2602,
  [SMALL_STATE(54)] = 2637,
  [SMALL_STATE(55)] = 2672,
  [SMALL_STATE(56)] = 2707,
  [SMALL_STATE(57)] = 2742,
  [SMALL_STATE(58)] = 2777,
  [SMALL_STATE(59)] = 2812,
  [SMALL_STATE(60)] = 2847,
  [SMALL_STATE(61)] = 2880,
  [SMALL_STATE(62)] = 2915,
  [SMALL_STATE(63)] = 2948,
  [SMALL_STATE(64)] = 2992,
  [SMALL_STATE(65)] = 3032,
  [SMALL_STATE(66)] = 3072,
  [SMALL_STATE(67)] = 3112,
  [SMALL_STATE(68)] = 3143,
  [SMALL_STATE(69)] = 3174,
  [SMALL_STATE(70)] = 3210,
  [SMALL_STATE(71)] = 3241,
  [SMALL_STATE(72)] = 3270,
  [SMALL_STATE(73)] = 3299,
  [SMALL_STATE(74)] = 3330,
  [SMALL_STATE(75)] = 3359,
  [SMALL_STATE(76)] = 3388,
  [SMALL_STATE(77)] = 3417,
  [SMALL_STATE(78)] = 3448,
  [SMALL_STATE(79)] = 3477,
  [SMALL_STATE(80)] = 3506,
  [SMALL_STATE(81)] = 3535,
  [SMALL_STATE(82)] = 3564,
  [SMALL_STATE(83)] = 3595,
  [SMALL_STATE(84)] = 3609,
  [SMALL_STATE(85)] = 3623,
  [SMALL_STATE(86)] = 3648,
  [SMALL_STATE(87)] = 3662,
  [SMALL_STATE(88)] = 3676,
  [SMALL_STATE(89)] = 3690,
  [SMALL_STATE(90)] = 3704,
  [SMALL_STATE(91)] = 3720,
  [SMALL_STATE(92)] = 3736,
  [SMALL_STATE(93)] = 3750,
  [SMALL_STATE(94)] = 3764,
  [SMALL_STATE(95)] = 3778,
  [SMALL_STATE(96)] = 3792,
  [SMALL_STATE(97)] = 3806,
  [SMALL_STATE(98)] = 3820,
  [SMALL_STATE(99)] = 3833,
  [SMALL_STATE(100)] = 3846,
  [SMALL_STATE(101)] = 3859,
  [SMALL_STATE(102)] = 3872,
  [SMALL_STATE(103)] = 3885,
  [SMALL_STATE(104)] = 3898,
  [SMALL_STATE(105)] = 3911,
  [SMALL_STATE(106)] = 3924,
  [SMALL_STATE(107)] = 3937,
  [SMALL_STATE(108)] = 3945,
  [SMALL_STATE(109)] = 3953,
  [SMALL_STATE(110)] = 3963,
  [SMALL_STATE(111)] = 3973,
  [SMALL_STATE(112)] = 3983,
  [SMALL_STATE(113)] = 3991,
  [SMALL_STATE(114)] = 4001,
  [SMALL_STATE(115)] = 4009,
  [SMALL_STATE(116)] = 4019,
  [SMALL_STATE(117)] = 4027,
  [SMALL_STATE(118)] = 4035,
  [SMALL_STATE(119)] = 4043,
  [SMALL_STATE(120)] = 4051,
  [SMALL_STATE(121)] = 4059,
  [SMALL_STATE(122)] = 4069,
  [SMALL_STATE(123)] = 4079,
  [SMALL_STATE(124)] = 4087,
  [SMALL_STATE(125)] = 4095,
  [SMALL_STATE(126)] = 4105,
  [SMALL_STATE(127)] = 4113,
  [SMALL_STATE(128)] = 4123,
  [SMALL_STATE(129)] = 4131,
  [SMALL_STATE(130)] = 4139,
  [SMALL_STATE(131)] = 4147,
  [SMALL_STATE(132)] = 4155,
  [SMALL_STATE(133)] = 4165,
  [SMALL_STATE(134)] = 4173,
  [SMALL_STATE(135)] = 4181,
  [SMALL_STATE(136)] = 4188,
  [SMALL_STATE(137)] = 4195,
  [SMALL_STATE(138)] = 4202,
  [SMALL_STATE(139)] = 4209,
  [SMALL_STATE(140)] = 4216,
  [SMALL_STATE(141)] = 4223,
  [SMALL_STATE(142)] = 4230,
  [SMALL_STATE(143)] = 4237,
  [SMALL_STATE(144)] = 4244,
  [SMALL_STATE(145)] = 4251,
  [SMALL_STATE(146)] = 4258,
  [SMALL_STATE(147)] = 4265,
  [SMALL_STATE(148)] = 4272,
  [SMALL_STATE(149)] = 4279,
  [SMALL_STATE(150)] = 4286,
  [SMALL_STATE(151)] = 4293,
  [SMALL_STATE(152)] = 4300,
  [SMALL_STATE(153)] = 4307,
  [SMALL_STATE(154)] = 4314,
  [SMALL_STATE(155)] = 4321,
  [SMALL_STATE(156)] = 4328,
  [SMALL_STATE(157)] = 4335,
  [SMALL_STATE(158)] = 4342,
  [SMALL_STATE(159)] = 4349,
  [SMALL_STATE(160)] = 4356,
  [SMALL_STATE(161)] = 4363,
  [SMALL_STATE(162)] = 4370,
  [SMALL_STATE(163)] = 4377,
  [SMALL_STATE(164)] = 4384,
  [SMALL_STATE(165)] = 4391,
  [SMALL_STATE(166)] = 4398,
  [SMALL_STATE(167)] = 4405,
  [SMALL_STATE(168)] = 4412,
  [SMALL_STATE(169)] = 4419,
  [SMALL_STATE(170)] = 4426,
  [SMALL_STATE(171)] = 4433,
  [SMALL_STATE(172)] = 4440,
  [SMALL_STATE(173)] = 4447,
  [SMALL_STATE(174)] = 4454,
  [SMALL_STATE(175)] = 4461,
  [SMALL_STATE(176)] = 4468,
  [SMALL_STATE(177)] = 4475,
  [SMALL_STATE(178)] = 4482,
  [SMALL_STATE(179)] = 4489,
  [SMALL_STATE(180)] = 4496,
  [SMALL_STATE(181)] = 4503,
  [SMALL_STATE(182)] = 4510,
  [SMALL_STATE(183)] = 4517,
  [SMALL_STATE(184)] = 4524,
  [SMALL_STATE(185)] = 4531,
  [SMALL_STATE(186)] = 4538,
  [SMALL_STATE(187)] = 4545,
  [SMALL_STATE(188)] = 4552,
  [SMALL_STATE(189)] = 4559,
  [SMALL_STATE(190)] = 4566,
  [SMALL_STATE(191)] = 4573,
  [SMALL_STATE(192)] = 4580,
  [SMALL_STATE(193)] = 4587,
  [SMALL_STATE(194)] = 4594,
  [SMALL_STATE(195)] = 4601,
  [SMALL_STATE(196)] = 4608,
  [SMALL_STATE(197)] = 4615,
  [SMALL_STATE(198)] = 4622,
  [SMALL_STATE(199)] = 4629,
  [SMALL_STATE(200)] = 4636,
  [SMALL_STATE(201)] = 4643,
  [SMALL_STATE(202)] = 4650,
  [SMALL_STATE(203)] = 4657,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4, 0, 6),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4, 0, 6),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_utf8_string_type, 4, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_string_type, 4, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_type, 5, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 5, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4, 0, 14),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4, 0, 14),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5, 0, 14),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5, 0, 14),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 4, 0, 12),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 4, 0, 12),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 4, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 4, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_type, 4, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_type, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_type, 4, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_type, 4, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_native_type, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_type, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_type, 5, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_type, 5, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3, 0, 6),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3, 0, 6),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_expression_repeat2, 2, 0, 0),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 2, 0, 0), SHIFT_REPEAT(70),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_native_form, 4, 0, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_native_form, 4, 0, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_function_call, 4, 0, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_function_call, 4, 0, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 8, 0, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 8, 0, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_function_call, 3, 0, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_function_call, 3, 0, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 7, 0, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 7, 0, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 6, 0, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 6, 0, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_native_form, 3, 0, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_native_form, 3, 0, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, 0, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, 0, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, 0, 10),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, 0, 10),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_principal_lit, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_principal_lit, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 3, 0, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 3, 0, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_lit, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_lit, 2, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 5, 0, 10),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 5, 0, 10),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 3, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_some_lit, 4, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_some_lit, 4, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_lit, 4, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_lit, 4, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 4, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 4, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit_token, 1, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit_token, 1, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_expression_repeat2, 1, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_native_identifier, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_identifier, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_type, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat1, 2, 0, 0),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, 0, 7), SHIFT_REPEAT(157),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, 0, 4), SHIFT_REPEAT(169),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, 0, 7), SHIFT_REPEAT(151),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, 0, 7),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_implementation, 6, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, 0, 5),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_type_pair, 3, 0, 13),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, 0, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 7, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_binding, 4, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 6, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_fungible_token_definition, 5, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fungible_token_definition, 4, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_lit_pair, 3, 0, 9),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 4, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 4, 0, 15),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 7, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_definition, 6, 0, 8),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_usage, 7, 0, 11),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 6, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_definition, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 4, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 3, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [557] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_clarity(void) {
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
