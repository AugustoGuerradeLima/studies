#include <stdio.h>
#include <stdlib.h>
#include "../include/heap.h"

#define and &&

typedef Heap* ref_Heap;

//definida aqui tal metodo
void swap(Aresta* a, Aresta* b)
{
	Aresta aux = *a;
	*a = *b;
	*b = aux;
}
//end aux()

Heap* NovoHeap(int maxsize)
{
	Heap* h = (Heap*) malloc(sizeof(Heap));
	h->tamanho = 0;
	h->dados = (Aresta*)malloc(maxsize*sizeof(Aresta));
	return(h);
}
//end NovoHeap()

void DeletaHeap(Heap* h)
{
	if(h)
	{
		free(h->dados);
		free(h);
	}
}
//end DeletaHeap()

void HeapifyPorBaixo(Heap* h, int p)
{
	int min = p;
	int l = 2*p+1;
	int r = 2*p+2;

	if(l<h->tamanho and h->dados[l].custo < h->dados[min].custo)
	       min = l;
	if(r<h->tamanho and h->dados[r].custo < h->dados[min].custo)
		min=r;
	if(min != p)
	{
		swap(&h->dados[p], &h->dados[min]);
		HeapifyPorBaixo(h, min);
	}	
}
//end HeapifyPorBaixo()

void HeapifyPorCima(Heap* h, int p)
{
	int parent = (p-1)/2;
	while(p>0 and h->dados[p].custo < h->dados[parent].custo)
	{
		swap(&h->dados[p], &h->dados[parent]);
		p=parent;
		parent=(p-1)/2;
	}
}
//end HeapifyPorCima()

void Inserir(Heap* h, Aresta a)
{
	h->dados[h->tamanho]=a;
	HeapifyPorCima(h, h->tamanho);
	h->tamanho+=1;
}
//end Inserir()

Aresta Remove(Heap* h)
{
	Aresta root = h->dados[0];
	h->dados[0] = h->dados[h->tamanho-1];
	h->tamanho-=1;
	HeapifyPorBaixo(h, 0);
	return(root);
}
//end Remove()
