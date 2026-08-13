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
    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    // BFS Traversal.
    void bfs() {
        std::queue<int> Q;
        std::vector<bool>  vis(v, false);

        Q.push(0);
        vis[0] = true;

        while (!Q.empty()) {
            int u = Q.front(); // Source - Destination (u - v)
            Q.pop();

            std::cout << u << " ";
            for (int v : l[u]) {
                if (!vis[v]) {
                    vis[v] = true;
                    Q.push(v);
                }
            }
        }
        std::cout << std::endl;
    }

};
int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);

    g.bfs();
    return 0;
}