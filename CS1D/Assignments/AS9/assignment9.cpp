/**************************
* Faris Hijazi
* CS1D
* Assignment 8
**************************/

#include "graphAdjList.h"

int main()
{
    graphAdjList graph1;
  

    std::cout<< "ADJACENCY LIST:" << std::endl << std::endl;

    graph1.addEdge(Seattle, Denver, 1331);
    graph1.addEdge(Seattle, SanFrancisco, 807);
    graph1.addEdge(Chicago, Seattle, 2097);
    graph1.addEdge(Chicago, Boston, 983);
    graph1.addEdge(Denver, Chicago, 1003);
    graph1.addEdge(KansasCity, Chicago, 533);
    graph1.addEdge(NewYork, Chicago, 787);
    graph1.addEdge(Denver, SanFrancisco, 1267);
    graph1.addEdge(SanFrancisco, LosAngeles, 381);
    graph1.addEdge(LosAngeles, Denver, 1015);
    graph1.addEdge(KansasCity, Denver, 599);
    graph1.addEdge(KansasCity, LosAngeles, 1663);
    graph1.addEdge(Dallas, LosAngeles, 1435);
    graph1.addEdge(Dallas, KansasCity, 496);
    graph1.addEdge(KansasCity, NewYork, 1260);
    graph1.addEdge(KansasCity, Atlanta, 864);
    graph1.addEdge(Dallas, Atlanta, 781);
    graph1.addEdge(Houston, Dallas, 239);
    graph1.addEdge(Houston, Atlanta, 810);
    graph1.addEdge(Miami, Houston, 1187);
    graph1.addEdge(Atlanta, Miami, 661);
    graph1.addEdge(NewYork, Atlanta, 888);
    graph1.addEdge(Boston, NewYork, 214);
    graph1.sortByDist();
    graph1.printGraph();
    std::cout << std::endl << std::endl << "DFS TRAVERSAL: \n";
    graph1.DFS1();

    graph1.checkConnection();

    return 0;
}