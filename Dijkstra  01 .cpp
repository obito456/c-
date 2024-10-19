#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> dijkstra(int v, vector<vector<int>> adj[], int s) {
        // Min-heap priority queue to store {distance, node}
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(v, 1e9);  // Initialize distances to all nodes as infinity (1e9)
        
        dist[s] = 0;  // Distance to the source is 0
        pq.push({0, s});  // Start with the source node

        while (!pq.empty()) {
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            // Traverse all adjacent nodes
            for (auto it : adj[node]) {
                int adjNode = it[0];
                int edgeWeight = it[1];

                // Check if going through the current node offers a shorter path
                if (dis + edgeWeight < dist[adjNode]) {
                    dist[adjNode] = dis + edgeWeight;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }
        return dist;  // Return the computed shortest distances
    }
};

int main() {
    int v = 4;  // Number of vertices
    vector<vector<int>> adj[v];  // Adjacency list representation

    // Add edges
    adj[0].push_back({1, 10});
    adj[0].push_back({2, 5});
    adj[1].push_back({3, 20});
    adj[2].push_back({3, 15});

    Solution obj;
    int source = 0;  // Starting node
    vector<int> dist = obj.dijkstra(v, adj, source);

    // Output the shortest distances from the source node
    cout << "Shortest distances from node " << source << ":\n";
    for (int i = 0; i < dist.size(); i++) {
        cout << "Distance to node " << i << " is " << dist[i] << endl;
    }

    return 0;
}
