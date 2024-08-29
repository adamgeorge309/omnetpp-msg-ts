import XCTest
import SwiftTreeSitter
import TreeSitterOmnetppMsg

final class TreeSitterOmnetppMsgTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_omnetpp_msg())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading OmnetppMsg grammar")
    }
}
