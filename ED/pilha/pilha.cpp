#include<iostream>
using namespace std

class Celula
{
	public:
		Celula();
	private:
		int item;
		Celula* prox;
	friend class PilhaEncadeada;
};

Celula::Celula()
{
	item = -1;
	prox = nullptr;
}

class Pilha
{
	public:
		Pilha(){tamanho=0;};
		int GetTamanho(){return tamanho == 0;};
		bool Vazia(){return tamanho == 0;};

		virtual void Empilha(TipoItem item)=0;
		virtual int Desempilha()=0;
		virtual void Limpa()=0;

	protected:
		int tamanho;
};

class PilhaEncadeada:public Pilha
{
	public:
		PilhaEncadeada();
		virtual ~PilhaEncadeada();

		void Empilha(int item);
		int Desempilha();
		void Limpa();

	private:
		Celula* topo;
};

PilhaEncadeada::PilhaEncadeada():Pilha()
{
	topo = nullptr; //comeca sem celula cabeca apontador pra celula e NULL
}//O(1)

PilhaEncadeada::~PilhaEncadeada()
{
	Limpa();
}//O(n)

void PilhaEncadeada::Empilha(int item)
{
	Celula* nova;//Inicia a celula e poem o valor item
	nova = new Tipocelula();
	nova->item = item;
	nova->prox = topo;//jogou para o que era o topo antes se estava vazia e nullptr
	topo = nova;//moveu o topo
	tamanho++;//sempre lembrar de incrementar o tamanho
}//O(1)

int PilhaEncadeada::Desempilha()
{
	int aux;
	Celula* p;//auxilia
		  //
	if(tamanho==0)
	{
		//throw "vazia";
	}

	aux=topo->item;
	p=topo;
	topo=topo->prox;
	delete p;
	tamanho--;//sempre lembrar de decrementar o tamanho

	return aux;
}//O(1)

void PilhaEncadeada::Limpa()
{
	while(!Vazia())//Implementado na classe mae
	{
		Desempilha();
	}
}//O(n)

//-------------------------------------------------------------------------------------Sequencial
//circular
class FilaArranjo : public Fila
{
	public:
		FilaArranjo();

		void Enfileirar(int item);
		int Desenfileira();
		void Limpa();

	private:
		int frente;//tem frente e tras agora
		int tras;
		static const int MAXTAM = 8;
		int itens[MAXTAM];
}

FilaArranjo::FilaArranjo():Fila()
{
	frente = 0;
	tras = 0;
}

//aqui ha preocupacoes com o tamanho maximo

void FilaArranjo::Enfileira(int item)
{
	if(tamanho == MAXTAM)
	{
		//throw "Fila cheia";
	}

	itens[tras]=item;//tras sempre fica uma posicao disponivel adjacente
	
	tras = (tras + 1)%MAXTAM;//fila circular
	
	tamanho++;
}//O(1)

int FilaArranjo::Desenfileira()//Fifo resumindo sai o da frente anda com a frente pra nao empurrar por isso e circular
{
	if(Vazia())
	{
		//throw "Fila vazia";
	}

	int aux = itens[frente];

	frente = (frente+1)%MAXTAM;//fila circular
	
	tamanho--;

	return aux;
}//O(1)

void FilaArranjo::Limpa()
{
	frente = 0;
	tras = 0;
	tamanho = 0;
}//O(1)
//---------------------------------------------------------------------------------Pilha sequencial

class PilhaArranjo : public Pilha
{
    public:
        PilhaArranjo();

        void Empilha(int item);
        int Desempilha();
        void Limpa();

    private:
        int topo;//a sequencia vai de 0 a n-1 e o topo comeca em -1
        static const int MAXTAM = 100;
        int itens[MAXTAM];
};

PilhaArranjo::PilhaArranjo():Pilha()//tamanho definido classe mae e sua construcao define o seu valor
{
	topo = -1;
}

void PilhaArranjo::Empilha(int item)
{
	if(tamanho == MAXTAM)
	{
		//throw "Pilha cheia"
	}

	topo++;
	int[topo] = item;
	tamanho++;//Topo esta sempre um antes do tamanho devido a indexacao da linguagem de programacao
}//O(1)

int PilhaArranjo::Desempilha()
{
	if(Vazia())
	{
		//throw "Vazia";
	}

	int aux = itens[topo];
	topo--;
	tamanho--;
	return aux;
}//O(1)

void PilhaArranjo::Limpa()
{
	topo = -1;
	tamanho = 0;
}//O(1)

int main()
{
 	return(0);
}
