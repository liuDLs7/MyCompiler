//
// Created by LDL on 2023/5/30.
//

#include "PrintVisitor.h"
#include <stdio.h>
#include <cassert>

using namespace C100;

void PrintVisitor::VisitorProgramNode(ProgramNode *node)
{
    printf("Program: ");
    node->Lhs->Accept(this);
    printf("end of program\n");
}

void PrintVisitor::VisitorBinaryNode(BinaryNode *node)
{
    node->Rhs->Accept(this);
    node->Lhs->Accept(this);
    switch (node->BinOp) {
        case BinaryOperator::Add:
            printf(" + ");
            break;
        case BinaryOperator::Sub:
            printf(" - ");
            break;
        case BinaryOperator::Mul:
            printf(" * ");
            break;
        case BinaryOperator::Div:
            printf(" / ");
            break;
        default:
            assert(0);
            break;
    }
}

void PrintVisitor::VisitorConstantNode(ConstantNode *node)
{
    printf(" %d ", node->Value);
}
