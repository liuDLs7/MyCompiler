//
// Created by LDL on 2023/5/30.
//

#ifndef C100_PRINTVISITOR_H
#define C100_PRINTVISITOR_H

#include "AstNode.h"

namespace C100
{
    class PrintVisitor : public AstVisitor
    {
    public:
        void VisitorProgramNode(ProgramNode *node) override;
        void VisitorBinaryNode(BinaryNode *node) override;
        void VisitorConstantNode(ConstantNode *node) override;
    };

}


#endif //C100_PRINTVISITOR_H
