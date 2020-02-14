# include <iostream>
# include "./include/Graph.hpp"
# include <set>

using namespace std;

void visit(Graph & g, set<int> & visited, int vertex)
{
    //cout << "Visiting: " << vertex << endl; 
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

void dfs(Graph & g)
{
    int start = 0;
    set<int> visited;
    visit(g, visited, start);
}

int main() {
    Graph g("input.txt");
    dfs(g);
}