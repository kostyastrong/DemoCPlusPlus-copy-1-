//
// Created by maincpp on 21.01.2022.
//

#include "SyntaxAnalyzator.h"

std::pair<std::string, int> SyntaxAnalyzator::getLexem() {
    return mainLexer_->getLexem();
}

void SyntaxAnalyzator::stBool() {
    auto [cur, num] = getLexem();  // AOAOAOAO, LOOK HERE, IS IT COPY OF STRING???
    if (cur != "true" || cur != "false") {  // either first or we
        // error
    }
    return;
}

void SyntaxAnalyzator::stNumber() {
    auto [cur, num] = getLexem();  // how to call lexer not by name
    if (cur != "true" || cur != "false") {
        // error
    }
    return;
}

SyntaxAnalyzator::SyntaxAnalyzator(LexicalAnalyzator *&mainLexer): mainLexer_(mainLexer) {
}
