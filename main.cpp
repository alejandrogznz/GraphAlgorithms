# include <iostream>
# include "./include/Graph.hpp"
# include "./include/DFS.hpp"
# include <set>

using namespace std;

int main() {
    Graph g("input.txt");
    DFS::dfs(g, 0);
}