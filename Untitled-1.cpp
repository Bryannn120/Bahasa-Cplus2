#include <iostream>
#include <list>

class Graph {
private:
    int numVertices; // Jumlah simpul
    std::list<int> *adjLists; // Array dari daftar tetangga

public:
    Graph(int vertices) {
        numVertices = vertices;
        adjLists = new std::list<int>[vertices];
    }

    ~Graph() {
        delete[] adjLists;
    }

    void addEdge(int src, int dest) {
        adjLists[src].push_back(dest);
        adjLists[dest].push_back(src);
    }

    void printGraph() {
        for (int i = 0; i < numVertices; i++) {
            std::cout << "Adjacency list of vertex " << i << ": ";
            for (int neighbor : adjLists[i]) {
                std::cout << neighbor << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Graph graph(4); // Membuat objek graph dengan 4 simpul

    // Menambahkan edge (sisi) antara simpul-simpul
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 0);

    // Mencetak graf
    graph.printGraph();

    return 0;
}