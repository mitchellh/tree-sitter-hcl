#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 268
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LBRACE = 1,
  anon_sym_LF = 2,
  anon_sym_RBRACE = 3,
  anon_sym_EQ = 4,
  anon_sym_QMARK = 5,
  anon_sym_COLON = 6,
  anon_sym_DASH = 7,
  anon_sym_BANG = 8,
  anon_sym_STAR = 9,
  anon_sym_SLASH = 10,
  anon_sym_PERCENT = 11,
  anon_sym_PLUS = 12,
  anon_sym_GT = 13,
  anon_sym_GT_EQ = 14,
  anon_sym_LT = 15,
  anon_sym_LT_EQ = 16,
  anon_sym_EQ_EQ = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_AMP_AMP = 19,
  anon_sym_PIPE_PIPE = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_quoted_template_token1 = 24,
  sym_escape_sequence = 25,
  anon_sym_LBRACK = 26,
  anon_sym_RBRACK = 27,
  anon_sym_EQ_GT = 28,
  anon_sym_DOT_DOT_DOT = 29,
  anon_sym_for = 30,
  anon_sym_COMMA = 31,
  anon_sym_in = 32,
  anon_sym_if = 33,
  anon_sym_DOT = 34,
  sym_numeric_literal = 35,
  sym_identifier = 36,
  sym_null = 37,
  sym_true = 38,
  sym_false = 39,
  sym_heredoc = 40,
  sym_source_file = 41,
  sym_body = 42,
  sym_block = 43,
  sym_one_line_block = 44,
  sym_attribute = 45,
  sym_expression = 46,
  sym_conditional = 47,
  sym_operation = 48,
  sym_unary_op = 49,
  sym_binary_op = 50,
  sym_expr_term = 51,
  sym_template_expr = 52,
  sym_quoted_template = 53,
  sym_string_literal = 54,
  sym_for_expr = 55,
  sym__for_tuple = 56,
  sym__for_object = 57,
  sym_for_intro = 58,
  sym_for_cond = 59,
  sym_literal_value = 60,
  sym_index = 61,
  sym_get_attr = 62,
  sym_splat = 63,
  sym_splat_attr = 64,
  sym_splat_full = 65,
  sym_collection_value = 66,
  sym_tuple = 67,
  sym_object = 68,
  sym_object_elem = 69,
  sym_variable_expr = 70,
  sym_function_call = 71,
  aux_sym_body_repeat1 = 72,
  aux_sym_block_repeat1 = 73,
  aux_sym_quoted_template_repeat1 = 74,
  aux_sym_splat_attr_repeat1 = 75,
  aux_sym_splat_full_repeat1 = 76,
  aux_sym_tuple_repeat1 = 77,
  aux_sym_object_repeat1 = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LF] = "\n",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_template_token1] = "quoted_template_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_for] = "for",
  [anon_sym_COMMA] = ",",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_DOT] = ".",
  [sym_numeric_literal] = "numeric_literal",
  [sym_identifier] = "identifier",
  [sym_null] = "null",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_heredoc] = "heredoc",
  [sym_source_file] = "source_file",
  [sym_body] = "body",
  [sym_block] = "block",
  [sym_one_line_block] = "one_line_block",
  [sym_attribute] = "attribute",
  [sym_expression] = "expression",
  [sym_conditional] = "conditional",
  [sym_operation] = "operation",
  [sym_unary_op] = "unary_op",
  [sym_binary_op] = "binary_op",
  [sym_expr_term] = "expr_term",
  [sym_template_expr] = "template_expr",
  [sym_quoted_template] = "quoted_template",
  [sym_string_literal] = "string_literal",
  [sym_for_expr] = "for_expr",
  [sym__for_tuple] = "_for_tuple",
  [sym__for_object] = "_for_object",
  [sym_for_intro] = "for_intro",
  [sym_for_cond] = "for_cond",
  [sym_literal_value] = "literal_value",
  [sym_index] = "index",
  [sym_get_attr] = "get_attr",
  [sym_splat] = "splat",
  [sym_splat_attr] = "splat_attr",
  [sym_splat_full] = "splat_full",
  [sym_collection_value] = "collection_value",
  [sym_tuple] = "tuple",
  [sym_object] = "object",
  [sym_object_elem] = "object_elem",
  [sym_variable_expr] = "variable_expr",
  [sym_function_call] = "function_call",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_quoted_template_repeat1] = "quoted_template_repeat1",
  [aux_sym_splat_attr_repeat1] = "splat_attr_repeat1",
  [aux_sym_splat_full_repeat1] = "splat_full_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_template_token1] = aux_sym_quoted_template_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym_identifier] = sym_identifier,
  [sym_null] = sym_null,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_heredoc] = sym_heredoc,
  [sym_source_file] = sym_source_file,
  [sym_body] = sym_body,
  [sym_block] = sym_block,
  [sym_one_line_block] = sym_one_line_block,
  [sym_attribute] = sym_attribute,
  [sym_expression] = sym_expression,
  [sym_conditional] = sym_conditional,
  [sym_operation] = sym_operation,
  [sym_unary_op] = sym_unary_op,
  [sym_binary_op] = sym_binary_op,
  [sym_expr_term] = sym_expr_term,
  [sym_template_expr] = sym_template_expr,
  [sym_quoted_template] = sym_quoted_template,
  [sym_string_literal] = sym_string_literal,
  [sym_for_expr] = sym_for_expr,
  [sym__for_tuple] = sym__for_tuple,
  [sym__for_object] = sym__for_object,
  [sym_for_intro] = sym_for_intro,
  [sym_for_cond] = sym_for_cond,
  [sym_literal_value] = sym_literal_value,
  [sym_index] = sym_index,
  [sym_get_attr] = sym_get_attr,
  [sym_splat] = sym_splat,
  [sym_splat_attr] = sym_splat_attr,
  [sym_splat_full] = sym_splat_full,
  [sym_collection_value] = sym_collection_value,
  [sym_tuple] = sym_tuple,
  [sym_object] = sym_object,
  [sym_object_elem] = sym_object_elem,
  [sym_variable_expr] = sym_variable_expr,
  [sym_function_call] = sym_function_call,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_quoted_template_repeat1] = aux_sym_quoted_template_repeat1,
  [aux_sym_splat_attr_repeat1] = aux_sym_splat_attr_repeat1,
  [aux_sym_splat_full_repeat1] = aux_sym_splat_full_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_template_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_one_line_block] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_term] = {
    .visible = true,
    .named = true,
  },
  [sym_template_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__for_tuple] = {
    .visible = false,
    .named = true,
  },
  [sym__for_object] = {
    .visible = false,
    .named = true,
  },
  [sym_for_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_for_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_get_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_splat_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_splat_full] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_value] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_object_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_splat_attr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_splat_full_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2208
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2228 || (c < 2308
                  ? (c >= 2230 && c <= 2247)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4186
        ? (c < 3450
          ? (c < 3242
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3205
                ? (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || c == 3294))
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))
              : (c <= 3344 || (c < 3406
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3455 || (c < 3751
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))
              : (c <= 3635 || (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3904
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))
              : (c <= 3911 || (c < 4096
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5024
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4802
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))
              : (c <= 4805 || (c < 4882
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)
                : (c <= 4885 || (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6103
            ? (c < 5888
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)))
              : (c <= 5900 || (c < 5984
                ? (c < 5920
                  ? (c >= 5902 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'g'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'e')))
                : (c <= 'm' || (c < 'u'
                  ? (c >= 'o' && c <= 's')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 'p'
                  ? (c >= 'b' && c <= 'n')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 'f'
                  ? (c >= 'a' && c <= 'd')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 'm'
                  ? (c >= 'a' && c <= 'k')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 's'
                  ? (c >= 'a' && c <= 'q')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 't'
                  ? (c >= 'a' && c <= 'r')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 'v'
                  ? (c >= 'a' && c <= 't')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'b' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(53);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == '[') ADVANCE(74);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == '[') ADVANCE(74);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(75);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(100);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(75);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(100);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '&') ADVANCE(64);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == 'U') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == '|') ADVANCE(65);
      END_STATE();
    case 29:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(53);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(75);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_quoted_template_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_quoted_template_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(100);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(100);
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(100);
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(100);
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(100);
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(100);
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(100);
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(100);
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(100);
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(100);
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(100);
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(100);
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 7, .external_lex_state = 1},
  [3] = {.lex_state = 7, .external_lex_state = 1},
  [4] = {.lex_state = 7, .external_lex_state = 1},
  [5] = {.lex_state = 7, .external_lex_state = 1},
  [6] = {.lex_state = 6, .external_lex_state = 1},
  [7] = {.lex_state = 6, .external_lex_state = 1},
  [8] = {.lex_state = 6, .external_lex_state = 1},
  [9] = {.lex_state = 6, .external_lex_state = 1},
  [10] = {.lex_state = 6, .external_lex_state = 1},
  [11] = {.lex_state = 6, .external_lex_state = 1},
  [12] = {.lex_state = 6, .external_lex_state = 1},
  [13] = {.lex_state = 6, .external_lex_state = 1},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 6, .external_lex_state = 1},
  [16] = {.lex_state = 6, .external_lex_state = 1},
  [17] = {.lex_state = 6, .external_lex_state = 1},
  [18] = {.lex_state = 6, .external_lex_state = 1},
  [19] = {.lex_state = 6, .external_lex_state = 1},
  [20] = {.lex_state = 6, .external_lex_state = 1},
  [21] = {.lex_state = 6, .external_lex_state = 1},
  [22] = {.lex_state = 6, .external_lex_state = 1},
  [23] = {.lex_state = 6, .external_lex_state = 1},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 6, .external_lex_state = 1},
  [26] = {.lex_state = 6, .external_lex_state = 1},
  [27] = {.lex_state = 6, .external_lex_state = 1},
  [28] = {.lex_state = 6, .external_lex_state = 1},
  [29] = {.lex_state = 6, .external_lex_state = 1},
  [30] = {.lex_state = 6, .external_lex_state = 1},
  [31] = {.lex_state = 6, .external_lex_state = 1},
  [32] = {.lex_state = 6, .external_lex_state = 1},
  [33] = {.lex_state = 6, .external_lex_state = 1},
  [34] = {.lex_state = 6, .external_lex_state = 1},
  [35] = {.lex_state = 6, .external_lex_state = 1},
  [36] = {.lex_state = 6, .external_lex_state = 1},
  [37] = {.lex_state = 6, .external_lex_state = 1},
  [38] = {.lex_state = 6, .external_lex_state = 1},
  [39] = {.lex_state = 6, .external_lex_state = 1},
  [40] = {.lex_state = 6, .external_lex_state = 1},
  [41] = {.lex_state = 6, .external_lex_state = 1},
  [42] = {.lex_state = 6, .external_lex_state = 1},
  [43] = {.lex_state = 6, .external_lex_state = 1},
  [44] = {.lex_state = 6, .external_lex_state = 1},
  [45] = {.lex_state = 6, .external_lex_state = 1},
  [46] = {.lex_state = 6, .external_lex_state = 1},
  [47] = {.lex_state = 6, .external_lex_state = 1},
  [48] = {.lex_state = 6, .external_lex_state = 1},
  [49] = {.lex_state = 6, .external_lex_state = 1},
  [50] = {.lex_state = 6, .external_lex_state = 1},
  [51] = {.lex_state = 6, .external_lex_state = 1},
  [52] = {.lex_state = 6, .external_lex_state = 1},
  [53] = {.lex_state = 6, .external_lex_state = 1},
  [54] = {.lex_state = 6, .external_lex_state = 1},
  [55] = {.lex_state = 6, .external_lex_state = 1},
  [56] = {.lex_state = 6, .external_lex_state = 1},
  [57] = {.lex_state = 6, .external_lex_state = 1},
  [58] = {.lex_state = 6, .external_lex_state = 1},
  [59] = {.lex_state = 6, .external_lex_state = 1},
  [60] = {.lex_state = 6, .external_lex_state = 1},
  [61] = {.lex_state = 6, .external_lex_state = 1},
  [62] = {.lex_state = 6, .external_lex_state = 1},
  [63] = {.lex_state = 6, .external_lex_state = 1},
  [64] = {.lex_state = 6, .external_lex_state = 1},
  [65] = {.lex_state = 6, .external_lex_state = 1},
  [66] = {.lex_state = 6, .external_lex_state = 1},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 41},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 41},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 41},
  [108] = {.lex_state = 41},
  [109] = {.lex_state = 6, .external_lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 6, .external_lex_state = 1},
  [112] = {.lex_state = 6, .external_lex_state = 1},
  [113] = {.lex_state = 41},
  [114] = {.lex_state = 41},
  [115] = {.lex_state = 41},
  [116] = {.lex_state = 41},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 41},
  [127] = {.lex_state = 41},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 41},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 41},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 41},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 41},
  [174] = {.lex_state = 41},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 41},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 41},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 41},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 41},
  [188] = {.lex_state = 41},
  [189] = {.lex_state = 41},
  [190] = {.lex_state = 41},
  [191] = {.lex_state = 41},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 41},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 41},
  [197] = {.lex_state = 6, .external_lex_state = 1},
  [198] = {.lex_state = 6, .external_lex_state = 1},
  [199] = {.lex_state = 41},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 41},
  [202] = {.lex_state = 41},
  [203] = {.lex_state = 41},
  [204] = {.lex_state = 41},
  [205] = {.lex_state = 41},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 41},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 41},
  [222] = {.lex_state = 41},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 41},
  [229] = {.lex_state = 41},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 41},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 41},
  [234] = {.lex_state = 41},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 41},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 41},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 41},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 41},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 7},
  [254] = {.lex_state = 41},
  [255] = {.lex_state = 41},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 7},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 0},
};

