#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 241
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 4
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
  anon_sym_cplusplus = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_LBRACE_LBRACE = 4,
  aux_sym_cplusplus_token1 = 5,
  anon_sym_RBRACE_RBRACE = 6,
  anon_sym_SEMI = 7,
  sym__commentline = 8,
  anon_sym_namespace = 9,
  anon_sym_COLON_COLON = 10,
  anon_sym_COLON = 11,
  anon_sym_DOT = 12,
  anon_sym_COMMA = 13,
  anon_sym_TILDE = 14,
  anon_sym_EQ = 15,
  anon_sym_AMP = 16,
  anon_sym_import = 17,
  anon_sym_message = 18,
  anon_sym_packet = 19,
  anon_sym_class = 20,
  anon_sym_struct = 21,
  anon_sym_enum = 22,
  anon_sym_abstract = 23,
  anon_sym_noncobject = 24,
  anon_sym_extends = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_DASH = 28,
  aux_sym__body_token1 = 29,
  anon_sym_STAR = 30,
  anon_sym_const = 31,
  anon_sym_char = 32,
  anon_sym_short = 33,
  anon_sym_int = 34,
  anon_sym_long = 35,
  anon_sym_unsigned = 36,
  anon_sym_double = 37,
  anon_sym_string = 38,
  anon_sym_bool = 39,
  anon_sym_LBRACK = 40,
  anon_sym_RBRACK = 41,
  anon_sym_true = 42,
  anon_sym_false = 43,
  anon_sym_QMARK = 44,
  anon_sym_AMP_AMP = 45,
  anon_sym_PIPE_PIPE = 46,
  anon_sym_POUND_POUND = 47,
  anon_sym_EQ_EQ = 48,
  anon_sym_BANG_EQ = 49,
  anon_sym_GT = 50,
  anon_sym_GT_EQ = 51,
  anon_sym_LT = 52,
  anon_sym_LT_EQ = 53,
  anon_sym_PIPE = 54,
  anon_sym_POUND = 55,
  anon_sym_LT_LT = 56,
  anon_sym_GT_GT = 57,
  anon_sym_PLUS = 58,
  anon_sym_SLASH = 59,
  anon_sym_PERCENT = 60,
  anon_sym_CARET = 61,
  anon_sym_BANG = 62,
  anon_sym_AT = 63,
  aux_sym__prop_value_token1 = 64,
  aux_sym_cplusplus_parenthesized_token1 = 65,
  sym__NAME = 66,
  sym__INTCONSTANT = 67,
  sym__REALCONSTANT = 68,
  sym__CHARCONSTANT = 69,
  sym__STRINGCONSTANT = 70,
  sym__EMPTYLINE = 71,
  sym_msg_file = 72,
  sym_cplusplus = 73,
  sym_comment = 74,
  sym_namespace = 75,
  sym__qname = 76,
  sym_targetspec = 77,
  sym__targetitem = 78,
  sym_import = 79,
  sym_importspec = 80,
  sym__import_un_qname = 81,
  sym__importname = 82,
  sym_struct_decl = 83,
  sym_class_decl = 84,
  sym_message_decl = 85,
  sym_packet_decl = 86,
  sym_enum_decl = 87,
  sym_enum = 88,
  sym__enumfield_or_property = 89,
  sym_enumfield = 90,
  sym_enumvalue = 91,
  sym_message = 92,
  sym_packet = 93,
  sym_class = 94,
  sym_struct = 95,
  sym__message_header = 96,
  sym__packet_header = 97,
  sym__class_header = 98,
  sym__struct_header = 99,
  sym__body = 100,
  sym_field = 101,
  sym__fieldtypename = 102,
  sym__fielddatatype = 103,
  sym__fieldsimpledatatype = 104,
  sym_opt_fieldvector = 105,
  sym_fieldvalue = 106,
  sym__fieldvalueitem = 107,
  sym_property = 108,
  sym__prop_body = 109,
  sym__prop_parenthesized = 110,
  sym__prop_value = 111,
  sym__prop_value_parenthesized = 112,
  aux_sym__inline_properties = 113,
  sym_inline_property = 114,
  aux_sym_msg_file_repeat1 = 115,
  aux_sym_comment_repeat1 = 116,
  aux_sym__qname_repeat1 = 117,
  aux_sym_targetspec_repeat1 = 118,
  aux_sym_importspec_repeat1 = 119,
  aux_sym_enum_repeat1 = 120,
  aux_sym__body_repeat1 = 121,
  aux_sym_fieldvalue_repeat1 = 122,
  aux_sym__prop_parenthesized_repeat1 = 123,
  alias_sym_extends = 124,
  alias_sym_index = 125,
  alias_sym_size = 126,
  alias_sym_tag = 127,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_cplusplus] = "cplusplus",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [aux_sym_cplusplus_token1] = "body",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_SEMI] = ";",
  [sym__commentline] = "_commentline",
  [anon_sym_namespace] = "namespace",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_TILDE] = "~",
  [anon_sym_EQ] = "=",
  [anon_sym_AMP] = "&",
  [anon_sym_import] = "import",
  [anon_sym_message] = "message",
  [anon_sym_packet] = "packet",
  [anon_sym_class] = "class",
  [anon_sym_struct] = "struct",
  [anon_sym_enum] = "enum",
  [anon_sym_abstract] = "abstract",
  [anon_sym_noncobject] = "noncobject",
  [anon_sym_extends] = "extends",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH] = "-",
  [aux_sym__body_token1] = "_body_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_const] = "const",
  [anon_sym_char] = "char",
  [anon_sym_short] = "short",
  [anon_sym_int] = "int",
  [anon_sym_long] = "long",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_double] = "double",
  [anon_sym_string] = "string",
  [anon_sym_bool] = "bool",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_PIPE] = "|",
  [anon_sym_POUND] = "#",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [anon_sym_BANG] = "!",
  [anon_sym_AT] = "@",
  [aux_sym__prop_value_token1] = "_prop_value_token1",
  [aux_sym_cplusplus_parenthesized_token1] = "cplusplus_parenthesized_token1",
  [sym__NAME] = "_NAME",
  [sym__INTCONSTANT] = "_INTCONSTANT",
  [sym__REALCONSTANT] = "_REALCONSTANT",
  [sym__CHARCONSTANT] = "_CHARCONSTANT",
  [sym__STRINGCONSTANT] = "_STRINGCONSTANT",
  [sym__EMPTYLINE] = "_EMPTYLINE",
  [sym_msg_file] = "msg_file",
  [sym_cplusplus] = "cplusplus",
  [sym_comment] = "comment",
  [sym_namespace] = "namespace",
  [sym__qname] = "_qname",
  [sym_targetspec] = "target",
  [sym__targetitem] = "_targetitem",
  [sym_import] = "import",
  [sym_importspec] = "name",
  [sym__import_un_qname] = "_import_un_qname",
  [sym__importname] = "_importname",
  [sym_struct_decl] = "struct_decl",
  [sym_class_decl] = "class_decl",
  [sym_message_decl] = "message_decl",
  [sym_packet_decl] = "packet_decl",
  [sym_enum_decl] = "enum_decl",
  [sym_enum] = "enum",
  [sym__enumfield_or_property] = "_enumfield_or_property",
  [sym_enumfield] = "field",
  [sym_enumvalue] = "value",
  [sym_message] = "message",
  [sym_packet] = "packet",
  [sym_class] = "class",
  [sym_struct] = "struct",
  [sym__message_header] = "_message_header",
  [sym__packet_header] = "_packet_header",
  [sym__class_header] = "_class_header",
  [sym__struct_header] = "_struct_header",
  [sym__body] = "_body",
  [sym_field] = "field",
  [sym__fieldtypename] = "_fieldtypename",
  [sym__fielddatatype] = "type",
  [sym__fieldsimpledatatype] = "_fieldsimpledatatype",
  [sym_opt_fieldvector] = "vector",
  [sym_fieldvalue] = "value",
  [sym__fieldvalueitem] = "_fieldvalueitem",
  [sym_property] = "property",
  [sym__prop_body] = "_prop_body",
  [sym__prop_parenthesized] = "_prop_parenthesized",
  [sym__prop_value] = "_prop_value",
  [sym__prop_value_parenthesized] = "_prop_value_parenthesized",
  [aux_sym__inline_properties] = "_inline_properties",
  [sym_inline_property] = "property",
  [aux_sym_msg_file_repeat1] = "msg_file_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym__qname_repeat1] = "_qname_repeat1",
  [aux_sym_targetspec_repeat1] = "targetspec_repeat1",
  [aux_sym_importspec_repeat1] = "importspec_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym__body_repeat1] = "_body_repeat1",
  [aux_sym_fieldvalue_repeat1] = "fieldvalue_repeat1",
  [aux_sym__prop_parenthesized_repeat1] = "_prop_parenthesized_repeat1",
  [alias_sym_extends] = "extends",
  [alias_sym_index] = "index",
  [alias_sym_size] = "size",
  [alias_sym_tag] = "tag",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_cplusplus] = anon_sym_cplusplus,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [aux_sym_cplusplus_token1] = aux_sym_cplusplus_token1,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__commentline] = sym__commentline,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_packet] = anon_sym_packet,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_noncobject] = anon_sym_noncobject,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym__body_token1] = aux_sym__body_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__prop_value_token1] = aux_sym__prop_value_token1,
  [aux_sym_cplusplus_parenthesized_token1] = aux_sym_cplusplus_parenthesized_token1,
  [sym__NAME] = sym__NAME,
  [sym__INTCONSTANT] = sym__INTCONSTANT,
  [sym__REALCONSTANT] = sym__REALCONSTANT,
  [sym__CHARCONSTANT] = sym__CHARCONSTANT,
  [sym__STRINGCONSTANT] = sym__STRINGCONSTANT,
  [sym__EMPTYLINE] = sym__EMPTYLINE,
  [sym_msg_file] = sym_msg_file,
  [sym_cplusplus] = sym_cplusplus,
  [sym_comment] = sym_comment,
  [sym_namespace] = sym_namespace,
  [sym__qname] = sym__qname,
  [sym_targetspec] = sym_targetspec,
  [sym__targetitem] = sym__targetitem,
  [sym_import] = sym_import,
  [sym_importspec] = sym_importspec,
  [sym__import_un_qname] = sym__import_un_qname,
  [sym__importname] = sym__importname,
  [sym_struct_decl] = sym_struct_decl,
  [sym_class_decl] = sym_class_decl,
  [sym_message_decl] = sym_message_decl,
  [sym_packet_decl] = sym_packet_decl,
  [sym_enum_decl] = sym_enum_decl,
  [sym_enum] = sym_enum,
  [sym__enumfield_or_property] = sym__enumfield_or_property,
  [sym_enumfield] = sym_field,
  [sym_enumvalue] = sym_enumvalue,
  [sym_message] = sym_message,
  [sym_packet] = sym_packet,
  [sym_class] = sym_class,
  [sym_struct] = sym_struct,
  [sym__message_header] = sym__message_header,
  [sym__packet_header] = sym__packet_header,
  [sym__class_header] = sym__class_header,
  [sym__struct_header] = sym__struct_header,
  [sym__body] = sym__body,
  [sym_field] = sym_field,
  [sym__fieldtypename] = sym__fieldtypename,
  [sym__fielddatatype] = sym__fielddatatype,
  [sym__fieldsimpledatatype] = sym__fieldsimpledatatype,
  [sym_opt_fieldvector] = sym_opt_fieldvector,
  [sym_fieldvalue] = sym_enumvalue,
  [sym__fieldvalueitem] = sym__fieldvalueitem,
  [sym_property] = sym_property,
  [sym__prop_body] = sym__prop_body,
  [sym__prop_parenthesized] = sym__prop_parenthesized,
  [sym__prop_value] = sym__prop_value,
  [sym__prop_value_parenthesized] = sym__prop_value_parenthesized,
  [aux_sym__inline_properties] = aux_sym__inline_properties,
  [sym_inline_property] = sym_property,
  [aux_sym_msg_file_repeat1] = aux_sym_msg_file_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym__qname_repeat1] = aux_sym__qname_repeat1,
  [aux_sym_targetspec_repeat1] = aux_sym_targetspec_repeat1,
  [aux_sym_importspec_repeat1] = aux_sym_importspec_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym__body_repeat1] = aux_sym__body_repeat1,
  [aux_sym_fieldvalue_repeat1] = aux_sym_fieldvalue_repeat1,
  [aux_sym__prop_parenthesized_repeat1] = aux_sym__prop_parenthesized_repeat1,
  [alias_sym_extends] = alias_sym_extends,
  [alias_sym_index] = alias_sym_index,
  [alias_sym_size] = alias_sym_size,
  [alias_sym_tag] = alias_sym_tag,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_cplusplus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cplusplus_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__commentline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_packet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noncobject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__prop_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cplusplus_parenthesized_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__NAME] = {
    .visible = false,
    .named = true,
  },
  [sym__INTCONSTANT] = {
    .visible = false,
    .named = true,
  },
  [sym__REALCONSTANT] = {
    .visible = false,
    .named = true,
  },
  [sym__CHARCONSTANT] = {
    .visible = false,
    .named = true,
  },
  [sym__STRINGCONSTANT] = {
    .visible = false,
    .named = true,
  },
  [sym__EMPTYLINE] = {
    .visible = false,
    .named = true,
  },
  [sym_msg_file] = {
    .visible = true,
    .named = true,
  },
  [sym_cplusplus] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym__qname] = {
    .visible = false,
    .named = true,
  },
  [sym_targetspec] = {
    .visible = true,
    .named = true,
  },
  [sym__targetitem] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_importspec] = {
    .visible = true,
    .named = true,
  },
  [sym__import_un_qname] = {
    .visible = false,
    .named = true,
  },
  [sym__importname] = {
    .visible = false,
    .named = true,
  },
  [sym_struct_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_class_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_message_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_packet_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym__enumfield_or_property] = {
    .visible = false,
    .named = true,
  },
  [sym_enumfield] = {
    .visible = true,
    .named = true,
  },
  [sym_enumvalue] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_packet] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym__message_header] = {
    .visible = false,
    .named = true,
  },
  [sym__packet_header] = {
    .visible = false,
    .named = true,
  },
  [sym__class_header] = {
    .visible = false,
    .named = true,
  },
  [sym__struct_header] = {
    .visible = false,
    .named = true,
  },
  [sym__body] = {
    .visible = false,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym__fieldtypename] = {
    .visible = false,
    .named = true,
  },
  [sym__fielddatatype] = {
    .visible = true,
    .named = true,
  },
  [sym__fieldsimpledatatype] = {
    .visible = false,
    .named = true,
  },
  [sym_opt_fieldvector] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldvalue] = {
    .visible = true,
    .named = true,
  },
  [sym__fieldvalueitem] = {
    .visible = false,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym__prop_body] = {
    .visible = false,
    .named = true,
  },
  [sym__prop_parenthesized] = {
    .visible = false,
    .named = true,
  },
  [sym__prop_value] = {
    .visible = false,
    .named = true,
  },
  [sym__prop_value_parenthesized] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__inline_properties] = {
    .visible = false,
    .named = false,
  },
  [sym_inline_property] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_msg_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__qname_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_targetspec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_importspec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fieldvalue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__prop_parenthesized_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_extends] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_index] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_size] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_importspec,
  },
  [2] = {
    [0] = sym_importspec,
  },
  [3] = {
    [1] = sym_importspec,
    [3] = alias_sym_extends,
  },
  [4] = {
    [2] = sym_importspec,
  },
  [5] = {
    [1] = aux_sym_cplusplus_token1,
  },
  [6] = {
    [0] = sym_importspec,
    [2] = alias_sym_tag,
  },
  [7] = {
    [1] = sym_importspec,
    [3] = aux_sym_cplusplus_token1,
  },
  [8] = {
    [1] = alias_sym_tag,
  },
  [9] = {
    [0] = sym_importspec,
    [2] = alias_sym_index,
  },
  [10] = {
    [2] = aux_sym_cplusplus_token1,
  },
  [11] = {
    [2] = sym_importspec,
    [4] = alias_sym_extends,
  },
  [12] = {
    [2] = sym_importspec,
    [4] = aux_sym_cplusplus_token1,
  },
  [13] = {
    [1] = alias_sym_size,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__qname, 3,
    sym__qname,
    alias_sym_extends,
    sym_importspec,
  aux_sym_enum_repeat1, 2,
    aux_sym_enum_repeat1,
    aux_sym_cplusplus_token1,
  aux_sym__body_repeat1, 2,
    aux_sym__body_repeat1,
    aux_sym_cplusplus_token1,
  aux_sym__prop_parenthesized_repeat1, 2,
    aux_sym__prop_parenthesized_repeat1,
    alias_sym_tag,
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
  [36] = 16,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 15,
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
  [52] = 19,
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
  [81] = 24,
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
  [97] = 16,
  [98] = 15,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 19,
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
  [120] = 24,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 104,
  [128] = 128,
  [129] = 92,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 91,
  [138] = 138,
  [139] = 94,
  [140] = 140,
  [141] = 95,
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
  [162] = 107,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 167,
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
  [180] = 167,
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
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 197,
  [229] = 226,
  [230] = 201,
  [231] = 212,
  [232] = 226,
  [233] = 212,
  [234] = 234,
  [235] = 235,
  [236] = 235,
  [237] = 235,
  [238] = 202,
  [239] = 202,
  [240] = 221,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(91);
      ADVANCE_MAP(
        '!', 183,
        '#', 175,
        '%', 181,
        '&', 120,
        '(', 93,
        ')', 94,
        '*', 143,
        '+', 179,
        ',', 117,
        '-', 138,
        '.', 115,
        '/', 180,
        ':', 113,
        ';', 103,
        '<', 170,
        '=', 119,
        '>', 167,
        '?', 161,
        '@', 185,
        '[', 157,
        ']', 158,
        '^', 182,
        '{', 136,
        '|', 173,
        '}', 137,
        '~', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 140,
        '\r', 141,
        '/', 13,
        ':', 17,
        '@', 185,
        'a', 197,
        'b', 241,
        'c', 217,
        'd', 238,
        'e', 229,
        'i', 230,
        'l', 242,
        's', 219,
        'u', 232,
        '}', 137,
        '\t', 139,
        0x0b, 139,
        '\f', 139,
        ' ', 139,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 140,
        '\r', 141,
        '/', 13,
        '@', 185,
        'e', 229,
        '}', 137,
        '\t', 139,
        0x0b, 139,
        '\f', 139,
        ' ', 139,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 184,
        '"', 6,
        '#', 176,
        '%', 181,
        '&', 121,
        '\'', 87,
        '(', 93,
        ')', 94,
        '*', 143,
        '+', 179,
        ',', 117,
        '-', 138,
        '.', 116,
        '/', 180,
        '0', 272,
        ':', 114,
        '<', 171,
        '=', 18,
        '>', 168,
        '?', 161,
        '[', 157,
        ']', 158,
        '^', 182,
        'f', 190,
        't', 246,
        '{', 80,
        '|', 174,
        '~', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(139);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '&', 120,
        '(', 93,
        ')', 94,
        '*', 143,
        ',', 117,
        '-', 138,
        '.', 115,
        '/', 13,
        '0', 274,
        ':', 114,
        ';', 103,
        '=', 119,
        ']', 158,
        '~', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(139);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(279);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '/') ADVANCE(187);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '(', 93,
        '/', 13,
        ':', 17,
        ';', 103,
        '=', 119,
        '@', 185,
        '[', 157,
        ']', 158,
        'c', 37,
        'e', 47,
        'i', 50,
        'l', 52,
        's', 38,
        '{', 136,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '*', 143,
        '/', 13,
        ':', 17,
        ';', 103,
        '=', 119,
        '@', 185,
        '[', 157,
        'e', 229,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '.', 115,
        '/', 13,
        '0', 274,
        ':', 17,
        ';', 103,
        '=', 119,
        'b', 241,
        'c', 217,
        'd', 238,
        'i', 230,
        'l', 242,
        's', 219,
        'u', 232,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(139);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(108);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '/', 13,
        ':', 17,
        'b', 241,
        'c', 218,
        'd', 238,
        'i', 230,
        'l', 242,
        's', 219,
        'u', 232,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(243);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(192);
      if (lookahead == 's') ADVANCE(266);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(112);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(165);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'k') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'x') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 80:
      if (lookahead == '{') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == '}') ADVANCE(102);
      END_STATE();
    case 82:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 86:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 87:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(8);
      END_STATE();
    case 88:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(101);
      END_STATE();
    case 89:
      if (eof) ADVANCE(91);
      ADVANCE_MAP(
        '\n', 140,
        '\r', 141,
        '/', 13,
        ';', 103,
        '@', 185,
        'c', 41,
        'e', 46,
        'i', 43,
        'm', 29,
        'n', 21,
        'p', 19,
        's', 69,
        '\t', 139,
        0x0b, 139,
        '\f', 139,
        ' ', 139,
      );
      END_STATE();
    case 90:
      if (eof) ADVANCE(91);
      ADVANCE_MAP(
        '!', 184,
        '"', 6,
        '#', 176,
        '%', 181,
        '&', 121,
        '\'', 87,
        '(', 93,
        ')', 94,
        '*', 143,
        '+', 179,
        ',', 117,
        '-', 138,
        '.', 116,
        '/', 180,
        '0', 272,
        ':', 114,
        ';', 103,
        '<', 171,
        '=', 18,
        '>', 168,
        '?', 161,
        '@', 185,
        '[', 157,
        ']', 158,
        '^', 182,
        'e', 229,
        'f', 190,
        't', 246,
        '{', 136,
        '|', 174,
        '}', 81,
        '~', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(139);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_cplusplus_token1);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_cplusplus_token1);
      if (lookahead == '\r') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_cplusplus_token1);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '}') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_cplusplus_token1);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_cplusplus_token1);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_cplusplus_token1);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__commentline);
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(186);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(108);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__commentline);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__commentline);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__commentline);
      if (lookahead == '\r') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(107);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(108);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__commentline);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__commentline);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__commentline);
      if (lookahead == '\\') ADVANCE(186);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(108);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(112);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(162);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_packet);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_packet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_noncobject);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__body_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__body_token1);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__body_token1);
      if (lookahead == '\n') ADVANCE(3);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__body_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(188);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == '>') ADVANCE(178);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(163);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(164);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(108);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(166);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__prop_value_token1);
      if (lookahead == '\r') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(107);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(108);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__prop_value_token1);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__prop_value_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_cplusplus_parenthesized_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'a') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'a') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'a') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'a') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'a') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'a') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'b') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'b') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'b') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'c') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'c') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'c') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'c') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'c') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'd') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'e') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'g') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'g') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'g') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'g') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'h') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'h') ADVANCE(240);
      if (lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'i') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'i') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'j') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'k') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'l') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'l') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'n') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'n') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'n') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'n') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'n') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'n') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'n') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'o') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'o') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'o') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'o') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'o') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'o') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'r') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'r') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'r') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'r') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'r') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 's') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 's') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 's') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 's') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 's') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 's') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 's') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 't') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 't') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 't') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 't') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 't') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'u') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'u') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'u') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__NAME);
      if (lookahead == 'u') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__NAME);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__INTCONSTANT);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__INTCONSTANT);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__INTCONSTANT);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__INTCONSTANT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__INTCONSTANT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__REALCONSTANT);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__REALCONSTANT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__CHARCONSTANT);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__STRINGCONSTANT);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__EMPTYLINE);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(281);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(281);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 89},
  [2] = {.lex_state = 90},
  [3] = {.lex_state = 90},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 89},
  [8] = {.lex_state = 89},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 89},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 89},
  [29] = {.lex_state = 89},
  [30] = {.lex_state = 89},
  [31] = {.lex_state = 89},
  [32] = {.lex_state = 89},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 89},
  [35] = {.lex_state = 89},
  [36] = {.lex_state = 89},
  [37] = {.lex_state = 89},
  [38] = {.lex_state = 89},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 89},
  [41] = {.lex_state = 89},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 89},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 89},
  [47] = {.lex_state = 89},
  [48] = {.lex_state = 89},
  [49] = {.lex_state = 89},
  [50] = {.lex_state = 89},
  [51] = {.lex_state = 89},
  [52] = {.lex_state = 89},
  [53] = {.lex_state = 89},
  [54] = {.lex_state = 89},
  [55] = {.lex_state = 89},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 89},
  [59] = {.lex_state = 89},
  [60] = {.lex_state = 89},
  [61] = {.lex_state = 89},
  [62] = {.lex_state = 89},
  [63] = {.lex_state = 89},
  [64] = {.lex_state = 89},
  [65] = {.lex_state = 89},
  [66] = {.lex_state = 89},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 89},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 89},
  [72] = {.lex_state = 89},
  [73] = {.lex_state = 89},
  [74] = {.lex_state = 89},
  [75] = {.lex_state = 89},
  [76] = {.lex_state = 89},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 89},
  [79] = {.lex_state = 89},
  [80] = {.lex_state = 89},
  [81] = {.lex_state = 89},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 15},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 90},
  [166] = {.lex_state = 90},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 90},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 90},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 90},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 90},
  [179] = {.lex_state = 90},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 12},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 90},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 90},
  [188] = {.lex_state = 90},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 90},
  [191] = {.lex_state = 90},
  [192] = {.lex_state = 90},
  [193] = {.lex_state = 90},
  [194] = {.lex_state = 90},
  [195] = {.lex_state = 90},
  [196] = {.lex_state = 90},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 98},
  [199] = {.lex_state = 90},
  [200] = {.lex_state = 90},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 90},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 90},
  [206] = {.lex_state = 90},
  [207] = {.lex_state = 90},
  [208] = {.lex_state = 12},
  [209] = {.lex_state = 90},
  [210] = {.lex_state = 90},
  [211] = {.lex_state = 7},
  [212] = {.lex_state = 90},
  [213] = {.lex_state = 90},
  [214] = {.lex_state = 98},
  [215] = {.lex_state = 90},
  [216] = {.lex_state = 90},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 90},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 90},
  [222] = {.lex_state = 90},
  [223] = {.lex_state = 90},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 90},
  [226] = {.lex_state = 90},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 90},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 90},
  [232] = {.lex_state = 90},
  [233] = {.lex_state = 90},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 90},
  [236] = {.lex_state = 90},
  [237] = {.lex_state = 90},
  [238] = {.lex_state = 7},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 90},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__commentline] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym__body_token1] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_cplusplus_parenthesized_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_msg_file] = STATE(206),
    [sym_cplusplus] = STATE(8),
    [sym_comment] = STATE(26),
    [sym_namespace] = STATE(8),
    [sym_import] = STATE(8),
    [sym_struct_decl] = STATE(8),
    [sym_class_decl] = STATE(8),
    [sym_message_decl] = STATE(8),
    [sym_packet_decl] = STATE(8),
    [sym_enum_decl] = STATE(8),
    [sym_enum] = STATE(8),
    [sym_message] = STATE(8),
    [sym_packet] = STATE(8),
    [sym_class] = STATE(8),
    [sym_struct] = STATE(8),
    [sym__message_header] = STATE(185),
    [sym__packet_header] = STATE(165),
    [sym__class_header] = STATE(188),
    [sym__struct_header] = STATE(187),
    [sym_property] = STATE(8),
    [aux_sym_msg_file_repeat1] = STATE(8),
    [aux_sym_comment_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_cplusplus] = ACTIONS(7),
    [sym__commentline] = ACTIONS(9),
    [anon_sym_namespace] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_message] = ACTIONS(15),
    [anon_sym_packet] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_struct] = ACTIONS(21),
    [anon_sym_enum] = ACTIONS(23),
    [aux_sym__body_token1] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [sym__EMPTYLINE] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(33), 2,
      anon_sym_SEMI,
      anon_sym_AT,
    STATE(3), 2,
      sym__fieldvalueitem,
      aux_sym_fieldvalue_repeat1,
    ACTIONS(35), 13,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_true,
      anon_sym_false,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym__NAME,
      sym__INTCONSTANT,
    ACTIONS(31), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_POUND_POUND,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      sym__REALCONSTANT,
      sym__CHARCONSTANT,
      sym__STRINGCONSTANT,
  [58] = 6,
    ACTIONS(47), 1,
      anon_sym_enum,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(42), 2,
      anon_sym_SEMI,
      anon_sym_AT,
    STATE(3), 2,
      sym__fieldvalueitem,
      aux_sym_fieldvalue_repeat1,
    ACTIONS(44), 13,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_true,
      anon_sym_false,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym__NAME,
      sym__INTCONSTANT,
    ACTIONS(39), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_POUND_POUND,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      sym__REALCONSTANT,
      sym__CHARCONSTANT,
      sym__STRINGCONSTANT,
  [116] = 5,
    STATE(110), 1,
      sym_fieldvalue,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(2), 2,
      sym__fieldvalueitem,
      aux_sym_fieldvalue_repeat1,
    ACTIONS(51), 13,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_true,
      anon_sym_false,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym__NAME,
      sym__INTCONSTANT,
    ACTIONS(49), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_POUND_POUND,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      sym__REALCONSTANT,
      sym__CHARCONSTANT,
      sym__STRINGCONSTANT,
  [170] = 5,
    STATE(121), 1,
      sym_fieldvalue,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(2), 2,
      sym__fieldvalueitem,
      aux_sym_fieldvalue_repeat1,
    ACTIONS(51), 13,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_true,
      anon_sym_false,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym__NAME,
      sym__INTCONSTANT,
    ACTIONS(49), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_POUND_POUND,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      sym__REALCONSTANT,
      sym__CHARCONSTANT,
      sym__STRINGCONSTANT,
  [224] = 5,
    STATE(117), 1,
      sym_fieldvalue,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(2), 2,
      sym__fieldvalueitem,
      aux_sym_fieldvalue_repeat1,
    ACTIONS(51), 13,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_true,
      anon_sym_false,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym__NAME,
      sym__INTCONSTANT,
    ACTIONS(49), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_POUND_POUND,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      sym__REALCONSTANT,
      sym__CHARCONSTANT,
      sym__STRINGCONSTANT,
  [278] = 20,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_cplusplus,
    ACTIONS(58), 1,
      sym__commentline,
    ACTIONS(61), 1,
      anon_sym_namespace,
    ACTIONS(64), 1,
      anon_sym_import,
    ACTIONS(67), 1,
      anon_sym_message,
    ACTIONS(70), 1,
      anon_sym_packet,
    ACTIONS(73), 1,
      anon_sym_class,
    ACTIONS(76), 1,
      anon_sym_struct,
    ACTIONS(79), 1,
      anon_sym_enum,
    ACTIONS(82), 1,
      anon_sym_AT,
    ACTIONS(85), 1,
      sym__EMPTYLINE,
    STATE(26), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_comment_repeat1,
    STATE(165), 1,
      sym__packet_header,
    STATE(185), 1,
      sym__message_header,
    STATE(187), 1,
      sym__struct_header,
    STATE(188), 1,
      sym__class_header,
    STATE(7), 15,
      sym_cplusplus,
      sym_namespace,
      sym_import,
      sym_struct_decl,
      sym_class_decl,
      sym_message_decl,
      sym_packet_decl,
      sym_enum_decl,
      sym_enum,
      sym_message,
      sym_packet,
      sym_class,
      sym_struct,
      sym_property,
      aux_sym_msg_file_repeat1,
  [353] = 20,
    ACTIONS(7), 1,
      anon_sym_cplusplus,
    ACTIONS(9), 1,
      sym__commentline,
    ACTIONS(11), 1,
      anon_sym_namespace,
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(15), 1,
      anon_sym_message,
    ACTIONS(17), 1,
      anon_sym_packet,
    ACTIONS(19), 1,
      anon_sym_class,
    ACTIONS(21), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      sym__EMPTYLINE,
    STATE(26), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_comment_repeat1,
    STATE(165), 1,
      sym__packet_header,
    STATE(185), 1,
      sym__message_header,
    STATE(187), 1,
      sym__struct_header,
    STATE(188), 1,
      sym__class_header,
    STATE(7), 15,
      sym_cplusplus,
      sym_namespace,
      sym_import,
      sym_struct_decl,
      sym_class_decl,
      sym_message_decl,
      sym_packet_decl,
      sym_enum_decl,
      sym_enum,
      sym_message,
      sym_packet,
      sym_class,
      sym_struct,
      sym_property,
      aux_sym_msg_file_repeat1,
  [428] = 18,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(92), 1,
      sym__commentline,
    ACTIONS(94), 1,
      anon_sym_COLON_COLON,
    ACTIONS(96), 1,
      anon_sym_enum,
    ACTIONS(98), 1,
      anon_sym_abstract,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      anon_sym_const,
    ACTIONS(106), 1,
      anon_sym_unsigned,
    ACTIONS(108), 1,
      anon_sym_AT,
    ACTIONS(110), 1,
      sym__NAME,
    ACTIONS(112), 1,
      sym__EMPTYLINE,
    STATE(13), 1,
      aux_sym__body_repeat1,
    STATE(15), 1,
      aux_sym_comment_repeat1,
    STATE(87), 1,
      sym__fieldtypename,
    STATE(220), 1,
      sym__fielddatatype,
    STATE(175), 2,
      sym__qname,
      sym__fieldsimpledatatype,
    STATE(14), 3,
      sym_comment,
      sym_field,
      sym_property,
    ACTIONS(104), 7,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
  [492] = 18,
    ACTIONS(92), 1,
      sym__commentline,
    ACTIONS(94), 1,
      anon_sym_COLON_COLON,
    ACTIONS(96), 1,
      anon_sym_enum,
    ACTIONS(98), 1,
      anon_sym_abstract,
    ACTIONS(102), 1,
      anon_sym_const,
    ACTIONS(106), 1,
      anon_sym_unsigned,
    ACTIONS(108), 1,
      anon_sym_AT,
    ACTIONS(110), 1,
      sym__NAME,
    ACTIONS(112), 1,
      sym__EMPTYLINE,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      aux_sym__body_token1,
    STATE(9), 1,
      aux_sym__body_repeat1,
    STATE(15), 1,
      aux_sym_comment_repeat1,
    STATE(87), 1,
      sym__fieldtypename,
    STATE(220), 1,
      sym__fielddatatype,
    STATE(175), 2,
      sym__qname,
      sym__fieldsimpledatatype,
    STATE(14), 3,
      sym_comment,
      sym_field,
      sym_property,
    ACTIONS(104), 7,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
  [556] = 18,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(92), 1,
      sym__commentline,
    ACTIONS(94), 1,
      anon_sym_COLON_COLON,
    ACTIONS(96), 1,
      anon_sym_enum,
    ACTIONS(98), 1,
      anon_sym_abstract,
    ACTIONS(102), 1,
      anon_sym_const,
    ACTIONS(106), 1,
      anon_sym_unsigned,
    ACTIONS(108), 1,
      anon_sym_AT,
    ACTIONS(110), 1,
      sym__NAME,
    ACTIONS(112), 1,
      sym__EMPTYLINE,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym__body_repeat1,
    STATE(15), 1,
      aux_sym_comment_repeat1,
    STATE(87), 1,
      sym__fieldtypename,
    STATE(220), 1,
      sym__fielddatatype,
    STATE(175), 2,
      sym__qname,
      sym__fieldsimpledatatype,
    STATE(14), 3,
      sym_comment,
      sym_field,
      sym_property,
    ACTIONS(104), 7,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
  [620] = 18,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(92), 1,
      sym__commentline,
    ACTIONS(94), 1,
      anon_sym_COLON_COLON,
    ACTIONS(96), 1,
      anon_sym_enum,
    ACTIONS(98), 1,
      anon_sym_abstract,
    ACTIONS(102), 1,
      anon_sym_const,
    ACTIONS(106), 1,
      anon_sym_unsigned,
    ACTIONS(108), 1,
      anon_sym_AT,
    ACTIONS(110), 1,
      sym__NAME,
    ACTIONS(112), 1,
      sym__EMPTYLINE,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__body_repeat1,
    STATE(15), 1,
      aux_sym_comment_repeat1,
    STATE(87), 1,
      sym__fieldtypename,
    STATE(220), 1,
      sym__fielddatatype,
    STATE(175), 2,
      sym__qname,
      sym__fieldsimpledatatype,
    STATE(14), 3,
      sym_comment,
      sym_field,
      sym_property,
    ACTIONS(104), 7,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
  [684] = 18,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(122), 1,
      sym__commentline,
    ACTIONS(125), 1,
      anon_sym_COLON_COLON,
    ACTIONS(128), 1,
      anon_sym_enum,
    ACTIONS(131), 1,
      anon_sym_abstract,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 1,
      anon_sym_const,
    ACTIONS(142), 1,
      anon_sym_unsigned,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(148), 1,
      sym__NAME,
    ACTIONS(151), 1,
      sym__EMPTYLINE,
    STATE(13), 1,
      aux_sym__body_repeat1,
    STATE(15), 1,
      aux_sym_comment_repeat1,
    STATE(87), 1,
      sym__fieldtypename,
    STATE(220), 1,
      sym__fielddatatype,
    STATE(175), 2,
      sym__qname,
      sym__fieldsimpledatatype,
    STATE(14), 3,
      sym_comment,
      sym_field,
      sym_property,
    ACTIONS(139), 7,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
  [748] = 6,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(154), 1,
      sym__commentline,
    STATE(15), 1,
      aux_sym_comment_repeat1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(157), 4,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
    ACTIONS(159), 12,
      anon_sym_enum,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      sym__NAME,
  [781] = 5,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(161), 1,
      sym__commentline,
    STATE(16), 1,
      aux_sym_comment_repeat1,
    ACTIONS(163), 4,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
    ACTIONS(165), 12,
      anon_sym_enum,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      sym__NAME,
  [811] = 5,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(167), 1,
      sym__commentline,
    STATE(16), 1,
      aux_sym_comment_repeat1,
    ACTIONS(170), 4,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
    ACTIONS(172), 12,
      anon_sym_enum,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      sym__NAME,
  [841] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(174), 5,
      sym__commentline,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
    ACTIONS(176), 12,
      anon_sym_enum,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      sym__NAME,
  [866] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(178), 5,
      sym__commentline,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
    ACTIONS(180), 12,
      anon_sym_enum,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      sym__NAME,
  [891] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(182), 5,
      sym__commentline,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
    ACTIONS(184), 12,
      anon_sym_enum,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      sym__NAME,
  [916] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(186), 5,
      sym__commentline,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
    ACTIONS(188), 12,
      anon_sym_enum,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      sym__NAME,
  [941] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(190), 5,
      sym__commentline,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
    ACTIONS(192), 12,
      anon_sym_enum,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      sym__NAME,
  [966] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(194), 5,
      sym__commentline,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
    ACTIONS(196), 12,
      anon_sym_enum,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      sym__NAME,
  [991] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(134), 5,
      sym__commentline,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
    ACTIONS(198), 12,
      anon_sym_enum,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      sym__NAME,
  [1016] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(200), 5,
      sym__commentline,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
    ACTIONS(202), 12,
      anon_sym_enum,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      sym__NAME,
  [1041] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(204), 5,
      sym__commentline,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
    ACTIONS(206), 12,
      anon_sym_enum,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      sym__NAME,
  [1066] = 11,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(210), 1,
      anon_sym_message,
    ACTIONS(212), 1,
      anon_sym_packet,
    ACTIONS(214), 1,
      anon_sym_class,
    ACTIONS(216), 1,
      anon_sym_struct,
    ACTIONS(218), 1,
      anon_sym_enum,
    STATE(166), 1,
      sym__struct_header,
    STATE(174), 1,
      sym__message_header,
    STATE(178), 1,
      sym__packet_header,
    STATE(179), 1,
      sym__class_header,
    ACTIONS(208), 7,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1106] = 8,
    ACTIONS(94), 1,
      anon_sym_COLON_COLON,
    ACTIONS(102), 1,
      anon_sym_const,
    ACTIONS(106), 1,
      anon_sym_unsigned,
    ACTIONS(220), 1,
      sym__NAME,
    STATE(204), 1,
      sym__fielddatatype,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(175), 2,
      sym__qname,
      sym__fieldsimpledatatype,
    ACTIONS(104), 7,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
  [1139] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(222), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1160] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(228), 1,
      anon_sym_SEMI,
    ACTIONS(226), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1181] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    ACTIONS(230), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1202] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(236), 1,
      anon_sym_SEMI,
    ACTIONS(234), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1223] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(240), 1,
      anon_sym_SEMI,
    ACTIONS(238), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1244] = 5,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    ACTIONS(246), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(43), 2,
      sym__targetitem,
      aux_sym_targetspec_repeat1,
    ACTIONS(244), 8,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_AMP,
      sym__NAME,
      sym__INTCONSTANT,
  [1269] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    ACTIONS(248), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1290] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(254), 1,
      anon_sym_SEMI,
    ACTIONS(252), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1311] = 4,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(256), 1,
      sym__commentline,
    STATE(36), 1,
      aux_sym_comment_repeat1,
    ACTIONS(170), 11,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1334] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(261), 1,
      anon_sym_SEMI,
    ACTIONS(259), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1355] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(263), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1376] = 6,
    ACTIONS(94), 1,
      anon_sym_COLON_COLON,
    ACTIONS(106), 1,
      anon_sym_unsigned,
    ACTIONS(269), 1,
      sym__NAME,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(186), 2,
      sym__qname,
      sym__fieldsimpledatatype,
    ACTIONS(267), 7,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
  [1403] = 4,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(271), 1,
      sym__commentline,
    STATE(36), 1,
      aux_sym_comment_repeat1,
    ACTIONS(163), 11,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1426] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    ACTIONS(273), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1447] = 5,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(42), 2,
      sym__targetitem,
      aux_sym_targetspec_repeat1,
    ACTIONS(279), 8,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_AMP,
      sym__NAME,
      sym__INTCONSTANT,
  [1472] = 5,
    ACTIONS(246), 1,
      anon_sym_COLON,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(42), 2,
      sym__targetitem,
      aux_sym_targetspec_repeat1,
    ACTIONS(244), 8,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_AMP,
      sym__NAME,
      sym__INTCONSTANT,
  [1497] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(287), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1515] = 11,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(289), 1,
      sym__commentline,
    ACTIONS(291), 1,
      anon_sym_enum,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(295), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      sym__NAME,
    ACTIONS(299), 1,
      sym__EMPTYLINE,
    STATE(57), 1,
      aux_sym_enum_repeat1,
    STATE(98), 1,
      aux_sym_comment_repeat1,
    STATE(88), 2,
      sym_enumfield,
      sym_property,
    STATE(119), 2,
      sym_comment,
      sym__enumfield_or_property,
  [1551] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(301), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1569] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(303), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1587] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(305), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1605] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(307), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1623] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(309), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1641] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(311), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1659] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(182), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1677] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(313), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1695] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(315), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1713] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(317), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1731] = 11,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(319), 1,
      sym__commentline,
    ACTIONS(322), 1,
      anon_sym_enum,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    ACTIONS(327), 1,
      anon_sym_AT,
    ACTIONS(330), 1,
      sym__NAME,
    ACTIONS(333), 1,
      sym__EMPTYLINE,
    STATE(56), 1,
      aux_sym_enum_repeat1,
    STATE(98), 1,
      aux_sym_comment_repeat1,
    STATE(88), 2,
      sym_enumfield,
      sym_property,
    STATE(119), 2,
      sym_comment,
      sym__enumfield_or_property,
  [1767] = 11,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(289), 1,
      sym__commentline,
    ACTIONS(291), 1,
      anon_sym_enum,
    ACTIONS(295), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      sym__NAME,
    ACTIONS(299), 1,
      sym__EMPTYLINE,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_enum_repeat1,
    STATE(98), 1,
      aux_sym_comment_repeat1,
    STATE(88), 2,
      sym_enumfield,
      sym_property,
    STATE(119), 2,
      sym_comment,
      sym__enumfield_or_property,
  [1803] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(338), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1821] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(230), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1839] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(340), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1857] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(342), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1875] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(344), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1893] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(346), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1911] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(348), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1929] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(350), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1947] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(352), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [1965] = 6,
    STATE(82), 1,
      aux_sym_importspec_repeat1,
    STATE(182), 1,
      sym__importname,
    STATE(193), 1,
      sym_importspec,
    STATE(209), 1,
      sym__import_un_qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(354), 7,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_abstract,
      sym__NAME,
  [1991] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(356), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2009] = 11,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(289), 1,
      sym__commentline,
    ACTIONS(291), 1,
      anon_sym_enum,
    ACTIONS(295), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      sym__NAME,
    ACTIONS(299), 1,
      sym__EMPTYLINE,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_enum_repeat1,
    STATE(98), 1,
      aux_sym_comment_repeat1,
    STATE(88), 2,
      sym_enumfield,
      sym_property,
    STATE(119), 2,
      sym_comment,
      sym__enumfield_or_property,
  [2045] = 5,
    ACTIONS(246), 1,
      anon_sym_COLON,
    STATE(33), 1,
      sym__targetitem,
    STATE(196), 1,
      sym_targetspec,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(244), 8,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_AMP,
      sym__NAME,
      sym__INTCONSTANT,
  [2069] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(360), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2087] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(362), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2105] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(364), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2123] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(366), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2141] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(368), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2159] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(370), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2177] = 11,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(289), 1,
      sym__commentline,
    ACTIONS(291), 1,
      anon_sym_enum,
    ACTIONS(295), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      sym__NAME,
    ACTIONS(299), 1,
      sym__EMPTYLINE,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_enum_repeat1,
    STATE(98), 1,
      aux_sym_comment_repeat1,
    STATE(88), 2,
      sym_enumfield,
      sym_property,
    STATE(119), 2,
      sym_comment,
      sym__enumfield_or_property,
  [2213] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(374), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2231] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(376), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2249] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(378), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2267] = 2,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(200), 12,
      ts_builtin_sym_end,
      anon_sym_cplusplus,
      sym__commentline,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2285] = 5,
    STATE(85), 1,
      aux_sym_importspec_repeat1,
    STATE(182), 1,
      sym__importname,
    STATE(190), 1,
      sym__import_un_qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(354), 7,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_abstract,
      sym__NAME,
  [2308] = 3,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(380), 9,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_AMP,
      sym__NAME,
      sym__INTCONSTANT,
  [2327] = 7,
    ACTIONS(386), 1,
      anon_sym_COLON_COLON,
    ACTIONS(388), 1,
      anon_sym_enum,
    ACTIONS(390), 1,
      anon_sym_STAR,
    ACTIONS(392), 1,
      sym__NAME,
    STATE(137), 1,
      aux_sym__qname_repeat1,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(384), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_AT,
  [2353] = 4,
    STATE(85), 1,
      aux_sym_importspec_repeat1,
    STATE(217), 1,
      sym__importname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(394), 7,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_abstract,
      sym__NAME,
  [2373] = 7,
    ACTIONS(386), 1,
      anon_sym_COLON_COLON,
    ACTIONS(390), 1,
      anon_sym_STAR,
    ACTIONS(392), 1,
      sym__NAME,
    ACTIONS(399), 1,
      anon_sym_enum,
    STATE(137), 1,
      aux_sym__qname_repeat1,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(397), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_AT,
  [2399] = 8,
    ACTIONS(401), 1,
      anon_sym_SEMI,
    ACTIONS(403), 1,
      anon_sym_EQ,
    ACTIONS(405), 1,
      anon_sym_enum,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    ACTIONS(409), 1,
      anon_sym_AT,
    STATE(103), 1,
      sym_opt_fieldvector,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(106), 2,
      aux_sym__inline_properties,
      sym_inline_property,
  [2426] = 6,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(289), 1,
      sym__commentline,
    STATE(98), 1,
      aux_sym_comment_repeat1,
    STATE(113), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_enum,
      sym__NAME,
    ACTIONS(413), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2448] = 2,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(415), 7,
      anon_sym_message,
      anon_sym_packet,
      anon_sym_class,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_abstract,
      sym__NAME,
  [2462] = 5,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      anon_sym_LBRACK,
    STATE(130), 1,
      sym__prop_parenthesized,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(419), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_AT,
  [2482] = 4,
    ACTIONS(425), 1,
      anon_sym_COLON_COLON,
    STATE(104), 1,
      aux_sym__qname_repeat1,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(423), 4,
      anon_sym_SEMI,
      anon_sym_extends,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [2499] = 4,
    ACTIONS(425), 1,
      anon_sym_COLON_COLON,
    STATE(104), 1,
      aux_sym__qname_repeat1,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(427), 4,
      anon_sym_SEMI,
      anon_sym_extends,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [2516] = 6,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    ACTIONS(433), 1,
      aux_sym__prop_value_token1,
    STATE(101), 1,
      aux_sym__prop_parenthesized_repeat1,
    ACTIONS(25), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(155), 2,
      sym__prop_value,
      sym__prop_value_parenthesized,
  [2537] = 4,
    ACTIONS(425), 1,
      anon_sym_COLON_COLON,
    STATE(92), 1,
      aux_sym__qname_repeat1,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(423), 4,
      anon_sym_SEMI,
      anon_sym_extends,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [2554] = 4,
    ACTIONS(425), 1,
      anon_sym_COLON_COLON,
    STATE(91), 1,
      aux_sym__qname_repeat1,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(390), 4,
      anon_sym_SEMI,
      anon_sym_extends,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [2571] = 5,
    ACTIONS(437), 1,
      anon_sym_enum,
    ACTIONS(440), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(435), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
    STATE(96), 2,
      aux_sym__inline_properties,
      sym_inline_property,
  [2590] = 5,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(443), 1,
      sym__commentline,
    STATE(97), 1,
      aux_sym_comment_repeat1,
    ACTIONS(172), 2,
      anon_sym_enum,
      sym__NAME,
    ACTIONS(170), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2609] = 5,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(446), 1,
      sym__commentline,
    STATE(97), 1,
      aux_sym_comment_repeat1,
    ACTIONS(165), 2,
      anon_sym_enum,
      sym__NAME,
    ACTIONS(163), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2628] = 4,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym__prop_parenthesized,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(448), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_AT,
  [2645] = 6,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    ACTIONS(455), 1,
      aux_sym__prop_value_token1,
    STATE(100), 1,
      aux_sym__prop_parenthesized_repeat1,
    ACTIONS(25), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(155), 2,
      sym__prop_value,
      sym__prop_value_parenthesized,
  [2666] = 6,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym__prop_value_token1,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym__prop_parenthesized_repeat1,
    ACTIONS(25), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(155), 2,
      sym__prop_value,
      sym__prop_value_parenthesized,
  [2687] = 6,
    ACTIONS(405), 1,
      anon_sym_enum,
    ACTIONS(409), 1,
      anon_sym_AT,
    ACTIONS(460), 1,
      anon_sym_SEMI,
    ACTIONS(462), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(96), 2,
      aux_sym__inline_properties,
      sym_inline_property,
  [2708] = 6,
    ACTIONS(405), 1,
      anon_sym_enum,
    ACTIONS(409), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_SEMI,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(102), 2,
      aux_sym__inline_properties,
      sym_inline_property,
  [2729] = 4,
    ACTIONS(470), 1,
      anon_sym_COLON_COLON,
    STATE(104), 1,
      aux_sym__qname_repeat1,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(468), 4,
      anon_sym_SEMI,
      anon_sym_extends,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [2746] = 6,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym__prop_value_token1,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym__prop_parenthesized_repeat1,
    ACTIONS(25), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(155), 2,
      sym__prop_value,
      sym__prop_value_parenthesized,
  [2767] = 6,
    ACTIONS(405), 1,
      anon_sym_enum,
    ACTIONS(409), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_SEMI,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(96), 2,
      aux_sym__inline_properties,
      sym_inline_property,
  [2788] = 2,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(468), 5,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
      anon_sym_extends,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [2800] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(184), 2,
      anon_sym_enum,
      sym__NAME,
    ACTIONS(182), 4,
      sym__commentline,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2814] = 2,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(397), 5,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_LBRACK,
      anon_sym_AT,
  [2826] = 5,
    ACTIONS(405), 1,
      anon_sym_enum,
    ACTIONS(409), 1,
      anon_sym_AT,
    ACTIONS(460), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(116), 2,
      aux_sym__inline_properties,
      sym_inline_property,
  [2844] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(477), 2,
      anon_sym_enum,
      sym__NAME,
    ACTIONS(475), 4,
      sym__commentline,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2858] = 6,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
    ACTIONS(483), 1,
      sym__NAME,
    ACTIONS(485), 1,
      sym__INTCONSTANT,
    STATE(219), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [2878] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(489), 2,
      anon_sym_enum,
      sym__NAME,
    ACTIONS(487), 4,
      sym__commentline,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2892] = 2,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(491), 5,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_LBRACK,
      anon_sym_AT,
  [2904] = 5,
    ACTIONS(405), 1,
      anon_sym_enum,
    ACTIONS(409), 1,
      anon_sym_AT,
    ACTIONS(493), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(96), 2,
      aux_sym__inline_properties,
      sym_inline_property,
  [2922] = 5,
    ACTIONS(405), 1,
      anon_sym_enum,
    ACTIONS(409), 1,
      anon_sym_AT,
    ACTIONS(495), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(96), 2,
      aux_sym__inline_properties,
      sym_inline_property,
  [2940] = 5,
    ACTIONS(405), 1,
      anon_sym_enum,
    ACTIONS(409), 1,
      anon_sym_AT,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(115), 2,
      aux_sym__inline_properties,
      sym_inline_property,
  [2958] = 5,
    ACTIONS(405), 1,
      anon_sym_enum,
    ACTIONS(409), 1,
      anon_sym_AT,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(96), 2,
      aux_sym__inline_properties,
      sym_inline_property,
  [2976] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(501), 2,
      anon_sym_enum,
      sym__NAME,
    ACTIONS(499), 4,
      sym__commentline,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
  [2990] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(202), 2,
      anon_sym_enum,
      sym__NAME,
    ACTIONS(200), 4,
      sym__commentline,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
  [3004] = 5,
    ACTIONS(405), 1,
      anon_sym_enum,
    ACTIONS(409), 1,
      anon_sym_AT,
    ACTIONS(495), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(118), 2,
      aux_sym__inline_properties,
      sym_inline_property,
  [3022] = 5,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym__prop_value_token1,
    STATE(105), 1,
      aux_sym__prop_parenthesized_repeat1,
    ACTIONS(25), 2,
      sym__commentline,
      aux_sym__body_token1,
    STATE(155), 2,
      sym__prop_value,
      sym__prop_value_parenthesized,
  [3040] = 3,
    ACTIONS(25), 1,
      aux_sym__body_token1,
    ACTIONS(505), 2,
      anon_sym_enum,
      sym__NAME,
    ACTIONS(503), 4,
      sym__commentline,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym__EMPTYLINE,
  [3054] = 2,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(507), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_AT,
  [3065] = 4,
    ACTIONS(509), 1,
      anon_sym_DASH,
    STATE(192), 1,
      sym_enumvalue,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(511), 2,
      sym__NAME,
      sym__INTCONSTANT,
  [3080] = 5,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    ACTIONS(513), 1,
      anon_sym_SEMI,
    STATE(195), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3097] = 4,
    ACTIONS(515), 1,
      anon_sym_COLON_COLON,
    STATE(127), 1,
      aux_sym__qname_repeat1,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(468), 2,
      anon_sym_STAR,
      sym__NAME,
  [3112] = 2,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(518), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_AT,
  [3123] = 4,
    ACTIONS(386), 1,
      anon_sym_COLON_COLON,
    STATE(127), 1,
      aux_sym__qname_repeat1,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(427), 2,
      anon_sym_STAR,
      sym__NAME,
  [3138] = 2,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(520), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_AT,
  [3149] = 2,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(522), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_AT,
  [3160] = 2,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(524), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_AT,
  [3171] = 2,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(526), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_AT,
  [3182] = 2,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(528), 4,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
  [3193] = 5,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3210] = 2,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(532), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_AT,
  [3221] = 4,
    ACTIONS(386), 1,
      anon_sym_COLON_COLON,
    STATE(127), 1,
      aux_sym__qname_repeat1,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(423), 2,
      anon_sym_STAR,
      sym__NAME,
  [3236] = 2,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(534), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_AT,
  [3247] = 4,
    ACTIONS(386), 1,
      anon_sym_COLON_COLON,
    STATE(129), 1,
      aux_sym__qname_repeat1,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(423), 2,
      anon_sym_STAR,
      sym__NAME,
  [3262] = 5,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      anon_sym_noncobject,
    ACTIONS(538), 1,
      sym__NAME,
    STATE(158), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3279] = 4,
    ACTIONS(386), 1,
      anon_sym_COLON_COLON,
    STATE(137), 1,
      aux_sym__qname_repeat1,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(390), 2,
      anon_sym_STAR,
      sym__NAME,
  [3294] = 4,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    STATE(172), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3308] = 3,
    ACTIONS(542), 1,
      aux_sym__prop_value_token1,
    ACTIONS(25), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(540), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3320] = 4,
    ACTIONS(544), 1,
      anon_sym_SEMI,
    ACTIONS(546), 1,
      anon_sym_extends,
    ACTIONS(548), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3334] = 4,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(552), 1,
      anon_sym_extends,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3348] = 4,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    STATE(147), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3362] = 4,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(558), 1,
      anon_sym_extends,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3376] = 4,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    STATE(184), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3390] = 4,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    STATE(144), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3404] = 4,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    STATE(171), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3418] = 4,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    STATE(173), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3432] = 4,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    STATE(225), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3446] = 4,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    STATE(145), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3460] = 4,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    STATE(222), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3474] = 3,
    ACTIONS(564), 1,
      aux_sym__prop_value_token1,
    ACTIONS(25), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(562), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3486] = 4,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    STATE(176), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3500] = 4,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    STATE(170), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3514] = 4,
    ACTIONS(566), 1,
      anon_sym_SEMI,
    ACTIONS(568), 1,
      anon_sym_extends,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3528] = 3,
    ACTIONS(574), 1,
      aux_sym__prop_value_token1,
    ACTIONS(25), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(572), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3540] = 4,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    STATE(213), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3554] = 4,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    STATE(216), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3568] = 2,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(468), 3,
      anon_sym_COLON_COLON,
      anon_sym_STAR,
      sym__NAME,
  [3578] = 4,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    STATE(191), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3592] = 4,
    ACTIONS(479), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      sym__NAME,
    STATE(205), 1,
      sym__qname,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3606] = 3,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym__body,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3617] = 3,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym__body,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3628] = 3,
    ACTIONS(578), 1,
      sym__NAME,
    STATE(232), 1,
      sym__prop_body,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3639] = 3,
    ACTIONS(580), 1,
      anon_sym_SEMI,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3650] = 3,
    ACTIONS(578), 1,
      sym__NAME,
    STATE(229), 1,
      sym__prop_body,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3661] = 3,
    ACTIONS(546), 1,
      anon_sym_extends,
    ACTIONS(548), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3672] = 3,
    ACTIONS(552), 1,
      anon_sym_extends,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3683] = 3,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
    ACTIONS(584), 1,
      anon_sym_extends,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3694] = 3,
    ACTIONS(558), 1,
      anon_sym_extends,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3705] = 3,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym__body,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3716] = 3,
    ACTIONS(586), 1,
      anon_sym_STAR,
    ACTIONS(588), 1,
      sym__NAME,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3727] = 3,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3738] = 3,
    ACTIONS(594), 1,
      anon_sym_LPAREN,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3749] = 3,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym__body,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3760] = 3,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym__body,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3771] = 3,
    ACTIONS(578), 1,
      sym__NAME,
    STATE(226), 1,
      sym__prop_body,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3782] = 3,
    ACTIONS(578), 1,
      sym__NAME,
    STATE(138), 1,
      sym__prop_body,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3793] = 3,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    ACTIONS(600), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3804] = 3,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    ACTIONS(604), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3815] = 3,
    ACTIONS(606), 1,
      anon_sym_SEMI,
    ACTIONS(608), 1,
      anon_sym_extends,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3826] = 3,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym__body,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3837] = 3,
    ACTIONS(610), 1,
      anon_sym_STAR,
    ACTIONS(612), 1,
      sym__NAME,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3848] = 3,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym__body,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3859] = 3,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym__body,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3870] = 2,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
    ACTIONS(614), 2,
      anon_sym_STAR,
      sym__NAME,
  [3879] = 2,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3887] = 2,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3895] = 2,
    ACTIONS(620), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3903] = 2,
    ACTIONS(622), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3911] = 2,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3919] = 2,
    ACTIONS(626), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3927] = 2,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3935] = 2,
    ACTIONS(630), 1,
      sym__NAME,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3943] = 2,
    ACTIONS(632), 1,
      aux_sym_cplusplus_token1,
    ACTIONS(25), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3951] = 2,
    ACTIONS(634), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3959] = 2,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3967] = 2,
    ACTIONS(638), 1,
      sym__NAME,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3975] = 2,
    ACTIONS(640), 1,
      sym__NAME,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3983] = 2,
    ACTIONS(642), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3991] = 2,
    ACTIONS(644), 1,
      sym__NAME,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [3999] = 2,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4007] = 2,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4015] = 2,
    ACTIONS(648), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4023] = 2,
    ACTIONS(650), 1,
      sym__INTCONSTANT,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4031] = 2,
    ACTIONS(652), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4039] = 2,
    ACTIONS(654), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4047] = 2,
    ACTIONS(612), 1,
      sym__NAME,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4055] = 2,
    ACTIONS(656), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4063] = 2,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4071] = 2,
    ACTIONS(660), 1,
      aux_sym_cplusplus_token1,
    ACTIONS(25), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4079] = 2,
    ACTIONS(662), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4087] = 2,
    ACTIONS(664), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4095] = 2,
    ACTIONS(600), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4103] = 2,
    ACTIONS(666), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4111] = 2,
    ACTIONS(668), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4119] = 2,
    ACTIONS(670), 1,
      sym__NAME,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4127] = 2,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4135] = 2,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4143] = 2,
    ACTIONS(676), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4151] = 2,
    ACTIONS(678), 1,
      sym__NAME,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4159] = 2,
    ACTIONS(680), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4167] = 2,
    ACTIONS(682), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4175] = 2,
    ACTIONS(684), 1,
      sym__NAME,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4183] = 2,
    ACTIONS(686), 1,
      sym__NAME,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4191] = 2,
    ACTIONS(688), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4199] = 2,
    ACTIONS(690), 1,
      sym__NAME,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4207] = 2,
    ACTIONS(692), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4215] = 2,
    ACTIONS(694), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4223] = 2,
    ACTIONS(696), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4231] = 2,
    ACTIONS(698), 1,
      sym__NAME,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4239] = 2,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4247] = 2,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4255] = 2,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4263] = 2,
    ACTIONS(706), 1,
      sym__NAME,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4271] = 2,
    ACTIONS(708), 1,
      sym__NAME,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
  [4279] = 2,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__commentline,
      aux_sym__body_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 170,
  [SMALL_STATE(6)] = 224,
  [SMALL_STATE(7)] = 278,
  [SMALL_STATE(8)] = 353,
  [SMALL_STATE(9)] = 428,
  [SMALL_STATE(10)] = 492,
  [SMALL_STATE(11)] = 556,
  [SMALL_STATE(12)] = 620,
  [SMALL_STATE(13)] = 684,
  [SMALL_STATE(14)] = 748,
  [SMALL_STATE(15)] = 781,
  [SMALL_STATE(16)] = 811,
  [SMALL_STATE(17)] = 841,
  [SMALL_STATE(18)] = 866,
  [SMALL_STATE(19)] = 891,
  [SMALL_STATE(20)] = 916,
  [SMALL_STATE(21)] = 941,
  [SMALL_STATE(22)] = 966,
  [SMALL_STATE(23)] = 991,
  [SMALL_STATE(24)] = 1016,
  [SMALL_STATE(25)] = 1041,
  [SMALL_STATE(26)] = 1066,
  [SMALL_STATE(27)] = 1106,
  [SMALL_STATE(28)] = 1139,
  [SMALL_STATE(29)] = 1160,
  [SMALL_STATE(30)] = 1181,
  [SMALL_STATE(31)] = 1202,
  [SMALL_STATE(32)] = 1223,
  [SMALL_STATE(33)] = 1244,
  [SMALL_STATE(34)] = 1269,
  [SMALL_STATE(35)] = 1290,
  [SMALL_STATE(36)] = 1311,
  [SMALL_STATE(37)] = 1334,
  [SMALL_STATE(38)] = 1355,
  [SMALL_STATE(39)] = 1376,
  [SMALL_STATE(40)] = 1403,
  [SMALL_STATE(41)] = 1426,
  [SMALL_STATE(42)] = 1447,
  [SMALL_STATE(43)] = 1472,
  [SMALL_STATE(44)] = 1497,
  [SMALL_STATE(45)] = 1515,
  [SMALL_STATE(46)] = 1551,
  [SMALL_STATE(47)] = 1569,
  [SMALL_STATE(48)] = 1587,
  [SMALL_STATE(49)] = 1605,
  [SMALL_STATE(50)] = 1623,
  [SMALL_STATE(51)] = 1641,
  [SMALL_STATE(52)] = 1659,
  [SMALL_STATE(53)] = 1677,
  [SMALL_STATE(54)] = 1695,
  [SMALL_STATE(55)] = 1713,
  [SMALL_STATE(56)] = 1731,
  [SMALL_STATE(57)] = 1767,
  [SMALL_STATE(58)] = 1803,
  [SMALL_STATE(59)] = 1821,
  [SMALL_STATE(60)] = 1839,
  [SMALL_STATE(61)] = 1857,
  [SMALL_STATE(62)] = 1875,
  [SMALL_STATE(63)] = 1893,
  [SMALL_STATE(64)] = 1911,
  [SMALL_STATE(65)] = 1929,
  [SMALL_STATE(66)] = 1947,
  [SMALL_STATE(67)] = 1965,
  [SMALL_STATE(68)] = 1991,
  [SMALL_STATE(69)] = 2009,
  [SMALL_STATE(70)] = 2045,
  [SMALL_STATE(71)] = 2069,
  [SMALL_STATE(72)] = 2087,
  [SMALL_STATE(73)] = 2105,
  [SMALL_STATE(74)] = 2123,
  [SMALL_STATE(75)] = 2141,
  [SMALL_STATE(76)] = 2159,
  [SMALL_STATE(77)] = 2177,
  [SMALL_STATE(78)] = 2213,
  [SMALL_STATE(79)] = 2231,
  [SMALL_STATE(80)] = 2249,
  [SMALL_STATE(81)] = 2267,
  [SMALL_STATE(82)] = 2285,
  [SMALL_STATE(83)] = 2308,
  [SMALL_STATE(84)] = 2327,
  [SMALL_STATE(85)] = 2353,
  [SMALL_STATE(86)] = 2373,
  [SMALL_STATE(87)] = 2399,
  [SMALL_STATE(88)] = 2426,
  [SMALL_STATE(89)] = 2448,
  [SMALL_STATE(90)] = 2462,
  [SMALL_STATE(91)] = 2482,
  [SMALL_STATE(92)] = 2499,
  [SMALL_STATE(93)] = 2516,
  [SMALL_STATE(94)] = 2537,
  [SMALL_STATE(95)] = 2554,
  [SMALL_STATE(96)] = 2571,
  [SMALL_STATE(97)] = 2590,
  [SMALL_STATE(98)] = 2609,
  [SMALL_STATE(99)] = 2628,
  [SMALL_STATE(100)] = 2645,
  [SMALL_STATE(101)] = 2666,
  [SMALL_STATE(102)] = 2687,
  [SMALL_STATE(103)] = 2708,
  [SMALL_STATE(104)] = 2729,
  [SMALL_STATE(105)] = 2746,
  [SMALL_STATE(106)] = 2767,
  [SMALL_STATE(107)] = 2788,
  [SMALL_STATE(108)] = 2800,
  [SMALL_STATE(109)] = 2814,
  [SMALL_STATE(110)] = 2826,
  [SMALL_STATE(111)] = 2844,
  [SMALL_STATE(112)] = 2858,
  [SMALL_STATE(113)] = 2878,
  [SMALL_STATE(114)] = 2892,
  [SMALL_STATE(115)] = 2904,
  [SMALL_STATE(116)] = 2922,
  [SMALL_STATE(117)] = 2940,
  [SMALL_STATE(118)] = 2958,
  [SMALL_STATE(119)] = 2976,
  [SMALL_STATE(120)] = 2990,
  [SMALL_STATE(121)] = 3004,
  [SMALL_STATE(122)] = 3022,
  [SMALL_STATE(123)] = 3040,
  [SMALL_STATE(124)] = 3054,
  [SMALL_STATE(125)] = 3065,
  [SMALL_STATE(126)] = 3080,
  [SMALL_STATE(127)] = 3097,
  [SMALL_STATE(128)] = 3112,
  [SMALL_STATE(129)] = 3123,
  [SMALL_STATE(130)] = 3138,
  [SMALL_STATE(131)] = 3149,
  [SMALL_STATE(132)] = 3160,
  [SMALL_STATE(133)] = 3171,
  [SMALL_STATE(134)] = 3182,
  [SMALL_STATE(135)] = 3193,
  [SMALL_STATE(136)] = 3210,
  [SMALL_STATE(137)] = 3221,
  [SMALL_STATE(138)] = 3236,
  [SMALL_STATE(139)] = 3247,
  [SMALL_STATE(140)] = 3262,
  [SMALL_STATE(141)] = 3279,
  [SMALL_STATE(142)] = 3294,
  [SMALL_STATE(143)] = 3308,
  [SMALL_STATE(144)] = 3320,
  [SMALL_STATE(145)] = 3334,
  [SMALL_STATE(146)] = 3348,
  [SMALL_STATE(147)] = 3362,
  [SMALL_STATE(148)] = 3376,
  [SMALL_STATE(149)] = 3390,
  [SMALL_STATE(150)] = 3404,
  [SMALL_STATE(151)] = 3418,
  [SMALL_STATE(152)] = 3432,
  [SMALL_STATE(153)] = 3446,
  [SMALL_STATE(154)] = 3460,
  [SMALL_STATE(155)] = 3474,
  [SMALL_STATE(156)] = 3486,
  [SMALL_STATE(157)] = 3500,
  [SMALL_STATE(158)] = 3514,
  [SMALL_STATE(159)] = 3528,
  [SMALL_STATE(160)] = 3540,
  [SMALL_STATE(161)] = 3554,
  [SMALL_STATE(162)] = 3568,
  [SMALL_STATE(163)] = 3578,
  [SMALL_STATE(164)] = 3592,
  [SMALL_STATE(165)] = 3606,
  [SMALL_STATE(166)] = 3617,
  [SMALL_STATE(167)] = 3628,
  [SMALL_STATE(168)] = 3639,
  [SMALL_STATE(169)] = 3650,
  [SMALL_STATE(170)] = 3661,
  [SMALL_STATE(171)] = 3672,
  [SMALL_STATE(172)] = 3683,
  [SMALL_STATE(173)] = 3694,
  [SMALL_STATE(174)] = 3705,
  [SMALL_STATE(175)] = 3716,
  [SMALL_STATE(176)] = 3727,
  [SMALL_STATE(177)] = 3738,
  [SMALL_STATE(178)] = 3749,
  [SMALL_STATE(179)] = 3760,
  [SMALL_STATE(180)] = 3771,
  [SMALL_STATE(181)] = 3782,
  [SMALL_STATE(182)] = 3793,
  [SMALL_STATE(183)] = 3804,
  [SMALL_STATE(184)] = 3815,
  [SMALL_STATE(185)] = 3826,
  [SMALL_STATE(186)] = 3837,
  [SMALL_STATE(187)] = 3848,
  [SMALL_STATE(188)] = 3859,
  [SMALL_STATE(189)] = 3870,
  [SMALL_STATE(190)] = 3879,
  [SMALL_STATE(191)] = 3887,
  [SMALL_STATE(192)] = 3895,
  [SMALL_STATE(193)] = 3903,
  [SMALL_STATE(194)] = 3911,
  [SMALL_STATE(195)] = 3919,
  [SMALL_STATE(196)] = 3927,
  [SMALL_STATE(197)] = 3935,
  [SMALL_STATE(198)] = 3943,
  [SMALL_STATE(199)] = 3951,
  [SMALL_STATE(200)] = 3959,
  [SMALL_STATE(201)] = 3967,
  [SMALL_STATE(202)] = 3975,
  [SMALL_STATE(203)] = 3983,
  [SMALL_STATE(204)] = 3991,
  [SMALL_STATE(205)] = 3999,
  [SMALL_STATE(206)] = 4007,
  [SMALL_STATE(207)] = 4015,
  [SMALL_STATE(208)] = 4023,
  [SMALL_STATE(209)] = 4031,
  [SMALL_STATE(210)] = 4039,
  [SMALL_STATE(211)] = 4047,
  [SMALL_STATE(212)] = 4055,
  [SMALL_STATE(213)] = 4063,
  [SMALL_STATE(214)] = 4071,
  [SMALL_STATE(215)] = 4079,
  [SMALL_STATE(216)] = 4087,
  [SMALL_STATE(217)] = 4095,
  [SMALL_STATE(218)] = 4103,
  [SMALL_STATE(219)] = 4111,
  [SMALL_STATE(220)] = 4119,
  [SMALL_STATE(221)] = 4127,
  [SMALL_STATE(222)] = 4135,
  [SMALL_STATE(223)] = 4143,
  [SMALL_STATE(224)] = 4151,
  [SMALL_STATE(225)] = 4159,
  [SMALL_STATE(226)] = 4167,
  [SMALL_STATE(227)] = 4175,
  [SMALL_STATE(228)] = 4183,
  [SMALL_STATE(229)] = 4191,
  [SMALL_STATE(230)] = 4199,
  [SMALL_STATE(231)] = 4207,
  [SMALL_STATE(232)] = 4215,
  [SMALL_STATE(233)] = 4223,
  [SMALL_STATE(234)] = 4231,
  [SMALL_STATE(235)] = 4239,
  [SMALL_STATE(236)] = 4247,
  [SMALL_STATE(237)] = 4255,
  [SMALL_STATE(238)] = 4263,
  [SMALL_STATE(239)] = 4271,
  [SMALL_STATE(240)] = 4279,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldvalue, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldvalue, 1, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldvalue_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldvalue_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fieldvalue_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fieldvalue_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_msg_file_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msg_file_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msg_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msg_file_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msg_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msg_file_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msg_file_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msg_file_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msg_file_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msg_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msg_file_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msg_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_file, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body_repeat1, 1, 0, 0), SHIFT_REPEAT(15),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body_repeat1, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__body_repeat1, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 6),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5, 0, 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__body_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_msg_file_repeat1, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, 0, 12),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, 0, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 4, 0, 10),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cplusplus, 4, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targetspec, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, 0, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, 0, 7),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 3, 0, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cplusplus, 7, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_targetspec_repeat1, 2, 0, 0),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_targetspec_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_targetspec_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targetspec, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cplusplus, 5, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_decl, 5, 0, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packet, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, 0, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, 0, 0),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 4, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packet, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3, 0, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cplusplus, 8, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7, 0, 12),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_decl, 3, 0, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packet_decl, 3, 0, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_decl, 3, 0, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 4, 0, 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 3, 0, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_decl, 6, 0, 11),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, 0, 7),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 3, 0, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, 0, 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 5, 0, 10),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_decl, 4, 0, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__targetitem, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__targetitem, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldtypename, 1, 0, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldtypename, 1, 0, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qname, 1, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__qname, 1, 0, 0),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_importspec_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldtypename, 2, 0, 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldtypename, 2, 0, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enumfield_or_property, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumfield_or_property, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_importspec_repeat1, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prop_body, 1, 0, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qname, 2, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qname, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__inline_properties, 2, 0, 0),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_properties, 2, 0, 0), SHIFT_REPEAT(194),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_properties, 2, 0, 0), SHIFT_REPEAT(181),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prop_body, 4, 0, 9),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__prop_parenthesized_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__prop_parenthesized_repeat1, 2, 0, 0),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__prop_parenthesized_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__qname_repeat1, 2, 0, 0),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qname_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumfield, 2, 0, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumfield, 2, 0, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumfield_or_property, 2, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enumfield_or_property, 2, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldtypename, 3, 0, 4),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 1, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_repeat1, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumfield, 4, 0, 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumfield, 4, 0, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_fieldvector, 2, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qname_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prop_parenthesized, 3, 0, 8),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prop_body, 2, 0, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_fieldvector, 3, 0, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_property, 4, 0, 6),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_fieldvector, 3, 0, 13),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prop_body, 5, 0, 9),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_property, 2, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prop_value_parenthesized, 3, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prop_value_parenthesized, 3, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_header, 2, 0, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_header, 2, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__struct_header, 2, 0, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__prop_parenthesized_repeat1, 1, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__prop_parenthesized_repeat1, 1, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_header, 2, 0, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prop_value_parenthesized, 2, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prop_value_parenthesized, 2, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fielddatatype, 1, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_header, 4, 0, 3),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_un_qname, 1, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fielddatatype, 2, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldsimpledatatype, 2, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importspec, 2, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_header, 4, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumvalue, 2, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [646] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importspec, 1, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__struct_header, 4, 0, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumvalue, 1, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_header, 4, 0, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fielddatatype, 3, 0, 0),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
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

TS_PUBLIC const TSLanguage *tree_sitter_omnetpp_msg(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
