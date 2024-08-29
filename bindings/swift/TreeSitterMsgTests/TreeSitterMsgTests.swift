import XCTest
import SwiftTreeSitter
import TreeSitterMsg

final class TreeSitterMsgTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_msg())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Msg grammar")
    }
}
