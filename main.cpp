#include <iostream>
#include "LexicalAnalyzator.h"

//LexicalAnalyzator worker(statesTransactions, statesType);  // why doesn't this work
std::string a = statesTransactions;

int main() {
    std::cout << a << std::endl;
    a = statesTransactions;
    std::cout << a << std::endl;
    std::cout << "Hello, World!" << std::endl;
    //std::cout << statesTransactions;
    //LexicalAnalyzator::getChars(statesTransactions);
    LexicalAnalyzator worker(statesTransactions, statesType);
    worker.splitFile();
    return 0;
}
