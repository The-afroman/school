/**************************
* Faris Hijazi
* CS1D
* Assignment 8
**************************/

#include "graphAdjList.h"
#include <iomanip>

const int EDGES = 23;

class graphAdjMatrix { 
    
    void sortQ(std::vector<int>& v, int vis);
    
    // Number of vertex 
    int v;
  
    // Number of edges 
    int e;
  
    // Adjacency matrix 
    int** adj;
  
public: 
    // To create the initial adjacency matrix 
    graphAdjMatrix(int v, int e); 
  
    // Function to insert a new edge 
    void addEdge(int start, int e, int distance); 
  
    // Function to display the BFS traversal 
    void BFS(int start);

    // Print adjMatrix
    void print();
}; 
  
// Function to fill the empty adjacency matrix 
graphAdjMatrix::graphAdjMatrix(int v = LIST_SIZE, int e = EDGES) 
{ 
    this->v = v; 
    this->e = e; 
    adj = new int*[v]; 
    for (int row = 0; row < v; row++) { 
        adj[row] = new int[v]; 
        for (int column = 0; column < v; column++) { 
            adj[row][column] = 0; 
        } 
    } 
} 
  
// Function to add an edge to the graph 
void graphAdjMatrix::addEdge(int start, int e, int distance) 
{ 
  
    // Considering a bidirectional edge 
    adj[start][e] = distance; 
    adj[e][start] = distance; 
}

// print adj matrix
void graphAdjMatrix::print()
{
    std::cout << "ADJACENCY MATRIX: \n"
              << "ROW/COL KEY: Chicago=0, Seattle=1, Boston=2, Denver=3, Houston=4, Los Angeles=5,\n"
              << "Kansas City=6, Atlanta=7, Dallas=8, Miami=9, San Francisco=10, New York=11\n\n";

    std::cout << std::setw(8) << " ";
    for( int i = 0; i < LIST_SIZE; i++ )
        std::cout << std::setw(5) << std::left << i;
    std::cout << "\n\n\n";
    
    for( int i = 0; i < LIST_SIZE; i++ )
    {
        std::cout << std::setw(8) << std::left << i;
        for (int j = 0; j < LIST_SIZE; j++)
            std::cout << std::setw(5) << adj[i][j];
        
        std::cout << std::endl << std::endl;
    }
    std::cout << std::endl;
}

struct comparatorLess {
        bool operator() (int i, int j) 
        { return (i < j);}
}lessthanBFS;

void graphAdjMatrix::sortQ(std::vector<int>& v, int vis)
{
    std::vector<int> distance;
    std::cout <<"\n";
    for(std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        //std::cout << *i  << " ";
        distance.push_back(adj[vis][*i]);
    }

    for(std::vector<int>::iterator i = distance.begin(); i != distance.end(); i++)
    {
        for(int j = 0; j < LIST_SIZE; j++)
        {
            if(adj[vis][j] == *i);
            v.push_back(j);
        }
    }
}

// Function to perform BFS on the graph 
void graphAdjMatrix::BFS(int start) 
{ 
    // Visited vector to so that 
    // a vertex is not visited more than once 
    // Initializing the vector to false as no 
    // vertex is visited at the beginning 
    int distance = 0;
    int smallest;
    std::vector<bool> visited(v, false); 
    std::vector<int> q; 
    q.push_back(start); 
  
    // Set source as visited 
    visited[start] = true; 
  
    int vis; 
    while (!q.empty()) { 
        vis = q[0]; 
  
        // Print the current node 
        std::cout << findName(vis) << " "; 
        q.erase(q.begin()); 
  
        // For every adjacent vertex to the current vertex 
        for (int i = 0; i < v; i++) { 
            if (adj[vis][i] > 0 && (!visited[i])) { 
                // Push the adjacent node to the queue 
                q.push_back(i); 
                distance += adj[vis][i];
  
                // Set 
                visited[i] = true;
            } 
        }
    } 
    std::cout <<"\n\nDISTANCE: " << distance;
} 
