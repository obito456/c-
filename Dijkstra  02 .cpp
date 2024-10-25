#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
using namespace std;

typedef pair<int, int> iPair;

void dijkstra(const vector<vector<iPair>>& graph, int source) {
    int V = graph.size();

    priority_queue<iPair, vector<iPair>, greater<iPair>> pq;

    vector<int> dist(V, INT_MAX);

    pq.push(make_pair(0, source));
    dist[source] = 0;                               //dist[] = {0, ∞, ∞, ∞, ∞}

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto& adj : graph[u]) {
            int v = adj.first;
            int weight = adj.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    cout << "Vertex   Distance from Source\n";
    for (int i = 0; i < V; ++i) {
        cout << i << "\t\t" << dist[i] << "\n";
    }
}

int main() {

    int V = 5;
    vector<vector<iPair>> graph(V);

    // (0)----10-----(1)
    //  |             |
    //  3             2
    //  |             |
    // (4)----1-----(2)----9----(3)
    //    \                     /
    //     \------7------------/


    graph[0].push_back(make_pair(1, 10));
    graph[0].push_back(make_pair(4, 3));
    graph[1].push_back(make_pair(2, 2));
    graph[2].push_back(make_pair(3, 9));
    graph[3].push_back(make_pair(4, 7));
    graph[4].push_back(make_pair(2, 1));

    int source = 0;
    dijkstra(graph, source);

    return 0;
}
