#include <stdio.h>
#include "../include/heap.h"
#include "../include/unionFind.h"

#define and &&

//-------------------------------------------------------------------------------------------------------------
//funcao	: kruskal()
//descricao	: computa o custo arvore minima geradora em um grafo ponderado
//dominio	: h - monticulo estruturado, n - numero de vertices do grafo
//imagem	: c - custo da arvore minima geradora
//-------------------------------------------------------------------------------------------------------------

int kruskal(Heap* h, int n)
{
	UnionFind* dsu = NovoUnionFind(n);
	int c=0;
	int arestas_usadas=0;

	while(arestas_usadas < n-1 and h->tamanho > 0)
	{
		Aresta a = Remove(h);
		int u = a.u;
		int v = a.v;
		int custo = a.custo;

		if(Find(dsu,u) != Find(dsu,v))
		{
			Union(dsu, u, v);
			c+=custo;
			arestas_usadas+=1;
		}
	}

	DeletaUnionFind(dsu);

	return(c);
}	

//kruskal()
//end kruskal()

int main()
{
	int n,m; scanf("%d%d",&n,&m);

	Heap* h = NovoHeap(m);
	for(int i=0; i<m; i++)
	{
		Aresta a;
		scanf("%d%d%d", &a.u, &a.v, &a.custo);
		Inserir(h,a);
	}
	
	int c = kruskal(h, n);

	DeletaHeap(h);

	printf("%d\n", c);

	return(0);
}

//end main()
