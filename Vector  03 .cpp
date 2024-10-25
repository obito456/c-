#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int main() {

    vector<int> dist(3, INT_MAX);
    for (int i = 0; i < 3; i++) {
        cout << dist[i] << " ";
    }
    cout << endl;

    return 0;
}
