#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 221
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  anon_sym_EQ = 2,
  anon_sym_QMARK = 3,
  anon_sym_COLON = 4,
  anon_sym_DASH = 5,
  anon_sym_BANG = 6,
  anon_sym_STAR = 7,
  anon_sym_SLASH = 8,
  anon_sym_PERCENT = 9,
  anon_sym_PLUS = 10,
  anon_sym_GT = 11,
  anon_sym_GT_EQ = 12,
  anon_sym_LT = 13,
  anon_sym_LT_EQ = 14,
  anon_sym_EQ_EQ = 15,
  anon_sym_BANG_EQ = 16,
  anon_sym_AMP_AMP = 17,
  anon_sym_PIPE_PIPE = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_DQUOTE = 21,
  aux_sym_quoted_template_token1 = 22,
  sym_escape_sequence = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_LBRACE = 26,
  anon_sym_EQ_GT = 27,
  anon_sym_DOT_DOT_DOT = 28,
  anon_sym_RBRACE = 29,
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
  sym_source_file = 40,
  sym_attribute = 41,
  sym_expression = 42,
  sym_conditional = 43,
  sym_operation = 44,
  sym_unary_op = 45,
  sym_binary_op = 46,
  sym_expr_term = 47,
  sym_template_expr = 48,
  sym_quoted_template = 49,
  sym_for_expr = 50,
  sym__for_tuple = 51,
  sym__for_object = 52,
  sym_for_intro = 53,
  sym_for_cond = 54,
  sym_literal_value = 55,
  sym_index = 56,
  sym_get_attr = 57,
  sym_splat = 58,
  sym_splat_attr = 59,
  sym_splat_full = 60,
  sym_collection_value = 61,
  sym_tuple = 62,
  sym_object = 63,
  sym_object_elem = 64,
  sym_variable_expr = 65,
  sym_function_call = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_quoted_template_repeat1 = 68,
  aux_sym_splat_attr_repeat1 = 69,
  aux_sym_splat_full_repeat1 = 70,
  aux_sym_tuple_repeat1 = 71,
  aux_sym_object_repeat1 = 72,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_RBRACE] = "}",
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
  [sym_source_file] = "source_file",
  [sym_attribute] = "attribute",
  [sym_expression] = "expression",
  [sym_conditional] = "conditional",
  [sym_operation] = "operation",
  [sym_unary_op] = "unary_op",
  [sym_binary_op] = "binary_op",
  [sym_expr_term] = "expr_term",
  [sym_template_expr] = "template_expr",
  [sym_quoted_template] = "quoted_template",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_quoted_template_repeat1] = "quoted_template_repeat1",
  [aux_sym_splat_attr_repeat1] = "splat_attr_repeat1",
  [aux_sym_splat_full_repeat1] = "splat_full_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_source_file] = sym_source_file,
  [sym_attribute] = sym_attribute,
  [sym_expression] = sym_expression,
  [sym_conditional] = sym_conditional,
  [sym_operation] = sym_operation,
  [sym_unary_op] = sym_unary_op,
  [sym_binary_op] = sym_binary_op,
  [sym_expr_term] = sym_expr_term,
  [sym_template_expr] = sym_template_expr,
  [sym_quoted_template] = sym_quoted_template,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_LF] = {
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
  [anon_sym_LBRACE] = {
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
  [anon_sym_RBRACE] = {
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
  [sym_source_file] = {
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
  [aux_sym_source_file_repeat1] = {
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

static inline bool sym_identifier_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(41);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(98);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(98);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(74);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'U') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == '|') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
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
      if (eof) ADVANCE(41);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(98);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(73);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_quoted_template_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_quoted_template_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(98);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(98);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(98);
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(98);
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(98);
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(98);
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(98);
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(98);
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(98);
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(98);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(98);
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(98);
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(98);
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(98);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(98);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(98);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 40},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 40},
  [114] = {.lex_state = 40},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 40},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 40},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 40},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 40},
  [153] = {.lex_state = 40},
  [154] = {.lex_state = 40},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 40},
  [164] = {.lex_state = 40},
  [165] = {.lex_state = 40},
  [166] = {.lex_state = 40},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 40},
  [172] = {.lex_state = 40},
  [173] = {.lex_state = 40},
  [174] = {.lex_state = 40},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 40},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 40},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 40},
  [198] = {.lex_state = 40},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 40},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 40},
  [205] = {.lex_state = 40},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 40},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 40},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 40},
  [220] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_numeric_literal] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(220),
    [sym_attribute] = STATE(218),
    [aux_sym_source_file_repeat1] = STATE(179),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(56), 1,
      sym_for_intro,
    STATE(72), 1,
      sym_quoted_template,
    STATE(153), 1,
      sym_expression,
    STATE(188), 1,
      sym_object_elem,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [73] = 20,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_expr_term,
    STATE(38), 1,
      sym_for_intro,
    STATE(72), 1,
      sym_quoted_template,
    STATE(153), 1,
      sym_expression,
    STATE(189), 1,
      sym_object_elem,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [146] = 19,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(36), 1,
      sym_for_intro,
    STATE(72), 1,
      sym_quoted_template,
    STATE(122), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [216] = 19,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_expr_term,
    STATE(34), 1,
      sym_for_intro,
    STATE(72), 1,
      sym_quoted_template,
    STATE(125), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [286] = 6,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DOT,
    STATE(84), 2,
      sym_splat_attr,
      sym_splat_full,
    ACTIONS(35), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(86), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(37), 20,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [329] = 18,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(153), 1,
      sym_expression,
    STATE(196), 1,
      sym_object_elem,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [396] = 18,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(153), 1,
      sym_expression,
    STATE(196), 1,
      sym_object_elem,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [463] = 6,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DOT,
    STATE(84), 2,
      sym_splat_attr,
      sym_splat_full,
    ACTIONS(47), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(86), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(49), 20,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [506] = 18,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(153), 1,
      sym_expression,
    STATE(196), 1,
      sym_object_elem,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [573] = 18,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(153), 1,
      sym_expression,
    STATE(196), 1,
      sym_object_elem,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [640] = 17,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(118), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [704] = 17,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(118), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [768] = 17,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(118), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [832] = 17,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(114), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [896] = 17,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(153), 1,
      sym_expression,
    STATE(196), 1,
      sym_object_elem,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [960] = 17,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(118), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1024] = 17,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_STAR,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(166), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1088] = 17,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(118), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1152] = 17,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(113), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1216] = 17,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(118), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1280] = 17,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(118), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1344] = 17,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(118), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1408] = 17,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_STAR,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(164), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1472] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(96), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1533] = 16,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(102), 1,
      sym_expr_term,
    STATE(120), 1,
      sym_quoted_template,
    STATE(159), 1,
      sym_expression,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(140), 2,
      sym_tuple,
      sym_object,
    STATE(142), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(155), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(169), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(149), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1594] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(171), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1655] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(172), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1716] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(164), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1777] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(117), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1838] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(165), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1899] = 16,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(102), 1,
      sym_expr_term,
    STATE(120), 1,
      sym_quoted_template,
    STATE(170), 1,
      sym_expression,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(140), 2,
      sym_tuple,
      sym_object,
    STATE(142), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(155), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(169), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(149), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1960] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(118), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2021] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(119), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2082] = 5,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(95), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(35), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(97), 20,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [2121] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(138), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2182] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(97), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2243] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(167), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2304] = 16,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(102), 1,
      sym_expr_term,
    STATE(120), 1,
      sym_quoted_template,
    STATE(156), 1,
      sym_expression,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(140), 2,
      sym_tuple,
      sym_object,
    STATE(142), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(155), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(169), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(149), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2365] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(163), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2426] = 16,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(102), 1,
      sym_expr_term,
    STATE(120), 1,
      sym_quoted_template,
    STATE(162), 1,
      sym_expression,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(140), 2,
      sym_tuple,
      sym_object,
    STATE(142), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(155), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(169), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(149), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2487] = 16,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(102), 1,
      sym_expr_term,
    STATE(120), 1,
      sym_quoted_template,
    STATE(161), 1,
      sym_expression,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(140), 2,
      sym_tuple,
      sym_object,
    STATE(142), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(155), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(169), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(149), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2548] = 16,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(102), 1,
      sym_expr_term,
    STATE(120), 1,
      sym_quoted_template,
    STATE(160), 1,
      sym_expression,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(140), 2,
      sym_tuple,
      sym_object,
    STATE(142), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(155), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(169), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(149), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2609] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(173), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2670] = 16,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(102), 1,
      sym_expr_term,
    STATE(120), 1,
      sym_quoted_template,
    STATE(158), 1,
      sym_expression,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(140), 2,
      sym_tuple,
      sym_object,
    STATE(142), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(155), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(169), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(149), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2731] = 16,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(102), 1,
      sym_expr_term,
    STATE(120), 1,
      sym_quoted_template,
    STATE(157), 1,
      sym_expression,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(140), 2,
      sym_tuple,
      sym_object,
    STATE(142), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(155), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(169), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(149), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2792] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(152), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2853] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(105), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(35), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(107), 20,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [2892] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(98), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2953] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(174), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3014] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(99), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3075] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(100), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3136] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(101), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3197] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(166), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3258] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(116), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3319] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(168), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3380] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(154), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3441] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(113), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(48), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(115), 20,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [3480] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(93), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    STATE(94), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(95), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3541] = 4,
    ACTIONS(111), 1,
      anon_sym_DOT,
    STATE(61), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(117), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [3577] = 4,
    ACTIONS(125), 1,
      anon_sym_DOT,
    STATE(61), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(121), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(123), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [3613] = 4,
    ACTIONS(111), 1,
      anon_sym_DOT,
    STATE(60), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(128), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(130), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [3649] = 3,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(134), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [3682] = 2,
    ACTIONS(138), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(140), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [3712] = 2,
    ACTIONS(142), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(144), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [3742] = 2,
    ACTIONS(146), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(148), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [3772] = 2,
    ACTIONS(150), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(152), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [3802] = 2,
    ACTIONS(154), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(156), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [3832] = 2,
    ACTIONS(158), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(160), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [3862] = 2,
    ACTIONS(162), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(164), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [3892] = 2,
    ACTIONS(166), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(168), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [3922] = 2,
    ACTIONS(170), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(172), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [3952] = 2,
    ACTIONS(174), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(176), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [3982] = 2,
    ACTIONS(178), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(180), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4012] = 2,
    ACTIONS(182), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(184), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4042] = 2,
    ACTIONS(186), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(188), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4072] = 2,
    ACTIONS(190), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(192), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4102] = 2,
    ACTIONS(194), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(196), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4132] = 2,
    ACTIONS(198), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(200), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4162] = 2,
    ACTIONS(202), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(204), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4192] = 2,
    ACTIONS(206), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(208), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4222] = 2,
    ACTIONS(210), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(212), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4252] = 2,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(216), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4282] = 2,
    ACTIONS(218), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(220), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4312] = 2,
    ACTIONS(222), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(224), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4342] = 2,
    ACTIONS(226), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(228), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4372] = 2,
    ACTIONS(230), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(232), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4402] = 2,
    ACTIONS(234), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(236), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4432] = 2,
    ACTIONS(238), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(240), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4462] = 2,
    ACTIONS(242), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(244), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4492] = 2,
    ACTIONS(246), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(248), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4522] = 2,
    ACTIONS(250), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(252), 21,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4552] = 9,
    ACTIONS(254), 1,
      anon_sym_EQ,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 9,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4594] = 2,
    ACTIONS(272), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(274), 20,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4622] = 2,
    ACTIONS(47), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 20,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4650] = 8,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(276), 1,
      anon_sym_EQ,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(278), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4690] = 3,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(276), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 17,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4720] = 2,
    ACTIONS(276), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 20,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4748] = 4,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(276), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 15,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4780] = 6,
    ACTIONS(276), 1,
      anon_sym_EQ,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(278), 13,
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
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4816] = 7,
    ACTIONS(276), 1,
      anon_sym_EQ,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(278), 11,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4854] = 6,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_DOT,
    STATE(130), 2,
      sym_splat_attr,
      sym_splat_full,
    STATE(128), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(47), 14,
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
  [4889] = 6,
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_DOT,
    STATE(130), 2,
      sym_splat_attr,
      sym_splat_full,
    STATE(128), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(35), 14,
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
  [4924] = 12,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_numeric_literal,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(103), 1,
      sym_expr_term,
    STATE(120), 1,
      sym_quoted_template,
    STATE(140), 2,
      sym_tuple,
      sym_object,
    STATE(142), 2,
      sym__for_tuple,
      sym__for_object,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(149), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [4970] = 12,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expr_term,
    STATE(72), 1,
      sym_quoted_template,
    STATE(65), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(74), 2,
      sym_tuple,
      sym_object,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [5016] = 5,
    ACTIONS(115), 1,
      anon_sym_LF,
    ACTIONS(284), 1,
      anon_sym_LBRACK,
    ACTIONS(286), 1,
      anon_sym_DOT,
    STATE(108), 3,
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
  [5047] = 5,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(288), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DOT,
    STATE(107), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(95), 14,
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
  [5078] = 5,
    ACTIONS(107), 1,
      anon_sym_LF,
    ACTIONS(284), 1,
      anon_sym_LBRACK,
    ACTIONS(286), 1,
      anon_sym_DOT,
    STATE(107), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(105), 14,
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
  [5109] = 4,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(294), 1,
      anon_sym_DOT,
    STATE(109), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(121), 15,
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
  [5137] = 4,
    ACTIONS(119), 1,
      anon_sym_LF,
    ACTIONS(286), 1,
      anon_sym_DOT,
    STATE(109), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(117), 15,
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
  [5165] = 5,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_EQ,
    ACTIONS(299), 1,
      anon_sym_COLON,
    ACTIONS(132), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(134), 14,
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
  [5195] = 4,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(286), 1,
      anon_sym_DOT,
    STATE(110), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(128), 15,
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
  [5223] = 12,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(305), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5266] = 12,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    ACTIONS(311), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5309] = 3,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
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
  [5334] = 12,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(317), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    ACTIONS(321), 1,
      anon_sym_if,
    STATE(217), 1,
      sym_for_cond,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5377] = 12,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(321), 1,
      anon_sym_if,
    ACTIONS(323), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      sym_for_cond,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5420] = 9,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(327), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
  [5457] = 11,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(321), 1,
      anon_sym_if,
    ACTIONS(329), 1,
      anon_sym_RBRACK,
    STATE(206), 1,
      sym_for_cond,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5497] = 2,
    ACTIONS(172), 1,
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
  [5519] = 2,
    ACTIONS(196), 1,
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
  [5541] = 11,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5581] = 2,
    ACTIONS(168), 1,
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
  [5603] = 2,
    ACTIONS(200), 1,
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
  [5625] = 11,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5665] = 2,
    ACTIONS(160), 1,
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
  [5687] = 2,
    ACTIONS(232), 1,
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
  [5709] = 2,
    ACTIONS(228), 1,
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
  [5731] = 2,
    ACTIONS(236), 1,
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
  [5753] = 2,
    ACTIONS(220), 1,
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
  [5775] = 2,
    ACTIONS(216), 1,
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
  [5797] = 2,
    ACTIONS(156), 1,
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
  [5819] = 2,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(138), 16,
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
  [5841] = 2,
    ACTIONS(252), 1,
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
  [5863] = 2,
    ACTIONS(248), 1,
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
  [5885] = 2,
    ACTIONS(208), 1,
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
  [5907] = 2,
    ACTIONS(244), 1,
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
  [5929] = 11,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(321), 1,
      anon_sym_if,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    STATE(203), 1,
      sym_for_cond,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5969] = 2,
    ACTIONS(204), 1,
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
  [5991] = 2,
    ACTIONS(180), 1,
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
  [6013] = 2,
    ACTIONS(240), 1,
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
  [6035] = 2,
    ACTIONS(144), 1,
      anon_sym_LF,
    ACTIONS(142), 16,
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
  [6057] = 2,
    ACTIONS(192), 1,
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
  [6079] = 2,
    ACTIONS(224), 1,
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
  [6101] = 2,
    ACTIONS(188), 1,
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
  [6123] = 2,
    ACTIONS(184), 1,
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
  [6145] = 2,
    ACTIONS(212), 1,
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
  [6167] = 2,
    ACTIONS(152), 1,
      anon_sym_LF,
    ACTIONS(150), 16,
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
  [6189] = 2,
    ACTIONS(164), 1,
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
  [6211] = 2,
    ACTIONS(176), 1,
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
  [6233] = 2,
    ACTIONS(148), 1,
      anon_sym_LF,
    ACTIONS(146), 16,
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
  [6255] = 9,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(341), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6290] = 10,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(297), 1,
      anon_sym_EQ,
    ACTIONS(299), 1,
      anon_sym_COLON,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6327] = 9,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(343), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6362] = 2,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(272), 14,
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
  [6382] = 8,
    ACTIONS(254), 1,
      anon_sym_QMARK,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(353), 1,
      anon_sym_AMP_AMP,
    ACTIONS(355), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(345), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(347), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(349), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [6414] = 7,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(353), 1,
      anon_sym_AMP_AMP,
    ACTIONS(276), 2,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
    ACTIONS(345), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(347), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(349), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [6444] = 6,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(345), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(276), 3,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(347), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(349), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [6472] = 5,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(345), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(347), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(349), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(276), 5,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6498] = 4,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(345), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(347), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(276), 9,
      anon_sym_QMARK,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6522] = 2,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(276), 14,
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
  [6542] = 3,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(347), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(276), 11,
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
  [6564] = 9,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(357), 1,
      anon_sym_COLON,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6598] = 9,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6632] = 9,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(361), 1,
      anon_sym_COLON,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6666] = 9,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6700] = 9,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(365), 1,
      anon_sym_EQ_GT,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6734] = 9,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(367), 1,
      anon_sym_EQ_GT,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6768] = 2,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(47), 14,
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
  [6788] = 8,
    ACTIONS(353), 1,
      anon_sym_AMP_AMP,
    ACTIONS(355), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(371), 1,
      anon_sym_QMARK,
    ACTIONS(345), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(347), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(349), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [6820] = 9,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6854] = 9,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(375), 1,
      anon_sym_COLON,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6888] = 9,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6922] = 9,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(301), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6956] = 2,
    ACTIONS(383), 4,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
    ACTIONS(381), 7,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_numeric_literal,
  [6972] = 2,
    ACTIONS(387), 4,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
    ACTIONS(385), 7,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_numeric_literal,
  [6988] = 3,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(327), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
  [7000] = 4,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(392), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_tuple_repeat1,
  [7013] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    STATE(183), 1,
      aux_sym_source_file_repeat1,
    STATE(218), 1,
      sym_attribute,
  [7026] = 3,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    STATE(184), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(400), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [7037] = 4,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(402), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_tuple_repeat1,
  [7050] = 3,
    ACTIONS(406), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(408), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [7061] = 4,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_source_file_repeat1,
    STATE(218), 1,
      sym_attribute,
  [7074] = 3,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(408), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [7085] = 3,
    ACTIONS(417), 1,
      anon_sym_DQUOTE,
    STATE(182), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(419), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [7096] = 3,
    ACTIONS(421), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(423), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [7107] = 3,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_object_repeat1,
  [7117] = 3,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_object_repeat1,
  [7127] = 3,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_object_repeat1,
  [7137] = 3,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_tuple_repeat1,
  [7147] = 3,
    ACTIONS(321), 1,
      anon_sym_if,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym_for_cond,
  [7157] = 3,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_object_repeat1,
  [7167] = 3,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_tuple_repeat1,
  [7177] = 3,
    ACTIONS(321), 1,
      anon_sym_if,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      sym_for_cond,
  [7187] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_object_repeat1,
  [7197] = 1,
    ACTIONS(426), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7202] = 2,
    ACTIONS(451), 1,
      anon_sym_STAR,
    ACTIONS(453), 1,
      sym_identifier,
  [7209] = 2,
    ACTIONS(455), 1,
      anon_sym_STAR,
    ACTIONS(457), 1,
      sym_identifier,
  [7216] = 2,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(461), 1,
      anon_sym_in,
  [7223] = 1,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [7228] = 1,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
  [7232] = 1,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
  [7236] = 1,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
  [7240] = 1,
    ACTIONS(467), 1,
      sym_identifier,
  [7244] = 1,
    ACTIONS(469), 1,
      sym_identifier,
  [7248] = 1,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
  [7252] = 1,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
  [7256] = 1,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
  [7260] = 1,
    ACTIONS(457), 1,
      sym_identifier,
  [7264] = 1,
    ACTIONS(473), 1,
      anon_sym_in,
  [7268] = 1,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
  [7272] = 1,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
  [7276] = 1,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
  [7280] = 1,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
  [7284] = 1,
    ACTIONS(479), 1,
      anon_sym_EQ,
  [7288] = 1,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
  [7292] = 1,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
  [7296] = 1,
    ACTIONS(483), 1,
      anon_sym_LF,
  [7300] = 1,
    ACTIONS(453), 1,
      sym_identifier,
  [7304] = 1,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 216,
  [SMALL_STATE(6)] = 286,
  [SMALL_STATE(7)] = 329,
  [SMALL_STATE(8)] = 396,
  [SMALL_STATE(9)] = 463,
  [SMALL_STATE(10)] = 506,
  [SMALL_STATE(11)] = 573,
  [SMALL_STATE(12)] = 640,
  [SMALL_STATE(13)] = 704,
  [SMALL_STATE(14)] = 768,
  [SMALL_STATE(15)] = 832,
  [SMALL_STATE(16)] = 896,
  [SMALL_STATE(17)] = 960,
  [SMALL_STATE(18)] = 1024,
  [SMALL_STATE(19)] = 1088,
  [SMALL_STATE(20)] = 1152,
  [SMALL_STATE(21)] = 1216,
  [SMALL_STATE(22)] = 1280,
  [SMALL_STATE(23)] = 1344,
  [SMALL_STATE(24)] = 1408,
  [SMALL_STATE(25)] = 1472,
  [SMALL_STATE(26)] = 1533,
  [SMALL_STATE(27)] = 1594,
  [SMALL_STATE(28)] = 1655,
  [SMALL_STATE(29)] = 1716,
  [SMALL_STATE(30)] = 1777,
  [SMALL_STATE(31)] = 1838,
  [SMALL_STATE(32)] = 1899,
  [SMALL_STATE(33)] = 1960,
  [SMALL_STATE(34)] = 2021,
  [SMALL_STATE(35)] = 2082,
  [SMALL_STATE(36)] = 2121,
  [SMALL_STATE(37)] = 2182,
  [SMALL_STATE(38)] = 2243,
  [SMALL_STATE(39)] = 2304,
  [SMALL_STATE(40)] = 2365,
  [SMALL_STATE(41)] = 2426,
  [SMALL_STATE(42)] = 2487,
  [SMALL_STATE(43)] = 2548,
  [SMALL_STATE(44)] = 2609,
  [SMALL_STATE(45)] = 2670,
  [SMALL_STATE(46)] = 2731,
  [SMALL_STATE(47)] = 2792,
  [SMALL_STATE(48)] = 2853,
  [SMALL_STATE(49)] = 2892,
  [SMALL_STATE(50)] = 2953,
  [SMALL_STATE(51)] = 3014,
  [SMALL_STATE(52)] = 3075,
  [SMALL_STATE(53)] = 3136,
  [SMALL_STATE(54)] = 3197,
  [SMALL_STATE(55)] = 3258,
  [SMALL_STATE(56)] = 3319,
  [SMALL_STATE(57)] = 3380,
  [SMALL_STATE(58)] = 3441,
  [SMALL_STATE(59)] = 3480,
  [SMALL_STATE(60)] = 3541,
  [SMALL_STATE(61)] = 3577,
  [SMALL_STATE(62)] = 3613,
  [SMALL_STATE(63)] = 3649,
  [SMALL_STATE(64)] = 3682,
  [SMALL_STATE(65)] = 3712,
  [SMALL_STATE(66)] = 3742,
  [SMALL_STATE(67)] = 3772,
  [SMALL_STATE(68)] = 3802,
  [SMALL_STATE(69)] = 3832,
  [SMALL_STATE(70)] = 3862,
  [SMALL_STATE(71)] = 3892,
  [SMALL_STATE(72)] = 3922,
  [SMALL_STATE(73)] = 3952,
  [SMALL_STATE(74)] = 3982,
  [SMALL_STATE(75)] = 4012,
  [SMALL_STATE(76)] = 4042,
  [SMALL_STATE(77)] = 4072,
  [SMALL_STATE(78)] = 4102,
  [SMALL_STATE(79)] = 4132,
  [SMALL_STATE(80)] = 4162,
  [SMALL_STATE(81)] = 4192,
  [SMALL_STATE(82)] = 4222,
  [SMALL_STATE(83)] = 4252,
  [SMALL_STATE(84)] = 4282,
  [SMALL_STATE(85)] = 4312,
  [SMALL_STATE(86)] = 4342,
  [SMALL_STATE(87)] = 4372,
  [SMALL_STATE(88)] = 4402,
  [SMALL_STATE(89)] = 4432,
  [SMALL_STATE(90)] = 4462,
  [SMALL_STATE(91)] = 4492,
  [SMALL_STATE(92)] = 4522,
  [SMALL_STATE(93)] = 4552,
  [SMALL_STATE(94)] = 4594,
  [SMALL_STATE(95)] = 4622,
  [SMALL_STATE(96)] = 4650,
  [SMALL_STATE(97)] = 4690,
  [SMALL_STATE(98)] = 4720,
  [SMALL_STATE(99)] = 4748,
  [SMALL_STATE(100)] = 4780,
  [SMALL_STATE(101)] = 4816,
  [SMALL_STATE(102)] = 4854,
  [SMALL_STATE(103)] = 4889,
  [SMALL_STATE(104)] = 4924,
  [SMALL_STATE(105)] = 4970,
  [SMALL_STATE(106)] = 5016,
  [SMALL_STATE(107)] = 5047,
  [SMALL_STATE(108)] = 5078,
  [SMALL_STATE(109)] = 5109,
  [SMALL_STATE(110)] = 5137,
  [SMALL_STATE(111)] = 5165,
  [SMALL_STATE(112)] = 5195,
  [SMALL_STATE(113)] = 5223,
  [SMALL_STATE(114)] = 5266,
  [SMALL_STATE(115)] = 5309,
  [SMALL_STATE(116)] = 5334,
  [SMALL_STATE(117)] = 5377,
  [SMALL_STATE(118)] = 5420,
  [SMALL_STATE(119)] = 5457,
  [SMALL_STATE(120)] = 5497,
  [SMALL_STATE(121)] = 5519,
  [SMALL_STATE(122)] = 5541,
  [SMALL_STATE(123)] = 5581,
  [SMALL_STATE(124)] = 5603,
  [SMALL_STATE(125)] = 5625,
  [SMALL_STATE(126)] = 5665,
  [SMALL_STATE(127)] = 5687,
  [SMALL_STATE(128)] = 5709,
  [SMALL_STATE(129)] = 5731,
  [SMALL_STATE(130)] = 5753,
  [SMALL_STATE(131)] = 5775,
  [SMALL_STATE(132)] = 5797,
  [SMALL_STATE(133)] = 5819,
  [SMALL_STATE(134)] = 5841,
  [SMALL_STATE(135)] = 5863,
  [SMALL_STATE(136)] = 5885,
  [SMALL_STATE(137)] = 5907,
  [SMALL_STATE(138)] = 5929,
  [SMALL_STATE(139)] = 5969,
  [SMALL_STATE(140)] = 5991,
  [SMALL_STATE(141)] = 6013,
  [SMALL_STATE(142)] = 6035,
  [SMALL_STATE(143)] = 6057,
  [SMALL_STATE(144)] = 6079,
  [SMALL_STATE(145)] = 6101,
  [SMALL_STATE(146)] = 6123,
  [SMALL_STATE(147)] = 6145,
  [SMALL_STATE(148)] = 6167,
  [SMALL_STATE(149)] = 6189,
  [SMALL_STATE(150)] = 6211,
  [SMALL_STATE(151)] = 6233,
  [SMALL_STATE(152)] = 6255,
  [SMALL_STATE(153)] = 6290,
  [SMALL_STATE(154)] = 6327,
  [SMALL_STATE(155)] = 6362,
  [SMALL_STATE(156)] = 6382,
  [SMALL_STATE(157)] = 6414,
  [SMALL_STATE(158)] = 6444,
  [SMALL_STATE(159)] = 6472,
  [SMALL_STATE(160)] = 6498,
  [SMALL_STATE(161)] = 6522,
  [SMALL_STATE(162)] = 6542,
  [SMALL_STATE(163)] = 6564,
  [SMALL_STATE(164)] = 6598,
  [SMALL_STATE(165)] = 6632,
  [SMALL_STATE(166)] = 6666,
  [SMALL_STATE(167)] = 6700,
  [SMALL_STATE(168)] = 6734,
  [SMALL_STATE(169)] = 6768,
  [SMALL_STATE(170)] = 6788,
  [SMALL_STATE(171)] = 6820,
  [SMALL_STATE(172)] = 6854,
  [SMALL_STATE(173)] = 6888,
  [SMALL_STATE(174)] = 6922,
  [SMALL_STATE(175)] = 6956,
  [SMALL_STATE(176)] = 6972,
  [SMALL_STATE(177)] = 6988,
  [SMALL_STATE(178)] = 7000,
  [SMALL_STATE(179)] = 7013,
  [SMALL_STATE(180)] = 7026,
  [SMALL_STATE(181)] = 7037,
  [SMALL_STATE(182)] = 7050,
  [SMALL_STATE(183)] = 7061,
  [SMALL_STATE(184)] = 7074,
  [SMALL_STATE(185)] = 7085,
  [SMALL_STATE(186)] = 7096,
  [SMALL_STATE(187)] = 7107,
  [SMALL_STATE(188)] = 7117,
  [SMALL_STATE(189)] = 7127,
  [SMALL_STATE(190)] = 7137,
  [SMALL_STATE(191)] = 7147,
  [SMALL_STATE(192)] = 7157,
  [SMALL_STATE(193)] = 7167,
  [SMALL_STATE(194)] = 7177,
  [SMALL_STATE(195)] = 7187,
  [SMALL_STATE(196)] = 7197,
  [SMALL_STATE(197)] = 7202,
  [SMALL_STATE(198)] = 7209,
  [SMALL_STATE(199)] = 7216,
  [SMALL_STATE(200)] = 7223,
  [SMALL_STATE(201)] = 7228,
  [SMALL_STATE(202)] = 7232,
  [SMALL_STATE(203)] = 7236,
  [SMALL_STATE(204)] = 7240,
  [SMALL_STATE(205)] = 7244,
  [SMALL_STATE(206)] = 7248,
  [SMALL_STATE(207)] = 7252,
  [SMALL_STATE(208)] = 7256,
  [SMALL_STATE(209)] = 7260,
  [SMALL_STATE(210)] = 7264,
  [SMALL_STATE(211)] = 7268,
  [SMALL_STATE(212)] = 7272,
  [SMALL_STATE(213)] = 7276,
  [SMALL_STATE(214)] = 7280,
  [SMALL_STATE(215)] = 7284,
  [SMALL_STATE(216)] = 7288,
  [SMALL_STATE(217)] = 7292,
  [SMALL_STATE(218)] = 7296,
  [SMALL_STATE(219)] = 7300,
  [SMALL_STATE(220)] = 7304,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_op, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_splat_full_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_splat_full_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_splat_full_repeat1, 2), SHIFT_REPEAT(54),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_full_repeat1, 2), SHIFT_REPEAT(219),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_full, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_full, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_full, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_full, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_attr, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_attr, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_splat_attr_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_splat_attr_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_attr_repeat1, 2), SHIFT_REPEAT(219),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_attr, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_attr, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_object, 8),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_object, 8),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_object, 7),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_object, 7),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_tuple, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_tuple, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_object, 6),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_object, 6),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_tuple, 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_tuple, 5),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3, .production_id = 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 3, .production_id = 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_full_repeat1, 2), SHIFT_REPEAT(29),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_full_repeat1, 2), SHIFT_REPEAT(209),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_attr_repeat1, 2), SHIFT_REPEAT(209),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(33),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_template_repeat1, 2),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(186),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(16),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [485] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
