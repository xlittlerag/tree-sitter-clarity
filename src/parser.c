#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 204
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 152
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
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
  anon_sym_concat = 61,
  anon_sym_contract_DASHcall_QMARK = 62,
  anon_sym_contract_DASHof = 63,
  anon_sym_default_DASHto = 64,
  anon_sym_if = 65,
  anon_sym_filter = 66,
  anon_sym_fold = 67,
  anon_sym_get = 68,
  anon_sym_is_DASHeq = 69,
  anon_sym_map = 70,
  anon_sym_map_DASHget_QMARK = 71,
  anon_sym_map_DASHinsert = 72,
  anon_sym_map_DASHset = 73,
  anon_sym_match = 74,
  anon_sym_merge = 75,
  anon_sym_not = 76,
  anon_sym_print = 77,
  anon_sym_try_BANG = 78,
  anon_sym_unwrap_BANG = 79,
  anon_sym_unwrap_DASHpanic = 80,
  anon_sym_var_DASHget = 81,
  anon_sym_var_DASHset = 82,
  anon_sym_block_DASHheight = 83,
  anon_sym_burn_DASHblock_DASHheight = 84,
  anon_sym_chain_id = 85,
  anon_sym_contract_DASHcaller = 86,
  anon_sym_is_DASHin_mainnet = 87,
  anon_sym_is_DASHin_DASHregtest = 88,
  anon_sym_stx_DASHliquid_DASHsupply = 89,
  anon_sym_tx_DASHsender = 90,
  anon_sym_tx_DASHsponsor_QMARK = 91,
  sym_comment = 92,
  sym_source = 93,
  sym__expression = 94,
  sym__function_call = 95,
  sym_trait_definition = 96,
  sym_trait_implementation = 97,
  sym_trait_usage = 98,
  sym_token_definition = 99,
  sym_fungible_token_definition = 100,
  sym_non_fungible_token_definition = 101,
  sym_constant_definition = 102,
  sym_variable_definition = 103,
  sym_mapping_definition = 104,
  sym_function_definition = 105,
  sym__native_function_call = 106,
  sym_basic_native_form = 107,
  sym_contract_function_call = 108,
  sym_let_expression = 109,
  sym_local_binding = 110,
  sym_function_signature = 111,
  sym_function_parameter = 112,
  sym_function_signature_for_trait = 113,
  sym_parameter_type = 114,
  sym_trait_type = 115,
  sym_native_type = 116,
  sym_buffer_type = 117,
  sym_ascii_string_type = 118,
  sym_utf8_string_type = 119,
  sym_list_type = 120,
  sym_optional_type = 121,
  sym_tuple_type_for_trait = 122,
  sym_tuple_type = 123,
  sym__tuple_type_pair = 124,
  sym_response_type = 125,
  sym__parameter = 126,
  sym__literal = 127,
  sym_int_lit = 128,
  sym_bool_lit = 129,
  sym_standard_principal_lit = 130,
  sym_contract_principal_lit = 131,
  sym_buffer_lit = 132,
  sym_ascii_string_lit = 133,
  sym_list_lit = 134,
  sym_list_lit_token = 135,
  sym_some_lit = 136,
  sym_tuple_lit = 137,
  sym__tuple_lit_pair = 138,
  sym_response_lit = 139,
  sym_native_identifier = 140,
  sym_global = 141,
  aux_sym_source_repeat1 = 142,
  aux_sym_trait_definition_repeat1 = 143,
  aux_sym_basic_native_form_repeat1 = 144,
  aux_sym_let_expression_repeat1 = 145,
  aux_sym_let_expression_repeat2 = 146,
  aux_sym_function_signature_repeat1 = 147,
  aux_sym_function_signature_for_trait_repeat1 = 148,
  aux_sym_tuple_type_for_trait_repeat1 = 149,
  aux_sym_tuple_type_repeat1 = 150,
  aux_sym_tuple_lit_repeat1 = 151,
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
  [anon_sym_concat] = "concat",
  [anon_sym_contract_DASHcall_QMARK] = "contract-call\?",
  [anon_sym_contract_DASHof] = "contract-of",
  [anon_sym_default_DASHto] = "default-to",
  [anon_sym_if] = "if",
  [anon_sym_filter] = "filter",
  [anon_sym_fold] = "fold",
  [anon_sym_get] = "get",
  [anon_sym_is_DASHeq] = "is-eq",
  [anon_sym_map] = "map",
  [anon_sym_map_DASHget_QMARK] = "map-get\?",
  [anon_sym_map_DASHinsert] = "map-insert",
  [anon_sym_map_DASHset] = "map-set",
  [anon_sym_match] = "match",
  [anon_sym_merge] = "merge",
  [anon_sym_not] = "not",
  [anon_sym_print] = "print",
  [anon_sym_try_BANG] = "try!",
  [anon_sym_unwrap_BANG] = "unwrap!",
  [anon_sym_unwrap_DASHpanic] = "unwrap-panic",
  [anon_sym_var_DASHget] = "var-get",
  [anon_sym_var_DASHset] = "var-set",
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
  [anon_sym_concat] = anon_sym_concat,
  [anon_sym_contract_DASHcall_QMARK] = anon_sym_contract_DASHcall_QMARK,
  [anon_sym_contract_DASHof] = anon_sym_contract_DASHof,
  [anon_sym_default_DASHto] = anon_sym_default_DASHto,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_fold] = anon_sym_fold,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_is_DASHeq] = anon_sym_is_DASHeq,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_map_DASHget_QMARK] = anon_sym_map_DASHget_QMARK,
  [anon_sym_map_DASHinsert] = anon_sym_map_DASHinsert,
  [anon_sym_map_DASHset] = anon_sym_map_DASHset,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_merge] = anon_sym_merge,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_try_BANG] = anon_sym_try_BANG,
  [anon_sym_unwrap_BANG] = anon_sym_unwrap_BANG,
  [anon_sym_unwrap_DASHpanic] = anon_sym_unwrap_DASHpanic,
  [anon_sym_var_DASHget] = anon_sym_var_DASHget,
  [anon_sym_var_DASHset] = anon_sym_var_DASHset,
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
  [anon_sym_concat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contract_DASHcall_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contract_DASHof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_DASHeq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map_DASHget_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map_DASHinsert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map_DASHset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unwrap_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unwrap_DASHpanic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var_DASHget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var_DASHset] = {
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
        'g', 7,
        'i', 8,
        'l', 9,
        'm', 10,
        'n', 11,
        'o', 12,
        'p', 13,
        'r', 14,
        's', 15,
        't', 16,
        'u', 17,
        'v', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == 'k') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 's') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_constant);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_ok);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 'x') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(94);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 54:
      if (lookahead == 'w') ADVANCE(96);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_uint_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(104);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_err);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_map);
      if (lookahead == '-') ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 92:
      if (lookahead == '!') ADVANCE(129);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(135);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 102:
      if (lookahead == 'k') ADVANCE(139);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_buff);
      END_STATE();
    case 105:
      if (lookahead == '-') ADVANCE(140);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 114:
      if (lookahead == '-') ADVANCE(148);
      END_STATE();
    case 115:
      if (lookahead == 'q') ADVANCE(149);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(154);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_none_lit);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_try_BANG);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 135:
      if (lookahead == 'g') ADVANCE(167);
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 139:
      if (lookahead == '-') ADVANCE(171);
      END_STATE();
    case 140:
      if (lookahead == 'b') ADVANCE(172);
      END_STATE();
    case 141:
      if (lookahead == '_') ADVANCE(173);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_is_DASHeq);
      END_STATE();
    case 150:
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 160:
      if (lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 171:
      if (lookahead == 'h') ADVANCE(198);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_concat);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 177:
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 188:
      if (lookahead == '-') ADVANCE(213);
      END_STATE();
    case 189:
      if (lookahead == 'q') ADVANCE(214);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 192:
      if (lookahead == '!') ADVANCE(217);
      if (lookahead == '-') ADVANCE(218);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 197:
      if (lookahead == '!') ADVANCE(223);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 202:
      if (lookahead == '-') ADVANCE(228);
      END_STATE();
    case 203:
      ADVANCE_MAP(
        'c', 229,
        'd', 230,
        'f', 231,
        'm', 232,
        'n', 233,
        'p', 234,
        'r', 235,
        't', 236,
      );
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 207:
      if (lookahead == '?') ADVANCE(240);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_map_DASHset);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_unwrap_BANG);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_var_DASHget);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_var_DASHset);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_asserts_BANG);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_chain_id);
      END_STATE();
    case 227:
      if (lookahead == '-') ADVANCE(255);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 238:
      if (lookahead == 'g') ADVANCE(267);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_map_DASHget_QMARK);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 250:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 252:
      if (lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 253:
      if (lookahead == 'g') ADVANCE(279);
      END_STATE();
    case 254:
      if (lookahead == 'k') ADVANCE(280);
      END_STATE();
    case 255:
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 260:
      if (lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 263:
      if (lookahead == 'b') ADVANCE(290);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_principal);
      END_STATE();
    case 271:
      if (lookahead == 'c') ADVANCE(297);
      END_STATE();
    case 272:
      if (lookahead == 'f') ADVANCE(298);
      END_STATE();
    case 273:
      if (lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_tx_DASHsender);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_use_DASHtrait);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 279:
      if (lookahead == 'h') ADVANCE(303);
      END_STATE();
    case 280:
      if (lookahead == '-') ADVANCE(304);
      END_STATE();
    case 281:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 282:
      if (lookahead == 'f') ADVANCE(306);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_default_DASHto);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 285:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 286:
      if (lookahead == 'g') ADVANCE(309);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_define_DASHmap);
      END_STATE();
    case 288:
      if (lookahead == '-') ADVANCE(310);
      END_STATE();
    case 289:
      if (lookahead == 'v') ADVANCE(311);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 291:
      if (lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_impl_DASHtrait);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_map_DASHinsert);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 298:
      if (lookahead == '8') ADVANCE(318);
      END_STATE();
    case 299:
      if (lookahead == '-') ADVANCE(319);
      END_STATE();
    case 300:
      if (lookahead == '?') ADVANCE(320);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_as_DASHcontract);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 304:
      if (lookahead == 'h') ADVANCE(323);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_contract_DASHof);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 308:
      if (lookahead == '-') ADVANCE(326);
      END_STATE();
    case 309:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 310:
      if (lookahead == 'f') ADVANCE(328);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 312:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 313:
      if (lookahead == '-') ADVANCE(331);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 315:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_string_DASHutf8);
      END_STATE();
    case 319:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_tx_DASHsponsor_QMARK);
      END_STATE();
    case 321:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_block_DASHheight);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(339);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(340);
      END_STATE();
    case 326:
      if (lookahead == 'v') ADVANCE(341);
      END_STATE();
    case 327:
      if (lookahead == 'b') ADVANCE(342);
      END_STATE();
    case 328:
      if (lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 330:
      if (lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_define_DASHtrait);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_string_DASHascii);
      END_STATE();
    case 336:
      if (lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_unwrap_DASHpanic);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 339:
      if (lookahead == '?') ADVANCE(351);
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 341:
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 342:
      if (lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_define_DASHpublic);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_is_DASHin_DASHregtest);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_is_DASHin_mainnet);
      END_STATE();
    case 349:
      if (lookahead == 'p') ADVANCE(359);
      END_STATE();
    case 350:
      if (lookahead == 'g') ADVANCE(360);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_contract_DASHcall_QMARK);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 356:
      if (lookahead == 'g') ADVANCE(365);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_define_DASHprivate);
      END_STATE();
    case 358:
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 359:
      if (lookahead == 'p') ADVANCE(367);
      END_STATE();
    case 360:
      if (lookahead == 'h') ADVANCE(368);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_contract_DASHcaller);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_define_DASHconstant);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_define_DASHdata_DASHvar);
      END_STATE();
    case 364:
      if (lookahead == '-') ADVANCE(369);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 366:
      if (lookahead == 'y') ADVANCE(371);
      END_STATE();
    case 367:
      if (lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 368:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 369:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 370:
      if (lookahead == 'b') ADVANCE(375);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_define_DASHread_DASHonly);
      END_STATE();
    case 372:
      if (lookahead == 'y') ADVANCE(376);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_burn_DASHblock_DASHheight);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(378);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_stx_DASHliquid_DASHsupply);
      END_STATE();
    case 377:
      if (lookahead == 'k') ADVANCE(379);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 380:
      if (lookahead == '-') ADVANCE(382);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 382:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_define_DASHfungible_DASHtoken);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == 'k') ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_define_DASHnon_DASHfungible_DASHtoken);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 10},
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
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
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
    [anon_sym_concat] = ACTIONS(1),
    [anon_sym_contract_DASHcall_QMARK] = ACTIONS(1),
    [anon_sym_contract_DASHof] = ACTIONS(1),
    [anon_sym_default_DASHto] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_fold] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_is_DASHeq] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_map_DASHget_QMARK] = ACTIONS(1),
    [anon_sym_map_DASHinsert] = ACTIONS(1),
    [anon_sym_map_DASHset] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_merge] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_try_BANG] = ACTIONS(1),
    [anon_sym_unwrap_BANG] = ACTIONS(1),
    [anon_sym_unwrap_DASHpanic] = ACTIONS(1),
    [anon_sym_var_DASHget] = ACTIONS(1),
    [anon_sym_var_DASHset] = ACTIONS(1),
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
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_define_DASHtrait,
    ACTIONS(13), 1,
      anon_sym_impl_DASHtrait,
    ACTIONS(15), 1,
      anon_sym_use_DASHtrait,
    ACTIONS(17), 1,
      anon_sym_define_DASHfungible_DASHtoken,
    ACTIONS(19), 1,
      anon_sym_define_DASHnon_DASHfungible_DASHtoken,
    ACTIONS(21), 1,
      anon_sym_define_DASHconstant,
    ACTIONS(23), 1,
      anon_sym_define_DASHdata_DASHvar,
    ACTIONS(25), 1,
      anon_sym_define_DASHmap,
    ACTIONS(29), 1,
      anon_sym_let,
    STATE(7), 1,
      sym_native_identifier,
    ACTIONS(27), 3,
      anon_sym_define_DASHread_DASHonly,
      anon_sym_define_DASHprivate,
      anon_sym_define_DASHpublic,
    ACTIONS(33), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 29,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_mod,
      anon_sym_and,
      anon_sym_as_DASHcontract,
      anon_sym_asserts_BANG,
      anon_sym_begin,
      anon_sym_concat,
      anon_sym_contract_DASHcall_QMARK,
      anon_sym_contract_DASHof,
      anon_sym_default_DASHto,
      anon_sym_if,
      anon_sym_filter,
      anon_sym_fold,
      anon_sym_get,
      anon_sym_is_DASHeq,
      anon_sym_map,
      anon_sym_map_DASHget_QMARK,
      anon_sym_map_DASHinsert,
      anon_sym_map_DASHset,
      anon_sym_match,
      anon_sym_merge,
      anon_sym_not,
      anon_sym_print,
      anon_sym_try_BANG,
      anon_sym_unwrap_BANG,
      anon_sym_unwrap_DASHpanic,
      anon_sym_var_DASHget,
      anon_sym_var_DASHset,
  [81] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_0x,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      sym_utf8_string_lit,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(59), 9,
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
  [159] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(72), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      anon_sym_DASH,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_0x,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym_utf8_string_lit,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(96), 9,
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
  [237] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_0x,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      sym_utf8_string_lit,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(59), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(6), 18,
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
  [315] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_0x,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      sym_utf8_string_lit,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(59), 9,
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
  [393] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_0x,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 1,
      sym_utf8_string_lit,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(59), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(9), 18,
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
  [471] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_0x,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    ACTIONS(117), 1,
      sym_utf8_string_lit,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(59), 9,
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
  [549] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_0x,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      sym_utf8_string_lit,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(59), 9,
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
  [627] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_0x,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      sym_utf8_string_lit,
    STATE(35), 1,
      aux_sym_let_expression_repeat2,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(121), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(62), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
    ACTIONS(59), 9,
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
  [706] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_0x,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      sym_utf8_string_lit,
    STATE(13), 1,
      aux_sym_let_expression_repeat2,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(125), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(62), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
    ACTIONS(59), 9,
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
  [785] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(129), 1,
      anon_sym_list,
    ACTIONS(131), 1,
      anon_sym_some,
    STATE(5), 1,
      sym_list_lit_token,
    STATE(7), 1,
      sym_native_identifier,
    ACTIONS(133), 2,
      anon_sym_ok,
      anon_sym_err,
    ACTIONS(33), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 29,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_mod,
      anon_sym_and,
      anon_sym_as_DASHcontract,
      anon_sym_asserts_BANG,
      anon_sym_begin,
      anon_sym_concat,
      anon_sym_contract_DASHcall_QMARK,
      anon_sym_contract_DASHof,
      anon_sym_default_DASHto,
      anon_sym_if,
      anon_sym_filter,
      anon_sym_fold,
      anon_sym_get,
      anon_sym_is_DASHeq,
      anon_sym_map,
      anon_sym_map_DASHget_QMARK,
      anon_sym_map_DASHinsert,
      anon_sym_map_DASHset,
      anon_sym_match,
      anon_sym_merge,
      anon_sym_not,
      anon_sym_print,
      anon_sym_try_BANG,
      anon_sym_unwrap_BANG,
      anon_sym_unwrap_DASHpanic,
      anon_sym_var_DASHget,
      anon_sym_var_DASHset,
  [850] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_0x,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_utf8_string_lit,
    STATE(35), 1,
      aux_sym_let_expression_repeat2,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(135), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(62), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
    ACTIONS(59), 9,
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
  [929] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_0x,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_utf8_string_lit,
    STATE(10), 1,
      aux_sym_let_expression_repeat2,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(135), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(62), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
    ACTIONS(59), 9,
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
  [1008] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_0x,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      sym_utf8_string_lit,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(139), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(59), 9,
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
  [1082] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_0x,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      sym_utf8_string_lit,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(59), 9,
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
  [1156] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_0x,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_utf8_string_lit,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(147), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(59), 9,
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
  [1230] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_0x,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      sym_utf8_string_lit,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(151), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(59), 9,
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
  [1304] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_0x,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_utf8_string_lit,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(155), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(59), 9,
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
  [1378] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_0x,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_utf8_string_lit,
    STATE(45), 1,
      sym_standard_principal_lit,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(159), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(59), 9,
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
  [1452] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_let,
    STATE(7), 1,
      sym_native_identifier,
    ACTIONS(33), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 29,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_mod,
      anon_sym_and,
      anon_sym_as_DASHcontract,
      anon_sym_asserts_BANG,
      anon_sym_begin,
      anon_sym_concat,
      anon_sym_contract_DASHcall_QMARK,
      anon_sym_contract_DASHof,
      anon_sym_default_DASHto,
      anon_sym_if,
      anon_sym_filter,
      anon_sym_fold,
      anon_sym_get,
      anon_sym_is_DASHeq,
      anon_sym_map,
      anon_sym_map_DASHget_QMARK,
      anon_sym_map_DASHinsert,
      anon_sym_map_DASHset,
      anon_sym_match,
      anon_sym_merge,
      anon_sym_not,
      anon_sym_print,
      anon_sym_try_BANG,
      anon_sym_unwrap_BANG,
      anon_sym_unwrap_DASHpanic,
      anon_sym_var_DASHget,
      anon_sym_var_DASHset,
  [1504] = 3,
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
  [1544] = 3,
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
  [1584] = 3,
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
  [1624] = 3,
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
  [1664] = 3,
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
  [1704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 12,
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
    ACTIONS(183), 20,
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
  [1744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 12,
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
    ACTIONS(187), 20,
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
  [1784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 12,
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
    ACTIONS(191), 20,
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
  [1824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 12,
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
    ACTIONS(195), 20,
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
  [1864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 12,
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
    ACTIONS(199), 20,
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
  [1904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 12,
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
    ACTIONS(203), 20,
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
  [1944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 12,
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
    ACTIONS(207), 20,
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
  [1984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 12,
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
    ACTIONS(211), 20,
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
  [2024] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    STATE(35), 6,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      aux_sym_let_expression_repeat2,
    ACTIONS(220), 7,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(215), 16,
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
  [2066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 12,
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
    ACTIONS(224), 16,
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
  [2102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 12,
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
    ACTIONS(228), 16,
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
  [2138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 12,
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
    ACTIONS(232), 16,
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
  [2174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 12,
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
    ACTIONS(236), 16,
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
  [2210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 12,
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
    ACTIONS(240), 16,
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
  [2246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 12,
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
  [2282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 12,
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
  [2318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 11,
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
    ACTIONS(250), 16,
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
  [2353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 11,
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
    ACTIONS(254), 16,
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
  [2388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(260), 10,
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
  [2425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 11,
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
    ACTIONS(264), 16,
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
  [2460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 11,
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
    ACTIONS(268), 16,
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
  [2495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 11,
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
    ACTIONS(272), 16,
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
  [2530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 11,
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
    ACTIONS(276), 16,
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
  [2565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 11,
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
    ACTIONS(280), 16,
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
  [2600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 11,
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
    ACTIONS(284), 16,
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
  [2635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 11,
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
    ACTIONS(288), 16,
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
  [2670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 11,
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
    ACTIONS(292), 16,
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
  [2705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 11,
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
    ACTIONS(296), 16,
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
  [2740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 11,
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
    ACTIONS(300), 16,
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
  [2775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 11,
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
    ACTIONS(304), 16,
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
  [2810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 11,
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
    ACTIONS(308), 16,
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
  [2845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 11,
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
    ACTIONS(312), 16,
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
  [2880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 11,
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
    ACTIONS(316), 16,
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
    ACTIONS(322), 11,
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
    ACTIONS(320), 16,
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
  [2950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 11,
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
    ACTIONS(324), 16,
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
  [2985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    ACTIONS(330), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(328), 16,
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
  [3020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(334), 16,
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
  [3053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(338), 16,
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
  [3086] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    ACTIONS(346), 1,
      anon_sym_LT,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(67), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(83), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(348), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(28), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3126] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      anon_sym_LT,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(65), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(83), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(348), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(28), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3166] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(67), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(83), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(362), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(28), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3206] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    STATE(134), 2,
      sym_fungible_token_definition,
      sym_non_fungible_token_definition,
    STATE(69), 15,
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
  [3237] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(134), 2,
      sym_fungible_token_definition,
      sym_non_fungible_token_definition,
    STATE(69), 15,
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
  [3268] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      anon_sym_LT,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_parameter_type,
    STATE(83), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(348), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(28), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3304] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_tuple_type,
    STATE(155), 1,
      sym_native_type,
    ACTIONS(348), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(28), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [3335] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_tuple_type,
    STATE(155), 1,
      sym_native_type,
    ACTIONS(348), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(28), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [3366] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_native_type,
    ACTIONS(348), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(28), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3395] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(202), 1,
      sym_native_type,
    ACTIONS(348), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(28), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3424] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_native_type,
    ACTIONS(348), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(28), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3453] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(137), 1,
      sym_native_type,
    ACTIONS(348), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(28), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3482] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_native_type,
    ACTIONS(348), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(28), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3511] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_tuple_type,
    STATE(72), 1,
      sym_native_type,
    ACTIONS(348), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(28), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [3542] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_native_type,
    ACTIONS(348), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(28), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3571] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_native_type,
    ACTIONS(348), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(28), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3600] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_native_type,
    ACTIONS(348), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(28), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3629] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym_native_type,
    ACTIONS(348), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(28), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3658] = 2,
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
  [3672] = 2,
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
  [3686] = 8,
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
  [3711] = 3,
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
  [3725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(87), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [3739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(88), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(92), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3767] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    STATE(186), 1,
      sym_contract_principal_lit,
    STATE(187), 1,
      sym_standard_principal_lit,
  [3783] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    STATE(175), 1,
      sym_contract_principal_lit,
    STATE(187), 1,
      sym_standard_principal_lit,
  [3799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(92), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(94), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [3827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(87), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [3841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(96), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(88), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(89), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_identifier,
    STATE(103), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(115), 1,
      sym__tuple_lit_pair,
  [3896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_tuple_type_repeat1,
    STATE(177), 1,
      sym__tuple_type_pair,
  [3909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_tuple_type_repeat1,
    STATE(127), 1,
      sym__tuple_type_pair,
  [3948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_identifier,
    STATE(103), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(160), 1,
      sym__tuple_lit_pair,
  [3961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_identifier,
    STATE(98), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(110), 1,
      sym__tuple_lit_pair,
  [3987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
    STATE(102), 1,
      aux_sym_tuple_type_repeat1,
    STATE(121), 1,
      sym__tuple_type_pair,
  [4000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
  [4026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
  [4036] = 3,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
    ACTIONS(463), 1,
      aux_sym_ascii_string_lit_token1,
    ACTIONS(465), 1,
      sym_comment,
  [4046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
  [4064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
  [4082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
  [4132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_function_signature,
  [4142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
  [4168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
  [4186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
  [4228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_identifier,
  [4251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
  [4258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_uint,
  [4265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
  [4272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
  [4279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
  [4286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym_identifier,
  [4293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
  [4300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
  [4307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
  [4314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
  [4321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
  [4328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
  [4335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
  [4342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
  [4349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
  [4356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym_identifier,
  [4363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
  [4370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      ts_builtin_sym_end,
  [4377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
  [4384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
  [4391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
  [4398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COLON,
  [4405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      aux_sym_buffer_type_token1,
  [4412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym_buffer_type_token1,
  [4419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
  [4426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      aux_sym_buffer_type_token1,
  [4433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      aux_sym_buffer_type_token1,
  [4440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym_identifier,
  [4447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
  [4454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
  [4461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
  [4468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
  [4475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_DQUOTE,
  [4482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COLON,
  [4489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym_identifier,
  [4496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [4503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
  [4510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
  [4517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
  [4524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_DOT,
  [4531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym_identifier,
  [4538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
  [4545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym_identifier,
  [4552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
  [4559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      aux_sym_buffer_lit_token1,
  [4566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      aux_sym_buffer_type_token1,
  [4573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_identifier,
  [4580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
  [4587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
  [4594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
  [4601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_DOT,
  [4608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_DOT,
  [4615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      aux_sym_standard_principal_lit_token1,
  [4622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
  [4629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym_identifier,
  [4636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
  [4643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
  [4650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_GT,
  [4657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
  [4664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym_identifier,
  [4671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
  [4678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      sym_identifier,
  [4685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_identifier,
  [4692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      sym_identifier,
  [4699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_identifier,
  [4706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym_identifier,
  [4713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
  [4720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 159,
  [SMALL_STATE(5)] = 237,
  [SMALL_STATE(6)] = 315,
  [SMALL_STATE(7)] = 393,
  [SMALL_STATE(8)] = 471,
  [SMALL_STATE(9)] = 549,
  [SMALL_STATE(10)] = 627,
  [SMALL_STATE(11)] = 706,
  [SMALL_STATE(12)] = 785,
  [SMALL_STATE(13)] = 850,
  [SMALL_STATE(14)] = 929,
  [SMALL_STATE(15)] = 1008,
  [SMALL_STATE(16)] = 1082,
  [SMALL_STATE(17)] = 1156,
  [SMALL_STATE(18)] = 1230,
  [SMALL_STATE(19)] = 1304,
  [SMALL_STATE(20)] = 1378,
  [SMALL_STATE(21)] = 1452,
  [SMALL_STATE(22)] = 1504,
  [SMALL_STATE(23)] = 1544,
  [SMALL_STATE(24)] = 1584,
  [SMALL_STATE(25)] = 1624,
  [SMALL_STATE(26)] = 1664,
  [SMALL_STATE(27)] = 1704,
  [SMALL_STATE(28)] = 1744,
  [SMALL_STATE(29)] = 1784,
  [SMALL_STATE(30)] = 1824,
  [SMALL_STATE(31)] = 1864,
  [SMALL_STATE(32)] = 1904,
  [SMALL_STATE(33)] = 1944,
  [SMALL_STATE(34)] = 1984,
  [SMALL_STATE(35)] = 2024,
  [SMALL_STATE(36)] = 2066,
  [SMALL_STATE(37)] = 2102,
  [SMALL_STATE(38)] = 2138,
  [SMALL_STATE(39)] = 2174,
  [SMALL_STATE(40)] = 2210,
  [SMALL_STATE(41)] = 2246,
  [SMALL_STATE(42)] = 2282,
  [SMALL_STATE(43)] = 2318,
  [SMALL_STATE(44)] = 2353,
  [SMALL_STATE(45)] = 2388,
  [SMALL_STATE(46)] = 2425,
  [SMALL_STATE(47)] = 2460,
  [SMALL_STATE(48)] = 2495,
  [SMALL_STATE(49)] = 2530,
  [SMALL_STATE(50)] = 2565,
  [SMALL_STATE(51)] = 2600,
  [SMALL_STATE(52)] = 2635,
  [SMALL_STATE(53)] = 2670,
  [SMALL_STATE(54)] = 2705,
  [SMALL_STATE(55)] = 2740,
  [SMALL_STATE(56)] = 2775,
  [SMALL_STATE(57)] = 2810,
  [SMALL_STATE(58)] = 2845,
  [SMALL_STATE(59)] = 2880,
  [SMALL_STATE(60)] = 2915,
  [SMALL_STATE(61)] = 2950,
  [SMALL_STATE(62)] = 2985,
  [SMALL_STATE(63)] = 3020,
  [SMALL_STATE(64)] = 3053,
  [SMALL_STATE(65)] = 3086,
  [SMALL_STATE(66)] = 3126,
  [SMALL_STATE(67)] = 3166,
  [SMALL_STATE(68)] = 3206,
  [SMALL_STATE(69)] = 3237,
  [SMALL_STATE(70)] = 3268,
  [SMALL_STATE(71)] = 3304,
  [SMALL_STATE(72)] = 3335,
  [SMALL_STATE(73)] = 3366,
  [SMALL_STATE(74)] = 3395,
  [SMALL_STATE(75)] = 3424,
  [SMALL_STATE(76)] = 3453,
  [SMALL_STATE(77)] = 3482,
  [SMALL_STATE(78)] = 3511,
  [SMALL_STATE(79)] = 3542,
  [SMALL_STATE(80)] = 3571,
  [SMALL_STATE(81)] = 3600,
  [SMALL_STATE(82)] = 3629,
  [SMALL_STATE(83)] = 3658,
  [SMALL_STATE(84)] = 3672,
  [SMALL_STATE(85)] = 3686,
  [SMALL_STATE(86)] = 3711,
  [SMALL_STATE(87)] = 3725,
  [SMALL_STATE(88)] = 3739,
  [SMALL_STATE(89)] = 3753,
  [SMALL_STATE(90)] = 3767,
  [SMALL_STATE(91)] = 3783,
  [SMALL_STATE(92)] = 3799,
  [SMALL_STATE(93)] = 3813,
  [SMALL_STATE(94)] = 3827,
  [SMALL_STATE(95)] = 3841,
  [SMALL_STATE(96)] = 3855,
  [SMALL_STATE(97)] = 3869,
  [SMALL_STATE(98)] = 3883,
  [SMALL_STATE(99)] = 3896,
  [SMALL_STATE(100)] = 3909,
  [SMALL_STATE(101)] = 3922,
  [SMALL_STATE(102)] = 3935,
  [SMALL_STATE(103)] = 3948,
  [SMALL_STATE(104)] = 3961,
  [SMALL_STATE(105)] = 3974,
  [SMALL_STATE(106)] = 3987,
  [SMALL_STATE(107)] = 4000,
  [SMALL_STATE(108)] = 4008,
  [SMALL_STATE(109)] = 4016,
  [SMALL_STATE(110)] = 4026,
  [SMALL_STATE(111)] = 4036,
  [SMALL_STATE(112)] = 4046,
  [SMALL_STATE(113)] = 4054,
  [SMALL_STATE(114)] = 4064,
  [SMALL_STATE(115)] = 4072,
  [SMALL_STATE(116)] = 4082,
  [SMALL_STATE(117)] = 4090,
  [SMALL_STATE(118)] = 4098,
  [SMALL_STATE(119)] = 4106,
  [SMALL_STATE(120)] = 4114,
  [SMALL_STATE(121)] = 4122,
  [SMALL_STATE(122)] = 4132,
  [SMALL_STATE(123)] = 4142,
  [SMALL_STATE(124)] = 4150,
  [SMALL_STATE(125)] = 4158,
  [SMALL_STATE(126)] = 4168,
  [SMALL_STATE(127)] = 4176,
  [SMALL_STATE(128)] = 4186,
  [SMALL_STATE(129)] = 4194,
  [SMALL_STATE(130)] = 4202,
  [SMALL_STATE(131)] = 4210,
  [SMALL_STATE(132)] = 4218,
  [SMALL_STATE(133)] = 4228,
  [SMALL_STATE(134)] = 4236,
  [SMALL_STATE(135)] = 4244,
  [SMALL_STATE(136)] = 4251,
  [SMALL_STATE(137)] = 4258,
  [SMALL_STATE(138)] = 4265,
  [SMALL_STATE(139)] = 4272,
  [SMALL_STATE(140)] = 4279,
  [SMALL_STATE(141)] = 4286,
  [SMALL_STATE(142)] = 4293,
  [SMALL_STATE(143)] = 4300,
  [SMALL_STATE(144)] = 4307,
  [SMALL_STATE(145)] = 4314,
  [SMALL_STATE(146)] = 4321,
  [SMALL_STATE(147)] = 4328,
  [SMALL_STATE(148)] = 4335,
  [SMALL_STATE(149)] = 4342,
  [SMALL_STATE(150)] = 4349,
  [SMALL_STATE(151)] = 4356,
  [SMALL_STATE(152)] = 4363,
  [SMALL_STATE(153)] = 4370,
  [SMALL_STATE(154)] = 4377,
  [SMALL_STATE(155)] = 4384,
  [SMALL_STATE(156)] = 4391,
  [SMALL_STATE(157)] = 4398,
  [SMALL_STATE(158)] = 4405,
  [SMALL_STATE(159)] = 4412,
  [SMALL_STATE(160)] = 4419,
  [SMALL_STATE(161)] = 4426,
  [SMALL_STATE(162)] = 4433,
  [SMALL_STATE(163)] = 4440,
  [SMALL_STATE(164)] = 4447,
  [SMALL_STATE(165)] = 4454,
  [SMALL_STATE(166)] = 4461,
  [SMALL_STATE(167)] = 4468,
  [SMALL_STATE(168)] = 4475,
  [SMALL_STATE(169)] = 4482,
  [SMALL_STATE(170)] = 4489,
  [SMALL_STATE(171)] = 4496,
  [SMALL_STATE(172)] = 4503,
  [SMALL_STATE(173)] = 4510,
  [SMALL_STATE(174)] = 4517,
  [SMALL_STATE(175)] = 4524,
  [SMALL_STATE(176)] = 4531,
  [SMALL_STATE(177)] = 4538,
  [SMALL_STATE(178)] = 4545,
  [SMALL_STATE(179)] = 4552,
  [SMALL_STATE(180)] = 4559,
  [SMALL_STATE(181)] = 4566,
  [SMALL_STATE(182)] = 4573,
  [SMALL_STATE(183)] = 4580,
  [SMALL_STATE(184)] = 4587,
  [SMALL_STATE(185)] = 4594,
  [SMALL_STATE(186)] = 4601,
  [SMALL_STATE(187)] = 4608,
  [SMALL_STATE(188)] = 4615,
  [SMALL_STATE(189)] = 4622,
  [SMALL_STATE(190)] = 4629,
  [SMALL_STATE(191)] = 4636,
  [SMALL_STATE(192)] = 4643,
  [SMALL_STATE(193)] = 4650,
  [SMALL_STATE(194)] = 4657,
  [SMALL_STATE(195)] = 4664,
  [SMALL_STATE(196)] = 4671,
  [SMALL_STATE(197)] = 4678,
  [SMALL_STATE(198)] = 4685,
  [SMALL_STATE(199)] = 4692,
  [SMALL_STATE(200)] = 4699,
  [SMALL_STATE(201)] = 4706,
  [SMALL_STATE(202)] = 4713,
  [SMALL_STATE(203)] = 4720,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 4, 0, 12),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 4, 0, 12),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 4, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 4, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_type, 5, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_type, 5, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_type, 5, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 5, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3, 0, 6),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3, 0, 6),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_native_type, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_type, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_utf8_string_type, 4, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_string_type, 4, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4, 0, 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4, 0, 6),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5, 0, 14),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5, 0, 14),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_type, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_type, 4, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_type, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_type, 4, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4, 0, 14),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4, 0, 14),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_expression_repeat2, 2, 0, 0),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 2, 0, 0), SHIFT_REPEAT(21),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_function_call, 3, 0, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_function_call, 3, 0, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 8, 0, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 8, 0, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 6, 0, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 6, 0, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_function_call, 4, 0, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_function_call, 4, 0, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_native_form, 4, 0, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_native_form, 4, 0, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 7, 0, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 7, 0, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_native_form, 3, 0, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_native_form, 3, 0, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 3, 0, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 3, 0, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_principal_lit, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_principal_lit, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_lit, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_lit, 2, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 5, 0, 10),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 5, 0, 10),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 2, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_some_lit, 4, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_some_lit, 4, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_lit, 4, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_lit, 4, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 4, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 4, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, 0, 10),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, 0, 10),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, 0, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, 0, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_expression_repeat2, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 1, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_native_identifier, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_identifier, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit_token, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit_token, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type, 1, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_type, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat1, 2, 0, 0),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, 0, 7), SHIFT_REPEAT(157),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, 0, 4), SHIFT_REPEAT(169),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, 0, 7), SHIFT_REPEAT(151),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, 0, 7),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_implementation, 6, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, 0, 5),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_type_pair, 3, 0, 13),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, 0, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 7, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_binding, 4, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 6, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_fungible_token_definition, 5, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fungible_token_definition, 4, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_lit_pair, 3, 0, 9),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 4, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 4, 0, 15),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 7, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_definition, 6, 0, 8),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_usage, 7, 0, 11),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 6, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_definition, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 4, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 3, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [557] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
