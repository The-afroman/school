/**
 * Faris Hijazi
 * Assignment 10
 * CS-1D
 */

#include "adjListGraph.h"

static comparator lessthan;

graphAdjList::graphAdjList()
{
    g = new std::map<std::string, vertex>;
    addTeamEdges();
}

graphAdjList::~graphAdjList()
{
    delete g;
}

void graphAdjList::addEdge( std::string v1, std::string v2, int distance )
{
    Edge e1 {v1,v2,distance}, e2 {v2,v1,distance};
    vertex first, second;
    if(g->find(v1) == g->end())
    {
        first.adjL.push_back(e1);
        first.vert = v1;
        g->insert( std::pair<std::string, vertex>(v1, first) );
  
    }
    else
    {
        g->at(v1).adjL.push_back(e1);
        g->at(v1).vert = v1;
    }

    if(g->find(v2) == g->end())
    {
        second.adjL.push_back(e2);
        second.vert = v2;
        g->insert( std::pair<std::string, vertex>(v2, second) );
    }
    else
    {
        g->at(v2).adjL.push_back(e2);
        g->at(v2).vert = v2;
    }
}

void graphAdjList::addTeamEdges()
{
    /** 
    std::vector<std::string> teams = queryTeamNames();
    for(auto i = teams.begin(); i != teams.end(); i++)
    {
        vertex *v = new vertex;
        v->adjL = queryEdges(*i);
        v->vertex = *i;
        g->insert( std::pair<std::string, vertex>(*i, *v) );
        delete v;
    }
    */
}

graphAdjList::graphAdjList(std::map<std::string, vertex> *newG)
{
    g = newG;
}

// Print adjacency list representaion ot graph
void graphAdjList::printGraph()
{
    std::string s;
    int w;
    for (std::map<std::string, vertex>::iterator i = g->begin(); i!=g->end(); i++)
    {
        std::cout << "Node " << i->second.vert << " makes an edge with \n";
        for (auto j = i->second.adjL.begin(); j!=i->second.adjL.end(); j++)
        {
            s = j->end;
            w = j->distance;
            std::cout << "\tNode " << s << " with weight = "
                 << w << "\n";
        }
        std::cout << "\n";
    }
}

void graphAdjList::sortByDist()
{
    for(std::map<std::string, vertex>::iterator i = g->begin(); i!=g->end(); i++)
    {
        std::sort(i->second.adjL.begin(), i->second.adjL.end(), lessthan);
    }
}

bool compF(vertex a, vertex b) 
{ 
    return (a.c < b.c);
} 

void graphAdjList::aStarSearch(std::string start, std::string endPoint)
{
    std::vector<vertex> openList;
    std::vector<vertex> closedList;
    std::vector<vertex> path;
    vertex q = g->at(start); //current node
    int distance = 0;
    
    closedList.push_back(q);
    while(endPoint != q.vert)
    {
        for(auto i: g->at(q.vert).adjL)
        {
            g->at(i.end).c = q.c + i.distance;
            g->at(i.end).parent = new vertex(q);
            openList.push_back(g->at(i.end));
        }

        for(auto i: closedList)
        {
            for(auto j = openList.begin(); j != openList.end(); j++)
            {
                if(i.vert == j->vert)
                {
                    openList.erase(j);
                    j--;
                }
            }
        }
        std::sort(openList.begin(), openList.end(), compF);
        q = openList.front();
        closedList.push_back(q);
    }
    
    path.push_back(q);
    while(path.back().vert != start)
    {
       //count++;
       path.push_back( *path.back().parent );
    }

    std::cout << "FROM " << start << " to " << endPoint << "\n\t";
    auto it = path.begin();
    for(auto i: path)
    {
        std::cout << i.vert;
        if(it != path.end()-1)
            std::cout << " <-- ";
        it++;
    }

    for(auto i = path.begin(); i!=path.end()-1; i++)
    {
        for(auto j: i->adjL)
            if(i->parent->vert == j.end)
                distance += j.distance;
    }
    std::cout << "  -  DISTANCE: " << distance << std::endl << std::endl;
}
