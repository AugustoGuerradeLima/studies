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

//classe	: node
//descricao	: armazenar os nos da arvore avl

class node 
{
	int item;
	int height;
	node* left;
	node* right;
	node* parent;
	friend class avl_tree;

public:
	node(int _item): item(_item), height(0), left(nullptr), right(nullptr), parent(nullptr) {}
};

//classe	: avl_tree
//decricao	: arvore binaria de pesquisa autobalanceadora

class avl_tree
{
	node* root;
	int quadratic_height(node* p);
	int quadratic_balance_factor(node* p);
	int balance_factor(node* p);
	void right_rot(node* p);
};

//funcao	: quadratic_height
//decricao	: forma ineficiente de avaliar a altura de um no
//		  normalmente um no folha tem altura 0 mas existe a opcao onde ele comeca em 1
//		  nessa implementacao utiliza altura no folha igual a 0
//dominio	: node* p - no a se computar a altura
//contradominio	: altura do no
//complexidade	: pior caso O(n)

int avl_tree::quadratic_height(node* p)
{	
	if(p==nullptr) return(-1);
	return(1 + max(height(node->left), height(node->right)));
}

//fator de balanceamento entre -1 e 1 e uma arvore balanceada

//funcao	: quadratic_balance_factor
//decricao	: faz chamada de quadratic_height para computar o fator de balanceamento
//dominio	: node* p - no a se computar o fator de balanceamento
//contradominio	: fator de balanceamento do no
//complexidade 	: O(n^2) depende da altura das subarvores entao fica ruim
//		  e possivel melhorar armazenando a altura no no da arvore avl

int avl_tree::quadratic_balance_factor(node* p)
{
	if(p==nullptr)return 0;
	return(height(p->right)-height(p->left));
}

//funcao	: balance_factor

int avl_tree::balance_factor(node* p)
{
	if(p==nullptr)return(0);
	return(p->right->height - p->left->height);
}

//rotacoes sao operacoes utilizadas na arvore avl para manter o balanceamento

//metodo	:
//descricao	: rotacao para a direita
//complexidade	: O(1)

void avl_tree::right_rot(node* p)
{
	p->parent->left = p->right;
	p->right = p->parent;
	//lembrar de ajustar os pais
}

#endif
