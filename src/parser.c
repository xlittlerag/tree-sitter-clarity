#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 197
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
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
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
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
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
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
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
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 9},
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
    [sym_source] = STATE(146),
    [sym__declaration] = STATE(64),
    [sym_trait_definition] = STATE(64),
    [sym_trait_implementation] = STATE(64),
    [sym_trait_usage] = STATE(64),
    [sym_token_definition] = STATE(64),
    [sym_fungible_token_definition] = STATE(127),
    [sym_non_fungible_token_definition] = STATE(127),
    [sym_constant_definition] = STATE(64),
    [sym_variable_definition] = STATE(64),
    [sym_mapping_definition] = STATE(64),
    [sym_function_definition] = STATE(64),
    [sym_common_statement] = STATE(64),
    [sym_let_statement] = STATE(64),
    [aux_sym_source_repeat1] = STATE(64),
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
    STATE(44), 1,
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
    STATE(44), 1,
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
  [144] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(52), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_DASH,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_0x,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_utf8_string_lit,
    STATE(44), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(76), 6,
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
  [216] = 16,
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
    ACTIONS(39), 1,
      sym_utf8_string_lit,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
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
    STATE(44), 1,
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
    STATE(3), 15,
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
    STATE(44), 1,
      sym_standard_principal_lit,
    STATE(53), 1,
      aux_sym_let_statement_repeat2,
    STATE(55), 1,
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
    STATE(178), 13,
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
    STATE(44), 1,
      sym_standard_principal_lit,
    STATE(53), 1,
      aux_sym_let_statement_repeat2,
    STATE(55), 1,
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
    ACTIONS(97), 1,
      sym_utf8_string_lit,
    STATE(8), 1,
      aux_sym_let_statement_repeat2,
    STATE(44), 1,
      sym_standard_principal_lit,
    STATE(55), 1,
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
    STATE(132), 13,
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
    ACTIONS(93), 1,
      sym_utf8_string_lit,
    STATE(7), 1,
      aux_sym_let_statement_repeat2,
    STATE(44), 1,
      sym_standard_principal_lit,
    STATE(55), 1,
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
    STATE(44), 1,
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
    STATE(44), 1,
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
    STATE(120), 14,
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
    STATE(44), 1,
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
    STATE(166), 14,
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
    STATE(44), 1,
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
    STATE(138), 14,
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
    STATE(44), 1,
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
    STATE(135), 14,
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
    STATE(44), 1,
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
    STATE(150), 14,
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
    ACTIONS(167), 12,
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
    ACTIONS(169), 13,
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
  [1500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 12,
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
    ACTIONS(173), 13,
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
  [1533] = 3,
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
  [1566] = 3,
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
  [1599] = 3,
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
  [1632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 11,
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
    ACTIONS(187), 13,
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
  [1664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 11,
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
    ACTIONS(191), 13,
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
  [1696] = 3,
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
  [1728] = 3,
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
  [1760] = 3,
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
  [1792] = 3,
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
  [1824] = 3,
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
  [1856] = 3,
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
  [1888] = 3,
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
  [1920] = 3,
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
  [1952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 11,
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
  [1984] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(233), 10,
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
    ACTIONS(231), 13,
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
  [2018] = 3,
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
  [2050] = 3,
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
  [2082] = 3,
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
  [2114] = 3,
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
  [2146] = 3,
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
  [2178] = 3,
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
  [2210] = 3,
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
  [2242] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_define_DASHtrait,
    ACTIONS(269), 1,
      anon_sym_impl_DASHtrait,
    ACTIONS(271), 1,
      anon_sym_use_DASHtrait,
    ACTIONS(273), 1,
      anon_sym_define_DASHfungible_DASHtoken,
    ACTIONS(275), 1,
      anon_sym_define_DASHnon_DASHfungible_DASHtoken,
    ACTIONS(277), 1,
      anon_sym_define_DASHconstant,
    ACTIONS(279), 1,
      anon_sym_define_DASHdata_DASHvar,
    ACTIONS(281), 1,
      anon_sym_define_DASHmap,
    ACTIONS(285), 1,
      anon_sym_let,
    ACTIONS(287), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(2), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(283), 3,
      anon_sym_define_DASHread_DASHonly,
      anon_sym_define_DASHprivate,
      anon_sym_define_DASHpublic,
    ACTIONS(289), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2299] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    STATE(53), 2,
      sym_common_statement,
      aux_sym_let_statement_repeat2,
    ACTIONS(298), 7,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(293), 13,
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
  [2334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(300), 13,
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
  [2364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    ACTIONS(306), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(304), 13,
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
  [2396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(310), 13,
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
  [2426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(314), 13,
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
  [2456] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    ACTIONS(322), 1,
      anon_sym_LT,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    ACTIONS(324), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(59), 4,
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
  [2494] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_LT,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    ACTIONS(324), 4,
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
  [2532] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(335), 1,
      anon_sym_LT,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 4,
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
  [2570] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_LT,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    STATE(174), 3,
      sym__parameter_type,
      sym_trait_type,
      sym_type_name,
    ACTIONS(324), 4,
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
  [2604] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_let,
    ACTIONS(344), 1,
      anon_sym_list,
    ACTIONS(346), 1,
      anon_sym_some,
    STATE(6), 1,
      sym_list_lit_token,
    ACTIONS(287), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(348), 2,
      anon_sym_ok,
      anon_sym_err,
    STATE(2), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(289), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2645] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(127), 2,
      sym_fungible_token_definition,
      sym_non_fungible_token_definition,
    STATE(63), 12,
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
  [2673] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    STATE(127), 2,
      sym_fungible_token_definition,
      sym_non_fungible_token_definition,
    STATE(63), 12,
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
  [2701] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_type_name,
    ACTIONS(324), 4,
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
  [2730] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_tuple_type,
    STATE(149), 1,
      sym_type_name,
    ACTIONS(324), 4,
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
  [2761] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_type_name,
    ACTIONS(324), 4,
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
  [2790] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_type_name,
    ACTIONS(324), 4,
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
  [2819] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    STATE(195), 1,
      sym_type_name,
    ACTIONS(324), 4,
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
  [2848] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_tuple_type,
    STATE(73), 1,
      sym_type_name,
    ACTIONS(324), 4,
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
  [2879] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_type_name,
    ACTIONS(324), 4,
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
  [2908] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    STATE(184), 1,
      sym_type_name,
    ACTIONS(324), 4,
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
  [2937] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_tuple_type,
    STATE(149), 1,
      sym_type_name,
    ACTIONS(324), 4,
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
  [2968] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_type_name,
    ACTIONS(324), 4,
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
  [2997] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_type_name,
    ACTIONS(324), 4,
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
  [3026] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym_type_name,
    ACTIONS(324), 4,
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
  [3055] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_let,
    ACTIONS(287), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(2), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(289), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3083] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_identifier,
    ACTIONS(287), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(2), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(289), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      anon_sym_LBRACE,
  [3122] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_buff,
    ACTIONS(363), 1,
      anon_sym_string_DASHascii,
    ACTIONS(365), 1,
      anon_sym_string_DASHutf8,
    ACTIONS(367), 1,
      anon_sym_list,
    ACTIONS(369), 1,
      anon_sym_optional,
    ACTIONS(371), 1,
      anon_sym_tuple,
    ACTIONS(373), 1,
      anon_sym_response,
  [3147] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(179), 1,
      sym_contract_principal_lit,
    STATE(181), 1,
      sym_standard_principal_lit,
  [3163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(82), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(83), 2,
      sym_let_variable_definition,
      aux_sym_let_statement_repeat1,
  [3191] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(168), 1,
      sym_contract_principal_lit,
    STATE(181), 1,
      sym_standard_principal_lit,
  [3207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(89), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(86), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(91), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(83), 2,
      sym_let_variable_definition,
      aux_sym_let_statement_repeat1,
  [3263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(82), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(88), 2,
      sym_let_variable_definition,
      aux_sym_let_statement_repeat1,
  [3291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(86), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    STATE(165), 2,
      sym_common_statement,
      sym_let_statement,
  [3316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_identifier,
    STATE(95), 1,
      aux_sym_tuple_type_repeat1,
    STATE(123), 1,
      sym__tuple_type_pair,
  [3342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_identifier,
    STATE(95), 1,
      aux_sym_tuple_type_repeat1,
    STATE(172), 1,
      sym__tuple_type_pair,
  [3355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
    STATE(98), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(114), 1,
      sym__tuple_lit_pair,
  [3381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(112), 1,
      sym__tuple_lit_pair,
  [3394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(157), 1,
      sym__tuple_lit_pair,
  [3407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_identifier,
    STATE(94), 1,
      aux_sym_tuple_type_repeat1,
    STATE(109), 1,
      sym__tuple_type_pair,
  [3433] = 3,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      aux_sym_ascii_string_lit_token1,
    ACTIONS(435), 1,
      sym_comment,
  [3443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
  [3469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
  [3503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
  [3513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
  [3531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
  [3549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_function_signature,
  [3583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
  [3625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_identifier,
  [3664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
  [3671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
  [3678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_identifier,
  [3685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
  [3692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LPAREN,
  [3699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_uint,
  [3706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
  [3713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_identifier,
  [3720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
  [3727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
  [3734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_identifier,
  [3741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
  [3748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
  [3755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
  [3762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
  [3769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
  [3776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
  [3783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
  [3790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
  [3797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
  [3804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
  [3811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
  [3818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_COLON,
  [3825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      aux_sym_buffer_type_token1,
  [3832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      aux_sym_buffer_type_token1,
  [3839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      aux_sym_buffer_type_token1,
  [3846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      aux_sym_buffer_type_token1,
  [3853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_identifier,
  [3860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_COMMA,
  [3867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
  [3874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
  [3881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym_identifier,
  [3888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_DQUOTE,
  [3895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COLON,
  [3902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_identifier,
  [3909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
  [3916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
  [3923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
  [3930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
  [3937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_DOT,
  [3944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
  [3951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_identifier,
  [3958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      aux_sym_buffer_lit_token1,
  [3965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_COMMA,
  [3972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
  [3979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
  [3986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      aux_sym_buffer_type_token1,
  [3993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      sym_identifier,
  [4000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
  [4007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [4014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_DOT,
  [4021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_identifier,
  [4028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_DOT,
  [4035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      aux_sym_standard_principal_lit_token1,
  [4042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym_identifier,
  [4049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
  [4056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_LPAREN,
  [4063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_GT,
  [4070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
  [4077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym_identifier,
  [4084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
  [4091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym_identifier,
  [4098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_identifier,
  [4105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym_identifier,
  [4112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym_identifier,
  [4119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym_identifier,
  [4126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
  [4133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
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
  [SMALL_STATE(29)] = 1500,
  [SMALL_STATE(30)] = 1533,
  [SMALL_STATE(31)] = 1566,
  [SMALL_STATE(32)] = 1599,
  [SMALL_STATE(33)] = 1632,
  [SMALL_STATE(34)] = 1664,
  [SMALL_STATE(35)] = 1696,
  [SMALL_STATE(36)] = 1728,
  [SMALL_STATE(37)] = 1760,
  [SMALL_STATE(38)] = 1792,
  [SMALL_STATE(39)] = 1824,
  [SMALL_STATE(40)] = 1856,
  [SMALL_STATE(41)] = 1888,
  [SMALL_STATE(42)] = 1920,
  [SMALL_STATE(43)] = 1952,
  [SMALL_STATE(44)] = 1984,
  [SMALL_STATE(45)] = 2018,
  [SMALL_STATE(46)] = 2050,
  [SMALL_STATE(47)] = 2082,
  [SMALL_STATE(48)] = 2114,
  [SMALL_STATE(49)] = 2146,
  [SMALL_STATE(50)] = 2178,
  [SMALL_STATE(51)] = 2210,
  [SMALL_STATE(52)] = 2242,
  [SMALL_STATE(53)] = 2299,
  [SMALL_STATE(54)] = 2334,
  [SMALL_STATE(55)] = 2364,
  [SMALL_STATE(56)] = 2396,
  [SMALL_STATE(57)] = 2426,
  [SMALL_STATE(58)] = 2456,
  [SMALL_STATE(59)] = 2494,
  [SMALL_STATE(60)] = 2532,
  [SMALL_STATE(61)] = 2570,
  [SMALL_STATE(62)] = 2604,
  [SMALL_STATE(63)] = 2645,
  [SMALL_STATE(64)] = 2673,
  [SMALL_STATE(65)] = 2701,
  [SMALL_STATE(66)] = 2730,
  [SMALL_STATE(67)] = 2761,
  [SMALL_STATE(68)] = 2790,
  [SMALL_STATE(69)] = 2819,
  [SMALL_STATE(70)] = 2848,
  [SMALL_STATE(71)] = 2879,
  [SMALL_STATE(72)] = 2908,
  [SMALL_STATE(73)] = 2937,
  [SMALL_STATE(74)] = 2968,
  [SMALL_STATE(75)] = 2997,
  [SMALL_STATE(76)] = 3026,
  [SMALL_STATE(77)] = 3055,
  [SMALL_STATE(78)] = 3083,
  [SMALL_STATE(79)] = 3108,
  [SMALL_STATE(80)] = 3122,
  [SMALL_STATE(81)] = 3147,
  [SMALL_STATE(82)] = 3163,
  [SMALL_STATE(83)] = 3177,
  [SMALL_STATE(84)] = 3191,
  [SMALL_STATE(85)] = 3207,
  [SMALL_STATE(86)] = 3221,
  [SMALL_STATE(87)] = 3235,
  [SMALL_STATE(88)] = 3249,
  [SMALL_STATE(89)] = 3263,
  [SMALL_STATE(90)] = 3277,
  [SMALL_STATE(91)] = 3291,
  [SMALL_STATE(92)] = 3305,
  [SMALL_STATE(93)] = 3316,
  [SMALL_STATE(94)] = 3329,
  [SMALL_STATE(95)] = 3342,
  [SMALL_STATE(96)] = 3355,
  [SMALL_STATE(97)] = 3368,
  [SMALL_STATE(98)] = 3381,
  [SMALL_STATE(99)] = 3394,
  [SMALL_STATE(100)] = 3407,
  [SMALL_STATE(101)] = 3420,
  [SMALL_STATE(102)] = 3433,
  [SMALL_STATE(103)] = 3443,
  [SMALL_STATE(104)] = 3451,
  [SMALL_STATE(105)] = 3459,
  [SMALL_STATE(106)] = 3469,
  [SMALL_STATE(107)] = 3477,
  [SMALL_STATE(108)] = 3485,
  [SMALL_STATE(109)] = 3493,
  [SMALL_STATE(110)] = 3503,
  [SMALL_STATE(111)] = 3513,
  [SMALL_STATE(112)] = 3521,
  [SMALL_STATE(113)] = 3531,
  [SMALL_STATE(114)] = 3539,
  [SMALL_STATE(115)] = 3549,
  [SMALL_STATE(116)] = 3557,
  [SMALL_STATE(117)] = 3565,
  [SMALL_STATE(118)] = 3573,
  [SMALL_STATE(119)] = 3583,
  [SMALL_STATE(120)] = 3591,
  [SMALL_STATE(121)] = 3599,
  [SMALL_STATE(122)] = 3607,
  [SMALL_STATE(123)] = 3615,
  [SMALL_STATE(124)] = 3625,
  [SMALL_STATE(125)] = 3633,
  [SMALL_STATE(126)] = 3641,
  [SMALL_STATE(127)] = 3649,
  [SMALL_STATE(128)] = 3657,
  [SMALL_STATE(129)] = 3664,
  [SMALL_STATE(130)] = 3671,
  [SMALL_STATE(131)] = 3678,
  [SMALL_STATE(132)] = 3685,
  [SMALL_STATE(133)] = 3692,
  [SMALL_STATE(134)] = 3699,
  [SMALL_STATE(135)] = 3706,
  [SMALL_STATE(136)] = 3713,
  [SMALL_STATE(137)] = 3720,
  [SMALL_STATE(138)] = 3727,
  [SMALL_STATE(139)] = 3734,
  [SMALL_STATE(140)] = 3741,
  [SMALL_STATE(141)] = 3748,
  [SMALL_STATE(142)] = 3755,
  [SMALL_STATE(143)] = 3762,
  [SMALL_STATE(144)] = 3769,
  [SMALL_STATE(145)] = 3776,
  [SMALL_STATE(146)] = 3783,
  [SMALL_STATE(147)] = 3790,
  [SMALL_STATE(148)] = 3797,
  [SMALL_STATE(149)] = 3804,
  [SMALL_STATE(150)] = 3811,
  [SMALL_STATE(151)] = 3818,
  [SMALL_STATE(152)] = 3825,
  [SMALL_STATE(153)] = 3832,
  [SMALL_STATE(154)] = 3839,
  [SMALL_STATE(155)] = 3846,
  [SMALL_STATE(156)] = 3853,
  [SMALL_STATE(157)] = 3860,
  [SMALL_STATE(158)] = 3867,
  [SMALL_STATE(159)] = 3874,
  [SMALL_STATE(160)] = 3881,
  [SMALL_STATE(161)] = 3888,
  [SMALL_STATE(162)] = 3895,
  [SMALL_STATE(163)] = 3902,
  [SMALL_STATE(164)] = 3909,
  [SMALL_STATE(165)] = 3916,
  [SMALL_STATE(166)] = 3923,
  [SMALL_STATE(167)] = 3930,
  [SMALL_STATE(168)] = 3937,
  [SMALL_STATE(169)] = 3944,
  [SMALL_STATE(170)] = 3951,
  [SMALL_STATE(171)] = 3958,
  [SMALL_STATE(172)] = 3965,
  [SMALL_STATE(173)] = 3972,
  [SMALL_STATE(174)] = 3979,
  [SMALL_STATE(175)] = 3986,
  [SMALL_STATE(176)] = 3993,
  [SMALL_STATE(177)] = 4000,
  [SMALL_STATE(178)] = 4007,
  [SMALL_STATE(179)] = 4014,
  [SMALL_STATE(180)] = 4021,
  [SMALL_STATE(181)] = 4028,
  [SMALL_STATE(182)] = 4035,
  [SMALL_STATE(183)] = 4042,
  [SMALL_STATE(184)] = 4049,
  [SMALL_STATE(185)] = 4056,
  [SMALL_STATE(186)] = 4063,
  [SMALL_STATE(187)] = 4070,
  [SMALL_STATE(188)] = 4077,
  [SMALL_STATE(189)] = 4084,
  [SMALL_STATE(190)] = 4091,
  [SMALL_STATE(191)] = 4098,
  [SMALL_STATE(192)] = 4105,
  [SMALL_STATE(193)] = 4112,
  [SMALL_STATE(194)] = 4119,
  [SMALL_STATE(195)] = 4126,
  [SMALL_STATE(196)] = 4133,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(4),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(62),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(183),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(40),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(97),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(175),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(42),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(182),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(171),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(102),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(4),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(43),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_type, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_type, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_utf8_string_type, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_string_type, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_type, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4, .production_id = 14),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4, .production_id = 14),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 4, .production_id = 12),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 4, .production_id = 12),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_type, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_type, 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_type, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_type, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3, .production_id = 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3, .production_id = 6),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 6),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 6),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 7),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 7),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 8),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 8),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_statement, 3, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_common_statement, 3, .production_id = 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_statement, 4, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_common_statement, 4, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_principal_lit, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_principal_lit, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_lit, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_lit, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 5, .production_id = 10),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 5, .production_id = 10),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 3, .production_id = 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 3, .production_id = 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_some_lit, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_some_lit, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, .production_id = 10),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, .production_id = 10),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_lit, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_lit, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, .production_id = 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, .production_id = 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_statement_repeat2, 2),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat2, 2), SHIFT_REPEAT(78),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat2, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic_function, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_function, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_statement_repeat2, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat2, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit_token, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit_token, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_function, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_function, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(80),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(173),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(22),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(101),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(52),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_type, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2), SHIFT_REPEAT(139),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat1, 2), SHIFT_REPEAT(163),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat1, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2), SHIFT_REPEAT(160),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, .production_id = 7), SHIFT_REPEAT(151),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, .production_id = 4), SHIFT_REPEAT(162),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, .production_id = 7), SHIFT_REPEAT(131),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, .production_id = 7),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 6),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, .production_id = 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_usage, 7, .production_id = 11),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 7),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fungible_token_definition, 4),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_type_pair, 3, .production_id = 13),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_fungible_token_definition, 5),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 7),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_variable_definition, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_implementation, 6),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_lit_pair, 3, .production_id = 9),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 4, .production_id = 15),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 6),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_definition, 6, .production_id = 8),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_definition, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, .production_id = 5),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 4),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [531] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
