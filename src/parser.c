#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 15
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
  aux_sym_result_token1 = 5,
  sym_source = 6,
  sym_evaluation_block = 7,
  sym__default_prompt_line = 8,
  sym__cont_prompt_line = 9,
  sym_expression = 10,
  sym_result = 11,
  aux_sym_source_repeat1 = 12,
  aux_sym_evaluation_block_repeat1 = 13,
  aux_sym_result_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym__default_prompt_line_token1] = "prompt",
  [aux_sym__cont_prompt_line_token1] = "prompt",
  [aux_sym_expression_token1] = "expression_token1",
  [aux_sym_result_token1] = "result_token1",
  [sym_source] = "source",
  [sym_evaluation_block] = "evaluation_block",
  [sym__default_prompt_line] = "prompt_line",
  [sym__cont_prompt_line] = "prompt_line",
  [sym_expression] = "expression",
  [sym_result] = "result",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_evaluation_block_repeat1] = "evaluation_block_repeat1",
  [aux_sym_result_repeat1] = "result_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [aux_sym__default_prompt_line_token1] = aux_sym__default_prompt_line_token1,
  [aux_sym__cont_prompt_line_token1] = aux_sym__default_prompt_line_token1,
  [aux_sym_expression_token1] = aux_sym_expression_token1,
  [aux_sym_result_token1] = aux_sym_result_token1,
  [sym_source] = sym_source,
  [sym_evaluation_block] = sym_evaluation_block,
  [sym__default_prompt_line] = sym__default_prompt_line,
  [sym__cont_prompt_line] = sym__default_prompt_line,
  [sym_expression] = sym_expression,
  [sym_result] = sym_result,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_evaluation_block_repeat1] = aux_sym_evaluation_block_repeat1,
  [aux_sym_result_repeat1] = aux_sym_result_repeat1,
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
  [aux_sym_result_token1] = {
    .visible = false,
    .named = false,
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
  [sym_result] = {
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
  [aux_sym_result_repeat1] = {
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
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == '>') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(13);
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
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym__default_prompt_line_token1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__default_prompt_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__cont_prompt_line_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__cont_prompt_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == ')') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == ')') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(30);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'x') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == ')') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == ')') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == 'x') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [aux_sym__default_prompt_line_token1] = ACTIONS(1),
    [aux_sym__cont_prompt_line_token1] = ACTIONS(1),
    [aux_sym_expression_token1] = ACTIONS(1),
    [aux_sym_result_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(17),
    [sym_evaluation_block] = STATE(7),
    [sym__default_prompt_line] = STATE(2),
    [aux_sym_source_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_token1] = ACTIONS(5),
    [aux_sym__default_prompt_line_token1] = ACTIONS(7),
  },
  [2] = {
    [sym__cont_prompt_line] = STATE(3),
    [sym_result] = STATE(15),
    [aux_sym_evaluation_block_repeat1] = STATE(3),
    [aux_sym_result_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(9),
    [aux_sym_source_token1] = ACTIONS(11),
    [aux_sym__default_prompt_line_token1] = ACTIONS(11),
    [aux_sym__cont_prompt_line_token1] = ACTIONS(13),
    [aux_sym_result_token1] = ACTIONS(15),
  },
  [3] = {
    [sym__cont_prompt_line] = STATE(6),
    [sym_result] = STATE(16),
    [aux_sym_evaluation_block_repeat1] = STATE(6),
    [aux_sym_result_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(17),
    [aux_sym_source_token1] = ACTIONS(19),
    [aux_sym__default_prompt_line_token1] = ACTIONS(19),
    [aux_sym__cont_prompt_line_token1] = ACTIONS(13),
    [aux_sym_result_token1] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym_expression_token1,
    STATE(9), 1,
      sym_expression,
    ACTIONS(23), 4,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
      aux_sym__cont_prompt_line_token1,
      aux_sym_result_token1,
  [16] = 4,
    ACTIONS(25), 1,
      aux_sym_expression_token1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_expression,
    ACTIONS(29), 4,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
      aux_sym__cont_prompt_line_token1,
      aux_sym_result_token1,
  [32] = 4,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym__cont_prompt_line_token1,
    STATE(6), 2,
      sym__cont_prompt_line,
      aux_sym_evaluation_block_repeat1,
    ACTIONS(33), 3,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
      aux_sym_result_token1,
  [48] = 5,
    ACTIONS(7), 1,
      aux_sym__default_prompt_line_token1,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      aux_sym_source_token1,
    STATE(2), 1,
      sym__default_prompt_line,
    STATE(8), 2,
      sym_evaluation_block,
      aux_sym_source_repeat1,
  [65] = 5,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      aux_sym_source_token1,
    ACTIONS(47), 1,
      aux_sym__default_prompt_line_token1,
    STATE(2), 1,
      sym__default_prompt_line,
    STATE(8), 2,
      sym_evaluation_block,
      aux_sym_source_repeat1,
  [82] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 4,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
      aux_sym__cont_prompt_line_token1,
      aux_sym_result_token1,
  [92] = 4,
    ACTIONS(15), 1,
      aux_sym_result_token1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_result_repeat1,
    ACTIONS(56), 2,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
  [106] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 4,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
      aux_sym__cont_prompt_line_token1,
      aux_sym_result_token1,
  [116] = 2,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 4,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
      aux_sym__cont_prompt_line_token1,
      aux_sym_result_token1,
  [126] = 4,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      aux_sym_result_token1,
    STATE(13), 1,
      aux_sym_result_repeat1,
    ACTIONS(68), 2,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
  [140] = 2,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 3,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
      aux_sym_result_token1,
  [149] = 1,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
  [155] = 1,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
  [161] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [165] = 1,
    ACTIONS(77), 1,
      aux_sym_source_token1,
  [169] = 1,
    ACTIONS(79), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 16,
  [SMALL_STATE(6)] = 32,
  [SMALL_STATE(7)] = 48,
  [SMALL_STATE(8)] = 65,
  [SMALL_STATE(9)] = 82,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 106,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 126,
  [SMALL_STATE(14)] = 140,
  [SMALL_STATE(15)] = 149,
  [SMALL_STATE(16)] = 155,
  [SMALL_STATE(17)] = 161,
  [SMALL_STATE(18)] = 165,
  [SMALL_STATE(19)] = 169,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluation_block, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_evaluation_block, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluation_block, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_evaluation_block, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_prompt_line, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__default_prompt_line, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cont_prompt_line, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cont_prompt_line, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_evaluation_block_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_evaluation_block_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_evaluation_block_repeat1, 2), SHIFT_REPEAT(5),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_prompt_line, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__default_prompt_line, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cont_prompt_line, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cont_prompt_line, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_result_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_result_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_result_repeat1, 2), SHIFT_REPEAT(19),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluation_block, 3),
  [75] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
