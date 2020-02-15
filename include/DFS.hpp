# ifndef GRAPHS_INC_DFS_HPP
# define GRAPHS_INC_DFS_HPP

# include "Graph.hpp"

class DFS {
public:

    static void dfs(Graph & g, int src);

private:

    static void visit(Graph & g, std::set<int> & visited, int vertex);
};

# endif // GRAPH_INC_DFS_HPP
