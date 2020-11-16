#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym__projectName = 1,
  sym__taskOpen = 2,
  sym__tagName = 3,
  sym__valueOpen = 4,
  sym__valueClose = 5,
  sym__value = 6,
  sym__indent = 7,
  sym_text = 8,
  sym__whitespace = 9,
  sym__newline = 10,
  sym_taskpaperDocument = 11,
  sym__item = 12,
  sym_project = 13,
  sym_task = 14,
  sym_tag = 15,
  sym__content = 16,
  aux_sym_taskpaperDocument_repeat1 = 17,
  aux_sym__item_repeat1 = 18,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__projectName] = "_projectName",
  [sym__taskOpen] = "_taskOpen",
  [sym__tagName] = "_tagName",
  [sym__valueOpen] = "_valueOpen",
  [sym__valueClose] = "_valueClose",
  [sym__value] = "_value",
  [sym__indent] = "_indent",
  [sym_text] = "text",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym_taskpaperDocument] = "taskpaperDocument",
  [sym__item] = "_item",
  [sym_project] = "project",
  [sym_task] = "task",
  [sym_tag] = "tag",
  [sym__content] = "_content",
  [aux_sym_taskpaperDocument_repeat1] = "taskpaperDocument_repeat1",
  [aux_sym__item_repeat1] = "_item_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__projectName] = sym__projectName,
  [sym__taskOpen] = sym__taskOpen,
  [sym__tagName] = sym__tagName,
  [sym__valueOpen] = sym__valueOpen,
  [sym__valueClose] = sym__valueClose,
  [sym__value] = sym__value,
  [sym__indent] = sym__indent,
  [sym_text] = sym_text,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym_taskpaperDocument] = sym_taskpaperDocument,
  [sym__item] = sym__item,
  [sym_project] = sym_project,
  [sym_task] = sym_task,
  [sym_tag] = sym_tag,
  [sym__content] = sym__content,
  [aux_sym_taskpaperDocument_repeat1] = aux_sym_taskpaperDocument_repeat1,
  [aux_sym__item_repeat1] = aux_sym__item_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__projectName] = {
    .visible = false,
    .named = true,
  },
  [sym__taskOpen] = {
    .visible = false,
    .named = true,
  },
  [sym__tagName] = {
    .visible = false,
    .named = true,
  },
  [sym__valueOpen] = {
    .visible = false,
    .named = true,
  },
  [sym__valueClose] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_taskpaperDocument] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym_task] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__content] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_taskpaperDocument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__item_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(20);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '[') ADVANCE(2);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(6);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\t') ADVANCE(20);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__projectName);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__taskOpen);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__taskOpen);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__tagName);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__valueOpen);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__valueClose);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__value);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__indent);
      if (lookahead == '\t') ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__taskOpen] = ACTIONS(1),
    [sym__tagName] = ACTIONS(1),
    [sym__valueOpen] = ACTIONS(1),
    [sym__valueClose] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_taskpaperDocument] = STATE(18),
    [sym__item] = STATE(2),
    [sym_project] = STATE(11),
    [sym_task] = STATE(11),
    [aux_sym_taskpaperDocument_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__projectName] = ACTIONS(5),
    [sym__taskOpen] = ACTIONS(7),
    [sym__indent] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      sym__projectName,
    ACTIONS(7), 1,
      sym__taskOpen,
    ACTIONS(9), 1,
      sym__indent,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym__item,
      aux_sym_taskpaperDocument_repeat1,
    STATE(11), 2,
      sym_project,
      sym_task,
  [21] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym__projectName,
    ACTIONS(18), 1,
      sym__taskOpen,
    ACTIONS(21), 1,
      sym__indent,
    STATE(3), 2,
      sym__item,
      aux_sym_taskpaperDocument_repeat1,
    STATE(11), 2,
      sym_project,
      sym_task,
  [42] = 4,
    ACTIONS(24), 1,
      sym__tagName,
    ACTIONS(26), 1,
      sym__whitespace,
    ACTIONS(28), 1,
      sym__newline,
    STATE(16), 1,
      sym_tag,
  [55] = 3,
    ACTIONS(7), 1,
      sym__taskOpen,
    ACTIONS(30), 1,
      sym__projectName,
    STATE(12), 2,
      sym_project,
      sym_task,
  [66] = 2,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(34), 2,
      sym__projectName,
      sym__taskOpen,
  [75] = 3,
    ACTIONS(24), 1,
      sym__tagName,
    ACTIONS(36), 1,
      sym_text,
    STATE(17), 2,
      sym_tag,
      sym__content,
  [86] = 2,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(40), 2,
      sym__projectName,
      sym__taskOpen,
  [95] = 2,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(44), 2,
      sym__projectName,
      sym__taskOpen,
  [104] = 3,
    ACTIONS(46), 1,
      sym__whitespace,
    ACTIONS(49), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym__item_repeat1,
  [114] = 3,
    ACTIONS(51), 1,
      sym__whitespace,
    ACTIONS(53), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym__item_repeat1,
  [124] = 3,
    ACTIONS(55), 1,
      sym__whitespace,
    ACTIONS(57), 1,
      sym__newline,
    STATE(14), 1,
      aux_sym__item_repeat1,
  [134] = 3,
    ACTIONS(57), 1,
      sym__newline,
    ACTIONS(59), 1,
      sym__whitespace,
    STATE(10), 1,
      aux_sym__item_repeat1,
  [144] = 3,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym__item_repeat1,
  [154] = 2,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__newline,
  [161] = 2,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
  [168] = 2,
    ACTIONS(71), 1,
      sym__whitespace,
    ACTIONS(73), 1,
      sym__newline,
  [175] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [179] = 1,
    ACTIONS(77), 1,
      sym__value,
  [183] = 1,
    ACTIONS(79), 1,
      sym__valueClose,
  [187] = 1,
    ACTIONS(81), 1,
      sym__whitespace,
  [191] = 1,
    ACTIONS(83), 1,
      sym__valueOpen,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 75,
  [SMALL_STATE(8)] = 86,
  [SMALL_STATE(9)] = 95,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 114,
  [SMALL_STATE(12)] = 124,
  [SMALL_STATE(13)] = 134,
  [SMALL_STATE(14)] = 144,
  [SMALL_STATE(15)] = 154,
  [SMALL_STATE(16)] = 161,
  [SMALL_STATE(17)] = 168,
  [SMALL_STATE(18)] = 175,
  [SMALL_STATE(19)] = 179,
  [SMALL_STATE(20)] = 183,
  [SMALL_STATE(21)] = 187,
  [SMALL_STATE(22)] = 191,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taskpaperDocument, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taskpaperDocument, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_taskpaperDocument_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_taskpaperDocument_repeat1, 2), SHIFT_REPEAT(4),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_taskpaperDocument_repeat1, 2), SHIFT_REPEAT(21),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_taskpaperDocument_repeat1, 2), SHIFT_REPEAT(5),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 4),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 4),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 3),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2), SHIFT_REPEAT(10),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3),
  [75] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_taskpaper(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
