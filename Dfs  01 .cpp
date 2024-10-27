#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

class Graph{
private:
    vector<vector<int>> adj;
    vector<bool> visited;
public:
    Graph(int n): adj(n),visited(n,false){}

    void addedge(int u,int v,bool undirected=true){
        adj[u].push_back(v);
        if(undirected==true){
            adj[v].push_back(u);
        }
    }

    void DFS(int start) {
        visited[start] = true;
        cout << start << " ";

        for (int neighbor : adj[start]) {
            if (!visited[neighbor]) {
                DFS(neighbor);
            }
        }
    }
};

int main() {
    int v=7;
    Graph g(v);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,3);
    g.addedge(1,4);
    g.addedge(2,5);
    g.addedge(2,6);

    int startnode=0;
    g.DFS(startnode);


    return 0;
}
