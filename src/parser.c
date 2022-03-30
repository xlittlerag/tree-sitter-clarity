#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 189
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
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
  anon_sym_define_DASHconstant = 8,
  sym_constant = 9,
  anon_sym_define_DASHdata_DASHvar = 10,
  anon_sym_define_DASHmap = 11,
  anon_sym_define_DASHread_DASHonly = 12,
  anon_sym_define_DASHprivate = 13,
  anon_sym_define_DASHpublic = 14,
  anon_sym_let = 15,
  anon_sym_LT = 16,
  anon_sym_GT = 17,
  anon_sym_int = 18,
  anon_sym_uint = 19,
  anon_sym_bool = 20,
  anon_sym_principal = 21,
  anon_sym_buff = 22,
  aux_sym_buffer_type_token1 = 23,
  anon_sym_string_DASHascii = 24,
  anon_sym_string_DASHutf8 = 25,
  anon_sym_list = 26,
  anon_sym_optional = 27,
  anon_sym_tuple = 28,
  anon_sym_LBRACE = 29,
  anon_sym_COMMA = 30,
  anon_sym_RBRACE = 31,
  anon_sym_COLON = 32,
  anon_sym_response = 33,
  anon_sym_DASH = 34,
  sym_uint_lit = 35,
  anon_sym_true = 36,
  anon_sym_false = 37,
  anon_sym_SQUOTE = 38,
  aux_sym_standard_principal_lit_token1 = 39,
  anon_sym_0x = 40,
  aux_sym_buffer_lit_token1 = 41,
  anon_sym_DQUOTE = 42,
  aux_sym_ascii_string_lit_token1 = 43,
  sym_utf8_string_lit = 44,
  anon_sym_some = 45,
  sym_none_lit = 46,
  anon_sym_ok = 47,
  anon_sym_err = 48,
  anon_sym_block_DASHheight = 49,
  anon_sym_burn_DASHblock_DASHheight = 50,
  anon_sym_tx_DASHsender = 51,
  anon_sym_contract_DASHcaller = 52,
  anon_sym_is_DASHin_DASHregtest = 53,
  anon_sym_stx_DASHliquid_DASHsupply = 54,
  anon_sym_PLUS = 55,
  anon_sym_SLASH = 56,
  anon_sym_STAR = 57,
  anon_sym_LT_EQ = 58,
  anon_sym_GT_EQ = 59,
  sym_comment = 60,
  sym_source = 61,
  sym__declaration = 62,
  sym_trait_definition = 63,
  sym_trait_implementation = 64,
  sym_trait_usage = 65,
  sym_constant_definition = 66,
  sym_variable_definition = 67,
  sym_mapping_definition = 68,
  sym_function_definition = 69,
  sym_common_statement = 70,
  sym_let_statement = 71,
  sym_let_variable_definition = 72,
  sym_function_signature = 73,
  sym_function_parameter = 74,
  sym_function_signature_for_trait = 75,
  sym__parameter_type = 76,
  sym_trait_type = 77,
  sym_type_name = 78,
  sym_buffer_type = 79,
  sym_ascii_string_type = 80,
  sym_utf8_string_type = 81,
  sym_list_type = 82,
  sym_optional_type = 83,
  sym_tuple_type_for_trait = 84,
  sym_tuple_type = 85,
  sym__tuple_type_pair = 86,
  sym_response_type = 87,
  sym__parameter = 88,
  sym__literal = 89,
  sym_int_lit = 90,
  sym_bool_lit = 91,
  sym_standard_principal_lit = 92,
  sym_contract_principal_lit = 93,
  sym_buffer_lit = 94,
  sym_ascii_string_lit = 95,
  sym_list_lit = 96,
  sym_list_lit_token = 97,
  sym_some_lit = 98,
  sym_tuple_lit = 99,
  sym__tuple_lit_pair = 100,
  sym_response_lit = 101,
  sym_global = 102,
  sym_arithmetic_function = 103,
  sym_boolean_function = 104,
  aux_sym_source_repeat1 = 105,
  aux_sym_trait_definition_repeat1 = 106,
  aux_sym_common_statement_repeat1 = 107,
  aux_sym_let_statement_repeat1 = 108,
  aux_sym_let_statement_repeat2 = 109,
  aux_sym_function_signature_repeat1 = 110,
  aux_sym_function_signature_for_trait_repeat1 = 111,
  aux_sym_tuple_type_for_trait_repeat1 = 112,
  aux_sym_tuple_type_repeat1 = 113,
  aux_sym_tuple_lit_repeat1 = 114,
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
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 131:
      if (lookahead == '-') ADVANCE(150);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 139:
      if (lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 148:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 149:
      if (lookahead == 'k') ADVANCE(167);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(173);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_principal);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 162:
      if (lookahead == 'f') ADVANCE(179);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_tx_DASHsender);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_use_DASHtrait);
      END_STATE();
    case 166:
      if (lookahead == 'h') ADVANCE(181);
      END_STATE();
    case 167:
      if (lookahead == '-') ADVANCE(182);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_define_DASHmap);
      END_STATE();
    case 172:
      if (lookahead == 'v') ADVANCE(186);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_impl_DASHtrait);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 179:
      if (lookahead == '8') ADVANCE(192);
      END_STATE();
    case 180:
      if (lookahead == '-') ADVANCE(193);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 182:
      if (lookahead == 'h') ADVANCE(195);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 185:
      if (lookahead == '-') ADVANCE(198);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 188:
      if (lookahead == '-') ADVANCE(201);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_string_DASHutf8);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_block_DASHheight);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 198:
      if (lookahead == 'v') ADVANCE(209);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_define_DASHtrait);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_string_DASHascii);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_define_DASHpublic);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_is_DASHin_DASHregtest);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 215:
      if (lookahead == 'g') ADVANCE(222);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_define_DASHprivate);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 222:
      if (lookahead == 'h') ADVANCE(228);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_contract_DASHcaller);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_define_DASHconstant);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_define_DASHdata_DASHvar);
      END_STATE();
    case 226:
      if (lookahead == 'y') ADVANCE(229);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_define_DASHread_DASHonly);
      END_STATE();
    case 230:
      if (lookahead == 'y') ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_burn_DASHblock_DASHheight);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_stx_DASHliquid_DASHsupply);
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
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 0},
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
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 11},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 9},
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
    [sym__declaration] = STATE(75),
    [sym_trait_definition] = STATE(75),
    [sym_trait_implementation] = STATE(75),
    [sym_trait_usage] = STATE(75),
    [sym_constant_definition] = STATE(75),
    [sym_variable_definition] = STATE(75),
    [sym_mapping_definition] = STATE(75),
    [sym_function_definition] = STATE(75),
    [sym_common_statement] = STATE(75),
    [sym_let_statement] = STATE(75),
    [aux_sym_source_repeat1] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(12), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(20), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_0x,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_utf8_string_lit,
    STATE(39), 1,
      sym_standard_principal_lit,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(44), 6,
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
  [72] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      sym_utf8_string_lit,
    STATE(39), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 6,
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
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      sym_utf8_string_lit,
    STATE(39), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 6,
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
  [216] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(83), 1,
      sym_utf8_string_lit,
    STATE(39), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(6), 15,
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
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      sym_utf8_string_lit,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 6,
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
  [360] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_utf8_string_lit,
    STATE(39), 1,
      sym_standard_principal_lit,
    STATE(52), 1,
      aux_sym_let_statement_repeat2,
    STATE(53), 1,
      sym_common_statement,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(140), 13,
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
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_utf8_string_lit,
    STATE(10), 1,
      aux_sym_let_statement_repeat2,
    STATE(39), 1,
      sym_standard_principal_lit,
    STATE(53), 1,
      sym_common_statement,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(140), 13,
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
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym_utf8_string_lit,
    STATE(7), 1,
      aux_sym_let_statement_repeat2,
    STATE(39), 1,
      sym_standard_principal_lit,
    STATE(53), 1,
      sym_common_statement,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(91), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(186), 13,
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
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_utf8_string_lit,
    STATE(39), 1,
      sym_standard_principal_lit,
    STATE(52), 1,
      aux_sym_let_statement_repeat2,
    STATE(53), 1,
      sym_common_statement,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(95), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(170), 13,
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
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_utf8_string_lit,
    STATE(39), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(141), 14,
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
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym_utf8_string_lit,
    STATE(39), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(103), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 6,
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
  [788] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_utf8_string_lit,
    STATE(39), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(122), 14,
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
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      sym_utf8_string_lit,
    STATE(39), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(111), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(174), 14,
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
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      sym_utf8_string_lit,
    STATE(39), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(115), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(179), 14,
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
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_utf8_string_lit,
    STATE(39), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(119), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 6,
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
  [1824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(213), 10,
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
  [1858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 11,
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
    ACTIONS(217), 13,
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
  [1890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 11,
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
    ACTIONS(221), 13,
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
  [1922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 11,
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
    ACTIONS(225), 13,
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
  [1954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 11,
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
    ACTIONS(229), 13,
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
  [1986] = 3,
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
  [2242] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    STATE(52), 2,
      sym_common_statement,
      aux_sym_let_statement_repeat2,
    ACTIONS(270), 7,
      anon_sym_DOT,
      anon_sym_LBRACE,
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
  [2277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    ACTIONS(274), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(272), 13,
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
  [2309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(278), 13,
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
  [2339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(282), 13,
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
  [2369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(286), 13,
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
  [2399] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(292), 1,
      anon_sym_define_DASHtrait,
    ACTIONS(294), 1,
      anon_sym_impl_DASHtrait,
    ACTIONS(296), 1,
      anon_sym_use_DASHtrait,
    ACTIONS(298), 1,
      anon_sym_define_DASHconstant,
    ACTIONS(300), 1,
      anon_sym_define_DASHdata_DASHvar,
    ACTIONS(302), 1,
      anon_sym_define_DASHmap,
    ACTIONS(306), 1,
      anon_sym_let,
    ACTIONS(308), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(5), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(304), 3,
      anon_sym_define_DASHread_DASHonly,
      anon_sym_define_DASHprivate,
      anon_sym_define_DASHpublic,
    ACTIONS(310), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2450] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    ACTIONS(319), 1,
      anon_sym_LT,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
    ACTIONS(322), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(58), 4,
      sym__parameter_type,
      sym_trait_type,
      sym_type_name,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(27), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2488] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(332), 1,
      anon_sym_LT,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(334), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(60), 4,
      sym__parameter_type,
      sym_trait_type,
      sym_type_name,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(27), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2526] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      anon_sym_LT,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(334), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(58), 4,
      sym__parameter_type,
      sym_trait_type,
      sym_type_name,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(27), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2564] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      anon_sym_LT,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(166), 3,
      sym__parameter_type,
      sym_trait_type,
      sym_type_name,
    ACTIONS(334), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(27), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2598] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_let,
    ACTIONS(340), 1,
      anon_sym_list,
    ACTIONS(342), 1,
      anon_sym_some,
    STATE(4), 1,
      sym_list_lit_token,
    ACTIONS(308), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(344), 2,
      anon_sym_ok,
      anon_sym_err,
    STATE(5), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(310), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2639] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_type_name,
    STATE(65), 1,
      sym_tuple_type,
    ACTIONS(334), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(27), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [2670] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_tuple_type,
    STATE(145), 1,
      sym_type_name,
    ACTIONS(334), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(27), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [2701] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_tuple_type,
    STATE(145), 1,
      sym_type_name,
    ACTIONS(334), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(27), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [2732] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      sym_type_name,
    ACTIONS(334), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(27), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2761] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym_type_name,
    ACTIONS(334), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(27), 8,
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
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_type_name,
    ACTIONS(334), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(27), 8,
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
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_type_name,
    ACTIONS(334), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(27), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2848] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym_type_name,
    ACTIONS(334), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(27), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2877] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_type_name,
    ACTIONS(334), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(27), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2906] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_type_name,
    ACTIONS(334), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(27), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2935] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_type_name,
    ACTIONS(334), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(27), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    STATE(74), 11,
      sym__declaration,
      sym_trait_definition,
      sym_trait_implementation,
      sym_trait_usage,
      sym_constant_definition,
      sym_variable_definition,
      sym_mapping_definition,
      sym_function_definition,
      sym_common_statement,
      sym_let_statement,
      aux_sym_source_repeat1,
  [2987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    STATE(74), 11,
      sym__declaration,
      sym_trait_definition,
      sym_trait_implementation,
      sym_trait_usage,
      sym_constant_definition,
      sym_variable_definition,
      sym_mapping_definition,
      sym_function_definition,
      sym_common_statement,
      sym_let_statement,
      aux_sym_source_repeat1,
  [3010] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_let,
    ACTIONS(308), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(5), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(310), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3038] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(308), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(5), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(310), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      anon_sym_LBRACE,
  [3077] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_buff,
    ACTIONS(359), 1,
      anon_sym_string_DASHascii,
    ACTIONS(361), 1,
      anon_sym_string_DASHutf8,
    ACTIONS(363), 1,
      anon_sym_list,
    ACTIONS(365), 1,
      anon_sym_optional,
    ACTIONS(367), 1,
      anon_sym_tuple,
    ACTIONS(369), 1,
      anon_sym_response,
  [3102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(80), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3116] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    STATE(159), 1,
      sym_contract_principal_lit,
    STATE(163), 1,
      sym_standard_principal_lit,
  [3132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(84), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3146] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    STATE(142), 1,
      sym_contract_principal_lit,
    STATE(163), 1,
      sym_standard_principal_lit,
  [3162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(84), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(85), 2,
      sym_let_variable_definition,
      aux_sym_let_statement_repeat1,
  [3190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(87), 2,
      sym_let_variable_definition,
      aux_sym_let_statement_repeat1,
  [3204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(85), 2,
      sym_let_variable_definition,
      aux_sym_let_statement_repeat1,
  [3218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(80), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(82), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(88), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
    STATE(96), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(114), 1,
      sym__tuple_lit_pair,
  [3299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_identifier,
    STATE(95), 1,
      aux_sym_tuple_type_repeat1,
    STATE(111), 1,
      sym__tuple_type_pair,
  [3312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_tuple_type_repeat1,
    STATE(123), 1,
      sym__tuple_type_pair,
  [3325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_identifier,
    STATE(96), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(149), 1,
      sym__tuple_lit_pair,
  [3338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
    STATE(93), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(115), 1,
      sym__tuple_lit_pair,
  [3351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_tuple_type_repeat1,
    STATE(164), 1,
      sym__tuple_type_pair,
  [3377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(134), 2,
      sym_common_statement,
      sym_let_statement,
  [3388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_function_signature,
  [3454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
  [3480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
  [3498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
  [3508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
  [3518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
  [3544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3552] = 3,
    ACTIONS(473), 1,
      anon_sym_DQUOTE,
    ACTIONS(475), 1,
      aux_sym_ascii_string_lit_token1,
    ACTIONS(477), 1,
      sym_comment,
  [3562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
  [3588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_identifier,
  [3595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_identifier,
  [3602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
  [3609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
  [3616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_COLON,
  [3623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
  [3630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_identifier,
  [3637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_uint,
  [3644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_identifier,
  [3651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_identifier,
  [3658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
  [3665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      aux_sym_buffer_type_token1,
  [3672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
  [3679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_identifier,
  [3686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
  [3693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
  [3700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
  [3707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
  [3714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_DOT,
  [3721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym_identifier,
  [3728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
  [3735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
  [3742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
  [3749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
  [3756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      aux_sym_buffer_lit_token1,
  [3763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_COMMA,
  [3770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      aux_sym_buffer_type_token1,
  [3777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
  [3784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
  [3791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
  [3798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_DQUOTE,
  [3805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_COLON,
  [3812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
  [3819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
  [3826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      aux_sym_buffer_type_token1,
  [3833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_DOT,
  [3840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      aux_sym_buffer_type_token1,
  [3847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
  [3854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_identifier,
  [3861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DOT,
  [3868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_COMMA,
  [3875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym_identifier,
  [3882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
  [3889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
  [3896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym_standard_principal_lit_token1,
  [3903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym_identifier,
  [3910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
  [3917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
  [3924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
  [3931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
  [3938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
  [3945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_identifier,
  [3952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
  [3959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym_identifier,
  [3966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_GT,
  [3973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
  [3980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym_identifier,
  [3987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [3994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_identifier,
  [4001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      aux_sym_buffer_type_token1,
  [4008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
  [4015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym_identifier,
  [4022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
  [4029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
  [4036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
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
  [SMALL_STATE(40)] = 1858,
  [SMALL_STATE(41)] = 1890,
  [SMALL_STATE(42)] = 1922,
  [SMALL_STATE(43)] = 1954,
  [SMALL_STATE(44)] = 1986,
  [SMALL_STATE(45)] = 2018,
  [SMALL_STATE(46)] = 2050,
  [SMALL_STATE(47)] = 2082,
  [SMALL_STATE(48)] = 2114,
  [SMALL_STATE(49)] = 2146,
  [SMALL_STATE(50)] = 2178,
  [SMALL_STATE(51)] = 2210,
  [SMALL_STATE(52)] = 2242,
  [SMALL_STATE(53)] = 2277,
  [SMALL_STATE(54)] = 2309,
  [SMALL_STATE(55)] = 2339,
  [SMALL_STATE(56)] = 2369,
  [SMALL_STATE(57)] = 2399,
  [SMALL_STATE(58)] = 2450,
  [SMALL_STATE(59)] = 2488,
  [SMALL_STATE(60)] = 2526,
  [SMALL_STATE(61)] = 2564,
  [SMALL_STATE(62)] = 2598,
  [SMALL_STATE(63)] = 2639,
  [SMALL_STATE(64)] = 2670,
  [SMALL_STATE(65)] = 2701,
  [SMALL_STATE(66)] = 2732,
  [SMALL_STATE(67)] = 2761,
  [SMALL_STATE(68)] = 2790,
  [SMALL_STATE(69)] = 2819,
  [SMALL_STATE(70)] = 2848,
  [SMALL_STATE(71)] = 2877,
  [SMALL_STATE(72)] = 2906,
  [SMALL_STATE(73)] = 2935,
  [SMALL_STATE(74)] = 2964,
  [SMALL_STATE(75)] = 2987,
  [SMALL_STATE(76)] = 3010,
  [SMALL_STATE(77)] = 3038,
  [SMALL_STATE(78)] = 3063,
  [SMALL_STATE(79)] = 3077,
  [SMALL_STATE(80)] = 3102,
  [SMALL_STATE(81)] = 3116,
  [SMALL_STATE(82)] = 3132,
  [SMALL_STATE(83)] = 3146,
  [SMALL_STATE(84)] = 3162,
  [SMALL_STATE(85)] = 3176,
  [SMALL_STATE(86)] = 3190,
  [SMALL_STATE(87)] = 3204,
  [SMALL_STATE(88)] = 3218,
  [SMALL_STATE(89)] = 3232,
  [SMALL_STATE(90)] = 3246,
  [SMALL_STATE(91)] = 3260,
  [SMALL_STATE(92)] = 3273,
  [SMALL_STATE(93)] = 3286,
  [SMALL_STATE(94)] = 3299,
  [SMALL_STATE(95)] = 3312,
  [SMALL_STATE(96)] = 3325,
  [SMALL_STATE(97)] = 3338,
  [SMALL_STATE(98)] = 3351,
  [SMALL_STATE(99)] = 3364,
  [SMALL_STATE(100)] = 3377,
  [SMALL_STATE(101)] = 3388,
  [SMALL_STATE(102)] = 3396,
  [SMALL_STATE(103)] = 3404,
  [SMALL_STATE(104)] = 3412,
  [SMALL_STATE(105)] = 3420,
  [SMALL_STATE(106)] = 3428,
  [SMALL_STATE(107)] = 3436,
  [SMALL_STATE(108)] = 3444,
  [SMALL_STATE(109)] = 3454,
  [SMALL_STATE(110)] = 3462,
  [SMALL_STATE(111)] = 3470,
  [SMALL_STATE(112)] = 3480,
  [SMALL_STATE(113)] = 3488,
  [SMALL_STATE(114)] = 3498,
  [SMALL_STATE(115)] = 3508,
  [SMALL_STATE(116)] = 3518,
  [SMALL_STATE(117)] = 3526,
  [SMALL_STATE(118)] = 3534,
  [SMALL_STATE(119)] = 3544,
  [SMALL_STATE(120)] = 3552,
  [SMALL_STATE(121)] = 3562,
  [SMALL_STATE(122)] = 3570,
  [SMALL_STATE(123)] = 3578,
  [SMALL_STATE(124)] = 3588,
  [SMALL_STATE(125)] = 3595,
  [SMALL_STATE(126)] = 3602,
  [SMALL_STATE(127)] = 3609,
  [SMALL_STATE(128)] = 3616,
  [SMALL_STATE(129)] = 3623,
  [SMALL_STATE(130)] = 3630,
  [SMALL_STATE(131)] = 3637,
  [SMALL_STATE(132)] = 3644,
  [SMALL_STATE(133)] = 3651,
  [SMALL_STATE(134)] = 3658,
  [SMALL_STATE(135)] = 3665,
  [SMALL_STATE(136)] = 3672,
  [SMALL_STATE(137)] = 3679,
  [SMALL_STATE(138)] = 3686,
  [SMALL_STATE(139)] = 3693,
  [SMALL_STATE(140)] = 3700,
  [SMALL_STATE(141)] = 3707,
  [SMALL_STATE(142)] = 3714,
  [SMALL_STATE(143)] = 3721,
  [SMALL_STATE(144)] = 3728,
  [SMALL_STATE(145)] = 3735,
  [SMALL_STATE(146)] = 3742,
  [SMALL_STATE(147)] = 3749,
  [SMALL_STATE(148)] = 3756,
  [SMALL_STATE(149)] = 3763,
  [SMALL_STATE(150)] = 3770,
  [SMALL_STATE(151)] = 3777,
  [SMALL_STATE(152)] = 3784,
  [SMALL_STATE(153)] = 3791,
  [SMALL_STATE(154)] = 3798,
  [SMALL_STATE(155)] = 3805,
  [SMALL_STATE(156)] = 3812,
  [SMALL_STATE(157)] = 3819,
  [SMALL_STATE(158)] = 3826,
  [SMALL_STATE(159)] = 3833,
  [SMALL_STATE(160)] = 3840,
  [SMALL_STATE(161)] = 3847,
  [SMALL_STATE(162)] = 3854,
  [SMALL_STATE(163)] = 3861,
  [SMALL_STATE(164)] = 3868,
  [SMALL_STATE(165)] = 3875,
  [SMALL_STATE(166)] = 3882,
  [SMALL_STATE(167)] = 3889,
  [SMALL_STATE(168)] = 3896,
  [SMALL_STATE(169)] = 3903,
  [SMALL_STATE(170)] = 3910,
  [SMALL_STATE(171)] = 3917,
  [SMALL_STATE(172)] = 3924,
  [SMALL_STATE(173)] = 3931,
  [SMALL_STATE(174)] = 3938,
  [SMALL_STATE(175)] = 3945,
  [SMALL_STATE(176)] = 3952,
  [SMALL_STATE(177)] = 3959,
  [SMALL_STATE(178)] = 3966,
  [SMALL_STATE(179)] = 3973,
  [SMALL_STATE(180)] = 3980,
  [SMALL_STATE(181)] = 3987,
  [SMALL_STATE(182)] = 3994,
  [SMALL_STATE(183)] = 4001,
  [SMALL_STATE(184)] = 4008,
  [SMALL_STATE(185)] = 4015,
  [SMALL_STATE(186)] = 4022,
  [SMALL_STATE(187)] = 4029,
  [SMALL_STATE(188)] = 4036,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(2),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(169),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(51),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(97),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(150),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(35),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(168),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(148),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(120),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(38),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4, .production_id = 14),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4, .production_id = 14),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 4, .production_id = 12),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 4, .production_id = 12),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_type, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_type, 5),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_type, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 5),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_utf8_string_type, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_string_type, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_type, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_type, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_type, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_type, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3, .production_id = 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3, .production_id = 6),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 6),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 6),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_statement, 4, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_common_statement, 4, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 7),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 7),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 8),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 8),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_statement, 3, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_common_statement, 3, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 5, .production_id = 10),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 5, .production_id = 10),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_lit, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_lit, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_principal_lit, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_principal_lit, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_some_lit, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_some_lit, 4),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, .production_id = 10),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, .production_id = 10),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_lit, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_lit, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 3, .production_id = 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 3, .production_id = 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_statement_repeat2, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat2, 2), SHIFT_REPEAT(77),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat2, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_statement_repeat2, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat2, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic_function, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_function, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit_token, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit_token, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_function, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_function, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(79),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(165),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(27),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(94),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(57),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_type, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2), SHIFT_REPEAT(137),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2), SHIFT_REPEAT(162),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat1, 2), SHIFT_REPEAT(132),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat1, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, .production_id = 7), SHIFT_REPEAT(130),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, .production_id = 7),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, .production_id = 4), SHIFT_REPEAT(128),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, .production_id = 7), SHIFT_REPEAT(155),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_definition, 6, .production_id = 8),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 7),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 6),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 4, .production_id = 15),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_variable_definition, 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_type_pair, 3, .production_id = 13),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_usage, 7, .production_id = 11),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, .production_id = 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 7),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 6),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_implementation, 6),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_lit_pair, 3, .production_id = 9),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, .production_id = 5),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 3),
  [527] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
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
