{
  description = "Tree-sitter clarity grammar";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
  };

  outputs = {
    self,
    nixpkgs,
  }: let
    system = "x86_64-linux";
    pkgs = nixpkgs.legacyPackages.${system};

    treeSitter = pkgs.callPackage (nixpkgs.outPath + "/pkgs/development/tools/parsing/tree-sitter/default.nix") {};
  in {
    packages.${system}.tree-sitter-clarity = treeSitter.buildGrammar {
      name = "tree-sitter-clarity";
      language = "clarity";
      version = "0.0.2";

      src = pkgs.fetchFromGitHub {
        owner = "xlittlerag";
        repo = "tree-sitter-clarity";
        rev = "ef0552d593a64d6d2936090a44f0ad9f5d54a37f";
        sha256 = "sha256-xBNJuT3d6GN+ocbtdJE1XyosMHwDMnRFIrScPr5pzwc=";
      };

      meta = with pkgs.lib; {
        description = "Tree-sitter grammar for Clarity";
        homepage = "https://github.com/xlittlerag/tree-sitter-clarity";
        license = licenses.mit;
        maintainers = [self];
        platforms = platforms.all;
      };
    };
    defaultPackage.${system} = self.packages.${system}.tree-sitter-clarity;

    devShells."${system}".default = pkgs.mkShell {
      packages = with pkgs; [
        tree-sitter
        nodejs
      ];

      shellHook = ''
        exec zsh
      '';
    };
  };
}
