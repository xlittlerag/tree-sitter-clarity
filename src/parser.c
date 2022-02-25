#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 184
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 12

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
  anon_sym_COLON = 30,
  anon_sym_COMMA = 31,
  anon_sym_RBRACE = 32,
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
  anon_sym_u = 44,
  aux_sym_utf8_string_lit_token1 = 45,
  anon_sym_some = 46,
  sym_none_lit = 47,
  anon_sym_ok = 48,
  anon_sym_err = 49,
  anon_sym_block_DASHheight = 50,
  anon_sym_burn_DASHblock_DASHheight = 51,
  anon_sym_tx_DASHsender = 52,
  anon_sym_contract_DASHcaller = 53,
  anon_sym_is_DASHin_DASHregtest = 54,
  anon_sym_stx_DASHliquid_DASHsupply = 55,
  anon_sym_PLUS = 56,
  anon_sym_SLASH = 57,
  anon_sym_STAR = 58,
  anon_sym_LT_EQ = 59,
  anon_sym_GT_EQ = 60,
  sym_comment = 61,
  sym_source = 62,
  sym__declaration = 63,
  sym_trait_definition = 64,
  sym_trait_implementation = 65,
  sym_trait_usage = 66,
  sym_constant_definition = 67,
  sym_variable_definition = 68,
  sym_mapping_definition = 69,
  sym_function_definition = 70,
  sym_common_statement = 71,
  sym_let_statement = 72,
  sym_let_variable_definition = 73,
  sym_function_signature = 74,
  sym_function_parameter = 75,
  sym_function_signature_for_trait = 76,
  sym__parameter_type = 77,
  sym_trait_type = 78,
  sym_type_name = 79,
  sym_buffer_type = 80,
  sym_ascii_string_type = 81,
  sym_utf8_string_type = 82,
  sym_list_type = 83,
  sym_optional_type = 84,
  sym_tuple_type_for_signature = 85,
  sym_tuple_type = 86,
  sym_response_type = 87,
  sym__parameter = 88,
  sym__literal = 89,
  sym_int_lit = 90,
  sym_bool_lit = 91,
  sym_standard_principal_lit = 92,
  sym_contract_principal_lit = 93,
  sym_buffer_lit = 94,
  sym_ascii_string_lit = 95,
  sym_utf8_string_lit = 96,
  sym_list_lit = 97,
  sym_list_lit_token = 98,
  sym_some_lit = 99,
  sym_tuple_lit = 100,
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
  aux_sym_tuple_type_for_signature_repeat1 = 112,
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
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_u] = "u",
  [aux_sym_utf8_string_lit_token1] = "utf8_string_lit_token1",
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
  [sym_tuple_type_for_signature] = "tuple_type_for_signature",
  [sym_tuple_type] = "tuple_type",
  [sym_response_type] = "response_type",
  [sym__parameter] = "_parameter",
  [sym__literal] = "_literal",
  [sym_int_lit] = "int_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_standard_principal_lit] = "standard_principal_lit",
  [sym_contract_principal_lit] = "contract_principal_lit",
  [sym_buffer_lit] = "buffer_lit",
  [sym_ascii_string_lit] = "ascii_string_lit",
  [sym_utf8_string_lit] = "utf8_string_lit",
  [sym_list_lit] = "list_lit",
  [sym_list_lit_token] = "list_lit_token",
  [sym_some_lit] = "some_lit",
  [sym_tuple_lit] = "tuple_lit",
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
  [aux_sym_tuple_type_for_signature_repeat1] = "tuple_type_for_signature_repeat1",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [anon_sym_u] = anon_sym_u,
  [aux_sym_utf8_string_lit_token1] = aux_sym_utf8_string_lit_token1,
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
  [sym_tuple_type_for_signature] = sym_tuple_type_for_signature,
  [sym_tuple_type] = sym_tuple_type,
  [sym_response_type] = sym_response_type,
  [sym__parameter] = sym__parameter,
  [sym__literal] = sym__literal,
  [sym_int_lit] = sym_int_lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_standard_principal_lit] = sym_standard_principal_lit,
  [sym_contract_principal_lit] = sym_contract_principal_lit,
  [sym_buffer_lit] = sym_buffer_lit,
  [sym_ascii_string_lit] = sym_ascii_string_lit,
  [sym_utf8_string_lit] = sym_utf8_string_lit,
  [sym_list_lit] = sym_list_lit,
  [sym_list_lit_token] = sym_list_lit_token,
  [sym_some_lit] = sym_some_lit,
  [sym_tuple_lit] = sym_tuple_lit,
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
  [aux_sym_tuple_type_for_signature_repeat1] = aux_sym_tuple_type_for_signature_repeat1,
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
  [anon_sym_COLON] = {
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
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_utf8_string_lit_token1] = {
    .visible = false,
    .named = false,
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
  [sym_tuple_type_for_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
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
  [sym_utf8_string_lit] = {
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
  [aux_sym_tuple_type_for_signature_repeat1] = {
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
  [3] = {.index = 3, .length = 4},
  [4] = {.index = 7, .length = 2},
  [5] = {.index = 9, .length = 4},
  [6] = {.index = 13, .length = 2},
  [7] = {.index = 15, .length = 2},
  [8] = {.index = 17, .length = 2},
  [9] = {.index = 19, .length = 2},
  [10] = {.index = 21, .length = 2},
  [11] = {.index = 23, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function_name, 1},
  [1] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [3] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [7] =
    {field_key, 1, .inherited = true},
    {field_value_type, 1, .inherited = true},
  [9] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value_type, 0, .inherited = true},
    {field_value_type, 1, .inherited = true},
  [13] =
    {field_key_type, 3},
    {field_value_type, 4},
  [15] =
    {field_key, 0},
    {field_value, 2},
  [17] =
    {field_trait_alias, 2},
    {field_trait_name, 5},
  [19] =
    {field_key, 2, .inherited = true},
    {field_value_type, 2, .inherited = true},
  [21] =
    {field_key, 0},
    {field_value_type, 2},
  [23] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == ';') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(69);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(76);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 5:
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(87);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(63);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(9);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(10);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(11);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
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
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(88);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_buffer_type_token1);
      if (lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_buffer_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_standard_principal_lit_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_buffer_lit_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead == ';') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead == ';') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_utf8_string_lit_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_utf8_string_lit_token1);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_utf8_string_lit_token1);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(80);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_utf8_string_lit_token1);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_utf8_string_lit_token1);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_utf8_string_lit_token1);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_utf8_string_lit_token1);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_utf8_string_lit_token1);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_utf8_string_lit_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(48);
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
      ACCEPT_TOKEN(anon_sym_u);
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
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
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
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 4},
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
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_response] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_uint_lit] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
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
    [sym_source] = STATE(140),
    [sym__declaration] = STATE(74),
    [sym_trait_definition] = STATE(74),
    [sym_trait_implementation] = STATE(74),
    [sym_trait_usage] = STATE(74),
    [sym_constant_definition] = STATE(74),
    [sym_variable_definition] = STATE(74),
    [sym_mapping_definition] = STATE(74),
    [sym_function_definition] = STATE(74),
    [sym_common_statement] = STATE(74),
    [sym_let_statement] = STATE(74),
    [aux_sym_source_repeat1] = STATE(74),
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
      anon_sym_u,
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
    STATE(2), 16,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_utf8_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_common_statement_repeat1,
  [73] = 16,
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
      anon_sym_u,
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
    STATE(6), 16,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_utf8_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_common_statement_repeat1,
  [146] = 16,
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
      anon_sym_u,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
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
    STATE(2), 16,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_utf8_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_common_statement_repeat1,
  [219] = 16,
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
      anon_sym_u,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(77), 4,
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
    STATE(4), 16,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_utf8_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_common_statement_repeat1,
  [292] = 16,
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
      anon_sym_u,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
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
    STATE(2), 16,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_utf8_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_common_statement_repeat1,
  [365] = 17,
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
      anon_sym_u,
    STATE(39), 1,
      sym_standard_principal_lit,
    STATE(52), 1,
      aux_sym_let_statement_repeat2,
    STATE(55), 1,
      sym_common_statement,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 4,
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
    STATE(139), 14,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_utf8_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [439] = 17,
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
      anon_sym_u,
    STATE(39), 1,
      sym_standard_principal_lit,
    STATE(52), 1,
      aux_sym_let_statement_repeat2,
    STATE(55), 1,
      sym_common_statement,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(85), 4,
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
    STATE(165), 14,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_utf8_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [513] = 17,
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
      anon_sym_u,
    STATE(7), 1,
      aux_sym_let_statement_repeat2,
    STATE(39), 1,
      sym_standard_principal_lit,
    STATE(55), 1,
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
    STATE(127), 14,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_utf8_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [587] = 17,
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
      anon_sym_u,
    STATE(8), 1,
      aux_sym_let_statement_repeat2,
    STATE(39), 1,
      sym_standard_principal_lit,
    STATE(55), 1,
      sym_common_statement,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 4,
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
    STATE(139), 14,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_utf8_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [661] = 15,
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
      anon_sym_u,
    STATE(39), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 4,
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
    STATE(126), 15,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_utf8_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [730] = 15,
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
      anon_sym_u,
    STATE(39), 1,
      sym_standard_principal_lit,
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
    STATE(123), 15,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_utf8_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [799] = 15,
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
      anon_sym_u,
    STATE(39), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(93), 4,
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
    STATE(141), 15,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_utf8_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [868] = 15,
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
      anon_sym_u,
    STATE(39), 1,
      sym_standard_principal_lit,
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
    STATE(137), 15,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_utf8_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [937] = 15,
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
      anon_sym_u,
    STATE(39), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 4,
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
    STATE(156), 15,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_utf8_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [1006] = 15,
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
      anon_sym_u,
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
    STATE(98), 15,
      sym_common_statement,
      sym_let_statement,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_utf8_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [1075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(101), 18,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(105), 18,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(109), 18,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(113), 18,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(117), 18,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(121), 18,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(125), 18,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(129), 18,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(133), 18,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(137), 18,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(141), 18,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 11,
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
    ACTIONS(147), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
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
    ACTIONS(149), 11,
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
    ACTIONS(151), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 11,
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
    ACTIONS(155), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 11,
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
    ACTIONS(159), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 11,
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
    ACTIONS(163), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 10,
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
    ACTIONS(165), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 10,
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
    ACTIONS(169), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 10,
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
    ACTIONS(173), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 10,
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
    ACTIONS(177), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 10,
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
    ACTIONS(181), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 10,
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
    ACTIONS(185), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(191), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(189), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 10,
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
    ACTIONS(195), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 10,
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
    ACTIONS(199), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 10,
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
    ACTIONS(203), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 10,
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
    ACTIONS(207), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [1990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 10,
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
    ACTIONS(211), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 10,
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
    ACTIONS(215), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 10,
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
    ACTIONS(219), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 10,
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
    ACTIONS(223), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 10,
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
    ACTIONS(227), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 10,
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
    ACTIONS(231), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 10,
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
    ACTIONS(235), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 10,
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
    ACTIONS(239), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2246] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(52), 2,
      sym_common_statement,
      aux_sym_let_statement_repeat2,
    ACTIONS(248), 6,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(243), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(250), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(254), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    ACTIONS(260), 7,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(258), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(264), 14,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_u,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      sym_identifier,
  [2403] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_define_DASHtrait,
    ACTIONS(272), 1,
      anon_sym_impl_DASHtrait,
    ACTIONS(274), 1,
      anon_sym_use_DASHtrait,
    ACTIONS(276), 1,
      anon_sym_define_DASHconstant,
    ACTIONS(278), 1,
      anon_sym_define_DASHdata_DASHvar,
    ACTIONS(280), 1,
      anon_sym_define_DASHmap,
    ACTIONS(284), 1,
      anon_sym_let,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(5), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(282), 3,
      anon_sym_define_DASHread_DASHonly,
      anon_sym_define_DASHprivate,
      anon_sym_define_DASHpublic,
    ACTIONS(288), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2454] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(297), 1,
      anon_sym_LT,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(58), 4,
      sym__parameter_type,
      sym_trait_type,
      sym_type_name,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(21), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2492] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(60), 4,
      sym__parameter_type,
      sym_trait_type,
      sym_type_name,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(21), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2530] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    ACTIONS(312), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(58), 4,
      sym__parameter_type,
      sym_trait_type,
      sym_type_name,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(21), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2568] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(161), 3,
      sym__parameter_type,
      sym_trait_type,
      sym_type_name,
    ACTIONS(312), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(21), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2602] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym_let,
    ACTIONS(318), 1,
      anon_sym_list,
    ACTIONS(320), 1,
      anon_sym_some,
    STATE(3), 1,
      sym_list_lit_token,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(322), 2,
      anon_sym_ok,
      anon_sym_err,
    STATE(5), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(288), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2643] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym_type_name,
    ACTIONS(312), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(21), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2672] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_type_name,
    ACTIONS(312), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(21), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2701] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_type_name,
    STATE(134), 1,
      sym_tuple_type,
    ACTIONS(312), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(21), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_response_type,
  [2732] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym_type_name,
    ACTIONS(312), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(21), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2761] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym_type_name,
    ACTIONS(312), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(21), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2790] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_type_name,
    ACTIONS(312), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(21), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2819] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_type_name,
    ACTIONS(312), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(21), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2848] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_type_name,
    ACTIONS(312), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(21), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2877] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_type_name,
    STATE(72), 1,
      sym_tuple_type,
    ACTIONS(312), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(21), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_response_type,
  [2908] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_type_name,
    STATE(134), 1,
      sym_tuple_type,
    ACTIONS(312), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(21), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_response_type,
  [2939] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_type_name,
    ACTIONS(312), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(21), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    STATE(75), 11,
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
  [2991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(75), 11,
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
  [3014] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym_let,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(5), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(288), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3042] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_identifier,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(5), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(288), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      anon_sym_LBRACE,
  [3081] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_buff,
    ACTIONS(337), 1,
      anon_sym_string_DASHascii,
    ACTIONS(339), 1,
      anon_sym_string_DASHutf8,
    ACTIONS(341), 1,
      anon_sym_list,
    ACTIONS(343), 1,
      anon_sym_optional,
    ACTIONS(345), 1,
      anon_sym_tuple,
    ACTIONS(347), 1,
      anon_sym_response,
  [3106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    STATE(157), 1,
      sym_contract_principal_lit,
    STATE(171), 1,
      sym_standard_principal_lit,
  [3122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(81), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    STATE(82), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(88), 2,
      sym_let_variable_definition,
      aux_sym_let_statement_repeat1,
  [3164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(85), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(81), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3192] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    STATE(169), 1,
      sym_contract_principal_lit,
    STATE(171), 1,
      sym_standard_principal_lit,
  [3208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(90), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(88), 2,
      sym_let_variable_definition,
      aux_sym_let_statement_repeat1,
  [3236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(83), 2,
      sym_let_variable_definition,
      aux_sym_let_statement_repeat1,
  [3250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(82), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_tuple_type_for_signature_repeat1,
  [3277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_tuple_type_for_signature_repeat1,
  [3290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_tuple_type_repeat1,
  [3303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    STATE(155), 2,
      sym_common_statement,
      sym_let_statement,
  [3314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_tuple_type_for_signature_repeat1,
  [3327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_tuple_type_repeat1,
  [3340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_identifier,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      aux_sym_tuple_lit_repeat1,
  [3353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(408), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_identifier,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_tuple_type_repeat1,
  [3377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_identifier,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      aux_sym_tuple_lit_repeat1,
  [3390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_identifier,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      aux_sym_tuple_lit_repeat1,
  [3403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3411] = 3,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      aux_sym_ascii_string_lit_token1,
    ACTIONS(427), 1,
      sym_comment,
  [3421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_function_signature,
  [3479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3511] = 3,
    ACTIONS(427), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_DQUOTE,
    ACTIONS(453), 1,
      aux_sym_utf8_string_lit_token1,
  [3521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
  [3560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
  [3567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
  [3574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
  [3581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
  [3588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
  [3595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
  [3602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
  [3609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_uint,
  [3616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_DQUOTE,
  [3623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
  [3630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_identifier,
  [3637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
  [3644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
  [3651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
  [3658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
  [3665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
  [3672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
  [3679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
  [3686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
  [3693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
  [3700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
  [3707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_COLON,
  [3714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      aux_sym_buffer_type_token1,
  [3721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      aux_sym_buffer_type_token1,
  [3728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      aux_sym_buffer_type_token1,
  [3735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_buffer_type_token1,
  [3742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_identifier,
  [3749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
  [3756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
  [3763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_identifier,
  [3770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_DQUOTE,
  [3777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_COLON,
  [3784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
  [3791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym_identifier,
  [3798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
  [3805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
  [3812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_DOT,
  [3819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
  [3826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_COMMA,
  [3833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_identifier,
  [3840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
  [3847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym_identifier,
  [3854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym_identifier,
  [3861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
  [3868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
  [3875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      aux_sym_buffer_lit_token1,
  [3882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      aux_sym_buffer_type_token1,
  [3889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym_identifier,
  [3896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_DOT,
  [3903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
  [3910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DOT,
  [3917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_standard_principal_lit_token1,
  [3924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_GT,
  [3931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym_identifier,
  [3938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
  [3945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
  [3952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
  [3959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym_identifier,
  [3966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_identifier,
  [3973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_identifier,
  [3980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
  [3987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
  [3994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 219,
  [SMALL_STATE(6)] = 292,
  [SMALL_STATE(7)] = 365,
  [SMALL_STATE(8)] = 439,
  [SMALL_STATE(9)] = 513,
  [SMALL_STATE(10)] = 587,
  [SMALL_STATE(11)] = 661,
  [SMALL_STATE(12)] = 730,
  [SMALL_STATE(13)] = 799,
  [SMALL_STATE(14)] = 868,
  [SMALL_STATE(15)] = 937,
  [SMALL_STATE(16)] = 1006,
  [SMALL_STATE(17)] = 1075,
  [SMALL_STATE(18)] = 1111,
  [SMALL_STATE(19)] = 1147,
  [SMALL_STATE(20)] = 1183,
  [SMALL_STATE(21)] = 1219,
  [SMALL_STATE(22)] = 1255,
  [SMALL_STATE(23)] = 1291,
  [SMALL_STATE(24)] = 1327,
  [SMALL_STATE(25)] = 1363,
  [SMALL_STATE(26)] = 1399,
  [SMALL_STATE(27)] = 1435,
  [SMALL_STATE(28)] = 1471,
  [SMALL_STATE(29)] = 1504,
  [SMALL_STATE(30)] = 1537,
  [SMALL_STATE(31)] = 1570,
  [SMALL_STATE(32)] = 1603,
  [SMALL_STATE(33)] = 1636,
  [SMALL_STATE(34)] = 1668,
  [SMALL_STATE(35)] = 1700,
  [SMALL_STATE(36)] = 1732,
  [SMALL_STATE(37)] = 1764,
  [SMALL_STATE(38)] = 1796,
  [SMALL_STATE(39)] = 1828,
  [SMALL_STATE(40)] = 1862,
  [SMALL_STATE(41)] = 1894,
  [SMALL_STATE(42)] = 1926,
  [SMALL_STATE(43)] = 1958,
  [SMALL_STATE(44)] = 1990,
  [SMALL_STATE(45)] = 2022,
  [SMALL_STATE(46)] = 2054,
  [SMALL_STATE(47)] = 2086,
  [SMALL_STATE(48)] = 2118,
  [SMALL_STATE(49)] = 2150,
  [SMALL_STATE(50)] = 2182,
  [SMALL_STATE(51)] = 2214,
  [SMALL_STATE(52)] = 2246,
  [SMALL_STATE(53)] = 2281,
  [SMALL_STATE(54)] = 2311,
  [SMALL_STATE(55)] = 2341,
  [SMALL_STATE(56)] = 2373,
  [SMALL_STATE(57)] = 2403,
  [SMALL_STATE(58)] = 2454,
  [SMALL_STATE(59)] = 2492,
  [SMALL_STATE(60)] = 2530,
  [SMALL_STATE(61)] = 2568,
  [SMALL_STATE(62)] = 2602,
  [SMALL_STATE(63)] = 2643,
  [SMALL_STATE(64)] = 2672,
  [SMALL_STATE(65)] = 2701,
  [SMALL_STATE(66)] = 2732,
  [SMALL_STATE(67)] = 2761,
  [SMALL_STATE(68)] = 2790,
  [SMALL_STATE(69)] = 2819,
  [SMALL_STATE(70)] = 2848,
  [SMALL_STATE(71)] = 2877,
  [SMALL_STATE(72)] = 2908,
  [SMALL_STATE(73)] = 2939,
  [SMALL_STATE(74)] = 2968,
  [SMALL_STATE(75)] = 2991,
  [SMALL_STATE(76)] = 3014,
  [SMALL_STATE(77)] = 3042,
  [SMALL_STATE(78)] = 3067,
  [SMALL_STATE(79)] = 3081,
  [SMALL_STATE(80)] = 3106,
  [SMALL_STATE(81)] = 3122,
  [SMALL_STATE(82)] = 3136,
  [SMALL_STATE(83)] = 3150,
  [SMALL_STATE(84)] = 3164,
  [SMALL_STATE(85)] = 3178,
  [SMALL_STATE(86)] = 3192,
  [SMALL_STATE(87)] = 3208,
  [SMALL_STATE(88)] = 3222,
  [SMALL_STATE(89)] = 3236,
  [SMALL_STATE(90)] = 3250,
  [SMALL_STATE(91)] = 3264,
  [SMALL_STATE(92)] = 3277,
  [SMALL_STATE(93)] = 3290,
  [SMALL_STATE(94)] = 3303,
  [SMALL_STATE(95)] = 3314,
  [SMALL_STATE(96)] = 3327,
  [SMALL_STATE(97)] = 3340,
  [SMALL_STATE(98)] = 3353,
  [SMALL_STATE(99)] = 3364,
  [SMALL_STATE(100)] = 3377,
  [SMALL_STATE(101)] = 3390,
  [SMALL_STATE(102)] = 3403,
  [SMALL_STATE(103)] = 3411,
  [SMALL_STATE(104)] = 3421,
  [SMALL_STATE(105)] = 3429,
  [SMALL_STATE(106)] = 3437,
  [SMALL_STATE(107)] = 3445,
  [SMALL_STATE(108)] = 3453,
  [SMALL_STATE(109)] = 3461,
  [SMALL_STATE(110)] = 3469,
  [SMALL_STATE(111)] = 3479,
  [SMALL_STATE(112)] = 3487,
  [SMALL_STATE(113)] = 3495,
  [SMALL_STATE(114)] = 3503,
  [SMALL_STATE(115)] = 3511,
  [SMALL_STATE(116)] = 3521,
  [SMALL_STATE(117)] = 3529,
  [SMALL_STATE(118)] = 3537,
  [SMALL_STATE(119)] = 3545,
  [SMALL_STATE(120)] = 3553,
  [SMALL_STATE(121)] = 3560,
  [SMALL_STATE(122)] = 3567,
  [SMALL_STATE(123)] = 3574,
  [SMALL_STATE(124)] = 3581,
  [SMALL_STATE(125)] = 3588,
  [SMALL_STATE(126)] = 3595,
  [SMALL_STATE(127)] = 3602,
  [SMALL_STATE(128)] = 3609,
  [SMALL_STATE(129)] = 3616,
  [SMALL_STATE(130)] = 3623,
  [SMALL_STATE(131)] = 3630,
  [SMALL_STATE(132)] = 3637,
  [SMALL_STATE(133)] = 3644,
  [SMALL_STATE(134)] = 3651,
  [SMALL_STATE(135)] = 3658,
  [SMALL_STATE(136)] = 3665,
  [SMALL_STATE(137)] = 3672,
  [SMALL_STATE(138)] = 3679,
  [SMALL_STATE(139)] = 3686,
  [SMALL_STATE(140)] = 3693,
  [SMALL_STATE(141)] = 3700,
  [SMALL_STATE(142)] = 3707,
  [SMALL_STATE(143)] = 3714,
  [SMALL_STATE(144)] = 3721,
  [SMALL_STATE(145)] = 3728,
  [SMALL_STATE(146)] = 3735,
  [SMALL_STATE(147)] = 3742,
  [SMALL_STATE(148)] = 3749,
  [SMALL_STATE(149)] = 3756,
  [SMALL_STATE(150)] = 3763,
  [SMALL_STATE(151)] = 3770,
  [SMALL_STATE(152)] = 3777,
  [SMALL_STATE(153)] = 3784,
  [SMALL_STATE(154)] = 3791,
  [SMALL_STATE(155)] = 3798,
  [SMALL_STATE(156)] = 3805,
  [SMALL_STATE(157)] = 3812,
  [SMALL_STATE(158)] = 3819,
  [SMALL_STATE(159)] = 3826,
  [SMALL_STATE(160)] = 3833,
  [SMALL_STATE(161)] = 3840,
  [SMALL_STATE(162)] = 3847,
  [SMALL_STATE(163)] = 3854,
  [SMALL_STATE(164)] = 3861,
  [SMALL_STATE(165)] = 3868,
  [SMALL_STATE(166)] = 3875,
  [SMALL_STATE(167)] = 3882,
  [SMALL_STATE(168)] = 3889,
  [SMALL_STATE(169)] = 3896,
  [SMALL_STATE(170)] = 3903,
  [SMALL_STATE(171)] = 3910,
  [SMALL_STATE(172)] = 3917,
  [SMALL_STATE(173)] = 3924,
  [SMALL_STATE(174)] = 3931,
  [SMALL_STATE(175)] = 3938,
  [SMALL_STATE(176)] = 3945,
  [SMALL_STATE(177)] = 3952,
  [SMALL_STATE(178)] = 3959,
  [SMALL_STATE(179)] = 3966,
  [SMALL_STATE(180)] = 3973,
  [SMALL_STATE(181)] = 3980,
  [SMALL_STATE(182)] = 3987,
  [SMALL_STATE(183)] = 3994,
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
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(174),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(36),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(97),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(167),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(34),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(172),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(166),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(103),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(164),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(38),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_signature, 4, .production_id = 9),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_signature, 4, .production_id = 9),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_type, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_type, 5),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_type, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_utf8_string_type, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_string_type, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3, .production_id = 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3, .production_id = 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_signature, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_signature, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_type, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_type, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_type, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_type, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 8),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 8),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 6),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_statement, 4, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_common_statement, 4, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_statement, 3, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_common_statement, 3, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 7),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 7),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_utf8_string_lit, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_string_lit, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_lit, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_lit, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_principal_lit, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_principal_lit, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_utf8_string_lit, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_string_lit, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_lit, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_lit, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_some_lit, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_some_lit, 4),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 3, .production_id = 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 3, .production_id = 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_statement_repeat2, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat2, 2), SHIFT_REPEAT(77),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat2, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic_function, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_function, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit_token, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit_token, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_statement_repeat2, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat2, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_function, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_function, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(79),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(160),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(21),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(99),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(57),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_type, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2), SHIFT_REPEAT(150),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2), SHIFT_REPEAT(131),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat1, 2), SHIFT_REPEAT(154),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat1, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_signature_repeat1, 2, .production_id = 5), SHIFT_REPEAT(125),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_signature_repeat1, 2, .production_id = 5),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, .production_id = 5), SHIFT_REPEAT(142),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, .production_id = 5),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 3, .production_id = 7),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, .production_id = 3), SHIFT_REPEAT(152),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, .production_id = 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_signature_repeat1, 4, .production_id = 11),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 6),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 4, .production_id = 10),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 4, .production_id = 7),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 6),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 7),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_implementation, 6),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_variable_definition, 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_usage, 7, .production_id = 8),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 7),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_definition, 6, .production_id = 6),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 4),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [501] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
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
