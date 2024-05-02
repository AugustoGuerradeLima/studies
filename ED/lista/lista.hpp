#ifndef LISTA_HPP
#define LISTA_HPP

#include<iostream>
using namespace std;

class Lista//lista virtual para duas implementacoes com as operacoes basicas
{
	public:
		Lista(){tamanho=0;};
		int GetTamanho(){return tamanho;};
		bool Vazia(){return tamanho==0;};

		virtual int GetItem(int pos) = 0;
		virtual void SetItem(int item, int pos)=0;
		virtual void InsereInicio(int item)=0;
		virtual void InsereFinal(int item)=0;
		virtual void InserePosicao(int item,int pos)=0;
		virtual int RemoveInicio()=0;
		virtual int RemoveFinal()=0;
		virtual int RemovePosicao(int pos)=0;
		virtual int Pesquisa(int c)=0;
		virtual void Imprime()=0;
		virtual void Limpa()=0;

	protected:
		int tamanho;
};

class Celula
{
	public:
		Celula();
	private:
		int item;
		Celula* prox;
	friend class ListaEncadeada;//Permite o acesso de atributos privados pela classe ListaEncadeada
};

class ListaEncadeada:public Lista//vai ter todas as operacoes e celula cabeca
{

	public:
		ListaEncadeada();//definira uma celula cabeca
		~ListaEncadeada();

		int GetItem(int pos);
		void SetItem(int item,int pos);
		void InsereInicio(int item);
		void InsereFinal(int item);
		void InserePosicao(int item,int pos);
		int RemoveInicio();
		int RemoveFinal();
		int RemovePosicao(int pos);
		int Pesquisa(int c);
		void Imprime();
		void Limpa();
	
	private:
		Celula* primeiro;//nesse caso o apontador primeiro sera para cabeca isso pode ser diferente em outras implementacoes
		Celula* ultimo;
		Celula* Posiciona(int pos, bool antes);//funcao auxiliar para posicionamento, retorna um apontador para uma celula
};
#endif
