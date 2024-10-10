//
//  arquivo :   graph.cc
//  descricao : implementacao de um grafo a partir de listas de adjacencia, apenas para fins didaticos, nao expressa boas praticas ou
//              padroes de codigo, um grafo nao direcionado apenas para implementar algoritmos em grafos.
//  autor :     augusto guerra de lima (guerraaugusto@ufmg.br)
//  historico : 20241010 arquivo criado
//
#include<bits/stdc++.h>
using namespace std;

class edge
{
	public:
		int vertex;
		edge* next; // para a lista encadeada
		
		edge(int _vertex): vertex(_vertex) {}
		~edge() {}
};

class adj_list
{
	public:
		edge* head;

		adj_list(): head(nullptr){}
		~adj_list()
		{
			edge* i=head;
			while(i!=nullptr)
			{
				edge* next=i->next;
				delete i;
				i=next;
			}
		}
};

class graph
{
	public:
		int V, E;
		adj_list* adj;
		
		graph(int _V)
		{
			this->V=_V;
			this->E=0;
			adj=new adj_list[V];
		}

		~graph(){delete[] this->adj;}

		void insert(int u, int v)
		{
			// grafo nao direcionado
			edge* e = new edge(v);
			e->next = adj[u].head;
			adj[u].head = e;
			
			e = new edge(u);
			e->next=adj[v].head;
			adj[v].head=e;

			E++;	
		}

		void print()
		{
			for(int i=0; i<V; i++)
			{
				cout<<"["<<i+1<<"]: ";
				edge* j=adj[i].head;
				while(j!=nullptr)
				{
					cout<<j->vertex+1<<"\t";
					j=j->next;
				}
				cout<<endl;
			}
		}	
};