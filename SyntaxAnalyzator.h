//
// Created by maincpp on 21.01.2022.
//

#ifndef COMPILER_SYNTAXANALYZATOR_H
#define COMPILER_SYNTAXANALYZATOR_H
#include "LexicalAnalyzator.h"

class SyntaxAnalyzator {
public:
    // memorize the string lexer on and index
    std::pair<std::string, int> getLexem();
    explicit SyntaxAnalyzator(LexicalAnalyzator *& mainLexer);

private:
    void stBool();
    void stNumber();
    void stSign();
    LexicalAnalyzator* mainLexer_;

};


#endif //COMPILER_SYNTAXANALYZATOR_H
