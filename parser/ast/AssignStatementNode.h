//
// Created by chan on 2018/9/4.
//

#ifndef SIMPLEINTERPRETER_ASSIGNSTATEMENTNODE_H
#define SIMPLEINTERPRETER_ASSIGNSTATEMENTNODE_H


#include "StatementNode.h"
#include "Var.h"

class AssignStatementNode: public StatementNode
{
public:
	Var *lv;
	ASTNode *expr;
	AssignStatementNode(Var *lv, ASTNode *expr);

	virtual ~AssignStatementNode();
};


#endif //SIMPLEINTERPRETER_ASSIGNSTATEMENTNODE_H
