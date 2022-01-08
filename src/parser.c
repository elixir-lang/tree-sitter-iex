#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_token1 = 1,
  aux_sym__default_prompt_line_token1 = 2,
  aux_sym__cont_prompt_line_token1 = 3,
  aux_sym_expression_token1 = 4,
  sym_result = 5,
  sym_source = 6,
  sym_evaluation_block = 7,
  sym__default_prompt_line = 8,
  sym__cont_prompt_line = 9,
  sym_expression = 10,
  aux_sym_source_repeat1 = 11,
  aux_sym_evaluation_block_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym__default_prompt_line_token1] = "prompt",
  [aux_sym__cont_prompt_line_token1] = "prompt",
  [aux_sym_expression_token1] = "expression_token1",
  [sym_result] = "result",
  [sym_source] = "source",
  [sym_evaluation_block] = "evaluation_block",
  [sym__default_prompt_line] = "prompt_line",
  [sym__cont_prompt_line] = "prompt_line",
  [sym_expression] = "expression",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_evaluation_block_repeat1] = "evaluation_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [aux_sym__default_prompt_line_token1] = aux_sym__default_prompt_line_token1,
  [aux_sym__cont_prompt_line_token1] = aux_sym__default_prompt_line_token1,
  [aux_sym_expression_token1] = aux_sym_expression_token1,
  [sym_result] = sym_result,
  [sym_source] = sym_source,
  [sym_evaluation_block] = sym_evaluation_block,
  [sym__default_prompt_line] = sym__default_prompt_line,
  [sym__cont_prompt_line] = sym__default_prompt_line,
  [sym_expression] = sym_expression,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_evaluation_block_repeat1] = aux_sym_evaluation_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__default_prompt_line_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__cont_prompt_line_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_result] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_evaluation_block] = {
    .visible = true,
    .named = true,
  },
  [sym__default_prompt_line] = {
    .visible = true,
    .named = true,
  },
  [sym__cont_prompt_line] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_evaluation_block_repeat1] = {
    .visible = false,
    .named = false,
  },
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
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == '>') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'x') ADVANCE(2);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__default_prompt_line_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym__default_prompt_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__cont_prompt_line_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__cont_prompt_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == ')') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == ')') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(29);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'x') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == ')') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == ')') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == 'x') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_result);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_result);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_result);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [aux_sym__default_prompt_line_token1] = ACTIONS(1),
    [aux_sym__cont_prompt_line_token1] = ACTIONS(1),
    [aux_sym_expression_token1] = ACTIONS(1),
    [sym_result] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(14),
    [sym_evaluation_block] = STATE(7),
    [sym__default_prompt_line] = STATE(3),
    [aux_sym_source_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_token1] = ACTIONS(5),
    [aux_sym__default_prompt_line_token1] = ACTIONS(7),
  },
  [2] = {
    [sym_expression] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(9),
    [aux_sym_source_token1] = ACTIONS(11),
    [aux_sym__default_prompt_line_token1] = ACTIONS(11),
    [aux_sym__cont_prompt_line_token1] = ACTIONS(11),
    [aux_sym_expression_token1] = ACTIONS(13),
    [sym_result] = ACTIONS(11),
  },
  [3] = {
    [sym__cont_prompt_line] = STATE(5),
    [aux_sym_evaluation_block_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_source_token1] = ACTIONS(17),
    [aux_sym__default_prompt_line_token1] = ACTIONS(17),
    [aux_sym__cont_prompt_line_token1] = ACTIONS(19),
    [sym_result] = ACTIONS(21),
  },
  [4] = {
    [sym_expression] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym_source_token1] = ACTIONS(25),
    [aux_sym__default_prompt_line_token1] = ACTIONS(25),
    [aux_sym__cont_prompt_line_token1] = ACTIONS(25),
    [aux_sym_expression_token1] = ACTIONS(13),
    [sym_result] = ACTIONS(25),
  },
  [5] = {
    [sym__cont_prompt_line] = STATE(6),
    [aux_sym_evaluation_block_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_source_token1] = ACTIONS(29),
    [aux_sym__default_prompt_line_token1] = ACTIONS(29),
    [aux_sym__cont_prompt_line_token1] = ACTIONS(19),
    [sym_result] = ACTIONS(31),
  },
  [6] = {
    [sym__cont_prompt_line] = STATE(6),
    [aux_sym_evaluation_block_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_source_token1] = ACTIONS(35),
    [aux_sym__default_prompt_line_token1] = ACTIONS(35),
    [aux_sym__cont_prompt_line_token1] = ACTIONS(37),
    [sym_result] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      aux_sym__default_prompt_line_token1,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      aux_sym_source_token1,
    STATE(3), 1,
      sym__default_prompt_line,
    STATE(8), 2,
      sym_evaluation_block,
      aux_sym_source_repeat1,
  [17] = 5,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      aux_sym_source_token1,
    ACTIONS(49), 1,
      aux_sym__default_prompt_line_token1,
    STATE(3), 1,
      sym__default_prompt_line,
    STATE(8), 2,
      sym_evaluation_block,
      aux_sym_source_repeat1,
  [34] = 2,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 4,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
      aux_sym__cont_prompt_line_token1,
      sym_result,
  [44] = 2,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 4,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
      aux_sym__cont_prompt_line_token1,
      sym_result,
  [54] = 2,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 4,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
      aux_sym__cont_prompt_line_token1,
      sym_result,
  [64] = 1,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
  [70] = 1,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
  [76] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [80] = 1,
    ACTIONS(68), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 17,
  [SMALL_STATE(9)] = 34,
  [SMALL_STATE(10)] = 44,
  [SMALL_STATE(11)] = 54,
  [SMALL_STATE(12)] = 64,
  [SMALL_STATE(13)] = 70,
  [SMALL_STATE(14)] = 76,
  [SMALL_STATE(15)] = 80,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_prompt_line, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__default_prompt_line, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluation_block, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_evaluation_block, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cont_prompt_line, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cont_prompt_line, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluation_block, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_evaluation_block, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_evaluation_block_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_evaluation_block_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_evaluation_block_repeat1, 2), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_prompt_line, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__default_prompt_line, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cont_prompt_line, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cont_prompt_line, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluation_block, 3),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_iex(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
