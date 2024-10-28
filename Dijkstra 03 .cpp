#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#include <iomanip>
#include <algorithm>
using namespace std;

const int INF = numeric_limits<int>::max();

class Graph {
    int vertex;  
    vector<vector<pair<int, int>>> adj;

public:
    Graph(int n) : vertex(n), adj(n) {}

    void addEdge(int u, int v, int weight) {
        adj[u].push_back({v, weight});
        adj[v].push_back({u, weight});
    }

    void dijkstra(int start) {
        vector<int> dist(vertex, INF);
        vector<int> predecessor(vertex, -1);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        dist[start] = 0;
        pq.push({0, start});

        while (!pq.empty()) {
            int currentVertex = pq.top().second;
            int currentDist = pq.top().first;
            pq.pop();

            if (currentDist > dist[currentVertex]) continue;

            for (const auto& edge : adj[currentVertex]) {
                int neighborVertex = edge.first;
                int weight = edge.second;
                int newDist = dist[currentVertex] + weight;

                if (newDist < dist[neighborVertex]) { 
                    dist[neighborVertex] = newDist;
                    predecessor[neighborVertex] = currentVertex;
                    pq.push({dist[neighborVertex], neighborVertex});
                }
            }
        }

        cout << "Vertex   Distance from Source   Path" << endl;
        for (int i = 0; i < vertex; i++) {
            if (dist[i] == INF) {
                cout << i << "\t\t" << "Unreachable" << "\t\t" << "N/A" << endl;
            } else {
                cout << i << "\t\t" << dist[i] << "\t\t";
                vector<int> path;
                for (int v = i; v != -1; v = predecessor[v]) {
                    path.push_back(v);
                }
                reverse(path.begin(), path.end());
                for (int v : path) {
                    cout << v << " ";
                }
                cout << endl;
            }
        }
    }
};

int main() {
    Graph g(4);
    g.addEdge(0, 1, 5);
    g.addEdge(0, 3, 3);
    g.addEdge(1, 2, 6);
    g.addEdge(2, 3, 4);

    cout << "Dijkstra's Algorithm starting from node 0:" << endl;
    g.dijkstra(0);

    return 0;
}

/* 
                 5
        (0)--------------(1)
         |                |
        4|                |6
         |                |
         |                |
        (3)--------------(2)
                 4

    adj[0] = { {1, 5}, {3, 3} };
    adj[1] = { {0, 5}, {2, 6} }; 
    adj[2] = { {1, 6}, {3, 4} };
    adj[3] = { {0, 3}, {2, 4} }; 

*/
