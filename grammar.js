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
			$.large,
			$.string,
		),

		declaration: $ => /[A-Z_\d]+/,

		number: $ => token(prec(1, /\d+/)),

		large: $ => /[A-Z_\d]+/,

		string: $ => /[A-Za-z \-,.'/\\=]+/,

		separator: $ => /:/,

		comment: $ => /[^\[\]\s]+/
	}
});
