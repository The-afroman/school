/**************************
* Faris Hijazi
* CS1D
* Assignment 8
**************************/

#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

const int LIST_SIZE = 12;

enum Cities
{
    Chicago, Seattle, Boston, Denver, Houston, LosAngeles,
    KansasCity, Atlanta, Dallas, Miami, SanFrancisco, NewYork
};

std::string findName( int i );

class graphAdjList
{
    struct graph{
        std::vector<std::pair<int,int>> adjL;
        std::string name;
    };

    public:
        void addEdge( int v1, int v2, int distance );
        void DFS1();
        void DFS2(int u, std::vector<bool> &visited, std::vector<int>& recStack, int distance);
        void printGraph();
        void sortByDist();
    
    private:
        int numVerts = 0;
        int numEdges = 0;
        graph g[LIST_SIZE];
};

void graphAdjList::addEdge( int v1, int v2, int distance )
{
    g[v1].adjL.push_back(std::make_pair(v2,distance)); 
    g[v2].adjL.push_back(std::make_pair(v1,distance));
    g[v1].name = findName(v1);
    g[v2].name = findName(v2);
}

std::string findName( int i )
{
    switch(i)
    {
        case Seattle: return "Seattle";
        case Chicago: return "Chicago";
        case Boston: return "Boston";
        case SanFrancisco: return "San Francisco";
        case NewYork: return "New York";
        case LosAngeles: return "Los Angeles";
        case Denver: return "Denver";
        case KansasCity: return "Kansas City";
        case Atlanta: return "Atlanta";
        case Dallas: return "Dallas";
        case Houston: return "Houston";
        case Miami: return "Miami";
    }
    return "NA";
}

// Print adjacency list representaion ot graph 
void graphAdjList::printGraph() 
{ 
    std::string s; 
    int w; 
    for (int u = 0; u < LIST_SIZE; u++) 
    { 
        std::cout << "Node " << g[u].name << " makes an edge with \n"; 
        for (auto it = g[u].adjL.begin(); it!=g[u].adjL.end(); it++) 
        { 
            s = findName(it->first); 
            w = it->second; 
            std::cout << "\tNode " << s << " with weight = "
                 << w << "\n"; 
        } 
        std::cout << "\n"; 
    } 
}

struct comparator {
  bool operator() (std::pair<int,int> i, std::pair<int,int> j) 
  { return (i.second<j.second);}
} lessthan;

void graphAdjList::sortByDist()
{
    for(int i = 0; i < LIST_SIZE; i++)
    {
        std::sort(g[i].adjL.begin(), g[i].adjL.end(), lessthan);
    }
}

// A utility function to do DFS of graph 
// recursively from a given vertex u. 
void graphAdjList::DFS2(int u, std::vector<bool> &visited, std::vector<int>& recStack, int distance) 
{
    visited[u] = true;
    recStack.push_back(u);
    std::vector<int> visStack;
    std::cout << findName(u) << " ";
    for (int i=0; i < g[u].adjL.size(); i++)
    {
        if (!visited[g[u].adjL.at(i).first])
        {
            DFS2(g[u].adjL.at(i).first, visited, recStack, distance);
        }
        else
        {
            visStack.push_back(g[u].adjL.at(i).first);
            bool resume = true;
            for(int i = 0; i < visited.size(); i++)
            {
                if(!visited[i])
                {
                    resume = true;
                    break;
                }
                resume = false;
            }
            
            if(visStack.size() == g[u].adjL.size() && resume)
            {
                std::vector<int>::iterator it = recStack.end();
                it-=2;
                std::cout << " BACK EDGE: " << findName(u) << ", " << findName(*it) << std::endl;
                break;
            }
        }
    }
}
  
// This function does DFSUtil() for all  
// unvisited vertices. 
void graphAdjList::DFS1() 
{ 
    std::vector<bool> visited(LIST_SIZE, false);
    std::vector<int> recStack;
    int distance = 0;
    DFS2(0, visited, recStack, distance);
    distance = 0;

    for(int i = 0; i < recStack.size(); i++)
    {
        //std::cout << recStack[i] << std::endl;
        for(int j = 0; j < g[i].adjL.size(); j++)
            if(g[i].adjL.at(j).first == recStack[i+1])
                distance += g[i].adjL.at(j).second;
    }
}