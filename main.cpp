#include <iostream>
#include "Lexer.h"
#include <stdio.h>
#include "Parser.h"
#include "PrintVisitor.h"

using namespace C100;

const char *code = "3 * 5 + 1 - 3 * 4 / 2";

void testLex(){
    Lexer lex(code);
    do{
        lex.GetNextToken();
        std::cout << lex.CurrentToken->Content << std::endl;
    }while(lex.CurrentToken->Kind != C100::TokenKind::Eof);
}

void testParser()
{
    Lexer lex(code);
    lex.GetNextToken();

    Parser parser(lex);
    PrintVisitor visitor;

    auto root = parser.Parse();
    root->Accept(&visitor);
}

int main() {
    testParser();

    return 0;
}
