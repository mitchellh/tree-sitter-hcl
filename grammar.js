const
  newline = '\n',
  terminator = choice(newline),

  unicodeLetter = /\p{L}/,
  unicodeDigit = /[0-9]/,
  unicodeChar = /./,
  unicodeValue = unicodeChar,
  letter = choice(unicodeLetter, '_');


module.exports = grammar({
  name: 'hcl',

  rules: {
    source_file: $ => repeat(choice(
      seq($.attribute, terminator),
    )),

    // Attribute    = Identifier "=" Expression Newline;
    attribute:  $ => seq(
      $.identifier,
      '=',
      $.expression,
    ),

    // Expression = (
    //    ExprTerm |
    //    Operation |
    //    Conditional
    // );
    expression: $ => choice(
      $.expr_term,
    ),

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
      // TemplateExpr
      $.variable_expr,
      $.function_call,
      // ForExpr
      seq($.expr_term, $.index),
      seq($.expr_term, $.get_attr),
      seq($.expr_term, $.splat),
      seq('(', $.expression, ')'),
    ),

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
        repeat(seq(',',$.expression)),
        optional(','),
      )),
      ']',
    ),

    object: $ => seq(
      '{',
      optional(seq(
        $.object_elem,
        repeat(seq(',',$.object_elem)),
        optional(','),
      )),
      '}',
    ),

    object_elem: $ => prec(5, seq(
      choice($.identifier, $.expression),
      choice('=', ':'),
      $.expression,
    )),

    // VariableExpr = Identifier;
    variable_expr: $ => $.identifier,

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
  }
});
