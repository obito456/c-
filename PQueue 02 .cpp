#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<int,vector<int>,greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);

    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();                  
    }

    return 0;
}
