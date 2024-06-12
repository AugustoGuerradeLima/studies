#ifndef HEAP_H
#define HEAP_H

#define and &&

typedef struct s_heap
{
	int tamanho;
	int* dados;
}Heap;
typedef Heap* ref_Heap;

void HeapifyPorBaixo(ref_Heap h, int posicao);
void HeapifyPorCima(ref_Heap h, int posicao);

ref_Heap NovoHeap(int maxsize)
{
	ref_Heap h = (ref_Heap)malloc(sizeof(Heap));
	h->tamanho = 0;
	h->dados = (int*)malloc(maxsize*sizeof(int));

	return h;
}

void DeletaHeap(ref_Heap h)
{
	if(h)
	{
		free(h->dados);
		free(h);
	}
}

void Inserir(ref_Heap h, int x)//eh crucial que a propriedade de arvore completa seja mantida
{
	h->dados[h->tamanho]=x;
	HeapifyPorBaixo(h,h->tamanho);
	h->tamanho++;
}

int Remover(ref_Heap h)
{
	int r = h->dados[0];
	h->dados[0] = h->dados[h->tamanho-1];
	HeapifyPorCima(h,0);
	h->tamanho--;

	return r;
}

int GetAncestral(ref_Heap h, int posicao)
{
	return((posicao-1)>>1);
}

int GetSucessorEsq(ref_Heap h, int posicao)
{
	return((posicao<<1)+1);
}

int GetSucessorDir(ref_Heap h, int posicao)
{
	return((posicao<<1)+2);
}

int Vazio(ref_Heap h)
{
	return(h->tamanho==0);
}

void HeapifyPorBaixo(ref_Heap h, int posicao)
{
	int a = GetAncestral(h,posicao);
	
	if(a>=0 and h->dados[posicao] < h->dados[a])
	{
		int aux = h->dados[posicao];
		h->dados[posicao] = h->dados[a];
		h->dados[a] = aux;

		HeapifyPorBaixo(h,a);
	}
}

void HeapifyPorCima(ref_Heap h, int posicao)
{
	int e = GetSucessorEsq(h,posicao);
	int d = GetSucessorDir(h,posicao);
	
	int s = posicao;

	if(e<=h->tamanho-1 and h->dados[e]<h->dados[posicao])
	{
		s = e;
	}

	if(d<=h->tamanho-1 and h->dados[d]<h->dados[s])
	{
		s = d;
	}

	if(s!=posicao)
	{
		int aux = h->dados[posicao];
		h->dados[posicao] = h->dados[s];
		h->dados[s] = aux;

		HeapifyPorCima(h,s);
	}
}

#endif
