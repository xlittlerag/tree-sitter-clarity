#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 187
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
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
  sym_declaration = 63,
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
  sym_parameter_type = 77,
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
  sym_parameter = 88,
  sym_literal = 89,
  sym_int_lit = 90,
  sym_bool_lit = 91,
  sym_standard_principal_lit = 92,
  sym_contract_principal_lit = 93,
  sym_buffer_lit = 94,
  sym_ascii_string_lit = 95,
  sym_utf8_string_lit = 96,
  sym_list_lit = 97,
  sym_some_lit = 98,
  sym_tuple_lit = 99,
  sym_response_lit = 100,
  sym_global = 101,
  sym_arithmetic_function = 102,
  sym_boolean_function = 103,
  aux_sym_source_repeat1 = 104,
  aux_sym_trait_definition_repeat1 = 105,
  aux_sym_common_statement_repeat1 = 106,
  aux_sym_let_statement_repeat1 = 107,
  aux_sym_let_statement_repeat2 = 108,
  aux_sym_function_signature_repeat1 = 109,
  aux_sym_function_signature_for_trait_repeat1 = 110,
  aux_sym_tuple_type_for_signature_repeat1 = 111,
  aux_sym_tuple_type_repeat1 = 112,
  aux_sym_tuple_lit_repeat1 = 113,
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
  [sym_declaration] = "declaration",
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
  [sym_parameter_type] = "parameter_type",
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
  [sym_parameter] = "parameter",
  [sym_literal] = "literal",
  [sym_int_lit] = "int_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_standard_principal_lit] = "standard_principal_lit",
  [sym_contract_principal_lit] = "contract_principal_lit",
  [sym_buffer_lit] = "buffer_lit",
  [sym_ascii_string_lit] = "ascii_string_lit",
  [sym_utf8_string_lit] = "utf8_string_lit",
  [sym_list_lit] = "list_lit",
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
  [sym_declaration] = sym_declaration,
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
  [sym_parameter_type] = sym_parameter_type,
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
  [sym_parameter] = sym_parameter,
  [sym_literal] = sym_literal,
  [sym_int_lit] = sym_int_lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_standard_principal_lit] = sym_standard_principal_lit,
  [sym_contract_principal_lit] = sym_contract_principal_lit,
  [sym_buffer_lit] = sym_buffer_lit,
  [sym_ascii_string_lit] = sym_ascii_string_lit,
  [sym_utf8_string_lit] = sym_utf8_string_lit,
  [sym_list_lit] = sym_list_lit,
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
  [sym_declaration] = {
    .visible = true,
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
  [sym_parameter_type] = {
    .visible = true,
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
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
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
  [184] = 184,
  [185] = 185,
  [186] = 186,
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
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 4},
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
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
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
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
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
    [sym_source] = STATE(143),
    [sym_declaration] = STATE(76),
    [sym_trait_definition] = STATE(104),
    [sym_trait_implementation] = STATE(104),
    [sym_trait_usage] = STATE(104),
    [sym_constant_definition] = STATE(104),
    [sym_variable_definition] = STATE(104),
    [sym_mapping_definition] = STATE(104),
    [sym_function_definition] = STATE(104),
    [sym_common_statement] = STATE(104),
    [sym_let_statement] = STATE(104),
    [aux_sym_source_repeat1] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
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
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0x,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_u,
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(9), 2,
      sym_constant,
      sym_identifier,
    ACTIONS(23), 2,
      sym_uint_lit,
      sym_none_lit,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_parameter,
      aux_sym_common_statement_repeat1,
    STATE(39), 4,
      sym_common_statement,
      sym_let_statement,
      sym_literal,
      sym_global,
    ACTIONS(35), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(43), 10,
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
  [79] = 19,
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
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0x,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_u,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(9), 2,
      sym_constant,
      sym_identifier,
    ACTIONS(23), 2,
      sym_uint_lit,
      sym_none_lit,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_parameter,
      aux_sym_common_statement_repeat1,
    STATE(39), 4,
      sym_common_statement,
      sym_let_statement,
      sym_literal,
      sym_global,
    ACTIONS(35), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(43), 10,
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
  [158] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(68), 1,
      anon_sym_0x,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      anon_sym_u,
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(39), 2,
      sym_constant,
      sym_identifier,
    ACTIONS(59), 2,
      sym_uint_lit,
      sym_none_lit,
    ACTIONS(62), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_parameter,
      aux_sym_common_statement_repeat1,
    STATE(39), 4,
      sym_common_statement,
      sym_let_statement,
      sym_literal,
      sym_global,
    ACTIONS(77), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(43), 10,
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
  [237] = 19,
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
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0x,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_u,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(9), 2,
      sym_constant,
      sym_identifier,
    ACTIONS(23), 2,
      sym_uint_lit,
      sym_none_lit,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_parameter,
      aux_sym_common_statement_repeat1,
    STATE(39), 4,
      sym_common_statement,
      sym_let_statement,
      sym_literal,
      sym_global,
    ACTIONS(35), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(43), 10,
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
  [316] = 19,
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
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0x,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_u,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(9), 2,
      sym_constant,
      sym_identifier,
    ACTIONS(23), 2,
      sym_uint_lit,
      sym_none_lit,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_parameter,
      aux_sym_common_statement_repeat1,
    STATE(39), 4,
      sym_common_statement,
      sym_let_statement,
      sym_literal,
      sym_global,
    ACTIONS(35), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(43), 10,
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
  [395] = 20,
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
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0x,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_u,
    STATE(9), 1,
      aux_sym_let_statement_repeat2,
    STATE(48), 1,
      sym_standard_principal_lit,
    STATE(56), 1,
      sym_common_statement,
    STATE(141), 1,
      sym_parameter,
    ACTIONS(9), 2,
      sym_constant,
      sym_identifier,
    ACTIONS(23), 2,
      sym_uint_lit,
      sym_none_lit,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 3,
      sym_let_statement,
      sym_literal,
      sym_global,
    ACTIONS(35), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(43), 10,
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
  [475] = 20,
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
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0x,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_u,
    STATE(48), 1,
      sym_standard_principal_lit,
    STATE(54), 1,
      aux_sym_let_statement_repeat2,
    STATE(56), 1,
      sym_common_statement,
    STATE(141), 1,
      sym_parameter,
    ACTIONS(9), 2,
      sym_constant,
      sym_identifier,
    ACTIONS(23), 2,
      sym_uint_lit,
      sym_none_lit,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 3,
      sym_let_statement,
      sym_literal,
      sym_global,
    ACTIONS(35), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(43), 10,
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
  [555] = 20,
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
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0x,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_u,
    STATE(48), 1,
      sym_standard_principal_lit,
    STATE(54), 1,
      aux_sym_let_statement_repeat2,
    STATE(56), 1,
      sym_common_statement,
    STATE(168), 1,
      sym_parameter,
    ACTIONS(9), 2,
      sym_constant,
      sym_identifier,
    ACTIONS(23), 2,
      sym_uint_lit,
      sym_none_lit,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 3,
      sym_let_statement,
      sym_literal,
      sym_global,
    ACTIONS(35), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(43), 10,
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
  [635] = 20,
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
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0x,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_u,
    STATE(8), 1,
      aux_sym_let_statement_repeat2,
    STATE(48), 1,
      sym_standard_principal_lit,
    STATE(56), 1,
      sym_common_statement,
    STATE(125), 1,
      sym_parameter,
    ACTIONS(9), 2,
      sym_constant,
      sym_identifier,
    ACTIONS(23), 2,
      sym_uint_lit,
      sym_none_lit,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 3,
      sym_let_statement,
      sym_literal,
      sym_global,
    ACTIONS(35), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(43), 10,
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
  [715] = 18,
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
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0x,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_u,
    STATE(48), 1,
      sym_standard_principal_lit,
    STATE(96), 1,
      sym_parameter,
    ACTIONS(9), 2,
      sym_constant,
      sym_identifier,
    ACTIONS(23), 2,
      sym_uint_lit,
      sym_none_lit,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 4,
      sym_common_statement,
      sym_let_statement,
      sym_literal,
      sym_global,
    ACTIONS(35), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(43), 10,
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
  [790] = 18,
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
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0x,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_u,
    STATE(48), 1,
      sym_standard_principal_lit,
    STATE(139), 1,
      sym_parameter,
    ACTIONS(9), 2,
      sym_constant,
      sym_identifier,
    ACTIONS(23), 2,
      sym_uint_lit,
      sym_none_lit,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 4,
      sym_common_statement,
      sym_let_statement,
      sym_literal,
      sym_global,
    ACTIONS(35), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(43), 10,
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
  [865] = 18,
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
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0x,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_u,
    STATE(48), 1,
      sym_standard_principal_lit,
    STATE(133), 1,
      sym_parameter,
    ACTIONS(9), 2,
      sym_constant,
      sym_identifier,
    ACTIONS(23), 2,
      sym_uint_lit,
      sym_none_lit,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 4,
      sym_common_statement,
      sym_let_statement,
      sym_literal,
      sym_global,
    ACTIONS(35), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(43), 10,
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
  [940] = 18,
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
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0x,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_u,
    STATE(48), 1,
      sym_standard_principal_lit,
    STATE(129), 1,
      sym_parameter,
    ACTIONS(9), 2,
      sym_constant,
      sym_identifier,
    ACTIONS(23), 2,
      sym_uint_lit,
      sym_none_lit,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 4,
      sym_common_statement,
      sym_let_statement,
      sym_literal,
      sym_global,
    ACTIONS(35), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(43), 10,
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
  [1015] = 18,
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
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0x,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_u,
    STATE(48), 1,
      sym_standard_principal_lit,
    STATE(145), 1,
      sym_parameter,
    ACTIONS(9), 2,
      sym_constant,
      sym_identifier,
    ACTIONS(23), 2,
      sym_uint_lit,
      sym_none_lit,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 4,
      sym_common_statement,
      sym_let_statement,
      sym_literal,
      sym_global,
    ACTIONS(35), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(43), 10,
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
  [1090] = 18,
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
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0x,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_u,
    STATE(48), 1,
      sym_standard_principal_lit,
    STATE(159), 1,
      sym_parameter,
    ACTIONS(9), 2,
      sym_constant,
      sym_identifier,
    ACTIONS(23), 2,
      sym_uint_lit,
      sym_none_lit,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 4,
      sym_common_statement,
      sym_let_statement,
      sym_literal,
      sym_global,
    ACTIONS(35), 6,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
    STATE(43), 10,
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
  [1165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 10,
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
    ACTIONS(84), 18,
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
  [1201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 10,
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
    ACTIONS(88), 18,
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
  [1237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 10,
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
    ACTIONS(92), 18,
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
  [1273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 10,
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
    ACTIONS(96), 18,
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
  [1309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 10,
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
    ACTIONS(100), 18,
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
  [1345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 10,
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
    ACTIONS(104), 18,
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
  [1381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 10,
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
    ACTIONS(108), 18,
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
  [1417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 10,
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
    ACTIONS(112), 18,
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
  [1453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 10,
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
    ACTIONS(116), 18,
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
  [1489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 10,
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
    ACTIONS(120), 18,
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
  [1525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 10,
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
    ACTIONS(124), 18,
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
  [1561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 11,
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
    ACTIONS(130), 14,
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
  [1594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 11,
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
    ACTIONS(134), 14,
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
  [1627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 11,
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
    ACTIONS(138), 14,
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
  [1660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 11,
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
    ACTIONS(142), 14,
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
  [1693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 11,
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
    ACTIONS(146), 14,
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
  [1726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 10,
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
    ACTIONS(148), 14,
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
  [1758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 10,
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
    ACTIONS(152), 14,
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
  [1790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 10,
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
    ACTIONS(156), 14,
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
  [1822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 10,
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
    ACTIONS(160), 14,
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
  [1854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 10,
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
    ACTIONS(164), 14,
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
  [1886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 10,
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
    ACTIONS(168), 14,
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
  [1918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 10,
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
    ACTIONS(172), 14,
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
  [1950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 10,
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
    ACTIONS(176), 14,
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
  [1982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 10,
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
    ACTIONS(180), 14,
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
  [2014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 10,
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
    ACTIONS(184), 14,
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
  [2046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 10,
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
    ACTIONS(188), 14,
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
  [2078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 10,
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
    ACTIONS(192), 14,
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
  [2110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 10,
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
    ACTIONS(196), 14,
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
  [2142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 10,
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
    ACTIONS(200), 14,
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
  [2174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 10,
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
    ACTIONS(204), 14,
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
  [2206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(190), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(188), 14,
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
  [2240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 10,
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
    ACTIONS(210), 14,
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
  [2272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 10,
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
    ACTIONS(214), 14,
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
  [2304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 10,
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
    ACTIONS(218), 14,
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
  [2336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 10,
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
    ACTIONS(222), 14,
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
  [2368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 10,
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
    ACTIONS(226), 14,
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
  [2400] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(54), 2,
      sym_common_statement,
      aux_sym_let_statement_repeat2,
    ACTIONS(235), 6,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(230), 14,
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
  [2435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(237), 14,
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
  [2465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    ACTIONS(243), 7,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(241), 14,
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
  [2497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
    ACTIONS(245), 14,
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
  [2527] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(251), 1,
      anon_sym_define_DASHtrait,
    ACTIONS(253), 1,
      anon_sym_impl_DASHtrait,
    ACTIONS(255), 1,
      anon_sym_use_DASHtrait,
    ACTIONS(257), 1,
      anon_sym_define_DASHconstant,
    ACTIONS(259), 1,
      anon_sym_define_DASHdata_DASHvar,
    ACTIONS(261), 1,
      anon_sym_define_DASHmap,
    ACTIONS(265), 1,
      anon_sym_let,
    ACTIONS(267), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(271), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(6), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(263), 3,
      anon_sym_define_DASHread_DASHonly,
      anon_sym_define_DASHprivate,
      anon_sym_define_DASHpublic,
    ACTIONS(269), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2578] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      anon_sym_LT,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(61), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(79), 2,
      sym_trait_type,
      sym_type_name,
    ACTIONS(279), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(25), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2618] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_LT,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(59), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(79), 2,
      sym_trait_type,
      sym_type_name,
    ACTIONS(279), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(25), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2658] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(61), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(79), 2,
      sym_trait_type,
      sym_type_name,
    ACTIONS(293), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(25), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2698] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_LT,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_parameter_type,
    STATE(79), 2,
      sym_trait_type,
      sym_type_name,
    ACTIONS(279), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(25), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2734] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_let,
    ACTIONS(299), 1,
      anon_sym_list,
    ACTIONS(301), 1,
      anon_sym_some,
    ACTIONS(267), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(271), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(303), 2,
      anon_sym_ok,
      anon_sym_err,
    STATE(6), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(269), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2772] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_type_name,
    ACTIONS(279), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(25), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2801] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_type_name,
    ACTIONS(279), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(25), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2830] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym_type_name,
    ACTIONS(279), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(25), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2859] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym_type_name,
    ACTIONS(279), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(25), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2888] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_tuple_type,
    STATE(144), 1,
      sym_type_name,
    ACTIONS(279), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(25), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_response_type,
  [2919] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_type_name,
    ACTIONS(279), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(25), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2948] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(126), 1,
      sym_type_name,
    ACTIONS(279), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(25), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [2977] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_type_name,
    ACTIONS(279), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(25), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [3006] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_type_name,
    STATE(74), 1,
      sym_tuple_type,
    ACTIONS(279), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(25), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_response_type,
  [3037] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(161), 1,
      sym_type_name,
    ACTIONS(279), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(25), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_tuple_type,
      sym_response_type,
  [3066] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_tuple_type,
    STATE(144), 1,
      sym_type_name,
    ACTIONS(279), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(25), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_signature,
      sym_response_type,
  [3097] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    STATE(75), 2,
      sym_declaration,
      aux_sym_source_repeat1,
    STATE(104), 9,
      sym_trait_definition,
      sym_trait_implementation,
      sym_trait_usage,
      sym_constant_definition,
      sym_variable_definition,
      sym_mapping_definition,
      sym_function_definition,
      sym_common_statement,
      sym_let_statement,
  [3122] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    STATE(75), 2,
      sym_declaration,
      aux_sym_source_repeat1,
    STATE(104), 9,
      sym_trait_definition,
      sym_trait_implementation,
      sym_trait_usage,
      sym_constant_definition,
      sym_variable_definition,
      sym_mapping_definition,
      sym_function_definition,
      sym_common_statement,
      sym_let_statement,
  [3147] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_let,
    ACTIONS(267), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(271), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(6), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(269), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3175] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(267), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(271), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(6), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(269), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      anon_sym_LBRACE,
  [3214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      anon_sym_LBRACE,
  [3228] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_buff,
    ACTIONS(320), 1,
      anon_sym_string_DASHascii,
    ACTIONS(322), 1,
      anon_sym_string_DASHutf8,
    ACTIONS(324), 1,
      anon_sym_list,
    ACTIONS(326), 1,
      anon_sym_optional,
    ACTIONS(328), 1,
      anon_sym_tuple,
    ACTIONS(330), 1,
      anon_sym_response,
  [3253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(92), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3267] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(85), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(84), 2,
      sym_let_variable_definition,
      aux_sym_let_statement_repeat1,
  [3295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(85), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(83), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(90), 2,
      sym_let_variable_definition,
      aux_sym_let_statement_repeat1,
  [3337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(82), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3351] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(164), 1,
      sym_contract_principal_lit,
    STATE(174), 1,
      sym_standard_principal_lit,
  [3367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(84), 2,
      sym_let_variable_definition,
      aux_sym_let_statement_repeat1,
  [3381] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(172), 1,
      sym_contract_principal_lit,
    STATE(174), 1,
      sym_standard_principal_lit,
  [3397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(92), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_tuple_type_for_signature_repeat1,
  [3424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_tuple_type_for_signature_repeat1,
  [3437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      aux_sym_tuple_lit_repeat1,
  [3450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(375), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_tuple_type_repeat1,
  [3474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym_identifier,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_tuple_lit_repeat1,
  [3487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_tuple_type_repeat1,
  [3500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      aux_sym_tuple_lit_repeat1,
  [3513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    STATE(158), 2,
      sym_common_statement,
      sym_let_statement,
  [3524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_tuple_type_repeat1,
  [3537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_tuple_type_for_signature_repeat1,
  [3550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3614] = 3,
    ACTIONS(420), 1,
      anon_sym_DQUOTE,
    ACTIONS(422), 1,
      aux_sym_ascii_string_lit_token1,
    ACTIONS(424), 1,
      sym_comment,
  [3624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_function_signature,
  [3650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3682] = 3,
    ACTIONS(424), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    ACTIONS(442), 1,
      aux_sym_utf8_string_lit_token1,
  [3692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_COLON,
  [3715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
  [3722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
  [3729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
  [3736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_identifier,
  [3743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_identifier,
  [3750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
  [3757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_uint,
  [3764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_DQUOTE,
  [3771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
  [3778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
  [3785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
  [3792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
  [3799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
  [3806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
  [3813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
  [3820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
  [3827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
  [3834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
  [3841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
  [3848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
  [3855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
  [3862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
  [3869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      aux_sym_buffer_type_token1,
  [3876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      aux_sym_buffer_type_token1,
  [3883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_buffer_type_token1,
  [3890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym_buffer_type_token1,
  [3897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_identifier,
  [3904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
  [3911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
  [3918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym_identifier,
  [3925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
  [3932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
  [3939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_COLON,
  [3946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      sym_identifier,
  [3953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
  [3960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
  [3967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
  [3974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_COMMA,
  [3981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_identifier,
  [3988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
  [3995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_DOT,
  [4002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
  [4009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym_identifier,
  [4016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_DQUOTE,
  [4023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
  [4030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      aux_sym_buffer_lit_token1,
  [4037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_buffer_type_token1,
  [4044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym_identifier,
  [4051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_DOT,
  [4058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
  [4065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DOT,
  [4072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      aux_sym_standard_principal_lit_token1,
  [4079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_GT,
  [4086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym_identifier,
  [4093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LPAREN,
  [4100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
  [4107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
  [4114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym_identifier,
  [4121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym_identifier,
  [4128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym_identifier,
  [4135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym_identifier,
  [4142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
  [4149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 158,
  [SMALL_STATE(5)] = 237,
  [SMALL_STATE(6)] = 316,
  [SMALL_STATE(7)] = 395,
  [SMALL_STATE(8)] = 475,
  [SMALL_STATE(9)] = 555,
  [SMALL_STATE(10)] = 635,
  [SMALL_STATE(11)] = 715,
  [SMALL_STATE(12)] = 790,
  [SMALL_STATE(13)] = 865,
  [SMALL_STATE(14)] = 940,
  [SMALL_STATE(15)] = 1015,
  [SMALL_STATE(16)] = 1090,
  [SMALL_STATE(17)] = 1165,
  [SMALL_STATE(18)] = 1201,
  [SMALL_STATE(19)] = 1237,
  [SMALL_STATE(20)] = 1273,
  [SMALL_STATE(21)] = 1309,
  [SMALL_STATE(22)] = 1345,
  [SMALL_STATE(23)] = 1381,
  [SMALL_STATE(24)] = 1417,
  [SMALL_STATE(25)] = 1453,
  [SMALL_STATE(26)] = 1489,
  [SMALL_STATE(27)] = 1525,
  [SMALL_STATE(28)] = 1561,
  [SMALL_STATE(29)] = 1594,
  [SMALL_STATE(30)] = 1627,
  [SMALL_STATE(31)] = 1660,
  [SMALL_STATE(32)] = 1693,
  [SMALL_STATE(33)] = 1726,
  [SMALL_STATE(34)] = 1758,
  [SMALL_STATE(35)] = 1790,
  [SMALL_STATE(36)] = 1822,
  [SMALL_STATE(37)] = 1854,
  [SMALL_STATE(38)] = 1886,
  [SMALL_STATE(39)] = 1918,
  [SMALL_STATE(40)] = 1950,
  [SMALL_STATE(41)] = 1982,
  [SMALL_STATE(42)] = 2014,
  [SMALL_STATE(43)] = 2046,
  [SMALL_STATE(44)] = 2078,
  [SMALL_STATE(45)] = 2110,
  [SMALL_STATE(46)] = 2142,
  [SMALL_STATE(47)] = 2174,
  [SMALL_STATE(48)] = 2206,
  [SMALL_STATE(49)] = 2240,
  [SMALL_STATE(50)] = 2272,
  [SMALL_STATE(51)] = 2304,
  [SMALL_STATE(52)] = 2336,
  [SMALL_STATE(53)] = 2368,
  [SMALL_STATE(54)] = 2400,
  [SMALL_STATE(55)] = 2435,
  [SMALL_STATE(56)] = 2465,
  [SMALL_STATE(57)] = 2497,
  [SMALL_STATE(58)] = 2527,
  [SMALL_STATE(59)] = 2578,
  [SMALL_STATE(60)] = 2618,
  [SMALL_STATE(61)] = 2658,
  [SMALL_STATE(62)] = 2698,
  [SMALL_STATE(63)] = 2734,
  [SMALL_STATE(64)] = 2772,
  [SMALL_STATE(65)] = 2801,
  [SMALL_STATE(66)] = 2830,
  [SMALL_STATE(67)] = 2859,
  [SMALL_STATE(68)] = 2888,
  [SMALL_STATE(69)] = 2919,
  [SMALL_STATE(70)] = 2948,
  [SMALL_STATE(71)] = 2977,
  [SMALL_STATE(72)] = 3006,
  [SMALL_STATE(73)] = 3037,
  [SMALL_STATE(74)] = 3066,
  [SMALL_STATE(75)] = 3097,
  [SMALL_STATE(76)] = 3122,
  [SMALL_STATE(77)] = 3147,
  [SMALL_STATE(78)] = 3175,
  [SMALL_STATE(79)] = 3200,
  [SMALL_STATE(80)] = 3214,
  [SMALL_STATE(81)] = 3228,
  [SMALL_STATE(82)] = 3253,
  [SMALL_STATE(83)] = 3267,
  [SMALL_STATE(84)] = 3281,
  [SMALL_STATE(85)] = 3295,
  [SMALL_STATE(86)] = 3309,
  [SMALL_STATE(87)] = 3323,
  [SMALL_STATE(88)] = 3337,
  [SMALL_STATE(89)] = 3351,
  [SMALL_STATE(90)] = 3367,
  [SMALL_STATE(91)] = 3381,
  [SMALL_STATE(92)] = 3397,
  [SMALL_STATE(93)] = 3411,
  [SMALL_STATE(94)] = 3424,
  [SMALL_STATE(95)] = 3437,
  [SMALL_STATE(96)] = 3450,
  [SMALL_STATE(97)] = 3461,
  [SMALL_STATE(98)] = 3474,
  [SMALL_STATE(99)] = 3487,
  [SMALL_STATE(100)] = 3500,
  [SMALL_STATE(101)] = 3513,
  [SMALL_STATE(102)] = 3524,
  [SMALL_STATE(103)] = 3537,
  [SMALL_STATE(104)] = 3550,
  [SMALL_STATE(105)] = 3558,
  [SMALL_STATE(106)] = 3566,
  [SMALL_STATE(107)] = 3574,
  [SMALL_STATE(108)] = 3582,
  [SMALL_STATE(109)] = 3590,
  [SMALL_STATE(110)] = 3598,
  [SMALL_STATE(111)] = 3606,
  [SMALL_STATE(112)] = 3614,
  [SMALL_STATE(113)] = 3624,
  [SMALL_STATE(114)] = 3632,
  [SMALL_STATE(115)] = 3640,
  [SMALL_STATE(116)] = 3650,
  [SMALL_STATE(117)] = 3658,
  [SMALL_STATE(118)] = 3666,
  [SMALL_STATE(119)] = 3674,
  [SMALL_STATE(120)] = 3682,
  [SMALL_STATE(121)] = 3692,
  [SMALL_STATE(122)] = 3700,
  [SMALL_STATE(123)] = 3708,
  [SMALL_STATE(124)] = 3715,
  [SMALL_STATE(125)] = 3722,
  [SMALL_STATE(126)] = 3729,
  [SMALL_STATE(127)] = 3736,
  [SMALL_STATE(128)] = 3743,
  [SMALL_STATE(129)] = 3750,
  [SMALL_STATE(130)] = 3757,
  [SMALL_STATE(131)] = 3764,
  [SMALL_STATE(132)] = 3771,
  [SMALL_STATE(133)] = 3778,
  [SMALL_STATE(134)] = 3785,
  [SMALL_STATE(135)] = 3792,
  [SMALL_STATE(136)] = 3799,
  [SMALL_STATE(137)] = 3806,
  [SMALL_STATE(138)] = 3813,
  [SMALL_STATE(139)] = 3820,
  [SMALL_STATE(140)] = 3827,
  [SMALL_STATE(141)] = 3834,
  [SMALL_STATE(142)] = 3841,
  [SMALL_STATE(143)] = 3848,
  [SMALL_STATE(144)] = 3855,
  [SMALL_STATE(145)] = 3862,
  [SMALL_STATE(146)] = 3869,
  [SMALL_STATE(147)] = 3876,
  [SMALL_STATE(148)] = 3883,
  [SMALL_STATE(149)] = 3890,
  [SMALL_STATE(150)] = 3897,
  [SMALL_STATE(151)] = 3904,
  [SMALL_STATE(152)] = 3911,
  [SMALL_STATE(153)] = 3918,
  [SMALL_STATE(154)] = 3925,
  [SMALL_STATE(155)] = 3932,
  [SMALL_STATE(156)] = 3939,
  [SMALL_STATE(157)] = 3946,
  [SMALL_STATE(158)] = 3953,
  [SMALL_STATE(159)] = 3960,
  [SMALL_STATE(160)] = 3967,
  [SMALL_STATE(161)] = 3974,
  [SMALL_STATE(162)] = 3981,
  [SMALL_STATE(163)] = 3988,
  [SMALL_STATE(164)] = 3995,
  [SMALL_STATE(165)] = 4002,
  [SMALL_STATE(166)] = 4009,
  [SMALL_STATE(167)] = 4016,
  [SMALL_STATE(168)] = 4023,
  [SMALL_STATE(169)] = 4030,
  [SMALL_STATE(170)] = 4037,
  [SMALL_STATE(171)] = 4044,
  [SMALL_STATE(172)] = 4051,
  [SMALL_STATE(173)] = 4058,
  [SMALL_STATE(174)] = 4065,
  [SMALL_STATE(175)] = 4072,
  [SMALL_STATE(176)] = 4079,
  [SMALL_STATE(177)] = 4086,
  [SMALL_STATE(178)] = 4093,
  [SMALL_STATE(179)] = 4100,
  [SMALL_STATE(180)] = 4107,
  [SMALL_STATE(181)] = 4114,
  [SMALL_STATE(182)] = 4121,
  [SMALL_STATE(183)] = 4128,
  [SMALL_STATE(184)] = 4135,
  [SMALL_STATE(185)] = 4142,
  [SMALL_STATE(186)] = 4149,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(39),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(63),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(177),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(40),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(98),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(170),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(43),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(34),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(175),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(169),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(112),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(167),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_statement_repeat1, 2), SHIFT_REPEAT(47),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_signature, 4, .production_id = 9),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_signature, 4, .production_id = 9),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3, .production_id = 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3, .production_id = 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_signature, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_signature, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_type, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_type, 5),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_type, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_type, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_type, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_type, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_type, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_utf8_string_type, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_string_type, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 6),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 6),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_statement, 4, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_common_statement, 4, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 8),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 8),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 7),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 7),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_statement, 3, .production_id = 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_common_statement, 3, .production_id = 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_lit, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_lit, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_utf8_string_lit, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_string_lit, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_some_lit, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_some_lit, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_lit, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_lit, 4),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_utf8_string_lit, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_string_lit, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_principal_lit, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_principal_lit, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 3, .production_id = 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 3, .production_id = 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_statement_repeat2, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat2, 2), SHIFT_REPEAT(78),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat2, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic_function, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_function, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_statement_repeat2, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat2, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_function, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_function, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(81),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(162),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(25),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(102),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(58),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_type, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat1, 2), SHIFT_REPEAT(157),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_statement_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2), SHIFT_REPEAT(128),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2), SHIFT_REPEAT(153),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 3, .production_id = 7),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, .production_id = 5), SHIFT_REPEAT(123),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, .production_id = 5),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, .production_id = 3), SHIFT_REPEAT(156),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, .production_id = 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_signature_repeat1, 2, .production_id = 5), SHIFT_REPEAT(127),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_signature_repeat1, 2, .production_id = 5),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 7),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 7),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_variable_definition, 4),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 6),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 6),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_implementation, 6),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 4, .production_id = 7),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 4, .production_id = 10),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_signature_repeat1, 4, .production_id = 11),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_definition, 6, .production_id = 6),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_usage, 7, .production_id = 8),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 4),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 4),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [488] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
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
