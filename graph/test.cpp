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
    void print() {
        for (int i = 0; i < v; i ++) {
            std::cout << i << " : ";
            for (int val : l[i]) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
    }
    // BFS Traversal
    void bfs() {
        std::queue<int> q;
        std::vector<bool> vist(v, false);

        q.push(0);
        vist[0] = true;

        while (!q.empty()) {
            int u = q.front(); // Source - Destination.
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

};
int main() {
    Graph ben(6);
    ben.add_Edge(0, 1);
    ben.add_Edge(1, 2);
    ben.add_Edge(1, 3);
    ben.add_Edge(2, 4);
    ben.add_Edge(3, 4);
    ben.add_Edge(4, 5);

    ben.print();
    ben.bfs();
    return 0;
}