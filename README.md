# tree-sitter-hcl

[tree-sitter][] grammar for [HCL (HashiCorp Configuration Language)][hcl] files.
HCL is the configuration format used by projects such as Terraform, Vault,
Waypoint, Nomad, etc.

[hcl]: https://github.com/hashicorp/hcl
[tree-sitter]: https://github.com/tree-sitter/tree-sitter

## Status

**Important: This is not an officially supported HashiCorp project.** 
I am one of the founders of HashiCorp, but I built this in my personal
free time and there are no dedicated resources (people or otherwise)
from the company on this project.

The grammar parses most HCL files I've thrown at it. It doesn't handle
interpolations yet (in strings or heredocs) and instead treats the full string
as just a string.
