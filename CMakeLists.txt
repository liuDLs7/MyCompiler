cmake_minimum_required(VERSION 3.25)
project(c100)

set(CMAKE_CXX_STANDARD 17)

add_executable(c100 main.cpp Lexer.cpp Lexer.h Parser.cpp Parser.h CodeGen.cpp CodeGen.h AstNode.cpp AstNode.h PrintVisitor.cpp PrintVisitor.h)
