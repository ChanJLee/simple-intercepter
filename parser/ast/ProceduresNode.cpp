//
// Created by chan on 2018/9/16.
//

#include "ProceduresNode.h"


ProceduresNode::~ProceduresNode()
{
	std::for_each(procedures.cbegin(), procedures.cend(), [](Procedure *procedure)
	{
		if (procedure != nullptr) {
			delete procedure;
		}
	});
}

ProceduresNode::ProceduresNode()
	: ASTNode(nullptr, ASTNode::Type::PROCEDURE)
{}

ProceduresNode::ProceduresNode(const std::vector<Procedure *> &procedures)
	: ASTNode(nullptr, ASTNode::Type::PROCEDURE)
{

}

ProceduresNode::Procedure::Procedure(IdToken *id, FormalParametersNode *formalParameters, BlockNode *block)
	: formalParameters(formalParameters), block(block), id(id)
{}

ProceduresNode::Procedure::~Procedure()
{
	if (formalParameters != nullptr) {
		delete formalParameters;
	}

	if (block != nullptr) {
		delete block;
	}
}
