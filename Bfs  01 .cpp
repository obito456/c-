#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

class Graph {
    vector<vector<int>> adjList;
    vector<bool> visited;
public:
    Graph(int n) : adjList(n), visited(n, false) {}

    void addEdge(int u, int v, bool undirected = true) {
        adjList[u].push_back(v);
        if (undirected) {
            adjList[v].push_back(u);
        }
    }

    void bfs(int startNode) {
        if (startNode < 0 || startNode >= adjList.size()) {
            cout << "Error: Invalid starting node." << endl;
            return;
        }

        queue<int> q;
        q.push(startNode);
        visited[startNode] = true;

        while (!q.empty()) {
            int current = q.front();
            q.pop();
            cout << current << " ";

            for (int neighbor : adjList[current]) {
                if (!visited[neighbor]) {
                    q.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
    }

    void resetVisited() {
        fill(visited.begin(), visited.end(), false);
    }
};

int main() {
    int n, e;
    cout << "Nodes= ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: Number of nodes must be positive." << endl;
        return 1;
    }

    cout << "Edges= ";
    cin >> e;

    Graph graph(n);

    for (int i = 0; i < e; i++) {
        int u, v;
        cout << "u=";
        cin >> u;
        cout << "v=";
        cin >> v;

        if (u < 0 || u >= n || v < 0 || v >= n) {
            cout << "Error: Edge nodes must be within the range [0, " << n - 1 << "]." << endl;
            return 1;
        }
        graph.addEdge(u, v);
    }

    int startNode;
    cout<<"starting node= ";
    cin>>startNode;

    cout<< "BFS from : " <<startNode<<": ";
    graph.bfs(startNode);
    cout<<endl;

    return 0;
}
/*
             0
           /   \
          1     2
         / \   / \
        3   4 5   6

adjList = {
    0: {1, 2},  
    1: {3, 4},  
    2: {5, 6},      
    3: {},     
    4: {},
    5: {},
    6: {}       
}
In C++ code, it would be represented as:

vector<vector<int>> adjList = {
    {1, 2},
    {3, 4}, 
    {5,6},      
    {},      
    {},
    {},
    {}      
};

visited = {false, false, false, false, false}

visited:
Index:  0    1    2    3    4
        false false false false false
        
Final visited state:
visited:
Index:  0    1    2    3    4
        true true true true true

*/

