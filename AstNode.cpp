//
// Created by LDL on 2023/5/30.
//

#include "AstNode.h"

using namespace C100;

void ProgramNode::Accept(AstVisitor *visitor)
{
    visitor->VisitorProgramNode(this);
}

void BinaryNode::Accept(AstVisitor *visitor)
{
    visitor->VisitorBinaryNode(this);
}

void ConstantNode::Accept(AstVisitor *visitor)
{
    visitor->VisitorConstantNode(this);
}
