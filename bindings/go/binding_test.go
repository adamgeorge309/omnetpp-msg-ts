package tree_sitter_msg_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_msg "github.com/tree-sitter/tree-sitter-msg/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_msg.Language())
	if language == nil {
		t.Errorf("Error loading Msg grammar")
	}
}
