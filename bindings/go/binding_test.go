package tree_sitter_clarity_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_clarity "github.com/tree-sitter/tree-sitter-clarity/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_clarity.Language())
	if language == nil {
		t.Errorf("Error loading Clarity grammar")
	}
}
