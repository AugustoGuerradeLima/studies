//---------------------------------------------------------------------------------
//Arquivo	: avl_tree.h
//Descricao	: implementacao de uma arvore binaria autobalanceadora arvore avl
//Autor		: Augusto Guerra de Lima
//Historico	: 2024-07-09 arquivo criado
//---------------------------------------------------------------------------------

#ifndef AVLTREE_H
#define AVLETREE_H

#include<bits/stdc++.h>
using namespace std;

class node 
{
	int item;
	int height;
	node* left;
	node* right;
	node* parent;
	friend class avl_tree;

public:
	node(int _item): item(_item), height(1), left(nullptr), right(nullptr), parent(nullptr) {}
};

class avl_tree
{
	node* root;
	void recursive_insert(node* &p, int _item);
	void recursive_delete(node* p);
	int quadratic_height(node* p);
	int quadratic_balance_factor(node* p);
	int balance_factor(node* p);
	void to_right(node* p);
	void to_left(node* p);

public:
	avl_tree();
	~avl_tree();
	void insert(int _item);
	void clean();
};

avl_tree::avl_tree()
{
	this->root = nullptr;
}

avl_tree::~avl_tree()
{
	clean();
}

//calculo do fator de balanceamento na arvore binaria avl

int avl_tree::quadratic_height(node* p)
{	
	if(p==nullptr) return(0);
	return(1 + max(height(node->left), height(node->right)));
}

int avl_tree::quadratic_balance_factor(node* p)
{
	if(p==nullptr)return(0);
	return(quadratic_height(p->right) - quadratic_height(p->left));
}

int avl_tree::balance_factor(node* p)
{
	if(p==nullptr)return(0);
	return(p->right->height - p->left->height);
}

//rotacoes e se o avo for nullptr pensar sobre isso

void avl_tree::to_left(node* p)
{
	if(this->root == p->parent) this->root = p;
	
	p->parent->left==p->right;
	p->right = p->parent;

	//atualiza os pais
	if(p->parent->parent->left == p->parent)
	{
		p->parent->parent->left = p;//subarvore esquerda do avo
		node* aux = p->parent;
		p->parent = p->parent->parent;
		aux->parent = p;
	}
	else
	{
		p->parent->parent->right = p;
		node* aux = p->parent;
		p->parent = p->parent->parent;
		aux->parent = p;
	}
}

void avl_tree::to_right(node* p)
{
	if(this->root == p->parent) this->root = p;

	p->parent->right = p->left;
	p->left = p->parent;

	//atualiza os pais
	if(p->parent->parent->right == p->parent)
	{	
		p->parent->parent->right = p;
		node* aux = p->parent;
		p->parent = p->parent->parent;
		aux->parent = p;
	}
	else
	{
		p->parent->parent->left = p;
		node* aux = p->parent;
		p->parent = p->parent->parent;
		aux->parent = p;
	}
}

void avl_tree::insert(int _item)
{
	recursive_insert(this->root, _item);
}

void avl_tree::recursive_insert(node* &p, int _item)
{
	if(p==nullptr)
		p = new node(_item);
	else
	{
		if(_item < p->item)
			recursive_insert(p->left, _item);
		else
			recursive_insert(p->right, _item);

		//atualiza a altura do pai
	}
}

//limpando

void avl_tree::clean()
{
	recursive_delete(this->root);
	this->root=nullptr;
}

void avl_tree::recursive_delete(node* p)
{
	if(p!=nullptr)
	{
		recursive_delete(p->left);
		recursive_delete(p->right);
		delete p;
	}
}

#endif