enum {
  ts_external_token_heredoc = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_heredoc] = sym_heredoc,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_heredoc] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_numeric_literal] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_heredoc] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(267),
    [sym_body] = STATE(265),
    [sym_block] = STATE(201),
    [sym_one_line_block] = STATE(201),
    [sym_attribute] = STATE(201),
    [aux_sym_body_repeat1] = STATE(201),
    [sym_identifier] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_heredoc,
    STATE(14), 1,
      sym_expr_term,
    STATE(43), 1,
      sym_for_intro,
    STATE(77), 1,
      sym_quoted_template,
    STATE(172), 1,
      sym_expression,
    STATE(223), 1,
      sym_object_elem,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [76] = 21,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_expr_term,
    STATE(52), 1,
      sym_for_intro,
    STATE(77), 1,
      sym_quoted_template,
    STATE(172), 1,
      sym_expression,
    STATE(218), 1,
      sym_object_elem,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [152] = 20,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(39), 1,
      sym_for_intro,
    STATE(77), 1,
      sym_quoted_template,
    STATE(141), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [225] = 20,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_expr_term,
    STATE(47), 1,
      sym_for_intro,
    STATE(77), 1,
      sym_quoted_template,
    STATE(152), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [298] = 19,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(172), 1,
      sym_expression,
    STATE(235), 1,
      sym_object_elem,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [368] = 19,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(172), 1,
      sym_expression,
    STATE(235), 1,
      sym_object_elem,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [438] = 19,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(172), 1,
      sym_expression,
    STATE(235), 1,
      sym_object_elem,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [508] = 19,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(172), 1,
      sym_expression,
    STATE(235), 1,
      sym_object_elem,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [578] = 18,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [645] = 18,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_heredoc,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(172), 1,
      sym_expression,
    STATE(235), 1,
      sym_object_elem,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [712] = 18,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [779] = 18,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(127), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [846] = 6,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DOT,
    STATE(89), 2,
      sym_splat_attr,
      sym_splat_full,
    ACTIONS(51), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(92), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(49), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [889] = 18,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [956] = 18,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1023] = 18,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_STAR,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(193), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1090] = 18,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1157] = 18,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1224] = 18,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_STAR,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(189), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1291] = 18,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1358] = 18,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(126), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1425] = 18,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1492] = 6,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DOT,
    STATE(89), 2,
      sym_splat_attr,
      sym_splat_full,
    ACTIONS(77), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(92), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(75), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [1535] = 17,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_heredoc,
    STATE(110), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(180), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(175), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(194), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1599] = 17,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_heredoc,
    STATE(110), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(178), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(175), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(194), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1663] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(107), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1727] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(128), 1,
      sym_expression,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1791] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(103), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1855] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(108), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1919] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(114), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1983] = 17,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_heredoc,
    STATE(110), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(192), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(175), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(194), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2047] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(129), 1,
      sym_expression,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2111] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(131), 1,
      sym_expression,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2175] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(133), 1,
      sym_expression,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2239] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(103), 1,
      sym_expression,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2303] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(134), 1,
      sym_expression,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2367] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(174), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2431] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(148), 1,
      sym_expression,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2495] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(173), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2559] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(183), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2623] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(188), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2687] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(195), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2751] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(193), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2815] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(136), 1,
      sym_expression,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2879] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(130), 1,
      sym_expression,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2943] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(170), 1,
      sym_expression,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3007] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(187), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3071] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(176), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3135] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(191), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3199] = 17,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_heredoc,
    STATE(110), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(179), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(175), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(194), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3263] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(177), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3327] = 17,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_heredoc,
    STATE(110), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(182), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(175), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(194), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3391] = 17,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_heredoc,
    STATE(110), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(184), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(175), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(194), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3455] = 17,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_heredoc,
    STATE(110), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(186), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(175), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(194), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3519] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(113), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3583] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(115), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3647] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3711] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(190), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3775] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(137), 1,
      sym_expression,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3839] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(196), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3903] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(189), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3967] = 17,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_heredoc,
    STATE(110), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(185), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(175), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(194), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [4031] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(181), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [4095] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(171), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [4159] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(116), 1,
      sym_expression,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [4223] = 5,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_DOT,
    ACTIONS(103), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(67), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(101), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4262] = 5,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_DOT,
    ACTIONS(113), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(67), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(111), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4301] = 5,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_DOT,
    ACTIONS(121), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(68), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(119), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4340] = 4,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(70), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(125), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(123), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4376] = 2,
    ACTIONS(132), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(130), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [4408] = 4,
    ACTIONS(117), 1,
      anon_sym_DOT,
    STATE(70), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(136), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(134), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4444] = 2,
    ACTIONS(140), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(138), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [4476] = 4,
    ACTIONS(117), 1,
      anon_sym_DOT,
    STATE(72), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(144), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4512] = 3,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(146), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4545] = 2,
    ACTIONS(154), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(152), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4575] = 2,
    ACTIONS(158), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(156), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4605] = 2,
    ACTIONS(162), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(160), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4635] = 2,
    ACTIONS(166), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(164), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4665] = 2,
    ACTIONS(170), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(168), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4695] = 2,
    ACTIONS(174), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(172), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4725] = 2,
    ACTIONS(178), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(176), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4755] = 2,
    ACTIONS(182), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(180), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4785] = 2,
    ACTIONS(186), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(184), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4815] = 2,
    ACTIONS(190), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(188), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4845] = 2,
    ACTIONS(194), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(192), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4875] = 2,
    ACTIONS(198), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(196), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4905] = 2,
    ACTIONS(202), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(200), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4935] = 2,
    ACTIONS(206), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(204), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4965] = 2,
    ACTIONS(210), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(208), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4995] = 2,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(212), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5025] = 2,
    ACTIONS(218), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(216), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5055] = 2,
    ACTIONS(222), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(220), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5085] = 2,
    ACTIONS(226), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(224), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5115] = 2,
    ACTIONS(230), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(228), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5145] = 2,
    ACTIONS(234), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(232), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5175] = 2,
    ACTIONS(238), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(236), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5205] = 2,
    ACTIONS(242), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(240), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5235] = 2,
    ACTIONS(246), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(244), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5265] = 2,
    ACTIONS(250), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(248), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5295] = 2,
    ACTIONS(254), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(252), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5325] = 2,
    ACTIONS(258), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(256), 21,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5355] = 2,
    ACTIONS(262), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(260), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5383] = 2,
    ACTIONS(266), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5411] = 2,
    ACTIONS(51), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5439] = 6,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(268), 1,
      anon_sym_LBRACK,
    ACTIONS(270), 1,
      anon_sym_DOT,
    STATE(138), 2,
      sym_splat_attr,
      sym_splat_full,
    STATE(150), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(77), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5474] = 4,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(260), 14,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
  [5505] = 3,
    ACTIONS(262), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(260), 16,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
  [5534] = 13,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_heredoc,
    STATE(106), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [5583] = 6,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(268), 1,
      anon_sym_LBRACK,
    ACTIONS(270), 1,
      anon_sym_DOT,
    STATE(138), 2,
      sym_splat_attr,
      sym_splat_full,
    STATE(150), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(51), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5618] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [5667] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_numeric_literal,
    ACTIONS(25), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(24), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    ACTIONS(23), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [5716] = 7,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(260), 10,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
  [5753] = 9,
    ACTIONS(284), 1,
      anon_sym_EQ,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(282), 8,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
  [5794] = 8,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(260), 9,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
  [5833] = 6,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(260), 12,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
  [5868] = 5,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(117), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(103), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5899] = 5,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(296), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      anon_sym_DOT,
    STATE(117), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(113), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5930] = 5,
    ACTIONS(119), 1,
      anon_sym_LF,
    ACTIONS(296), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      anon_sym_DOT,
    STATE(118), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(121), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5961] = 2,
    ACTIONS(140), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(138), 17,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [5986] = 2,
    ACTIONS(132), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(130), 17,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [6011] = 5,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_EQ,
    ACTIONS(302), 1,
      anon_sym_COLON,
    ACTIONS(148), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(146), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6041] = 4,
    ACTIONS(142), 1,
      anon_sym_LF,
    ACTIONS(298), 1,
      anon_sym_DOT,
    STATE(124), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(144), 15,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
  [6069] = 4,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(298), 1,
      anon_sym_DOT,
    STATE(125), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(136), 15,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
  [6097] = 4,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(304), 1,
      anon_sym_DOT,
    STATE(125), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(125), 15,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
  [6125] = 12,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    ACTIONS(311), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6168] = 12,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(317), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6211] = 7,
    ACTIONS(331), 1,
      anon_sym_AMP_AMP,
    ACTIONS(321), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(325), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(329), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(323), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(260), 6,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [6244] = 6,
    ACTIONS(321), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(325), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(329), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(323), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(260), 7,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [6275] = 12,
    ACTIONS(331), 1,
      anon_sym_AMP_AMP,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    ACTIONS(335), 1,
      anon_sym_QMARK,
    ACTIONS(337), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(339), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(341), 1,
      anon_sym_if,
    STATE(262), 1,
      sym_for_cond,
    ACTIONS(321), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(325), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(329), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(323), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6318] = 5,
    ACTIONS(321), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(325), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(323), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(260), 9,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [6347] = 3,
    ACTIONS(146), 1,
      anon_sym_LF,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6372] = 4,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(321), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(323), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(260), 11,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [6399] = 3,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(323), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(260), 13,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [6424] = 9,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(345), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
  [6461] = 12,
    ACTIONS(331), 1,
      anon_sym_AMP_AMP,
    ACTIONS(335), 1,
      anon_sym_QMARK,
    ACTIONS(337), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(341), 1,
      anon_sym_if,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    ACTIONS(349), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(239), 1,
      sym_for_cond,
    ACTIONS(321), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(325), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(329), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(323), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6504] = 8,
    ACTIONS(331), 1,
      anon_sym_AMP_AMP,
    ACTIONS(337), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(321), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(325), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(329), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(323), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(282), 5,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [6539] = 2,
    ACTIONS(204), 1,
      anon_sym_LF,
    ACTIONS(206), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6561] = 2,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(174), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6583] = 2,
    ACTIONS(192), 1,
      anon_sym_LF,
    ACTIONS(194), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6605] = 11,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6645] = 2,
    ACTIONS(200), 1,
      anon_sym_LF,
    ACTIONS(202), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6667] = 2,
    ACTIONS(196), 1,
      anon_sym_LF,
    ACTIONS(198), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6689] = 2,
    ACTIONS(152), 1,
      anon_sym_LF,
    ACTIONS(154), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6711] = 2,
    ACTIONS(164), 1,
      anon_sym_LF,
    ACTIONS(166), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6733] = 2,
    ACTIONS(184), 1,
      anon_sym_LF,
    ACTIONS(186), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6755] = 2,
    ACTIONS(180), 1,
      anon_sym_LF,
    ACTIONS(182), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6777] = 11,
    ACTIONS(331), 1,
      anon_sym_AMP_AMP,
    ACTIONS(335), 1,
      anon_sym_QMARK,
    ACTIONS(337), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(341), 1,
      anon_sym_if,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    STATE(249), 1,
      sym_for_cond,
    ACTIONS(321), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(325), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(329), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(323), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6817] = 2,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(162), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6839] = 2,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(218), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6861] = 2,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(258), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6883] = 11,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6923] = 2,
    ACTIONS(188), 1,
      anon_sym_LF,
    ACTIONS(190), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6945] = 2,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(178), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6967] = 2,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(242), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6989] = 2,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(214), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7011] = 2,
    ACTIONS(224), 1,
      anon_sym_LF,
    ACTIONS(226), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7033] = 2,
    ACTIONS(236), 1,
      anon_sym_LF,
    ACTIONS(238), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7055] = 2,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(246), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7077] = 2,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(250), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7099] = 2,
    ACTIONS(252), 1,
      anon_sym_LF,
    ACTIONS(254), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7121] = 2,
    ACTIONS(208), 1,
      anon_sym_LF,
    ACTIONS(210), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7143] = 2,
    ACTIONS(168), 1,
      anon_sym_LF,
    ACTIONS(170), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7165] = 2,
    ACTIONS(138), 1,
      anon_sym_LF,
    ACTIONS(140), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7187] = 2,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(230), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7209] = 2,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(234), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7231] = 2,
    ACTIONS(220), 1,
      anon_sym_LF,
    ACTIONS(222), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7253] = 2,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(132), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7275] = 2,
    ACTIONS(156), 1,
      anon_sym_LF,
    ACTIONS(158), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7297] = 11,
    ACTIONS(331), 1,
      anon_sym_AMP_AMP,
    ACTIONS(335), 1,
      anon_sym_QMARK,
    ACTIONS(337), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(341), 1,
      anon_sym_if,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      sym_for_cond,
    ACTIONS(321), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(325), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(329), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(323), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7337] = 9,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(363), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7372] = 10,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(300), 1,
      anon_sym_EQ,
    ACTIONS(302), 1,
      anon_sym_COLON,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7409] = 9,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(365), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7444] = 9,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7478] = 2,
    ACTIONS(264), 1,
      anon_sym_LF,
    ACTIONS(266), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7498] = 9,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7532] = 9,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(371), 1,
      anon_sym_EQ_GT,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7566] = 3,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(373), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(262), 11,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7588] = 2,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(262), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7608] = 4,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(375), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(373), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(262), 9,
      anon_sym_QMARK,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7632] = 9,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(377), 1,
      anon_sym_COLON,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7666] = 5,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(375), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(373), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(379), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(262), 5,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7692] = 9,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_COLON,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7726] = 6,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(375), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(262), 3,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(373), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(379), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [7754] = 8,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(284), 1,
      anon_sym_QMARK,
    ACTIONS(385), 1,
      anon_sym_AMP_AMP,
    ACTIONS(387), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(375), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(373), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(379), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [7786] = 7,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(385), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 2,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
    ACTIONS(375), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(373), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(379), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [7816] = 9,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(389), 1,
      anon_sym_COLON,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7850] = 9,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7884] = 9,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7918] = 9,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7952] = 9,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(397), 1,
      anon_sym_COLON,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7986] = 8,
    ACTIONS(385), 1,
      anon_sym_AMP_AMP,
    ACTIONS(387), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(399), 1,
      anon_sym_LF,
    ACTIONS(401), 1,
      anon_sym_QMARK,
    ACTIONS(375), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(373), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(379), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [8018] = 9,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(403), 1,
      anon_sym_RBRACK,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8052] = 2,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(51), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8072] = 9,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(405), 1,
      anon_sym_EQ_GT,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8106] = 9,
    ACTIONS(286), 1,
      anon_sym_AMP_AMP,
    ACTIONS(288), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 1,
      anon_sym_QMARK,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    ACTIONS(272), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(280), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8140] = 2,
    ACTIONS(411), 4,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
    ACTIONS(409), 8,
      sym_heredoc,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_numeric_literal,
  [8157] = 2,
    ACTIONS(415), 4,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
    ACTIONS(413), 8,
      sym_heredoc,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_numeric_literal,
  [8174] = 3,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(417), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(199), 4,
      sym_block,
      sym_one_line_block,
      sym_attribute,
      aux_sym_body_repeat1,
  [8188] = 6,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_EQ,
    ACTIONS(426), 1,
      sym_identifier,
    STATE(217), 1,
      sym_quoted_template,
    STATE(205), 2,
      sym_string_literal,
      aux_sym_block_repeat1,
  [8208] = 3,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(428), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(199), 4,
      sym_block,
      sym_one_line_block,
      sym_attribute,
      aux_sym_body_repeat1,
  [8222] = 5,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    ACTIONS(432), 1,
      anon_sym_DQUOTE,
    ACTIONS(435), 1,
      sym_identifier,
    STATE(217), 1,
      sym_quoted_template,
    STATE(202), 2,
      sym_string_literal,
      aux_sym_block_repeat1,
  [8239] = 3,
    ACTIONS(3), 1,
      sym_identifier,
    STATE(259), 1,
      sym_body,
    STATE(201), 4,
      sym_block,
      sym_one_line_block,
      sym_attribute,
      aux_sym_body_repeat1,
  [8252] = 3,
    ACTIONS(3), 1,
      sym_identifier,
    STATE(246), 1,
      sym_body,
    STATE(201), 4,
      sym_block,
      sym_one_line_block,
      sym_attribute,
      aux_sym_body_repeat1,
  [8265] = 5,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    ACTIONS(440), 1,
      sym_identifier,
    STATE(217), 1,
      sym_quoted_template,
    STATE(202), 2,
      sym_string_literal,
      aux_sym_block_repeat1,
  [8282] = 3,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(345), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
  [8294] = 3,
    ACTIONS(445), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(447), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [8305] = 4,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(449), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_tuple_repeat1,
  [8318] = 3,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(455), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [8329] = 4,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(458), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_tuple_repeat1,
  [8342] = 3,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    STATE(212), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(464), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [8353] = 3,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(447), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [8364] = 3,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    STATE(207), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(470), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [8375] = 3,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    STATE(215), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(474), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [8386] = 3,
    ACTIONS(476), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(447), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [8397] = 3,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_object_repeat1,
  [8407] = 1,
    ACTIONS(480), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_identifier,
  [8413] = 3,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_object_repeat1,
  [8423] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_tuple_repeat1,
  [8433] = 3,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_object_repeat1,
  [8443] = 1,
    ACTIONS(490), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [8449] = 1,
    ACTIONS(492), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [8455] = 3,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_object_repeat1,
  [8465] = 3,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_tuple_repeat1,
  [8475] = 3,
    ACTIONS(500), 1,
      anon_sym_LF,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    ACTIONS(504), 1,
      sym_identifier,
  [8485] = 3,
    ACTIONS(341), 1,
      anon_sym_if,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_for_cond,
  [8495] = 3,
    ACTIONS(341), 1,
      anon_sym_if,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      sym_for_cond,
  [8505] = 1,
    ACTIONS(510), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [8511] = 1,
    ACTIONS(512), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [8517] = 3,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_object_repeat1,
  [8527] = 1,
    ACTIONS(519), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [8533] = 3,
    ACTIONS(521), 1,
      anon_sym_LF,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
    ACTIONS(525), 1,
      sym_identifier,
  [8543] = 1,
    ACTIONS(527), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [8549] = 1,
    ACTIONS(529), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [8555] = 1,
    ACTIONS(514), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [8560] = 2,
    ACTIONS(531), 1,
      anon_sym_STAR,
    ACTIONS(533), 1,
      sym_identifier,
  [8567] = 2,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(537), 1,
      anon_sym_in,
  [8574] = 2,
    ACTIONS(539), 1,
      anon_sym_STAR,
    ACTIONS(541), 1,
      sym_identifier,
  [8581] = 1,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
  [8585] = 1,
    ACTIONS(543), 1,
      anon_sym_LF,
  [8589] = 1,
    ACTIONS(545), 1,
      anon_sym_RBRACK,
  [8593] = 1,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
  [8597] = 1,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
  [8601] = 1,
    ACTIONS(551), 1,
      sym_identifier,
  [8605] = 1,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
  [8609] = 1,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
  [8613] = 1,
    ACTIONS(555), 1,
      anon_sym_LF,
  [8617] = 1,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
  [8621] = 1,
    ACTIONS(557), 1,
      anon_sym_RBRACK,
  [8625] = 1,
    ACTIONS(541), 1,
      sym_identifier,
  [8629] = 1,
    ACTIONS(559), 1,
      anon_sym_RBRACK,
  [8633] = 1,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
  [8637] = 1,
    ACTIONS(561), 1,
      anon_sym_EQ,
  [8641] = 1,
    ACTIONS(563), 1,
      sym_identifier,
  [8645] = 1,
    ACTIONS(533), 1,
      sym_identifier,
  [8649] = 1,
    ACTIONS(565), 1,
      anon_sym_LF,
  [8653] = 1,
    ACTIONS(567), 1,
      anon_sym_LF,
  [8657] = 1,
    ACTIONS(569), 1,
      anon_sym_in,
  [8661] = 1,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
  [8665] = 1,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
  [8669] = 1,
    ACTIONS(573), 1,
      anon_sym_RBRACK,
  [8673] = 1,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
  [8677] = 1,
    ACTIONS(575), 1,
      anon_sym_EQ,
  [8681] = 1,
    ACTIONS(577), 1,
      anon_sym_LF,
  [8685] = 1,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
  [8689] = 1,
    ACTIONS(581), 1,
      anon_sym_LF,
  [8693] = 1,
    ACTIONS(583), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 76,
  [SMALL_STATE(4)] = 152,
  [SMALL_STATE(5)] = 225,
  [SMALL_STATE(6)] = 298,
  [SMALL_STATE(7)] = 368,
  [SMALL_STATE(8)] = 438,
  [SMALL_STATE(9)] = 508,
  [SMALL_STATE(10)] = 578,
  [SMALL_STATE(11)] = 645,
  [SMALL_STATE(12)] = 712,
  [SMALL_STATE(13)] = 779,
  [SMALL_STATE(14)] = 846,
  [SMALL_STATE(15)] = 889,
  [SMALL_STATE(16)] = 956,
  [SMALL_STATE(17)] = 1023,
  [SMALL_STATE(18)] = 1090,
  [SMALL_STATE(19)] = 1157,
  [SMALL_STATE(20)] = 1224,
  [SMALL_STATE(21)] = 1291,
  [SMALL_STATE(22)] = 1358,
  [SMALL_STATE(23)] = 1425,
  [SMALL_STATE(24)] = 1492,
  [SMALL_STATE(25)] = 1535,
  [SMALL_STATE(26)] = 1599,
  [SMALL_STATE(27)] = 1663,
  [SMALL_STATE(28)] = 1727,
  [SMALL_STATE(29)] = 1791,
  [SMALL_STATE(30)] = 1855,
  [SMALL_STATE(31)] = 1919,
  [SMALL_STATE(32)] = 1983,
  [SMALL_STATE(33)] = 2047,
  [SMALL_STATE(34)] = 2111,
  [SMALL_STATE(35)] = 2175,
  [SMALL_STATE(36)] = 2239,
  [SMALL_STATE(37)] = 2303,
  [SMALL_STATE(38)] = 2367,
  [SMALL_STATE(39)] = 2431,
  [SMALL_STATE(40)] = 2495,
  [SMALL_STATE(41)] = 2559,
  [SMALL_STATE(42)] = 2623,
  [SMALL_STATE(43)] = 2687,
  [SMALL_STATE(44)] = 2751,
  [SMALL_STATE(45)] = 2815,
  [SMALL_STATE(46)] = 2879,
  [SMALL_STATE(47)] = 2943,
  [SMALL_STATE(48)] = 3007,
  [SMALL_STATE(49)] = 3071,
  [SMALL_STATE(50)] = 3135,
  [SMALL_STATE(51)] = 3199,
  [SMALL_STATE(52)] = 3263,
  [SMALL_STATE(53)] = 3327,
  [SMALL_STATE(54)] = 3391,
  [SMALL_STATE(55)] = 3455,
  [SMALL_STATE(56)] = 3519,
  [SMALL_STATE(57)] = 3583,
  [SMALL_STATE(58)] = 3647,
  [SMALL_STATE(59)] = 3711,
  [SMALL_STATE(60)] = 3775,
  [SMALL_STATE(61)] = 3839,
  [SMALL_STATE(62)] = 3903,
  [SMALL_STATE(63)] = 3967,
  [SMALL_STATE(64)] = 4031,
  [SMALL_STATE(65)] = 4095,
  [SMALL_STATE(66)] = 4159,
  [SMALL_STATE(67)] = 4223,
  [SMALL_STATE(68)] = 4262,
  [SMALL_STATE(69)] = 4301,
  [SMALL_STATE(70)] = 4340,
  [SMALL_STATE(71)] = 4376,
  [SMALL_STATE(72)] = 4408,
  [SMALL_STATE(73)] = 4444,
  [SMALL_STATE(74)] = 4476,
  [SMALL_STATE(75)] = 4512,
  [SMALL_STATE(76)] = 4545,
  [SMALL_STATE(77)] = 4575,
  [SMALL_STATE(78)] = 4605,
  [SMALL_STATE(79)] = 4635,
  [SMALL_STATE(80)] = 4665,
  [SMALL_STATE(81)] = 4695,
  [SMALL_STATE(82)] = 4725,
  [SMALL_STATE(83)] = 4755,
  [SMALL_STATE(84)] = 4785,
  [SMALL_STATE(85)] = 4815,
  [SMALL_STATE(86)] = 4845,
  [SMALL_STATE(87)] = 4875,
  [SMALL_STATE(88)] = 4905,
  [SMALL_STATE(89)] = 4935,
  [SMALL_STATE(90)] = 4965,
  [SMALL_STATE(91)] = 4995,
  [SMALL_STATE(92)] = 5025,
  [SMALL_STATE(93)] = 5055,
  [SMALL_STATE(94)] = 5085,
  [SMALL_STATE(95)] = 5115,
  [SMALL_STATE(96)] = 5145,
  [SMALL_STATE(97)] = 5175,
  [SMALL_STATE(98)] = 5205,
  [SMALL_STATE(99)] = 5235,
  [SMALL_STATE(100)] = 5265,
  [SMALL_STATE(101)] = 5295,
  [SMALL_STATE(102)] = 5325,
  [SMALL_STATE(103)] = 5355,
  [SMALL_STATE(104)] = 5383,
  [SMALL_STATE(105)] = 5411,
  [SMALL_STATE(106)] = 5439,
  [SMALL_STATE(107)] = 5474,
  [SMALL_STATE(108)] = 5505,
  [SMALL_STATE(109)] = 5534,
  [SMALL_STATE(110)] = 5583,
  [SMALL_STATE(111)] = 5618,
  [SMALL_STATE(112)] = 5667,
  [SMALL_STATE(113)] = 5716,
  [SMALL_STATE(114)] = 5753,
  [SMALL_STATE(115)] = 5794,
  [SMALL_STATE(116)] = 5833,
  [SMALL_STATE(117)] = 5868,
  [SMALL_STATE(118)] = 5899,
  [SMALL_STATE(119)] = 5930,
  [SMALL_STATE(120)] = 5961,
  [SMALL_STATE(121)] = 5986,
  [SMALL_STATE(122)] = 6011,
  [SMALL_STATE(123)] = 6041,
  [SMALL_STATE(124)] = 6069,
  [SMALL_STATE(125)] = 6097,
  [SMALL_STATE(126)] = 6125,
  [SMALL_STATE(127)] = 6168,
  [SMALL_STATE(128)] = 6211,
  [SMALL_STATE(129)] = 6244,
  [SMALL_STATE(130)] = 6275,
  [SMALL_STATE(131)] = 6318,
  [SMALL_STATE(132)] = 6347,
  [SMALL_STATE(133)] = 6372,
  [SMALL_STATE(134)] = 6399,
  [SMALL_STATE(135)] = 6424,
  [SMALL_STATE(136)] = 6461,
  [SMALL_STATE(137)] = 6504,
  [SMALL_STATE(138)] = 6539,
  [SMALL_STATE(139)] = 6561,
  [SMALL_STATE(140)] = 6583,
  [SMALL_STATE(141)] = 6605,
  [SMALL_STATE(142)] = 6645,
  [SMALL_STATE(143)] = 6667,
  [SMALL_STATE(144)] = 6689,
  [SMALL_STATE(145)] = 6711,
  [SMALL_STATE(146)] = 6733,
  [SMALL_STATE(147)] = 6755,
  [SMALL_STATE(148)] = 6777,
  [SMALL_STATE(149)] = 6817,
  [SMALL_STATE(150)] = 6839,
  [SMALL_STATE(151)] = 6861,
  [SMALL_STATE(152)] = 6883,
  [SMALL_STATE(153)] = 6923,
  [SMALL_STATE(154)] = 6945,
  [SMALL_STATE(155)] = 6967,
  [SMALL_STATE(156)] = 6989,
  [SMALL_STATE(157)] = 7011,
  [SMALL_STATE(158)] = 7033,
  [SMALL_STATE(159)] = 7055,
  [SMALL_STATE(160)] = 7077,
  [SMALL_STATE(161)] = 7099,
  [SMALL_STATE(162)] = 7121,
  [SMALL_STATE(163)] = 7143,
  [SMALL_STATE(164)] = 7165,
  [SMALL_STATE(165)] = 7187,
  [SMALL_STATE(166)] = 7209,
  [SMALL_STATE(167)] = 7231,
  [SMALL_STATE(168)] = 7253,
  [SMALL_STATE(169)] = 7275,
  [SMALL_STATE(170)] = 7297,
  [SMALL_STATE(171)] = 7337,
  [SMALL_STATE(172)] = 7372,
  [SMALL_STATE(173)] = 7409,
  [SMALL_STATE(174)] = 7444,
  [SMALL_STATE(175)] = 7478,
  [SMALL_STATE(176)] = 7498,
  [SMALL_STATE(177)] = 7532,
  [SMALL_STATE(178)] = 7566,
  [SMALL_STATE(179)] = 7588,
  [SMALL_STATE(180)] = 7608,
  [SMALL_STATE(181)] = 7632,
  [SMALL_STATE(182)] = 7666,
  [SMALL_STATE(183)] = 7692,
  [SMALL_STATE(184)] = 7726,
  [SMALL_STATE(185)] = 7754,
  [SMALL_STATE(186)] = 7786,
  [SMALL_STATE(187)] = 7816,
  [SMALL_STATE(188)] = 7850,
  [SMALL_STATE(189)] = 7884,
  [SMALL_STATE(190)] = 7918,
  [SMALL_STATE(191)] = 7952,
  [SMALL_STATE(192)] = 7986,
  [SMALL_STATE(193)] = 8018,
  [SMALL_STATE(194)] = 8052,
  [SMALL_STATE(195)] = 8072,
  [SMALL_STATE(196)] = 8106,
  [SMALL_STATE(197)] = 8140,
  [SMALL_STATE(198)] = 8157,
  [SMALL_STATE(199)] = 8174,
  [SMALL_STATE(200)] = 8188,
  [SMALL_STATE(201)] = 8208,
  [SMALL_STATE(202)] = 8222,
  [SMALL_STATE(203)] = 8239,
  [SMALL_STATE(204)] = 8252,
  [SMALL_STATE(205)] = 8265,
  [SMALL_STATE(206)] = 8282,
  [SMALL_STATE(207)] = 8294,
  [SMALL_STATE(208)] = 8305,
  [SMALL_STATE(209)] = 8318,
  [SMALL_STATE(210)] = 8329,
  [SMALL_STATE(211)] = 8342,
  [SMALL_STATE(212)] = 8353,
  [SMALL_STATE(213)] = 8364,
  [SMALL_STATE(214)] = 8375,
  [SMALL_STATE(215)] = 8386,
  [SMALL_STATE(216)] = 8397,
  [SMALL_STATE(217)] = 8407,
  [SMALL_STATE(218)] = 8413,
  [SMALL_STATE(219)] = 8423,
  [SMALL_STATE(220)] = 8433,
  [SMALL_STATE(221)] = 8443,
  [SMALL_STATE(222)] = 8449,
  [SMALL_STATE(223)] = 8455,
  [SMALL_STATE(224)] = 8465,
  [SMALL_STATE(225)] = 8475,
  [SMALL_STATE(226)] = 8485,
  [SMALL_STATE(227)] = 8495,
  [SMALL_STATE(228)] = 8505,
  [SMALL_STATE(229)] = 8511,
  [SMALL_STATE(230)] = 8517,
  [SMALL_STATE(231)] = 8527,
  [SMALL_STATE(232)] = 8533,
  [SMALL_STATE(233)] = 8543,
  [SMALL_STATE(234)] = 8549,
  [SMALL_STATE(235)] = 8555,
  [SMALL_STATE(236)] = 8560,
  [SMALL_STATE(237)] = 8567,
  [SMALL_STATE(238)] = 8574,
  [SMALL_STATE(239)] = 8581,
  [SMALL_STATE(240)] = 8585,
  [SMALL_STATE(241)] = 8589,
  [SMALL_STATE(242)] = 8593,
  [SMALL_STATE(243)] = 8597,
  [SMALL_STATE(244)] = 8601,
  [SMALL_STATE(245)] = 8605,
  [SMALL_STATE(246)] = 8609,
  [SMALL_STATE(247)] = 8613,
  [SMALL_STATE(248)] = 8617,
  [SMALL_STATE(249)] = 8621,
  [SMALL_STATE(250)] = 8625,
  [SMALL_STATE(251)] = 8629,
  [SMALL_STATE(252)] = 8633,
  [SMALL_STATE(253)] = 8637,
  [SMALL_STATE(254)] = 8641,
  [SMALL_STATE(255)] = 8645,
  [SMALL_STATE(256)] = 8649,
  [SMALL_STATE(257)] = 8653,
  [SMALL_STATE(258)] = 8657,
  [SMALL_STATE(259)] = 8661,
  [SMALL_STATE(260)] = 8665,
  [SMALL_STATE(261)] = 8669,
  [SMALL_STATE(262)] = 8673,
  [SMALL_STATE(263)] = 8677,
  [SMALL_STATE(264)] = 8681,
  [SMALL_STATE(265)] = 8685,
  [SMALL_STATE(266)] = 8689,
  [SMALL_STATE(267)] = 8693,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_op, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_splat_full_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_splat_full_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_splat_full_repeat1, 2), SHIFT_REPEAT(44),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_full_repeat1, 2), SHIFT_REPEAT(250),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_full, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_full, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_full, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_full, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_splat_attr_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_splat_attr_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_attr_repeat1, 2), SHIFT_REPEAT(250),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_attr, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_attr, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_attr, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_attr, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_tuple, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_tuple, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_object, 8),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_object, 8),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_object, 7),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_object, 7),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_object, 6),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_object, 6),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_tuple, 5),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_tuple, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 3, .production_id = 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_full_repeat1, 2), SHIFT_REPEAT(62),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_full_repeat1, 2), SHIFT_REPEAT(255),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_attr_repeat1, 2), SHIFT_REPEAT(255),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(200),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(213),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(202),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(58),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_template_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(209),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_line_block, 8),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_line_block, 7),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(11),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_line_block, 5),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_line_block, 4),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [583] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_hcl_external_scanner_create(void);
void tree_sitter_hcl_external_scanner_destroy(void *);
bool tree_sitter_hcl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_hcl_external_scanner_serialize(void *, char *);
void tree_sitter_hcl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hcl(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_hcl_external_scanner_create,
      tree_sitter_hcl_external_scanner_destroy,
      tree_sitter_hcl_external_scanner_scan,
      tree_sitter_hcl_external_scanner_serialize,
      tree_sitter_hcl_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
