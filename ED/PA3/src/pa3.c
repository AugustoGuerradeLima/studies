#include<stdio.h>
#include<stdlib.h>
#include "../include/graph.h"

void D(Grafo* g)
{
	printf("%d\n", QuantidadeVertices(g));
	printf("%d\n", QuantidadeArestas(g));
	printf("%d\n", GrauMinimo(g));
	printf("%d\n", GrauMaximo(g));
}

void N(Grafo* g)
{
	for(int i=0; i<g->V; i++)
	{
		ImprimeVizinhos(g,i);
	}
}

int K(Grafo* g)
{
	int n = QuantidadeVertices(g);
	return(QuantidadeArestas(g)==(n*(n-1)/2));
}


int main(int argc, char* argv[])
{
	int n, m, w; scanf("%d",&n);
	Grafo* g = NovoGrafo(n);

	for(int i=0; i<n; i++)
	{
		scanf("%d", &m);
		while(m--)
		{
			scanf("%d", &w);
			InsereAresta(g, i, w);	
		}	
	}
	
	switch(argv[1][1])
	{
		case 'd':
			D(g);break;
		case 'n':
			N(g);break;
		case 'k':
			printf("%d\n", K(g));break;
		default:
			break;
	}

	DeletaGrafo(g);

	return(0);
}
