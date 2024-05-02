#include<iostream>
using namespace std

class Celula
{
	public:
		Celula();
	private:
		int item;
		Celula* prox;
	friend class FilaEncadeada;
};

class Celula::Celula()
{
	item = -1;
	prox = nullptr;
}

class Fila
{
	public:
		Fila(){tamanho=0;};
		int GetTamanho(){return tamanho;};
		bool Vazia(){return tamanho ==0;};

		virtual void Enfileira(int item) = 0;
		virtual int Desenfileira()=0;
		virtual void Limpa() = 0;
	
	protected:
		int tamanho;	
};
//-----------------------------------------------------------------------Encadeada
class FilaEncadeada:public Fila
{
	public:
		FilaEncadeada();
		virtual ~FilaEncadeada();

		void Enfileira(int item);
		int Desenfileira();
		void Limpa();

	private:
		Celula* frente;
		Celula* tras;
};

FilaEncadeada::FIlaEncadeada():Fila()//utilizando celula cabeca no construtor
{
	frente = new Celula;//celula cabeca
	tras = frente;
}//tamanho = 0 e chamado no construtor de fila classe mae

FilaEncadeada::~FilaEncadeada()
{
	Limpa();
	delete frente;//necessario devido a celula cabeca
}//O(n)

void FilaEncadeada::Enfileira(int item)
{
	Celula* nova;
	nova = new Celula();
	tras->prox = nova;//tem que ser tras
	tras = nova;
	tamanho++;
}

int FilaEncadeada::Desenfileira()//Fifo ou seja tem que sair o primeiropode colocar um pontador auxiliar
{
	int aux;//tipo item
	Celula* p;

	if(Vazia())//tamanho == 0
	{
		//throw "vazia";
	}

	//lembre da celula cabeca
	
	//implementacao do Slide
	//Retorna o elemento que esta na primeira posicao (frente->prox)
	//Remove a celula cabeca e a primeira celula passa a ser a cabeca
	//aux = frente->prox->item;
	//p = frente;
	//frente = frente -> prox;
	//delete p;
	//tamanho--
	
	//minha deleta de fato o item e reconecta a frente
	aux = frente->prox->item;
	p = frente->prox;
	frente->prox = p->prox;
	delete p;
	tamanho--;

	return aux;
}

void FilaEncadeada::Limpa()
{
	Celula* p;
	p = frente->prox;

	while(p!=nullptr)
	{
		frente->prox = p->prox;//faz literalmente oq fiz
		delete p;
		p = frente->prox;
	}
	tamanho=0;
	tras=frente;
}

//while(frente->prox!=nullptr) Desenfileira;
