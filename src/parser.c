#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_token1 = 1,
  anon_sym_iex = 2,
  anon_sym_DOT_DOT_DOT = 3,
  aux_sym_prompt_token1 = 4,
  anon_sym_GT = 5,
  aux_sym_expression_token1 = 6,
  sym_result = 7,
  sym_source = 8,
  sym_evaluation_block = 9,
  sym_prompt_line = 10,
  sym_prompt = 11,
  sym_expression = 12,
  aux_sym_source_repeat1 = 13,
  aux_sym_evaluation_block_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [anon_sym_iex] = "iex",
  [anon_sym_DOT_DOT_DOT] = "...",
  [aux_sym_prompt_token1] = "prompt_token1",
  [anon_sym_GT] = ">",
  [aux_sym_expression_token1] = "expression_token1",
  [sym_result] = "result",
  [sym_source] = "source",
  [sym_evaluation_block] = "evaluation_block",
  [sym_prompt_line] = "prompt_line",
  [sym_prompt] = "prompt",
  [sym_expression] = "expression",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_evaluation_block_repeat1] = "evaluation_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [anon_sym_iex] = anon_sym_iex,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [aux_sym_prompt_token1] = aux_sym_prompt_token1,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_expression_token1] = aux_sym_expression_token1,
  [sym_result] = sym_result,
  [sym_source] = sym_source,
  [sym_evaluation_block] = sym_evaluation_block,
  [sym_prompt_line] = sym_prompt_line,
  [sym_prompt] = sym_prompt,
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
  [anon_sym_iex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_prompt_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
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
  [sym_prompt_line] = {
    .visible = true,
    .named = true,
  },
  [sym_prompt] = {
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
      if (eof) ADVANCE(11);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'x') ADVANCE(14);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 8:
      if (eof) ADVANCE(11);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '?') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '?') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_iex);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_prompt_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == ')') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_result);
      if (lookahead == 'x') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_result);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_result);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [anon_sym_iex] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [aux_sym_prompt_token1] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_result] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(13),
    [sym_evaluation_block] = STATE(2),
    [sym_prompt_line] = STATE(4),
    [sym_prompt] = STATE(9),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_evaluation_block_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_token1] = ACTIONS(5),
    [anon_sym_iex] = ACTIONS(7),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(7),
  },
  [2] = {
    [sym_evaluation_block] = STATE(3),
    [sym_prompt_line] = STATE(4),
    [sym_prompt] = STATE(9),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_evaluation_block_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(9),
    [aux_sym_source_token1] = ACTIONS(11),
    [anon_sym_iex] = ACTIONS(7),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(7),
  },
  [3] = {
    [sym_evaluation_block] = STATE(3),
    [sym_prompt_line] = STATE(4),
    [sym_prompt] = STATE(9),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_evaluation_block_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_source_token1] = ACTIONS(15),
    [anon_sym_iex] = ACTIONS(18),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(18),
  },
  [4] = {
    [sym_prompt_line] = STATE(5),
    [sym_prompt] = STATE(9),
    [aux_sym_evaluation_block_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_source_token1] = ACTIONS(23),
    [anon_sym_iex] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [sym_result] = ACTIONS(27),
  },
  [5] = {
    [sym_prompt_line] = STATE(5),
    [sym_prompt] = STATE(9),
    [aux_sym_evaluation_block_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_source_token1] = ACTIONS(31),
    [anon_sym_iex] = ACTIONS(33),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(33),
    [sym_result] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 4,
      aux_sym_source_token1,
      anon_sym_iex,
      anon_sym_DOT_DOT_DOT,
      sym_result,
  [10] = 2,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 4,
      aux_sym_source_token1,
      anon_sym_iex,
      anon_sym_DOT_DOT_DOT,
      sym_result,
  [20] = 1,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_iex,
      anon_sym_DOT_DOT_DOT,
  [27] = 3,
    ACTIONS(46), 1,
      aux_sym_source_token1,
    ACTIONS(48), 1,
      aux_sym_expression_token1,
    STATE(6), 1,
      sym_expression,
  [37] = 2,
    ACTIONS(50), 1,
      aux_sym_prompt_token1,
    ACTIONS(52), 1,
      anon_sym_GT,
  [44] = 1,
    ACTIONS(54), 2,
      aux_sym_source_token1,
      aux_sym_expression_token1,
  [49] = 1,
    ACTIONS(56), 2,
      aux_sym_source_token1,
      aux_sym_expression_token1,
  [54] = 1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
  [58] = 1,
    ACTIONS(60), 1,
      anon_sym_GT,
  [62] = 1,
    ACTIONS(62), 1,
      aux_sym_source_token1,
  [66] = 1,
    ACTIONS(64), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 10,
  [SMALL_STATE(8)] = 20,
  [SMALL_STATE(9)] = 27,
  [SMALL_STATE(10)] = 37,
  [SMALL_STATE(11)] = 44,
  [SMALL_STATE(12)] = 49,
  [SMALL_STATE(13)] = 54,
  [SMALL_STATE(14)] = 58,
  [SMALL_STATE(15)] = 62,
  [SMALL_STATE(16)] = 66,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluation_block, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_evaluation_block, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_evaluation_block_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_evaluation_block_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_evaluation_block_repeat1, 2), SHIFT_REPEAT(10),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_line, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_line, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluation_block, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 3),
  [58] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
