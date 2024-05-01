#include<iostream>
#include "lista.hpp"

using namespace std;

Celula::Celula():item(-1),prox(nullptr){}//construtor de uma celula qualquer definido item como -1

ListaEncadeada::ListaEncadeada():Lista()//ja chama lista para tamanho = 0
{
	primeiro = new Celula();//coloca uma celula cabeca
	ultimo = primeiro;
}//O(1)

ListaEncadeada::~ListaEncadeada()
{
	Limpa();//->O(n)
	delete primeiro;
}//O(n)

//funcao auxiliar para posicionar um apontador em uma determinada posicao (celula) da lista com opcao de parar na celula anterior
Celula* ListaEncadeada::Posiciona(int pos, bool antes=false)
{
	Celula* p;
	int i;

	if((pos>tamanho)||(pos<=0))
	{
	//	throw "ERRO: Posicao Invalida!";
	}
	//Posiciona na celula anterior a desejada
	p = primeiro;
	for(i=1;i<pos;i++)
	{
		p=p->prox;//anda
	}
	//chegou na celula
	//pode ser nela ou na proxima o local de insercao/outros
	if(!antes)
	{
		p=p->prox;
	}
	return p;
}//O(1) - O(n) -> depende de pos que comanda o loop

int ListaEncadeada::GetItem(int pos)
{
	Celula* p;//sempre cria esse apontador que percorre os elementos
	p = Posiciona(pos);//devolveu a posicao aquele apontador O(1) - O(n
	return p->item;	
}//O(1) - O(n)

void ListaEncadeada::SetItem(int item,int pos)
{
	Celula* p;
	p = Posiciona(pos);
	p->item = item;
}//O(1) - O(n)

//Insercoes deve-se posicionar um apontador auxiliar ANTES da posicao a ser inserida se estiver inserindo na ultima posicao deve-se atualizar o apontador ULTIMO
void ListaEncadeada::InsereInicio(int item)
{
	Celula* nova;
	nova = new Celula();
	nova->item = item;
	nova->prox = primeiro->prox;
	primeiro->prox = nova;


	//IMPORTANTE - MANIPULAR OS TAMANHOS E APONTADORES CORRETOS
	tamanho++;
	if(nova->prox == nullptr)//verifica se e a ultima
	{
		ultimo = nova;
	}
}//O(1)

void ListaEncadeada::InsereFinal(int item)
{
	Celula* nova;
	nova = new Celula();
	nova->item = item;
	ultimo->prox = nova;
	ultimo=nova;
	tamanho++;
}//O(1);

//vai precisar de encontrar uma posicao
void ListaEncadeada::InserePosicao(int item, int pos)
{
	Celula* p;
	p = Posiciona(pos, true);//true indica que o apontador fica na celula anterior ajudando a atualizar os apontadores

	Celula* nova;
	nova = new Celula();
	nova->item = item;

	nova->prox=p->prox;
	p->prox = nova;

	tamanho++;
	if(nova->prox == nullptr)
	{
		ultimo = nova;
	}
}//O(1) - O(n)


//REMOCAO Posiciona apontador antes tambem e atualiza o ultimo ver se e valida

int ListaEncadeada::RemoveInicio()
{
	int aux;//item a ser removido
	
	Celula*p;//auxilia
	
	if(tamanho==0)
	{
	//	throw "ERRO: Lista vazia!";
	}

	p=primeiro->prox;//justamente a celula
	primeiro->prox = p->prox;
	
	//fazer primeiro->prox->prox vaza memoria por isso tem que ter o auxilia para deletar
	
	aux=p->item;
	delete p;
	
	tamanho--;

	if(primeiro->prox == nullptr)//se a lista ficou vazia
	{
		ultimo=primeiro;
	}

	return aux;
}//O(1)

int ListaEncadeada::RemoveFinal()
{
	int aux;
	Celula* p;

	if(tamanho==0)
	{
	//	throw "ERRO: Lista vazia!";
	}
	
	p=Posiciona(tamanho,true);//posiciona uma antes do tamanho
	
	p->prox=nullptr;
	aux = ultimo->item;
	delete ultimo;
	ultimo = p;
	
	tamanho--;

	return aux;
}//Devido ao apontador que posiciona na ultima O(n)

int ListaEncadeada::RemovePosicao(int pos)
{
	int aux;
	Celula* p;
	Celula* q;//auxilia
	
	p=Posiciona(pos,true);//item anterior
	q=p->prox;//exatamente a celula
	
	p->prox=q->prox;//siga esse padrao que da bom nos outros
	
	aux=q->item;
	delete q;

	tamanho--;

	if(p->prox==nullptr)//verifica se e o ultimo
	{
		ultimo=p;
	}

	return aux;
}//O(1) - O(n)

//PESQUISA
//Aqui nao muda muito pois item e chave sao os mesmos int
int ListaEncadeada::Pesquisa(int c)
{
	int aux;//TipoItem
	Celula* p;//iterador
	
	if(tamanho==0)
	{
	//	throw "ERRO: Lista vazia!";
	}

	//busca linear
	
	p=primeiro->prox;//x_1
	
	aux = -1;//aux.SetChave(-1);
	
	while(p!=nullptr)
	{
		if(p->item == c)
		{
			aux=p->item;
			break;
		}//itera ate encontrar e quebra
		p=p->prox;
	}	
	return aux;
}//O(1) - O(n) medio O(n) pior

void ListaEncadeada::Imprime()
{
	Celula* p;
	p=primeiro->prox;//iterador
	
	while(p!=nullptr)
	{
		printf("%d\n", p->item);
		p=p->prox;
	}
}//O(n)

void ListaEncadeada::Limpa()
{
	Celula* p;
	p=primeiro->prox;

	while(p!=nullptr)
	{
		primeiro->prox = p->prox;//nao pensaria
		delete p;
		p=primeiro->prox;//nao pensaria
	}
	ultimo = primeiro;
	tamanho = 0;
}//Desvantagem em relacao ao sequencia O(n)