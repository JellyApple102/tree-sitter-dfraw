module.exports = grammar({
	name: 'dfraw',

	rules: {
		source_file: $ => repeat($._statement),

		_statement: $ => choice(
			$.bracket_statement,
			$.comment
		),

		bracket_statement: $ => seq(
			'[',
			$.parameter_list,
			']'
		),

		parameter_list: $ => seq(
			$.declaration,
			optional($.separator),
			repeat(seq(
				$._parameter,
				optional($.separator)
			))
		),

		_parameter: $ => choice(
			$.number,
			$.reference,
			$.string,
		),

		declaration: $ => /[A-Z_0-9]+/,

		number: $ => /-?[0-9]+/,

		reference: $ => /(?:VOLUME_mB)|(?:!?[0-9]*[A-Z][A-Z_0-9]*)/,

		string: $ => /[A-Za-z \-,.'/\\=0-9]+/,

		separator: $ => /:/,

		comment: $ => /[^\[\]\s]+/
	}
});
