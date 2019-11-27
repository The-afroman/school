// ===================================================
// Program: Assignment 10 (A-star, Djikstra, MST)
// ===================================================
// Programmer: Garrett Geesink and Faris Hijazi
// Class: CS 1D 5 PM class, Tues/Thurs
// ===================================================
// This program uses A-star pathfinding to find the shortest
// distance through a graph of cities, and also finds the
// Minimum Spanning Tree of the graph using Kruskal's algorithm
// ===================================================

#include "MST.h"
#include "adjListGraph.h"
using namespace std;
#define SIZE 12

int main()
{
	cout << "\n================= Part 1 =======================\n";
	graphAdjList graph1;

	std::cout << "ADJACENCY LIST:" << std::endl << std::endl;
	std::string Seattle{ "Seattle" }, Chicago{ "Chicago" }, Denver{ "Denver" },
		SanFrancisco{ "San Francisco" }, KansasCity{ "Kansas City" }, NewYork{ "New York" },
		Boston{ "Boston" }, LosAngeles{ "Los Angeles" }, Dallas{ "Dallas" },
		Atlanta{ "Atlanta" }, Houston{ "Houston" }, Miami{ "Miami" };

	graph1.addEdge(Seattle, Chicago, 2097);
	graph1.addEdge(Seattle, Denver, 1331);
	graph1.addEdge(Seattle, SanFrancisco, 807);
	graph1.addEdge(Chicago, Denver, 1003);
	graph1.addEdge(Chicago, KansasCity, 533);
	graph1.addEdge(Chicago, NewYork, 787);
	graph1.addEdge(Chicago, Boston, 983);
	graph1.addEdge(SanFrancisco, Denver, 1267);
	graph1.addEdge(SanFrancisco, LosAngeles, 381);
	graph1.addEdge(Denver, LosAngeles, 1015);
	graph1.addEdge(Denver, KansasCity, 599);
	graph1.addEdge(LosAngeles, KansasCity, 1663);
	graph1.addEdge(LosAngeles, Dallas, 1435);
	graph1.addEdge(KansasCity, Dallas, 496);
	graph1.addEdge(KansasCity, NewYork, 1260);
	graph1.addEdge(KansasCity, Atlanta, 864);
	graph1.addEdge(Dallas, Atlanta, 781);
	graph1.addEdge(Dallas, Houston, 239);
	graph1.addEdge(Houston, Atlanta, 810);
	graph1.addEdge(Houston, Miami, 1187);
	graph1.addEdge(Miami, Atlanta, 661);
	graph1.addEdge(Atlanta, NewYork, 888);
	graph1.addEdge(NewYork, Boston, 214);
	graph1.sortByDist();
	graph1.printGraph();

	std::cout << "___________PART A___________\n\n";
	graph1.aStarSearch(Atlanta, Miami);
	graph1.aStarSearch(Atlanta, Houston);
	graph1.aStarSearch(Atlanta, Dallas);
	graph1.aStarSearch(Atlanta, KansasCity);
	graph1.aStarSearch(Atlanta, NewYork);
	graph1.aStarSearch(Atlanta, Boston);
	graph1.aStarSearch(Atlanta, Chicago);
	graph1.aStarSearch(Atlanta, Denver);
	graph1.aStarSearch(Atlanta, LosAngeles);
	graph1.aStarSearch(Atlanta, SanFrancisco);
	graph1.aStarSearch(Atlanta, Seattle);

	cout << "\n================= Part 2 =======================";
	string cities[SIZE] = { "Seattle","Chicago","Boston","San Francisco","Denver","Los Angeles",
								"Kansas City","New York","Dallas","Atlanta","Houston","Miami" };
	Graph<string> gB(cities, SIZE);
	gB.addEdge("Chicago", "Boston", 983);
	gB.addEdge("Chicago", "Seattle", 2097);
	gB.addEdge("Boston", "New York", 214);
	gB.addEdge("Seattle", "San Francisco", 807);
	gB.addEdge("Seattle", "Denver", 1331);
	gB.addEdge("San Francisco", "Los Angeles", 381);
	gB.addEdge("Los Angeles", "Denver", 1015);
	gB.addEdge("Dallas", "Kansas City", 496);
	gB.addEdge("Dallas", "Atlanta", 781);
	gB.addEdge("Dallas", "Los Angeles", 1435);
	gB.addEdge("Houston", "Dallas", 239);
	gB.addEdge("Houston", "Atlanta", 810);
	gB.addEdge("Miami", "Houston", 1187);
	gB.addEdge("Atlanta", "Miami", 661);
	gB.addEdge("New York", "Chicago", 787);
	gB.addEdge("New York", "Atlanta", 888);
	gB.addEdge("Denver", "Chicago", 1003);
	gB.addEdge("Denver", "San Francisco", 1267);
	gB.addEdge("Kansas City", "Chicago", 533);
	gB.addEdge("Kansas City", "Denver", 599);
	gB.addEdge("Kansas City", "Atlanta", 864);
	gB.addEdge("Kansas City", "New York", 1260);
	gB.addEdge("Kansas City", "Los Angeles", 1663);

	cout << "\nMST using Kruskal's algorithm:\n\n";

	int w = gB.kruskalMST(cities);

	cout << "\nMST mileage: " << w << "\n";


	system("pause");
	return 0;
}

// ===================================================
/* OUTPUT:

*/
// ===================================================