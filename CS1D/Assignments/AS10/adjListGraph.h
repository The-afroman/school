/**
 * Faris Hijazi
 * Assignment 10
 * CS-1D
 */

#ifndef ADJLISTGRAPH_H
#define ADJLISTGRAPH_H

#include <vector>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <algorithm>

struct Edge{
    std::string start;
    std::string end;
    int distance;
};

struct vertex{
    std::vector<Edge> adjL;
    std::string vert;
    vertex* parent;
    // A* path finding cost 
    int c{0};
    int startTime = 0;
    int endTime = 0;
};

struct comparator{
  bool operator() (Edge i, Edge j)
  { return (i.distance < j.distance);}
};

class graphAdjList
{
    public:
        graphAdjList();

        ~graphAdjList();

        graphAdjList(std::map<std::string, vertex> *newG);
        void addEdge( std::string v1, std::string v2, int distance );
        void printGraph();
        void sortByDist();
        void aStarSearch(std::string start, std::string end);
        
    
    private:
        void addTeamEdges();
        //int numVerts = 0;
        //int numEdges = 0;
        int deDist = 0;
        //int beDist = 0;
        int t = 0;
        int listSize;
        std::map<std::string, vertex> *g;
};

#endif
