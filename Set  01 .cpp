#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);  
    s.insert(20);

    for (int x : s) {
        cout << x << " ";
    }
    cout << endl; 

    cout << "Erase result for 20: " << s.erase(20) << endl;

    for (int x : s) {
        cout << x << " ";
    }
    cout << endl; 

    if (s.find(20) != s.end()) {
        cout << "20 is found in the set." << endl;
    } else {
        cout << "20 is not found in the set." << endl;
    }

    cout << "Count of 30: " << s.count(30) << endl;

    cout << "Size of the set: " << s.size() << endl;

    cout << "Is the set empty? " << (s.empty() ? "Yes" : "No") << endl;

    return 0;
}
