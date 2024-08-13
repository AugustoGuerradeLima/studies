#ifndef HEAP_H
#define HEAP_H

typedef struct s_edge{
	int u;
	int v;
	int custo;
} Aresta;

typedef struct s_heap{
	int tamanho;
	Aresta* dados;
} Heap;

void HeapifyPorBaixo(Heap* h, int p);
void HeapifyPorCima(Heap* h, int p);
Heap* NovoHeap(int maxsize);
void DeletaHeap(Heap* h);
void Inserir(Heap* h, Aresta a);
Aresta Remove(Heap* h);

#endif
