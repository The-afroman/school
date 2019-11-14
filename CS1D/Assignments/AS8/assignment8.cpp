/**************************
* Faris Hijazi
* CS1D
* Assignment 8
**************************/

#include "graphAdjMatrix.h"

int main()
{
    graphAdjList graph1;
    graphAdjMatrix graph2;

    std::cout<< "ADJACENCY LIST:" << std::endl << std::endl;

    graph1.addEdge(Seattle, Chicago, 2097);
    graph1.addEdge(Seattle, Denver, 1331);
    graph1.addEdge(Seattle, SanFrancisco, 807);
    graph1.addEdge(Chicago, Denver, 1003);
    graph1.addEdge(Chicago, KansasCity, 533);
    graph1.addEdge(Chicago, NewYork, 214);
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
    std::cout << std::endl << std::endl << "DFS TRAVERSAL: ";
    graph1.DFS1();

    std::cout << std::endl << std::endl;
    graph2.addEdge(NewYork, Boston, 214);
    graph2.addEdge(Dallas, Houston, 239);
    graph2.addEdge(SanFrancisco, LosAngeles, 381);
    graph2.addEdge(KansasCity, Dallas, 496);
    graph2.addEdge(Chicago, KansasCity, 533);
    graph2.addEdge(Denver, KansasCity, 599);
    graph2.addEdge(Miami, Atlanta, 661);
    graph2.addEdge(Dallas, Atlanta, 781);
    graph2.addEdge(Chicago, NewYork, 787);
    graph2.addEdge(Seattle, SanFrancisco, 807);
    graph2.addEdge(Houston, Atlanta, 810);
    graph2.addEdge(KansasCity, Atlanta, 864);
    graph2.addEdge(Atlanta, NewYork, 888);
    graph2.addEdge(Chicago, Boston, 983);
    graph2.addEdge(Chicago, Denver, 1003);
    graph2.addEdge(Denver, LosAngeles, 1015);
    graph2.addEdge(Houston, Miami, 1187);
    graph2.addEdge(KansasCity, NewYork, 1260);
    graph2.addEdge(SanFrancisco, Denver, 1267);
    graph2.addEdge(Seattle, Denver, 1331);
    graph2.addEdge(LosAngeles, Dallas, 1435);
    graph2.addEdge(LosAngeles, KansasCity, 1663);
    graph2.addEdge(Seattle, Chicago, 2097);
    
    
    
    
    

    graph2.print();
    std::cout << "BFS TRAVERSAL: ";
    graph2.BFS(Chicago);

    return 0;
}