const
  PREC = {
    for_expr: 5,
    object_elem: 2,

    unary: 7,
    multiplicative: 6,
    additive: 5,
    comparative: 4,
    equal: 3,
    and: 2,
    or: 1,
  },

  newline = '\n',
  terminator = choice(newline),

  unicodeLetter = /\p{L}/,
  unicodeDigit = /[0-9]/,
  unicodeChar = /./,
  unicodeValue = unicodeChar,
  letter = choice(unicodeLetter, '_');


module.exports = grammar({
  name: 'hcl',

  externals: $ => [
    $.heredoc,
  ],

  extras: $ => [
    $.comment,
    /\s/
  ],

  rules: {
    source_file: $ => $.body,

    // Body         = (Attribute | Block | OneLineBlock)*;
    body: $ => repeat1(choice(
      $.attribute,
      $.block,
      $.one_line_block,
    )),

    // Block = Identifier (StringLit|Identifier)* "{" Newline Body "}" Newline;
    block: $ => seq(
      $.identifier,
      repeat(choice(
        $.string_literal,
        $.identifier,
      )),
      '{',
      terminator,
      optional($.body),
      '}',
      terminator,
    ),

    // OneLineBlock = Identifier (StringLit|Identifier)* "{" (Identifier "=" Expression)? "}" Newline;
    one_line_block: $ => seq(
      $.identifier,
      repeat(choice(
        $.string_literal,
        $.identifier,
      )),
      '{',
      optional(seq(
        $.identifier,
        '=',
        $.expression,
      )),
      '}',
      terminator,
    ),

    // Attribute    = Identifier "=" Expression Newline;
    attribute:  $ => seq(
      $.identifier,
      '=',
      $.expression,
      terminator,
    ),

    // Expression = (
    //    ExprTerm |
    //    Operation |
    //    Conditional
    // );
    expression: $ => choice(
      $.expr_term,
      $.operation,
      $.conditional,
    ),

    // Conditional = Expression "?" Expression ":" Expression;
    conditional: $ => prec.left(seq(
      $.expression,
      '?',
      $.expression,
      ':',
      $.expression,
    )),

    // Operation = unaryOp | binaryOp;
    // unaryOp = ("-" | "!") ExprTerm;
    // binaryOp = ExprTerm binaryOperator ExprTerm;
    // binaryOperator = compareOperator | arithmeticOperator | logicOperator;
    // compareOperator = "==" | "!=" | "<" | ">" | "<=" | ">=";
    // arithmeticOperator = "+" | "-" | "*" | "/" | "%";
    // logicOperator = "&&" | "||" | "!";
    operation: $ => choice($.unary_op, $.binary_op),

    unary_op: $ => prec(PREC.unary, seq(
      choice('-', '!'),
      $.expr_term,
    )),

    binary_op: $ => {
      const table = [
        [PREC.multiplicative, choice('*', '/', '%')],
        [PREC.additive, choice('+', '-')],
        [PREC.comparative, choice('>', '>=', '<', '<=')],
        [PREC.equal, choice('==', '!=')],
        [PREC.and, '&&'],
        [PREC.or, '||'],
      ];

      return choice(...table.map(([precedence, operator]) =>
        prec.left(precedence, seq(
          field('left', $.expression),
          field('operator', operator),
          field('right', $.expression)
        ))
      ));
    },

    // ExprTerm = (
    //    LiteralValue |
    //    CollectionValue |
    //    TemplateExpr |
    //    VariableExpr |
    //    FunctionCall |
    //    ForExpr |
    //    ExprTerm Index |
    //    ExprTerm GetAttr |
    //    ExprTerm Splat |
    //    "(" Expression ")"
    //);
    expr_term: $ => choice(
      $.literal_value,
      $.collection_value,
      $.template_expr,
      $.variable_expr,
      $.function_call,
      $.for_expr,
      seq($.expr_term, $.index),
      seq($.expr_term, $.get_attr),
      seq($.expr_term, $.splat),
      seq('(', $.expression, ')'),
    ),

    // TemplateExpr = quotedTemplate | heredocTemplate;
    // quotedTemplate = (as defined in prose above);
    // heredocTemplate = (
    //     ("<<" | "<<-") Identifier Newline
    //     (content as defined in prose above)
    //     Identifier Newline
    // );
    template_expr: $ => choice($.quoted_template, $.heredoc),

    quoted_template: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^"\n\\]+/)),
        $.escape_sequence,
      )),
      '"'
    ),

    string_literal: $ => $.quoted_template,

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/
      )
    )),

    // ForExpr = forTupleExpr | forObjectExpr;
    // forTupleExpr = "[" forIntro Expression forCond? "]";
    // forObjectExpr = "{" forIntro Expression "=>" Expression "..."? forCond? "}";
    // forIntro = "for" Identifier ("," Identifier)? "in" Expression ":";
    // forCond = "if" Expression;
    for_expr: $ => choice($._for_tuple, $._for_object),

    _for_tuple: $ => seq(
      '[',
      $.for_intro,
      $.expression,
      optional($.for_cond),
      ']',
    ),

    _for_object: $ => seq(
      '{',
      $.for_intro,
      $.expression,
      '=>',
      $.expression,
      optional('...'),
      optional($.for_cond),
      '}',
    ),

    for_intro: $ => seq(
      'for',
      $.identifier,
      optional(seq(',', $.identifier)),
      'in',
      $.expression,
      ':',
    ),

    for_cond: $ => seq('if', $.expression),

    // LiteralValue = (
    //  NumericLit |
    //  "true" |
    //  "false" |
    //  "null"
    //);
    literal_value: $ => choice(
      $.numeric_literal,
      $.true,
      $.false,
      $.null,
    ),

    // Index = "[" Expression "]";
    index: $ => seq('[', $.expression, ']'),

    // GetAttr = "." Identifier;
    get_attr: $ => seq('.', $.identifier),

    // Splat = attrSplat | fullSplat;
    // attrSplat = "." "*" GetAttr*;
    // fullSplat = "[" "*" "]" (GetAttr | Index)*;
    splat: $ => choice($.splat_attr, $.splat_full),
    splat_attr: $ => prec.right(seq('.', '*', repeat($.get_attr))),
    splat_full: $ => prec.right(seq('[', '*', ']', repeat(choice($.get_attr, $.index)))),

    // CollectionValue = tuple | object;
    // tuple = "[" (
    // (Expression ("," Expression)* ","?)?
    // ) "]";
    // object = "{" (
    //    (objectelem ("," objectelem)* ","?)?
    // ) "}";
    // objectelem = (Identifier | Expression) ("=" | ":") Expression;
    collection_value: $ => choice(
      $.tuple,
      $.object,
    ),

    tuple: $ => seq(
      '[',
      optional(seq(
        $.expression,
        repeat(seq(',', $.expression)),
        optional(','),
      )),
      ']',
    ),

    object: $ => seq(
      '{',
      optional(seq(
        $.object_elem,
        repeat(seq(
          choice(',', terminator),
          $.object_elem,
        )),
        optional(choice(',', terminator)),
      )),
      '}',
    ),

    object_elem: $ => seq(
      choice($.identifier, $.expression),
      choice('=', ':'),
      $.expression,
    ),

    // VariableExpr = Identifier;
    variable_expr: $ => prec.right($.identifier),

    // FunctionCall = Identifier "(" arguments ")";
    // Arguments = (
    //     () ||
    //    (Expression ("," Expression)* ("," | "...")?)
    // );
    function_call: $ => seq(
      $.identifier,
      '(',
      optional(seq(
        $.expression,
        repeat(seq(',',$.expression)),
        optional(choice(',', '...')),
      )),
      ')',
    ),

    // NumericLit = decimal+ ("." decimal+)? (expmark decimal+)?;
    // decimal    = '0' .. '9';
    // expmark    = ('e' | 'E') ("+" | "-")?;
    numeric_literal: $ => token(seq(
      repeat1(/[0-9]/),
      optional(seq('.', repeat1(/[0-9]/))),
      optional(seq(
        choice('e', 'E'),
        optional(choice('+', '-')),
        repeat1(/[0-9]/),
      )),
    )),

    identifier: $ => token(seq(
      letter,
      repeat(choice(letter, unicodeDigit, '-'))
    )),

    null: $ => 'null',
    true: $ => 'true',
    false: $ => 'false',

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(choice(
      seq('//', /.*/),
      seq('#', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))
  }
});
