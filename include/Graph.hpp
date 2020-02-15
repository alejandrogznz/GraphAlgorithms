# ifndef GRAPHS_INC_GRAPH_H
# define GRAPHS_INC_GRAPH_H

# include <vector>
# include <iostream>
# include <string>
# include <fstream>
# include <map>
# include <set>

class Graph {

protected:

    std::map<int, std::set<int>> adjList;

    std::set<int> vertices;

public:

    Graph(); // Empty Graph, can add Edges & vertices to populate it

    Graph(const char * inputFile);

    void addVertex(int v);

    void addEdge(int src, int dest);

    std::set<int> getEdges();

    std::set<int> getEdges(int vertex);

    std::set<int> getVertices();

private:

    void readGraphFromFile(const char * inputFile);

    
};

# endif