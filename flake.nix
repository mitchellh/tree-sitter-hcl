{
  description = "Tree-sitter parser for protocol buffers (proto3)";

  inputs.nixpkgs.url = "github:nixos/nixpkgs";
  inputs.flake-utils.url = "github:numtide/flake-utils";


  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = import nixpkgs { inherit system; };

        project = pkgs.callPackage ./project.nix {
          inherit pkgs;
        };
      in {
        devShell = project.shell;
      }
    );
}
