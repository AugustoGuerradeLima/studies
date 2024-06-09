#include"lista.cc"
using namespace std;

class grafo_adj{
	private:
		int V;
		int E;
		lista* adj;
	public:
		grafo_adj(int _V);
		~grafo_adj();
		void insert(int v, int w);
		void print();
		void BFS();
		void DFS();
		void Dijkstra();
};

grafo_adj::grafo_adj(int _V)
{
	this->V = _V;
	this->adj = new lista[V];
}

grafo_adj::~grafo_adj()
{
	for (int i = 0; i < V; ++i) {
        	adj[i].~lista();
    	}
    	delete[] adj;
}

void grafo_adj::insert(int v, int w)
{
	if(v>=V || w>=V)return;

	this->adj[v].insert(w);
	E++;
}

void grafo_adj::print()
{
    	for(int v = 0; v < V; v++) {
        	cout << v << ": ";
        	adj[v].print();
   	 }
}

void grafo_adj::BFS()
{
	
}

int main()
{
	int V,E,v,w;
	cin>>V>>E;

	grafo_adj G(V);

	while(E--)
	{
		cin>>v>>w;
		G.insert(v,w);
	}

    	cout << "Lista de Adjacência do Grafo:" << endl;
    	G.print();
	
	exit(0);
}
