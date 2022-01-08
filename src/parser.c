#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
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
  anon_sym_POUND = 6,
  sym_source = 7,
  sym_evaluation_block = 8,
  sym__default_prompt_line = 9,
  sym__cont_prompt_line = 10,
  sym_expression = 11,
  sym_result = 12,
  sym_comment = 13,
  aux_sym_source_repeat1 = 14,
  aux_sym_evaluation_block_repeat1 = 15,
  aux_sym_result_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym__default_prompt_line_token1] = "prompt",
  [aux_sym__cont_prompt_line_token1] = "prompt",
  [aux_sym_expression_token1] = "expression_token1",
  [aux_sym_result_token1] = "result_token1",
  [anon_sym_POUND] = "#",
  [sym_source] = "source",
  [sym_evaluation_block] = "evaluation_block",
  [sym__default_prompt_line] = "prompt_line",
  [sym__cont_prompt_line] = "prompt_line",
  [sym_expression] = "expression",
  [sym_result] = "result",
  [sym_comment] = "comment",
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
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_source] = sym_source,
  [sym_evaluation_block] = sym_evaluation_block,
  [sym__default_prompt_line] = sym__default_prompt_line,
  [sym__cont_prompt_line] = sym__default_prompt_line,
  [sym_expression] = sym_expression,
  [sym_result] = sym_result,
  [sym_comment] = sym_comment,
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
  [anon_sym_POUND] = {
    .visible = true,
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
  [sym_comment] = {
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
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == '>') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(6);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(7);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'x') ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(5);
      END_STATE();
    case 12:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__default_prompt_line_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__default_prompt_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__cont_prompt_line_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__cont_prompt_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(35);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '>') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '>') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'x') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(51);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '>') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == '>') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead == 'x') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_result_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 14},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [aux_sym__default_prompt_line_token1] = ACTIONS(1),
    [aux_sym__cont_prompt_line_token1] = ACTIONS(1),
    [aux_sym_expression_token1] = ACTIONS(1),
    [aux_sym_result_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(22),
    [sym_evaluation_block] = STATE(7),
    [sym__default_prompt_line] = STATE(2),
    [aux_sym_source_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_token1] = ACTIONS(5),
    [aux_sym__default_prompt_line_token1] = ACTIONS(7),
  },
  [2] = {
    [sym__cont_prompt_line] = STATE(3),
    [sym_result] = STATE(19),
    [sym_comment] = STATE(16),
    [aux_sym_evaluation_block_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [aux_sym_source_token1] = ACTIONS(11),
    [aux_sym__default_prompt_line_token1] = ACTIONS(11),
    [aux_sym__cont_prompt_line_token1] = ACTIONS(13),
    [aux_sym_result_token1] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
  },
  [3] = {
    [sym__cont_prompt_line] = STATE(6),
    [sym_result] = STATE(18),
    [sym_comment] = STATE(16),
    [aux_sym_evaluation_block_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_source_token1] = ACTIONS(21),
    [aux_sym__default_prompt_line_token1] = ACTIONS(21),
    [aux_sym__cont_prompt_line_token1] = ACTIONS(13),
    [aux_sym_result_token1] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym_expression_token1,
    STATE(9), 1,
      sym_expression,
    ACTIONS(25), 5,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
      aux_sym__cont_prompt_line_token1,
      aux_sym_result_token1,
      anon_sym_POUND,
  [17] = 4,
    ACTIONS(27), 1,
      aux_sym_expression_token1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_expression,
    ACTIONS(31), 5,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
      aux_sym__cont_prompt_line_token1,
      aux_sym_result_token1,
      anon_sym_POUND,
  [34] = 4,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym__cont_prompt_line_token1,
    STATE(6), 2,
      sym__cont_prompt_line,
      aux_sym_evaluation_block_repeat1,
    ACTIONS(35), 4,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
      aux_sym_result_token1,
      anon_sym_POUND,
  [51] = 5,
    ACTIONS(7), 1,
      aux_sym__default_prompt_line_token1,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      aux_sym_source_token1,
    STATE(2), 1,
      sym__default_prompt_line,
    STATE(10), 2,
      sym_evaluation_block,
      aux_sym_source_repeat1,
  [68] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      aux_sym_result_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(46), 2,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
  [85] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 5,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
      aux_sym__cont_prompt_line_token1,
      aux_sym_result_token1,
      anon_sym_POUND,
  [96] = 5,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      aux_sym_source_token1,
    ACTIONS(59), 1,
      aux_sym__default_prompt_line_token1,
    STATE(2), 1,
      sym__default_prompt_line,
    STATE(10), 2,
      sym_evaluation_block,
      aux_sym_source_repeat1,
  [113] = 2,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 5,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
      aux_sym__cont_prompt_line_token1,
      aux_sym_result_token1,
      anon_sym_POUND,
  [124] = 2,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 5,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
      aux_sym__cont_prompt_line_token1,
      aux_sym_result_token1,
      anon_sym_POUND,
  [135] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(48), 1,
      aux_sym_result_token1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_comment,
    ACTIONS(72), 2,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
  [152] = 3,
    ACTIONS(74), 1,
      aux_sym_source_token1,
    STATE(15), 1,
      aux_sym_result_repeat1,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      aux_sym__default_prompt_line_token1,
  [163] = 3,
    ACTIONS(78), 1,
      aux_sym_source_token1,
    STATE(15), 1,
      aux_sym_result_repeat1,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      aux_sym__default_prompt_line_token1,
  [174] = 3,
    ACTIONS(83), 1,
      aux_sym_source_token1,
    STATE(14), 1,
      aux_sym_result_repeat1,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      aux_sym__default_prompt_line_token1,
  [185] = 1,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
  [191] = 1,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
  [197] = 1,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
  [203] = 1,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__default_prompt_line_token1,
  [209] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(48), 1,
      aux_sym_result_token1,
    STATE(20), 1,
      sym_comment,
  [219] = 1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
  [223] = 1,
    ACTIONS(91), 1,
      aux_sym_expression_token1,
  [227] = 1,
    ACTIONS(93), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 17,
  [SMALL_STATE(6)] = 34,
  [SMALL_STATE(7)] = 51,
  [SMALL_STATE(8)] = 68,
  [SMALL_STATE(9)] = 85,
  [SMALL_STATE(10)] = 96,
  [SMALL_STATE(11)] = 113,
  [SMALL_STATE(12)] = 124,
  [SMALL_STATE(13)] = 135,
  [SMALL_STATE(14)] = 152,
  [SMALL_STATE(15)] = 163,
  [SMALL_STATE(16)] = 174,
  [SMALL_STATE(17)] = 185,
  [SMALL_STATE(18)] = 191,
  [SMALL_STATE(19)] = 197,
  [SMALL_STATE(20)] = 203,
  [SMALL_STATE(21)] = 209,
  [SMALL_STATE(22)] = 219,
  [SMALL_STATE(23)] = 223,
  [SMALL_STATE(24)] = 227,
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
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluation_block, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_evaluation_block, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_prompt_line, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__default_prompt_line, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cont_prompt_line, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cont_prompt_line, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_evaluation_block_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_evaluation_block_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_evaluation_block_repeat1, 2), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_prompt_line, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__default_prompt_line, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cont_prompt_line, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cont_prompt_line, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_result_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_result_repeat1, 2), SHIFT_REPEAT(21),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluation_block, 3),
  [89] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
