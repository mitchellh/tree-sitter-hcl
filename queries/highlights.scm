[
  "for"
] @keyword

(body (attribute (identifier) @type))

(attribute (identifier) @type)
(block (identifier) @type)
(one_line_block (identifier) @type)

[
  (string_literal)
  (quoted_template)
  (heredoc)
] @string

(numeric_literal) @number

[
  (true)
  (false)
  (null)
] @constant.builtin

(comment) @comment

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
]  @punctuation.bracket
