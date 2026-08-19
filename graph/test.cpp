#include <iostream>
#include <vector>
#include <list>
#include <queue>

class Graph {
    int v;
    std::list<int> *l;

public :
    Graph (int v) {
        this -> v = v;
        l = new std::list<int> [v];
    }
    void add_Edge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void bfs() {
        std::queue<int> q;
        std::vector<bool> vist(v, false);

        q.push(0);
        vist[0] = true;

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            std::cout << u << " ";
            for (int v : l[u]) {
                if (!vist[v]) {
                    vist[v] = true;
                    q.push(v);
                }
            }
        }
        std::cout << std::endl;
    }
    void dfs_helper(int u, std::vector<bool> &vist) {
        std::cout << u << " ";
        vist[u] = true;

        for (int v : l[u]) {
            if (!vist[v]) {
                dfs_helper(v, vist);
            }
        }
    }
    void dfs() {
        int src = 0;
        std::vector<bool> vist(v, false);

        dfs_helper(src, vist);
        std::cout << std::endl;
    }
};
int main() {
    Graph graph(5);
    graph.add_Edge(0, 1);
    graph.add_Edge(1, 2);
    graph.add_Edge(1, 3);
    graph.add_Edge(2, 4);

    std::cout << "bfs : ";
    graph.bfs();

    std::cout << "dfs : ";
    graph.dfs();
    return 0;
}