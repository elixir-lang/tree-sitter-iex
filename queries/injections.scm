((evaluation_block (prompt_line (expression) @injection.content))
 (#set! injection.language "elixir")
 (#set! injection.combined))

((result) @injection.content
 ; include (comment) nodes which may be under the (result) subtree
 (#set! injection.include-children)
 (#set! injection.language "elixir"))
