//
// Created by chan on 2018/8/23.
//

#ifndef SIMPLEINTERPRETER_NUMNODE_H
#define SIMPLEINTERPRETER_NUMNODE_H


#include "ASTNode.h"
#include "../../token/Token.h"
#include "../../token/IntNumToken.h"

class IntNumNode: public ASTNode
{
public:
	explicit IntNumNode(IntNumToken *token);
	~IntNumNode() override = default;
};


#endif //SIMPLEINTERPRETER_NUMNODE_H
