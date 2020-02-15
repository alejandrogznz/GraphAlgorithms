# include "../include/DFS.hpp"

using namespace std;

void DFS::dfs(Graph & g, int src) {
    int start = 0;
    set<int> visited;
    visit(g, visited, start);
}

void  DFS::visit(Graph & g, set<int> & visited, int vertex) {
    visited.insert(vertex);
    set<int> outgoing = g.getEdges(vertex);
    for (auto o : outgoing) 
    {
        if (visited.count(o) == 0) 
        {
            cout << "DFS Edge: " << vertex << " -> " << o << endl;
            visit(g, visited, o);
        }
    }
}