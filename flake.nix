{
  description = "Tree-sitter clarity grammar";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
  };

  outputs =
    {
      self,
      nixpkgs,
    }:
    let
      supportedSystems = [
        "x86_64-linux"
        "aarch64-linux"
        "x86_64-darwin"
        "aarch64-darwin"
      ];
      forAllSystems = nixpkgs.lib.genAttrs supportedSystems;

      nixpkgsFor = forAllSystems (system: nixpkgs.legacyPackages.${system});
    in
    {
      packages = forAllSystems (
        system:
        let
          pkgs = nixpkgsFor.${system};
          treeSitter = pkgs.callPackage (
            nixpkgs.outPath + "/pkgs/development/tools/parsing/tree-sitter/default.nix"
          ) { };
        in
        rec {
          tree-sitter-clarity = treeSitter.buildGrammar {
            name = "tree-sitter-clarity";
            language = "clarity";
            version = "0.0.4";

            src = self;

            meta = with pkgs.lib; {
              description = "Tree-sitter grammar for Clarity";
              homepage = "https://github.com/xlittlerag/tree-sitter-clarity";
              license = licenses.mit;
              maintainers = [ "xlittlerag" ];
              platforms = platforms.all;
            };
          };

          default = tree-sitter-clarity;
        }
      );

      devShells = forAllSystems (
        system:
        let
          pkgs = nixpkgsFor.${system};
        in
        {
          default = pkgs.mkShell {
            packages = with pkgs; [
              tree-sitter
              nodejs
            ];
          };
        }
      );

      checks = forAllSystems (
        system:
        let
          pkgs = nixpkgsFor.${system};
        in
        {
          tests = pkgs.runCommand "tree-sitter-clarity-tests" {
            nativeBuildInputs = with pkgs; [ tree-sitter gcc ];
          } ''
            export HOME=$TMPDIR
            cp -r ${self} source
            chmod -R +w source
            cd source
            tree-sitter test
            touch $out
          '';
        }
      );
    };
}
