#include"lista.cc"
using namespace std;

class grafo_adj{
	private:
		int V;
		int E;
		bool* visitados;
		lista fila_bfs;
		lista* adj;
	public:
		grafo_adj(int _V);
		~grafo_adj();
		void insert(int v, int w, double p);
		void print();
		void reset_visitados();
		void get_visitados();
		void BFS(int s);
		void DFS(int s);
		void Dijkstra();
};

grafo_adj::grafo_adj(int _V)
{
	this->V = _V;
	this->E = 0;
	this->visitados = (bool*) calloc(_V, sizeof(bool));
	this->adj = new lista[V];
}

grafo_adj::~grafo_adj()
{	
	free(this->visitados);
	delete[] this->adj;
}

void grafo_adj::insert(int v, int w, double p)
{
	if(v>=V || w>=V)
	{
		cout<<"aresta "<<v<<" -> "<<w<<" invalida, o grafo vai ate o vertice de rotulo "<<V-1<<"."<<endl;
		return;
	}
	this->adj[v].insert(w, p);
	E++;
}

void grafo_adj::print()
{
    	for(int v = 0; v < V; v++) {
        	cout << v << ": ";
        	adj[v].print();
   	 }
}

void grafo_adj::BFS(int s)
{
	this->reset_visitados();
	this->visitados[s]=1;
	cout<<"visitado o no: "<<s<<endl;
	
	this->fila_bfs.insert(s);
	
	while(fila_bfs.tamanho > 0)
	{
		int u = this->fila_bfs.dequeue();
		no* p = this->adj[u].cabeca;

		for(;p!=nullptr;p=p->prox)
		{
			if(this->visitados[p->item]==0)
			{
				this->visitados[p->item]=1;
				this->fila_bfs.insert(p->item);
				cout<<"visitado: "<<p->item<<endl;
			}
		}
		cout<<"todos os visinhos de "<<u<< " foram visitados"<<endl;
	}
	cout<<endl;
}

void grafo_adj::DFS(int s)
{
	this->visitados[s]=1;
	cout<<"visitado o no: "<<s<<endl;

	no* p = this->adj[s].cabeca;
	for(;p!=nullptr;p=p->prox)
	{
		if(visitados[p->item]==0)
		{
			DFS(p->item);
		}	
	}
}

void grafo_adj::reset_visitados()
{
	for(int i=0; i<V ;i++)
	{
		this->visitados[i]=0;
	}
}

void grafo_adj::get_visitados()
{
	for(int i=0; i<V; i++)
	{
		cout<<"vertice "<<i<<": "<<this->visitados[i]<<endl;
	}
	cout<<endl;
}

int main()
{
	int V,E,v,w,p;
	cin>>V>>E;

	grafo_adj G(V);

	while(E--)
	{
		cin>>v>>w>>p;
		G.insert(v,w,p);
	}

    	G.print();

	cout<<endl;

	G.get_visitados();

	cout<<"BFS(0)"<<endl;

	G.BFS(0);

	cout<<endl;

	G.get_visitados();

	cout<<endl;

	G.reset_visitados();

	G.get_visitados();	

	cout<<"DFS(0)"<<endl;
	
	G.DFS(0);

	cout<<endl;

	G.get_visitados();
	
	exit(0);
}
