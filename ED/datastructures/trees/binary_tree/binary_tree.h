//-------------------------------------------------------
//Arquivo	: binary_tree.h
//Autor		: Augusto Guerra de Lima
//Historico	: 2024-07-09 arquivo criado
//-------------------------------------------------------

#ifndef BINARYTREE_H
#define BINARYTREE_H

#include<bits/stdc++.h>
using namespace std;

//classe	: node
//descricao	: armazenar os nos da arvore
class node
{
	int item;
	node* left;
	node* right;
	friend class binary_tree;	

public:
	node(int _item): item(_item), left(nullptr), right(nullptr) {}
};

//classe	: binary_tree
//descricao	: arvore binaria simples nao e heap ou de pesquisa
class binary_tree
{	
	node* root;

	void recursive_insert(node* &p, int _item);
	void recursive_delete(node* p);
	void level_traversal();
	void prefix(node* p);
	void infix(node* p);
	void posfix(node* p);
	void nr_prefix();
	//void nr_infix();
	//void nr_posfix();

public:
	binary_tree();
	~binary_tree();
	void insert(int _item);
	void traverse(int type);
	void clean();	
};

//metodo	: construto da arvore binaria
//descricao	: inicia root como apontador nulo

binary_tree::binary_tree()
{
	this->root = nullptr;
}

//metodo	: destrutor da arvore binaria
//descricao	: faz chamada do metodo clean que limpa a arvore binaria

binary_tree::~binary_tree()
{
	clean();
}

//insercao na arvore binaria	: o metodo de insercao aqui utilizado sera o da binary_search_tree embora nao seja exatamente uma

//metodo	: insert
//descricao	: faz chamada do metodo recursive_insert e envia root como referencia
//parametros	: int _item - item a ser inserido na arvore do tipo int

void binary_tree::insert(int _item)
{
	recursive_insert(this->root, _item);
}

//metodo	: recursive_insert
//descricao	: a partir de um no insere um item na arvore binaria
//parametros	: node* &p - referencia ao no de insercao, int _item - item a ser inserido
//complexidade	: O(n) no pior caso - degenerada em lista, O(log n) no melhor caso - baseado na profundidade da arvore binaria

void binary_tree::recursive_insert(node* &p, int _item)
{
	if(p==nullptr)
		p = new node(_item);
	else
	{
		if(_item < p->item)
			recursive_insert(p->left, _item);
		else
			recursive_insert(p->right, _item);
	}
}

//caminhamento em arvores	: existem alguns tipos

//metodo	: print
//descricao	: escolhe uma forma de imprimir as chaves dos nos da arvores binaria
//parametros	: int type - rotulo para o tipo de impressao

void binary_tree::traverse(int type)
{
	switch(type)
	{
		case 0:
			prefix(this->root);
		break;
		case 1:
			infix(this->root);
		break;
		case 2:
			posfix(this->root);
		break;
		case 3:
			level_traversal();
		break;
		case 4:
			nr_prefix();
		break;
		default:
			cout<<"tipo de impressao invalido"<<endl;
		break;
	}
}

//metodo	: prefix
//descricao	: visita o no esquerda e direita
//parametros	: node* p - posicao de impressao

void binary_tree::prefix(node* p)
{
	if(p!=nullptr)
	{
		cout<<p->item<<" ";
		prefix(p->left);
		prefix(p->right);
	}
}

//metodo	: infix
//descricao	: tambem chamado de central visita esquerda no e direita
//parametos	: node* p - posicao de impressao

void binary_tree::infix(node* p)
{
	if(p!=nullptr)
	{
		infix(p->left);
		cout<<p->item<<" ";
		infix(p->right);
	}
}

//metodo	: posfix
//descricao	: visita esquerda direita e no
//parametros	: node* p - posicao de impressao

void binary_tree::posfix(node* p)
{
	if(p!=nullptr)
	{
		posfix(p->left);
		posfix(p->right);
		cout<<p->item<<" ";
	}
}

//caminhamentos nao recursivos	: utiliza outra pilha ao inves da pilha de recursao

void binary_tree::nr_prefix()
{	
	if(this->root==nullptr) return;

	stack<node*>s;
	s.push(this->root);
	
	while(!s.empty())
	{
		node* p = s.top();
		s.pop();
		cout<<p->item<<" ";
		if(p->right != nullptr) s.push(p->right);
		if(p->left != nullptr) s.push(p->left);
		
	}
}

//caminhamento por nivel	: utiliza uma estrutura de dados fila auxiliar

//metodo	: level_tranversal
//descricao	: imprime as chaves a cada nivel da arvore algo mais natural para nos humanos	

void binary_tree::level_traversal()
{
	if(this->root==nullptr) return;

	queue<node*>q;
	q.push(this->root);

	while(!q.empty())
	{
		node* p = q.front();
		q.pop();
		cout<<p->item<<" ";
		if(p->left !=nullptr) q.push(p->left);
		if(p->right != nullptr) q.push(p->right);
	}
}

//limpando a arvore

//metodo	: clean
//descricao	: faz chamada de recursive_delete para deletar todos os nos da arvore binaria

void binary_tree::clean()
{
	recursive_delete(this->root);
	this->root=nullptr;
}

//metodo	: recursive_delete
//descricao	: deleta os nos da arvore binaria em um caminhamento pos-fixado

void binary_tree::recursive_delete(node* p)
{
	if(p!=nullptr)
	{
		recursive_delete(p->left);
		recursive_delete(p->right);
		delete p;
	}	
}

#endif
