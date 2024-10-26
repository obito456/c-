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
    int n=7;
    int startNode=0;

    Graph g(n);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,5);
    g.addEdge(2,6);

    cout<< "BFS from : " <<startNode<<": ";
    g.bfs(startNode);
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


