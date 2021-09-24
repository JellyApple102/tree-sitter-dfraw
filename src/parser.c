#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  aux_sym_declaration_token1 = 3,
  sym_number = 4,
  sym_string = 5,
  sym_separator = 6,
  sym_comment = 7,
  sym_source_file = 8,
  sym__statement = 9,
  sym_bracket_statement = 10,
  sym_parameter_list = 11,
  sym__parameter = 12,
  sym_declaration = 13,
  sym_large = 14,
  aux_sym_source_file_repeat1 = 15,
  aux_sym_parameter_list_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_declaration_token1] = "declaration_token1",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_separator] = "separator",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_bracket_statement] = "bracket_statement",
  [sym_parameter_list] = "parameter_list",
  [sym__parameter] = "_parameter",
  [sym_declaration] = "declaration",
  [sym_large] = "large",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_declaration_token1] = aux_sym_declaration_token1,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_separator] = sym_separator,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_bracket_statement] = sym_bracket_statement,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameter] = sym__parameter,
  [sym_declaration] = sym_declaration,
  [sym_large] = sym_large,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [aux_sym_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_bracket_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_large] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
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
      if (eof) ADVANCE(4);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == ']') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ']') ADVANCE(6);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(8);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(13);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ' ') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(13);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_declaration_token1] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_separator] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(15),
    [sym__statement] = STATE(7),
    [sym_bracket_statement] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      anon_sym_RBRACK,
    ACTIONS(11), 1,
      aux_sym_declaration_token1,
    ACTIONS(15), 1,
      sym_separator,
    STATE(4), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(13), 2,
      sym_number,
      sym_string,
    STATE(11), 2,
      sym__parameter,
      sym_large,
  [21] = 5,
    ACTIONS(11), 1,
      aux_sym_declaration_token1,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(13), 2,
      sym_number,
      sym_string,
    STATE(11), 2,
      sym__parameter,
      sym_large,
  [39] = 5,
    ACTIONS(11), 1,
      aux_sym_declaration_token1,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(13), 2,
      sym_number,
      sym_string,
    STATE(11), 2,
      sym__parameter,
      sym_large,
  [57] = 5,
    ACTIONS(11), 1,
      aux_sym_declaration_token1,
    ACTIONS(19), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(13), 2,
      sym_number,
      sym_string,
    STATE(11), 2,
      sym__parameter,
      sym_large,
  [75] = 5,
    ACTIONS(21), 1,
      anon_sym_RBRACK,
    ACTIONS(23), 1,
      aux_sym_declaration_token1,
    STATE(6), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(26), 2,
      sym_number,
      sym_string,
    STATE(11), 2,
      sym__parameter,
      sym_large,
  [93] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_comment,
    STATE(8), 3,
      sym__statement,
      sym_bracket_statement,
      aux_sym_source_file_repeat1,
  [108] = 4,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      sym_comment,
    STATE(8), 3,
      sym__statement,
      sym_bracket_statement,
      aux_sym_source_file_repeat1,
  [123] = 1,
    ACTIONS(41), 5,
      anon_sym_RBRACK,
      aux_sym_declaration_token1,
      sym_number,
      sym_string,
      sym_separator,
  [131] = 1,
    ACTIONS(43), 5,
      anon_sym_RBRACK,
      aux_sym_declaration_token1,
      sym_number,
      sym_string,
      sym_separator,
  [139] = 2,
    ACTIONS(47), 1,
      sym_separator,
    ACTIONS(45), 4,
      anon_sym_RBRACK,
      aux_sym_declaration_token1,
      sym_number,
      sym_string,
  [149] = 1,
    ACTIONS(21), 4,
      anon_sym_RBRACK,
      aux_sym_declaration_token1,
      sym_number,
      sym_string,
  [156] = 3,
    ACTIONS(49), 1,
      aux_sym_declaration_token1,
    STATE(2), 1,
      sym_declaration,
    STATE(16), 1,
      sym_parameter_list,
  [166] = 1,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
  [172] = 1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
  [176] = 1,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 39,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 75,
  [SMALL_STATE(7)] = 93,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 131,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 149,
  [SMALL_STATE(13)] = 156,
  [SMALL_STATE(14)] = 166,
  [SMALL_STATE(15)] = 172,
  [SMALL_STATE(16)] = 176,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_large, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_statement, 3),
  [53] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dfraw(void) {
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
