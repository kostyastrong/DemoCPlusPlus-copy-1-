cmake_minimum_required(VERSION 3.21)
project(DemoCPlusPlus)

set(CMAKE_CXX_STANDARD 20)

add_executable(compiler main.cpp LexicalAnalyzator.cpp LexicalAnalyzator.h SyntaxAnalyzator.cpp SyntaxAnalyzator.h)
