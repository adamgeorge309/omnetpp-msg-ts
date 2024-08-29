from unittest import TestCase

import tree_sitter, tree_sitter_omnetpp_msg


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_omnetpp_msg.language())
        except Exception:
            self.fail("Error loading OmnetppMsg grammar")
