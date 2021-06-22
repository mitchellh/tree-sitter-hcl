[
  "for"
] @keyword

(body (attribute (identifier) @type))

(attribute (identifier) @property)

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
