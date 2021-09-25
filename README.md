# tree-sitter-hcl

**Update: check out this more full-featured tree-sitter-hcl plugin here:**
https://github.com/MichaHoffmann/tree-sitter-hcl

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
as just a string. This is the biggest feature missing at the moment. Regardless,
I am using this day to day for general HCL highlighting.

## Screenshot

The screenshot shows a Terraform example syntax highlighted.

![Screenshot](https://user-images.githubusercontent.com/1299/122850915-e442bf00-d2c2-11eb-85a1-a92ce9ac0644.png)

