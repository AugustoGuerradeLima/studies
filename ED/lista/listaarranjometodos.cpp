#include<iostream>
#include<lista.hpp>

class ListaArranjo:Lista()
{
	public:
		ListaArranjo():Lista(){};//Implementacao vazia aqui
		int GetItem(int pos);
		void SetItem(int item, int pos);
		void InsereInicio(int item);
		void InsereFinal(int item);
		void InserePosicao(int item,int pos);
		int RemoveInicio();
		int RemoveFinal();
		int RemovePosicao(int item);
		int Pesquisa(int c);
		void Imprime();
		void Limpa();
	private:
		static const int MAXTAM = 100;
		int itens[MAXTAM];
};

//so precisa de iniciar o tamanho mas isso ja esta sendo feito na classe mae

int ListaArranjo::GetItem(int pos)
{
	if((pos>tamanho)||(pos<=0))
	{
		//throw "posicao invalida";
	}
	
	return itens[pos-1];//devido indexacao
}//O(1)

void ListaArranjo::SetItem(int item, int pos)
{
	if((pos>tamanho)||(pos<=0))
	{
		//theow "posicao invalida";
	}

	itens[pos-1] = item;//devido indexacao
}//O(1)

void ListaArranjo::InsereInicio(int item)
{
	int i;
	if(tamanho == MAXTAM)
	{
		//throw "lista cheia";
	}
	for(i=tamanho;i>0;i--)//pode ser com while de boa tbm faz que nem o algoritmo insertion para arranjos
	{
		itens[i]=itens[i-1];//---->
	}
	tamanho++;
	itens[0]=item;
}//O(n)

void ListaArranjo::InsereFinal();//so incrementa e devolve item O(1)

void InserePosicao(int item, int pos)
{
	//verifica tamanho max e posicao valida
	
	for(i=tamanho;i>pos-1;i--)//devido indexacao
		itens[i] = itens[i-1];
	itens[pos] = item;
	tamanho++;
}//O(1) - O(n)

int RemoveFinal();//decrementa o tamanho e devolve tamanho+1 O(1)

int RemoveInicio()
{
	//verifica amanho max
	
	int i = intens[0];

	while(i<tamanho)
	{
		itens[i]=itens[i+1];//<----
	}
	tamanho--;
	return aux;
}//O(n)

int RemovePosicao(int pos)
{
	//verifica posicao valida
	
	aux=itens[pos-1];//devido indexacao
	for(i=pos-1;i<tamanho;i++)
	{
		itens[i]=itens[i+1];//*<----
	}
	tamanho--;
	return aux;
}//O(n)

void Pesquisa()//no slide retorna realmente o item ou flag(-1) 
	       //O(n)

void Imprime()//O(n)

void Limpa()//tamanho=0
	    //O(1)
