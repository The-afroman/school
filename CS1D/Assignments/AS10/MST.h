#ifndef MST
#define MST

// C++ program for Kruskal's algorithm to find Minimum 
// Spanning Tree of a given connected, undirected and 
// weighted graph 
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
using namespace std;

template<typename T>
struct Edg;

template <typename T>
struct Vertex
{
	T value = NULL;
	bool visited = false;
	int weight = 0;
	vector<Edg<T>> edges;
	Vertex<T> *parent = nullptr;
	// Overloaded constructor
	Vertex<T>(T value, bool visited) : value(value), visited(visited){}

	// Copy constructor
	Vertex<T>(const Vertex<T>& v) : value{ v.value }, visited{ v.visited },
		weight{ v.weight }, parent{ v.parent }, edges{ v.edges }{}
};

template <typename T>
struct Edg
{
	Vertex<T>* vertex;
	int distance;
	Edg<T>() : vertex(new Vertex<T>()), distance(0) {}
	Edg<T>(Vertex<T> *v, int d) : vertex(v), distance(d) {}
};

template<typename T>
class Graph
{
private:
	T V;
	vector<Vertex<T>> cities;
	int numCities;
	int totalMileage;
	vector< pair<int, pair<int, int>>> edges;

public:
	Graph(T* arr, int n);
	void addEdge(T a, T b, int length);
	int kruskalMST(T cities[]);
};

struct DisjointSets
{
	int *parent, *rnk;
	int n;

	DisjointSets(int n)
	{
		this->n = n;
		parent = new int[n + 1];
		rnk = new int[n + 1];
		for (int i = 0; i <= n; i++)
		{
			rnk[i] = 0;
			parent[i] = i;
		}
	}
	int find(int u)
	{
		if (u != parent[u])
			parent[u] = find(parent[u]);
		return parent[u];
	}
	void merge(int x, int y)
	{
		x = find(x), y = find(y);
		if (rnk[x] > rnk[y])
			parent[y] = x;
		else
			parent[x] = y;
		if (rnk[x] == rnk[y])
			rnk[y]++;
	}
};

#endif

template <typename T>
inline int Graph<T>::kruskalMST(T cities[])
{
	int mst_wt = 0;
	sort(edges.begin(), edges.end());
	DisjointSets ds(numCities);
	vector< pair<int, pair<int, int> > >::iterator it;
	for (it = edges.begin(); it != edges.end(); it++)
	{
		int u = it->second.first;
		int v = it->second.second;

		int set_u = ds.find(u);
		int set_v = ds.find(v);

		if (set_u != set_v)
		{
			// Current edge will be in the MST
			// so print it
			cout << cities[u] << " -- " << cities[v] << "  " << it->first << "\n";

			// Update MST weight
			mst_wt += it->first;

			// Merge two sets
			ds.merge(set_u, set_v);
		}
	}

	return mst_wt;
};

template<typename T>
inline void Graph<T>::addEdge(T v1, T v2, int distance)
{
	int id1;
	int id2;
	for (int i = 0; i < numCities; i++)
	{
		if (cities[i].value == v1)
		{
			id2 = 0;
			for (int j = 0; j < numCities; j++)
			{
				if (cities[j].value == v2)
					id2 = j;
			}
			Edg<T> e(&cities[id2], distance);
			cities[i].edges.push_back(e);
		}
		if (cities[i].value == v2)
		{
			id1 = 0;
			for (int j = 0; j < numCities; j++)
			{
				if (cities[j].value == v1)
					id1 = j;
			}
			Edg<T> e(&cities[id1], distance);
			cities[i].edges.push_back(e);
		}
	}
	edges.push_back(make_pair(distance, make_pair(id1, id2)));
}


template<typename T>
inline Graph<T>::Graph(T * arr, int n)
{
	numCities = n;
	for (int i = 0; i < numCities; i++)
	{
		Vertex<T> s(arr[i], false);
		cities.push_back(s);
	}
	totalMileage = 0;
}
