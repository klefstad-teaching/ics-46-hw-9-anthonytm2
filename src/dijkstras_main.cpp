#include "dijkstras.h"

int main() {
    Graph G;
    file_to_graph("src/largest.txt", G);

    int source = 0;
    vector<int> previous(G.size(), UNDEFINED);
    vector<int> distances = dijkstra_shortest_path(G, source, previous);
    
    for (size_t i = 0; i < distances.size(); ++i) {
        vector<int> path = extract_shortest_path(distances, previous, i);
        print_path(path, distances[i]);
    }
    
}