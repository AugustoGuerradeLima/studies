#ifndef GRAPH_H
#define GRAPH_H

typedef struct s_aresta
{
	int v;
	struct s_aresta* prox;
}
Aresta;

typedef struct s_lista
{
	Aresta* head;
	int grau;
}
Lista;

typedef struct s_grafo 
{
	int V, E;
	Lista* adj;
}
Grafo;

Grafo* NovoGrafo(int _V);
void DeletaGrafo(Grafo* g);
void InsereVertice(Grafo* g);
void InsereAresta(Grafo* g, int v, int w);
int QuantidadeVertices(Grafo* g);
int QuantidadeArestas(Grafo* g);
int GrauMinimo(Grafo* g);
int GrauMaximo(Grafo* g);
void ImprimeVizinhos(Grafo* g, int v);

Grafo* NovoGrafo(int _V)
{
	Grafo* g = (Grafo*)malloc(sizeof(Grafo));
	g->V=_V;
	g->E=0;
	g->adj = (Lista*)malloc(_V*sizeof(Lista));
	
	for(int i=0;i<_V;i++)
	{
		g->adj[i].head=NULL;
		g->adj[i].grau=0;
	}
	return(g);
}

void DeletaGrafo(Grafo* g)
{
	for(int i=0;i<g->V;i++)
	{
		Aresta* a = g->adj[i].head;
		while(a!=NULL)
		{
			Aresta* p = a;
			a = a->prox;
			free(p);
		}
	}
	free(g->adj);
	free(g);
}

void InsereVertice(Grafo* g)
{
	g->V++;
	g->adj=(Lista*)realloc(g->adj,g->V*sizeof(Lista));
	g->adj[g->V-1].head=NULL;
	g->adj[g->V-1].grau=0;
}

void InsereAresta(Grafo* g, int v, int w)
{
	Aresta* a = (Aresta*)malloc(sizeof(Aresta));
	a->v=w;
	a->prox=NULL;
	
	if(g->adj[v].head==NULL)
	{
		g->adj[v].head=a;
	}
	else
	{
		Aresta* p = g->adj[v].head;
		while(p->prox != NULL)
		{
			p=p->prox;
		}
		p->prox=a;
	}
	g->adj[v].grau++;
	g->E++;
}

int QuantidadeVertices(Grafo* g)
{
	return(g->V);
}

int QuantidadeArestas(Grafo* g)
{
	return(g->E/2);
}

int GrauMinimo(Grafo* g)
{
	int min = g->adj[0].grau;
	for(int i=1;i<g->V;i++)
	{
		if(min>g->adj[i].grau)min=g->adj[i].grau;
	}
	return(min);
}

int GrauMaximo(Grafo* g)
{
	int max = g->adj[0].grau;
	for(int i=1;i<g->V;i++)
	{
		if(max<g->adj[i].grau)max=g->adj[i].grau;
	}
	return(max);
}

void ImprimeVizinhos(Grafo* g, int v)
{
	Aresta* a = g->adj[v].head;
	while(a!=NULL)
	{
		printf("%d ",a->v);
		a=a->prox;
	}
	printf("\n");
}

#endif
