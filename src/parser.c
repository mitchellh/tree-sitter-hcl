#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 210
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  anon_sym_LBRACK = 21,
  anon_sym_RBRACK = 22,
  anon_sym_LBRACE = 23,
  anon_sym_EQ_GT = 24,
  anon_sym_DOT_DOT_DOT = 25,
  anon_sym_RBRACE = 26,
  anon_sym_for = 27,
  anon_sym_COMMA = 28,
  anon_sym_in = 29,
  anon_sym_if = 30,
  anon_sym_DOT = 31,
  sym_numeric_literal = 32,
  sym_identifier = 33,
  sym_null = 34,
  sym_true = 35,
  sym_false = 36,
  sym_source_file = 37,
  sym_attribute = 38,
  sym_expression = 39,
  sym_conditional = 40,
  sym_operation = 41,
  sym_unary_op = 42,
  sym_binary_op = 43,
  sym_expr_term = 44,
  sym_for_expr = 45,
  sym__for_tuple = 46,
  sym__for_object = 47,
  sym_for_intro = 48,
  sym_for_cond = 49,
  sym_literal_value = 50,
  sym_index = 51,
  sym_get_attr = 52,
  sym_splat = 53,
  sym_splat_attr = 54,
  sym_splat_full = 55,
  sym_collection_value = 56,
  sym_tuple = 57,
  sym_object = 58,
  sym_object_elem = 59,
  sym_variable_expr = 60,
  sym_function_call = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_splat_attr_repeat1 = 63,
  aux_sym_splat_full_repeat1 = 64,
  aux_sym_tuple_repeat1 = 65,
  aux_sym_object_repeat1 = 66,
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
      if (eof) ADVANCE(29);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == ']') ADVANCE(53);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(80);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == ']') ADVANCE(53);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(80);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == '|') ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == ']') ADVANCE(53);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(80);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(80);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(80);
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(80);
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(80);
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(80);
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(80);
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(80);
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(80);
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(80);
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(80);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(80);
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(80);
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(80);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(80);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(80);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 28},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 28},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 28},
  [114] = {.lex_state = 28},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 28},
  [129] = {.lex_state = 28},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 28},
  [147] = {.lex_state = 28},
  [148] = {.lex_state = 28},
  [149] = {.lex_state = 28},
  [150] = {.lex_state = 28},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 28},
  [153] = {.lex_state = 28},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 28},
  [162] = {.lex_state = 28},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 28},
  [168] = {.lex_state = 28},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 28},
  [175] = {.lex_state = 28},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 28},
  [186] = {.lex_state = 28},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 28},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 28},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 28},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 28},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 28},
  [206] = {.lex_state = 28},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
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
    [sym_source_file] = STATE(209),
    [sym_attribute] = STATE(207),
    [aux_sym_source_file_repeat1] = STATE(174),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DOT,
    STATE(85), 2,
      sym_splat_attr,
      sym_splat_full,
    ACTIONS(7), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(32), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(9), 20,
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
  [43] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DOT,
    STATE(85), 2,
      sym_splat_attr,
      sym_splat_full,
    ACTIONS(15), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(32), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(17), 20,
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
  [86] = 18,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(60), 1,
      sym_for_intro,
    STATE(147), 1,
      sym_expression,
    STATE(178), 1,
      sym_object_elem,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [152] = 18,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_expr_term,
    STATE(40), 1,
      sym_for_intro,
    STATE(147), 1,
      sym_expression,
    STATE(183), 1,
      sym_object_elem,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [218] = 5,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(39), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(10), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(41), 20,
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
  [257] = 17,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(68), 1,
      sym_for_intro,
    STATE(129), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [320] = 17,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym_expr_term,
    STATE(37), 1,
      sym_for_intro,
    STATE(128), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [383] = 5,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(53), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(6), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(55), 20,
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
  [422] = 5,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_DOT,
    ACTIONS(57), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(10), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(59), 20,
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
  [461] = 16,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_expr_term,
    STATE(147), 1,
      sym_expression,
    STATE(187), 1,
      sym_object_elem,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [521] = 4,
    ACTIONS(73), 1,
      anon_sym_DOT,
    STATE(12), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(69), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(71), 21,
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
  [557] = 16,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_expr_term,
    STATE(147), 1,
      sym_expression,
    STATE(187), 1,
      sym_object_elem,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [617] = 16,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_expr_term,
    STATE(147), 1,
      sym_expression,
    STATE(187), 1,
      sym_object_elem,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [677] = 16,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_expr_term,
    STATE(147), 1,
      sym_expression,
    STATE(187), 1,
      sym_object_elem,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [737] = 4,
    ACTIONS(45), 1,
      anon_sym_DOT,
    STATE(17), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(82), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(84), 21,
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
  [773] = 4,
    ACTIONS(45), 1,
      anon_sym_DOT,
    STATE(12), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(86), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(88), 21,
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
  [809] = 15,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_expr_term,
    STATE(109), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [866] = 15,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_expr_term,
    STATE(114), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [923] = 15,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym_expr_term,
    STATE(114), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [980] = 3,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(98), 21,
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
  [1013] = 15,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_STAR,
    STATE(2), 1,
      sym_expr_term,
    STATE(152), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1070] = 15,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_expr_term,
    STATE(114), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1127] = 15,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym_expr_term,
    STATE(114), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1184] = 15,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_expr_term,
    STATE(113), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1241] = 15,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym_expr_term,
    STATE(114), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1298] = 15,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_expr_term,
    STATE(114), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1355] = 15,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(147), 1,
      sym_expression,
    STATE(187), 1,
      sym_object_elem,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1412] = 15,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_expr_term,
    STATE(114), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1469] = 15,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_STAR,
    STATE(2), 1,
      sym_expr_term,
    STATE(167), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1526] = 15,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym_expr_term,
    STATE(114), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1583] = 2,
    ACTIONS(120), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(122), 21,
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
  [1613] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(94), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1667] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(115), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1721] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(149), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1775] = 2,
    ACTIONS(124), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(126), 21,
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
  [1805] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(143), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1859] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(168), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1913] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(152), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1967] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(164), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2021] = 2,
    ACTIONS(128), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
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
  [2051] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(161), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2105] = 14,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      sym_numeric_literal,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(99), 1,
      sym_expr_term,
    STATE(160), 1,
      sym_expression,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(121), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(123), 2,
      sym_tuple,
      sym_object,
    STATE(165), 2,
      sym_conditional,
      sym_operation,
    STATE(166), 2,
      sym_unary_op,
      sym_binary_op,
    ACTIONS(144), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(119), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2159] = 14,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      sym_numeric_literal,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(99), 1,
      sym_expr_term,
    STATE(158), 1,
      sym_expression,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(121), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(123), 2,
      sym_tuple,
      sym_object,
    STATE(165), 2,
      sym_conditional,
      sym_operation,
    STATE(166), 2,
      sym_unary_op,
      sym_binary_op,
    ACTIONS(144), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(119), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2213] = 14,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      sym_numeric_literal,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(99), 1,
      sym_expr_term,
    STATE(157), 1,
      sym_expression,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(121), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(123), 2,
      sym_tuple,
      sym_object,
    STATE(165), 2,
      sym_conditional,
      sym_operation,
    STATE(166), 2,
      sym_unary_op,
      sym_binary_op,
    ACTIONS(144), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(119), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2267] = 14,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      sym_numeric_literal,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(99), 1,
      sym_expr_term,
    STATE(156), 1,
      sym_expression,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(121), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(123), 2,
      sym_tuple,
      sym_object,
    STATE(165), 2,
      sym_conditional,
      sym_operation,
    STATE(166), 2,
      sym_unary_op,
      sym_binary_op,
    ACTIONS(144), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(119), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2321] = 14,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      sym_numeric_literal,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(99), 1,
      sym_expr_term,
    STATE(155), 1,
      sym_expression,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(121), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(123), 2,
      sym_tuple,
      sym_object,
    STATE(165), 2,
      sym_conditional,
      sym_operation,
    STATE(166), 2,
      sym_unary_op,
      sym_binary_op,
    ACTIONS(144), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(119), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2375] = 14,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      sym_numeric_literal,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(99), 1,
      sym_expr_term,
    STATE(154), 1,
      sym_expression,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(121), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(123), 2,
      sym_tuple,
      sym_object,
    STATE(165), 2,
      sym_conditional,
      sym_operation,
    STATE(166), 2,
      sym_unary_op,
      sym_binary_op,
    ACTIONS(144), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(119), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2429] = 2,
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
  [2459] = 2,
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
  [2489] = 2,
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
  [2519] = 2,
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
  [2549] = 2,
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
  [2579] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(146), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2633] = 2,
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
  [2663] = 2,
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
  [2693] = 2,
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
  [2723] = 14,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      sym_numeric_literal,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(99), 1,
      sym_expr_term,
    STATE(163), 1,
      sym_expression,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(121), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(123), 2,
      sym_tuple,
      sym_object,
    STATE(165), 2,
      sym_conditional,
      sym_operation,
    STATE(166), 2,
      sym_unary_op,
      sym_binary_op,
    ACTIONS(144), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(119), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2777] = 2,
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
  [2807] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(151), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2861] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(98), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2915] = 2,
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
  [2945] = 2,
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
  [2975] = 2,
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
  [3005] = 2,
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
  [3035] = 2,
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
  [3065] = 2,
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
  [3095] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(127), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3149] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(162), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3203] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(153), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3257] = 2,
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
  [3287] = 2,
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
  [3317] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(167), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3371] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(91), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3425] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(114), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3479] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(148), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3533] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(93), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3587] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(95), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3641] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(112), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3695] = 2,
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
  [3725] = 2,
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
  [3755] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(150), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3809] = 2,
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
  [3839] = 2,
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
  [3869] = 2,
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
  [3899] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(96), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3953] = 2,
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
  [3983] = 14,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      sym_numeric_literal,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(99), 1,
      sym_expr_term,
    STATE(159), 1,
      sym_expression,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(121), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(123), 2,
      sym_tuple,
      sym_object,
    STATE(165), 2,
      sym_conditional,
      sym_operation,
    STATE(166), 2,
      sym_unary_op,
      sym_binary_op,
    ACTIONS(144), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(119), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [4037] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expr_term,
    STATE(97), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    STATE(90), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(92), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [4091] = 2,
    ACTIONS(238), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(240), 20,
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
  [4119] = 3,
    ACTIONS(242), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(244), 17,
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
  [4149] = 2,
    ACTIONS(7), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 20,
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
  [4177] = 2,
    ACTIONS(242), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(244), 20,
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
  [4205] = 4,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(242), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(244), 15,
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
  [4237] = 6,
    ACTIONS(242), 1,
      anon_sym_EQ,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(244), 13,
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
  [4273] = 7,
    ACTIONS(242), 1,
      anon_sym_EQ,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(244), 11,
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
  [4311] = 8,
    ACTIONS(242), 1,
      anon_sym_EQ,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(244), 10,
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
  [4351] = 9,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(258), 1,
      anon_sym_EQ,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(260), 9,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_if,
  [4393] = 6,
    ACTIONS(9), 1,
      anon_sym_LF,
    ACTIONS(264), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_DOT,
    STATE(139), 2,
      sym_splat_attr,
      sym_splat_full,
    STATE(137), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(7), 14,
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
  [4428] = 6,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(264), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_DOT,
    STATE(139), 2,
      sym_splat_attr,
      sym_splat_full,
    STATE(137), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(15), 14,
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
  [4463] = 5,
    ACTIONS(41), 1,
      anon_sym_LF,
    ACTIONS(268), 1,
      anon_sym_LBRACK,
    ACTIONS(270), 1,
      anon_sym_DOT,
    STATE(102), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(39), 14,
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
  [4494] = 5,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_DOT,
    STATE(102), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(57), 14,
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
  [4525] = 5,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(268), 1,
      anon_sym_LBRACK,
    ACTIONS(270), 1,
      anon_sym_DOT,
    STATE(101), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(53), 14,
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
  [4556] = 4,
    ACTIONS(71), 1,
      anon_sym_LF,
    ACTIONS(278), 1,
      anon_sym_DOT,
    STATE(104), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(69), 15,
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
  [4584] = 4,
    ACTIONS(84), 1,
      anon_sym_LF,
    ACTIONS(270), 1,
      anon_sym_DOT,
    STATE(107), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(82), 15,
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
  [4612] = 5,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_EQ,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(96), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(98), 14,
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
  [4642] = 4,
    ACTIONS(88), 1,
      anon_sym_LF,
    ACTIONS(270), 1,
      anon_sym_DOT,
    STATE(104), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(86), 15,
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
  [4670] = 10,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_numeric_literal,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(3), 1,
      sym_expr_term,
    STATE(52), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(67), 2,
      sym_tuple,
      sym_object,
    ACTIONS(35), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(87), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [4709] = 12,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(289), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4752] = 10,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      sym_numeric_literal,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(100), 1,
      sym_expr_term,
    STATE(121), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(123), 2,
      sym_tuple,
      sym_object,
    ACTIONS(144), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(119), 5,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [4791] = 3,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 16,
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
  [4816] = 12,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(295), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 1,
      anon_sym_if,
    STATE(192), 1,
      sym_for_cond,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4859] = 12,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(303), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4902] = 9,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(307), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
  [4939] = 12,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(299), 1,
      anon_sym_if,
    ACTIONS(309), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_for_cond,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4982] = 2,
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
  [5004] = 2,
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
  [5026] = 2,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(124), 16,
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
  [5048] = 2,
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
  [5070] = 2,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(128), 16,
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
  [5092] = 2,
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
  [5114] = 2,
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
  [5136] = 2,
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
  [5158] = 2,
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
  [5180] = 2,
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
  [5202] = 2,
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
  [5224] = 11,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(299), 1,
      anon_sym_if,
    ACTIONS(313), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      sym_for_cond,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5264] = 11,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5304] = 11,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5344] = 2,
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
  [5366] = 2,
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
  [5388] = 2,
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
  [5410] = 2,
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
  [5432] = 2,
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
  [5454] = 2,
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
  [5476] = 2,
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
  [5498] = 2,
    ACTIONS(122), 1,
      anon_sym_LF,
    ACTIONS(120), 16,
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
  [5520] = 2,
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
  [5542] = 2,
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
  [5564] = 2,
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
  [5586] = 2,
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
  [5608] = 2,
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
  [5630] = 11,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(299), 1,
      anon_sym_if,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      sym_for_cond,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5670] = 2,
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
  [5692] = 2,
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
  [5714] = 9,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(325), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5749] = 10,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(281), 1,
      anon_sym_EQ,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5786] = 9,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5821] = 9,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(329), 1,
      anon_sym_COLON,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5855] = 9,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5889] = 9,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(333), 1,
      anon_sym_EQ_GT,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5923] = 9,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5957] = 9,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(337), 1,
      anon_sym_COLON,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5991] = 7,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(347), 1,
      anon_sym_AMP_AMP,
    ACTIONS(242), 2,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(345), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(341), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(343), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [6021] = 6,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(345), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(242), 3,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(341), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(343), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [6049] = 5,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(341), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(343), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(242), 5,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6075] = 4,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(341), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(242), 9,
      anon_sym_QMARK,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6099] = 2,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(242), 14,
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
  [6119] = 8,
    ACTIONS(258), 1,
      anon_sym_QMARK,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(347), 1,
      anon_sym_AMP_AMP,
    ACTIONS(349), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(345), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(341), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(343), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [6151] = 3,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(341), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(242), 11,
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
  [6173] = 9,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(351), 1,
      anon_sym_COLON,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6207] = 9,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6241] = 8,
    ACTIONS(347), 1,
      anon_sym_AMP_AMP,
    ACTIONS(349), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(355), 1,
      anon_sym_LF,
    ACTIONS(357), 1,
      anon_sym_QMARK,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(345), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(341), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(343), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [6273] = 9,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(359), 1,
      anon_sym_EQ_GT,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6307] = 2,
    ACTIONS(9), 1,
      anon_sym_LF,
    ACTIONS(7), 14,
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
  [6327] = 2,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(238), 14,
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
  [6347] = 9,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6381] = 9,
    ACTIONS(256), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(363), 1,
      anon_sym_COLON,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(250), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6415] = 2,
    ACTIONS(367), 4,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
    ACTIONS(365), 6,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_numeric_literal,
  [6430] = 2,
    ACTIONS(371), 4,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
    ACTIONS(369), 6,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_numeric_literal,
  [6445] = 3,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(307), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
  [6457] = 4,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    ACTIONS(376), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym_tuple_repeat1,
  [6470] = 4,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    ACTIONS(380), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym_tuple_repeat1,
  [6483] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    STATE(175), 1,
      aux_sym_source_file_repeat1,
    STATE(207), 1,
      sym_attribute,
  [6496] = 4,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 1,
      sym_identifier,
    STATE(175), 1,
      aux_sym_source_file_repeat1,
    STATE(207), 1,
      sym_attribute,
  [6509] = 3,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym_tuple_repeat1,
  [6519] = 3,
    ACTIONS(299), 1,
      anon_sym_if,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      sym_for_cond,
  [6529] = 3,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_object_repeat1,
  [6539] = 3,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_object_repeat1,
  [6549] = 3,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym_tuple_repeat1,
  [6559] = 3,
    ACTIONS(299), 1,
      anon_sym_if,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      sym_for_cond,
  [6569] = 3,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_object_repeat1,
  [6579] = 3,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_object_repeat1,
  [6589] = 3,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_object_repeat1,
  [6599] = 1,
    ACTIONS(386), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [6604] = 2,
    ACTIONS(416), 1,
      anon_sym_STAR,
    ACTIONS(418), 1,
      sym_identifier,
  [6611] = 1,
    ACTIONS(411), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6616] = 2,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_in,
  [6623] = 2,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(426), 1,
      sym_identifier,
  [6630] = 1,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
  [6634] = 1,
    ACTIONS(428), 1,
      anon_sym_RBRACK,
  [6638] = 1,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
  [6642] = 1,
    ACTIONS(430), 1,
      anon_sym_in,
  [6646] = 1,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
  [6650] = 1,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
  [6654] = 1,
    ACTIONS(432), 1,
      anon_sym_RBRACK,
  [6658] = 1,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
  [6662] = 1,
    ACTIONS(426), 1,
      sym_identifier,
  [6666] = 1,
    ACTIONS(434), 1,
      anon_sym_RBRACK,
  [6670] = 1,
    ACTIONS(436), 1,
      anon_sym_EQ,
  [6674] = 1,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
  [6678] = 1,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
  [6682] = 1,
    ACTIONS(440), 1,
      sym_identifier,
  [6686] = 1,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
  [6690] = 1,
    ACTIONS(444), 1,
      sym_identifier,
  [6694] = 1,
    ACTIONS(418), 1,
      sym_identifier,
  [6698] = 1,
    ACTIONS(446), 1,
      anon_sym_LF,
  [6702] = 1,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
  [6706] = 1,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 152,
  [SMALL_STATE(6)] = 218,
  [SMALL_STATE(7)] = 257,
  [SMALL_STATE(8)] = 320,
  [SMALL_STATE(9)] = 383,
  [SMALL_STATE(10)] = 422,
  [SMALL_STATE(11)] = 461,
  [SMALL_STATE(12)] = 521,
  [SMALL_STATE(13)] = 557,
  [SMALL_STATE(14)] = 617,
  [SMALL_STATE(15)] = 677,
  [SMALL_STATE(16)] = 737,
  [SMALL_STATE(17)] = 773,
  [SMALL_STATE(18)] = 809,
  [SMALL_STATE(19)] = 866,
  [SMALL_STATE(20)] = 923,
  [SMALL_STATE(21)] = 980,
  [SMALL_STATE(22)] = 1013,
  [SMALL_STATE(23)] = 1070,
  [SMALL_STATE(24)] = 1127,
  [SMALL_STATE(25)] = 1184,
  [SMALL_STATE(26)] = 1241,
  [SMALL_STATE(27)] = 1298,
  [SMALL_STATE(28)] = 1355,
  [SMALL_STATE(29)] = 1412,
  [SMALL_STATE(30)] = 1469,
  [SMALL_STATE(31)] = 1526,
  [SMALL_STATE(32)] = 1583,
  [SMALL_STATE(33)] = 1613,
  [SMALL_STATE(34)] = 1667,
  [SMALL_STATE(35)] = 1721,
  [SMALL_STATE(36)] = 1775,
  [SMALL_STATE(37)] = 1805,
  [SMALL_STATE(38)] = 1859,
  [SMALL_STATE(39)] = 1913,
  [SMALL_STATE(40)] = 1967,
  [SMALL_STATE(41)] = 2021,
  [SMALL_STATE(42)] = 2051,
  [SMALL_STATE(43)] = 2105,
  [SMALL_STATE(44)] = 2159,
  [SMALL_STATE(45)] = 2213,
  [SMALL_STATE(46)] = 2267,
  [SMALL_STATE(47)] = 2321,
  [SMALL_STATE(48)] = 2375,
  [SMALL_STATE(49)] = 2429,
  [SMALL_STATE(50)] = 2459,
  [SMALL_STATE(51)] = 2489,
  [SMALL_STATE(52)] = 2519,
  [SMALL_STATE(53)] = 2549,
  [SMALL_STATE(54)] = 2579,
  [SMALL_STATE(55)] = 2633,
  [SMALL_STATE(56)] = 2663,
  [SMALL_STATE(57)] = 2693,
  [SMALL_STATE(58)] = 2723,
  [SMALL_STATE(59)] = 2777,
  [SMALL_STATE(60)] = 2807,
  [SMALL_STATE(61)] = 2861,
  [SMALL_STATE(62)] = 2915,
  [SMALL_STATE(63)] = 2945,
  [SMALL_STATE(64)] = 2975,
  [SMALL_STATE(65)] = 3005,
  [SMALL_STATE(66)] = 3035,
  [SMALL_STATE(67)] = 3065,
  [SMALL_STATE(68)] = 3095,
  [SMALL_STATE(69)] = 3149,
  [SMALL_STATE(70)] = 3203,
  [SMALL_STATE(71)] = 3257,
  [SMALL_STATE(72)] = 3287,
  [SMALL_STATE(73)] = 3317,
  [SMALL_STATE(74)] = 3371,
  [SMALL_STATE(75)] = 3425,
  [SMALL_STATE(76)] = 3479,
  [SMALL_STATE(77)] = 3533,
  [SMALL_STATE(78)] = 3587,
  [SMALL_STATE(79)] = 3641,
  [SMALL_STATE(80)] = 3695,
  [SMALL_STATE(81)] = 3725,
  [SMALL_STATE(82)] = 3755,
  [SMALL_STATE(83)] = 3809,
  [SMALL_STATE(84)] = 3839,
  [SMALL_STATE(85)] = 3869,
  [SMALL_STATE(86)] = 3899,
  [SMALL_STATE(87)] = 3953,
  [SMALL_STATE(88)] = 3983,
  [SMALL_STATE(89)] = 4037,
  [SMALL_STATE(90)] = 4091,
  [SMALL_STATE(91)] = 4119,
  [SMALL_STATE(92)] = 4149,
  [SMALL_STATE(93)] = 4177,
  [SMALL_STATE(94)] = 4205,
  [SMALL_STATE(95)] = 4237,
  [SMALL_STATE(96)] = 4273,
  [SMALL_STATE(97)] = 4311,
  [SMALL_STATE(98)] = 4351,
  [SMALL_STATE(99)] = 4393,
  [SMALL_STATE(100)] = 4428,
  [SMALL_STATE(101)] = 4463,
  [SMALL_STATE(102)] = 4494,
  [SMALL_STATE(103)] = 4525,
  [SMALL_STATE(104)] = 4556,
  [SMALL_STATE(105)] = 4584,
  [SMALL_STATE(106)] = 4612,
  [SMALL_STATE(107)] = 4642,
  [SMALL_STATE(108)] = 4670,
  [SMALL_STATE(109)] = 4709,
  [SMALL_STATE(110)] = 4752,
  [SMALL_STATE(111)] = 4791,
  [SMALL_STATE(112)] = 4816,
  [SMALL_STATE(113)] = 4859,
  [SMALL_STATE(114)] = 4902,
  [SMALL_STATE(115)] = 4939,
  [SMALL_STATE(116)] = 4982,
  [SMALL_STATE(117)] = 5004,
  [SMALL_STATE(118)] = 5026,
  [SMALL_STATE(119)] = 5048,
  [SMALL_STATE(120)] = 5070,
  [SMALL_STATE(121)] = 5092,
  [SMALL_STATE(122)] = 5114,
  [SMALL_STATE(123)] = 5136,
  [SMALL_STATE(124)] = 5158,
  [SMALL_STATE(125)] = 5180,
  [SMALL_STATE(126)] = 5202,
  [SMALL_STATE(127)] = 5224,
  [SMALL_STATE(128)] = 5264,
  [SMALL_STATE(129)] = 5304,
  [SMALL_STATE(130)] = 5344,
  [SMALL_STATE(131)] = 5366,
  [SMALL_STATE(132)] = 5388,
  [SMALL_STATE(133)] = 5410,
  [SMALL_STATE(134)] = 5432,
  [SMALL_STATE(135)] = 5454,
  [SMALL_STATE(136)] = 5476,
  [SMALL_STATE(137)] = 5498,
  [SMALL_STATE(138)] = 5520,
  [SMALL_STATE(139)] = 5542,
  [SMALL_STATE(140)] = 5564,
  [SMALL_STATE(141)] = 5586,
  [SMALL_STATE(142)] = 5608,
  [SMALL_STATE(143)] = 5630,
  [SMALL_STATE(144)] = 5670,
  [SMALL_STATE(145)] = 5692,
  [SMALL_STATE(146)] = 5714,
  [SMALL_STATE(147)] = 5749,
  [SMALL_STATE(148)] = 5786,
  [SMALL_STATE(149)] = 5821,
  [SMALL_STATE(150)] = 5855,
  [SMALL_STATE(151)] = 5889,
  [SMALL_STATE(152)] = 5923,
  [SMALL_STATE(153)] = 5957,
  [SMALL_STATE(154)] = 5991,
  [SMALL_STATE(155)] = 6021,
  [SMALL_STATE(156)] = 6049,
  [SMALL_STATE(157)] = 6075,
  [SMALL_STATE(158)] = 6099,
  [SMALL_STATE(159)] = 6119,
  [SMALL_STATE(160)] = 6151,
  [SMALL_STATE(161)] = 6173,
  [SMALL_STATE(162)] = 6207,
  [SMALL_STATE(163)] = 6241,
  [SMALL_STATE(164)] = 6273,
  [SMALL_STATE(165)] = 6307,
  [SMALL_STATE(166)] = 6327,
  [SMALL_STATE(167)] = 6347,
  [SMALL_STATE(168)] = 6381,
  [SMALL_STATE(169)] = 6415,
  [SMALL_STATE(170)] = 6430,
  [SMALL_STATE(171)] = 6445,
  [SMALL_STATE(172)] = 6457,
  [SMALL_STATE(173)] = 6470,
  [SMALL_STATE(174)] = 6483,
  [SMALL_STATE(175)] = 6496,
  [SMALL_STATE(176)] = 6509,
  [SMALL_STATE(177)] = 6519,
  [SMALL_STATE(178)] = 6529,
  [SMALL_STATE(179)] = 6539,
  [SMALL_STATE(180)] = 6549,
  [SMALL_STATE(181)] = 6559,
  [SMALL_STATE(182)] = 6569,
  [SMALL_STATE(183)] = 6579,
  [SMALL_STATE(184)] = 6589,
  [SMALL_STATE(185)] = 6599,
  [SMALL_STATE(186)] = 6604,
  [SMALL_STATE(187)] = 6611,
  [SMALL_STATE(188)] = 6616,
  [SMALL_STATE(189)] = 6623,
  [SMALL_STATE(190)] = 6630,
  [SMALL_STATE(191)] = 6634,
  [SMALL_STATE(192)] = 6638,
  [SMALL_STATE(193)] = 6642,
  [SMALL_STATE(194)] = 6646,
  [SMALL_STATE(195)] = 6650,
  [SMALL_STATE(196)] = 6654,
  [SMALL_STATE(197)] = 6658,
  [SMALL_STATE(198)] = 6662,
  [SMALL_STATE(199)] = 6666,
  [SMALL_STATE(200)] = 6670,
  [SMALL_STATE(201)] = 6674,
  [SMALL_STATE(202)] = 6678,
  [SMALL_STATE(203)] = 6682,
  [SMALL_STATE(204)] = 6686,
  [SMALL_STATE(205)] = 6690,
  [SMALL_STATE(206)] = 6694,
  [SMALL_STATE(207)] = 6698,
  [SMALL_STATE(208)] = 6702,
  [SMALL_STATE(209)] = 6706,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_op, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_full, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_full, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_full, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_full, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_splat_full_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_splat_full_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_splat_full_repeat1, 2), SHIFT_REPEAT(73),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_full_repeat1, 2), SHIFT_REPEAT(206),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_splat_attr_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_splat_attr_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_attr_repeat1, 2), SHIFT_REPEAT(206),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_attr, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_attr, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_attr, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_attr, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_object, 8),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_object, 8),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_object, 7),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_object, 7),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_object, 6),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_object, 6),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_tuple, 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_tuple, 5),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_tuple, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_tuple, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 3, .production_id = 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_full_repeat1, 2), SHIFT_REPEAT(39),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_full_repeat1, 2), SHIFT_REPEAT(198),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_attr_repeat1, 2), SHIFT_REPEAT(198),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(75),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(28),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [450] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
