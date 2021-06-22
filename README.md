# tree-sitter-hcl

[tree-sitter][] grammar for [HCL (HashiCorp Configuration Language)][hcl] files,
including Terraform, Vault, Nomad, Waypoint, etc.

[hcl]: https://github.com/hashicorp/hcl
[tree-sitter]: https://github.com/tree-sitter/tree-sitter

## Status

The grammar parses most HCL files I've thrown at it. It doesn't handle
interpolations yet (in strings or heredocs) and instead treats the full string
as just a string.
