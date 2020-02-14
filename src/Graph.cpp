# include "../include/Graph.hpp"

using namespace std;

Graph::Graph()
{
    // Empty Graph, insert edges and vertices with
    // Graph::addEdge()
    // Graph::addVertex()
}

Graph::Graph(const char * inputFile) 
{   
    readGraphFromFile(inputFile);
}

void Graph::addVertex(int v)
{
    vertices.insert(v);
    return;
}

void Graph::addEdge(int src, int dest)
{
    adjList[src].insert(dest);
    vertices.insert(src);
    vertices.insert(dest);
    return;
}

set<int> Graph::getEdges(int vertex)
{
    set<int> outEdges = adjList[vertex];
    return outEdges;
}

set<int> Graph::getVertices()
{
    return vertices;
}

void Graph::readGraphFromFile(const char * inputFile)
{
    ifstream ifs("input.txt", ifstream::in);
    int src;
    int dest;
    while (!ifs.eof())
    {
        ifs >> src >> dest;
        //cout << src << " " << dest << endl;
        vertices.insert(src);
        vertices.insert(dest);
        adjList[src].insert(dest);
    }

    /*
    for (auto p : adjList) 
    {
        cout << p.first << ": ";
        for (auto e : p.second)
        {
            cout << e << ", ";
        }
        cout << endl;
    }
    */
}