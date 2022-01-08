const WHITE_SPACE = /[ \f\t\v]+/;
const NEWLINE = /[\r?\n]/;
const ANYTHING = /[^\r\n]+/;

module.exports = grammar({
  name: "iex",

  extras: ($) => [WHITE_SPACE],

  rules: {
    source: ($) => repeat(choice($.evaluation_block, NEWLINE)),

    evaluation_block: ($) =>
      prec.right(seq(repeat1($.prompt_line), optional(seq($.result, NEWLINE)))),

    prompt_line: ($) => seq($.prompt, choice($.expression, NEWLINE)),

    prompt: ($) =>
      seq(
        choice("iex", "..."),
        optional(seq(token.immediate(/\(\d+\)/))),
        token.immediate(">")
      ),

    digit: ($) => /\d+/,
    expression: ($) => seq(ANYTHING, NEWLINE),
    result: ($) => token(prec(-1, ANYTHING)),
  },
});
