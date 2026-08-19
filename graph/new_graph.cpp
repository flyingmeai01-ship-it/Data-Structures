#include <iostream>
#include <vector>
#include <list>

class Graph {
    int v;
    std::list<int> *l; // *array

public: 
    Graph (int v) {
        this -> v = v;
        // array = new int[v]
        l = new std::list<int> [v];
    }
    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print_Adj_list() {
        for (int i = 0; i < v; i++) {
            std::cout << i << " : ";
            for (int neigh : l[i]) {
                std::cout << neigh << " ";
            }
            std::cout << std::endl;
        }
    }
};
int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    
    g.print_Adj_list();
    return 0;
}