//
// Created by crazywu on 2021/4/20.
//

#include <vector>
#include "Structure.h"
#ifndef SYNTAXTREE_H
#define SYNTAXTREE_H

class SyntaxTreeNode{
private:
	vector<SyntaxTreeNode *> childTrees;
	Token *root;
public:
	SyntaxTreeNode();
	SyntaxTreeNode(Token t);
	~SyntaxTreeNode();

	void setValue(Token val);

	Token getValue();

	void addChild(Token t);
	// add the subtree n to this tree's left
	void addChild(SyntaxTreeNode *n);

	//得到所有子结点
	vector<SyntaxTreeNode*> getChilds();
	//根据名称得到子节点
	SyntaxTreeNode* getChild(string word);

	friend class SyntaxTree;
	friend class SemanticAnalyser;
};
#endif


