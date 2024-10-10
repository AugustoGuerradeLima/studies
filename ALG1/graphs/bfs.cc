//
//  arquivo :   bfs.cc
//  descricao : implementacao do algoritmo de busca em largura com a finalidade de estudar como o algoritmo caminha pelo grafo (direcionado ou nao) 
//              e mapeia para um subgrafo R, uma arvore de caminhos baratos a partir de um vertice fonte s (source).
//  autor :     augusto guerra de lima (guerraaugusto@ufmg.br)
//  historico : 20241010 arquivo criado
//
#include<bits/stdc++.h>
#include "graph.cc"
using namespace std;

const int INF = 0x3f3f3f3f;

//
// BFS: G->G
//      (G,s) |-> R = BFS(G,S)
//
graph* BFS(graph* G, int s)
{
	graph* R = new graph(G->V);
	queue<int> q;
	int dists[G->V];
	bool visit[G->V];

	for(int i=0; i<G->V; i++)
	{
		dists[i]=INF;
		visit[i]=0;
	}
	
	visit[s]=1;
	cout<<"vertice "<<s+1<<" visitado"<<endl;

	dists[s]=0;
	q.push(s);

	while(!q.empty())
	{
		int u = q.front();
		q.pop();

		edge* v = G->adj[u].head;
		while(v!=nullptr)
		{
			if(!visit[v->vertex])
			{
				visit[v->vertex]=1;
				cout<<"vertice "<<v->vertex+1<<" visitado"<<endl;
				R->insert(u,v->vertex);

				dists[v->vertex]=dists[u]+1;
				q.push(v->vertex);
			}
			v=v->next;
		}	
	}
	return(R);
}

int main()
{
	graph g(10);
	
	g.insert(9,7);
	g.insert(7,6);
	g.insert(6,9);
	g.insert(8,6);
	g.insert(8,1);
	g.insert(1,9);
	g.insert(4,1);
	g.insert(4,2);
	g.insert(5,2);
	g.insert(3,4);
	g.insert(9,3);
	g.insert(0,1);
	g.insert(0,6);

	cout<<"Graph:"<<endl;

	g.print();

	cout<<"BFS execution:"<<endl;

	graph* t = BFS(&g,0);
	t->print();

	return(0);
}