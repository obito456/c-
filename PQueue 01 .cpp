#include <iostream>
#include <queue>
using namespace std;

int main() {
  
    priority_queue<int> maxHeap;
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);

    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();                  
    }

    return 0;
}
