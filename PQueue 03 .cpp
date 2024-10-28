#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {

    priority_queue<pair<int,string>> pq;
    pq.push({3, "High Priority Task"});
    pq.push({1, "Low Priority Task"});
    pq.push({2, "Medium Priority Task"});

    while (!pq.empty()) {
        auto task = pq.top();
        cout << "Priority: " << task.first << ", Task: " << task.second << "\n";
        pq.pop();
    }

    return 0;
}
