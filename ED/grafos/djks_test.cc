#include <bits/stdc++.h>
using namespace std;

typedef pair<double,int> di;

class grafo
{
	int V;
	vector<vector<di>>adj;

	public:
	grafo(int _V);
	void insert(int u, int v, double w);
	void dijkstra(int s);
};

grafo::grafo(int _V)
{
	this->V = _V;
	adj.resize(V);
}

void grafo::insert(int u, int v, double w)
{
	adj[u].push_back(make_pair(w, v));
}

void grafo::dijkstra(int s)
{
	priority_queue<di, vector<di>, greater<di>>pq;
	vector<double>dist(V, numeric_limits<double>::max()/2.0);

	pq.push(make_pair(0.0, s));
	dist[s]=0.0;

	while(!pq.empty())
	{
		int u = pq.top().second;
		pq.pop();

		for(auto x : adj[u])
		{
			int v = x.second;
			double w = x.first;

			if(dist[v] > dist[u] + w)
			{
				dist[v] = dist[u] + w;
				pq.push(make_pair(dist[v], v));
			}
		}
	}
	
	for(int i = 0; i<V; i++)
	{
		cout<<i<<": "<<dist[i]<<endl;
	}
}

int main()
{
	
	int V = 6;
	grafo G(V);

	G.insert(0,1,10);
	G.insert(0,2,5);
	G.insert(2,1,3);
	G.insert(2,3,8);
	G.insert(1,3,1);
	G.insert(2,4,2);
	G.insert(4,5,6);
	G.insert(3,4,4);
	G.insert(3,5,4);

	G.dijkstra(0);
		
	exit(0);
}
