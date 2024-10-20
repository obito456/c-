#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {40, 50, 60};

    cout << "Size of set s before clear: " << s.size() << endl;
    s.clear();
    cout << "Size of set s after clear: " << s.size() << endl;

    cout << "Elements in the set: ";
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Elements in reverse order: ";
    for (auto it = s.rbegin(); it != s.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    auto it_low = s.lower_bound(20);
    auto it_up = s.upper_bound(20);
    cout << "Lower bound of 20: " << *it_low << endl;
    cout << "Upper bound of 20: " << *it_up << endl;
    auto range = s.equal_range(20);
    cout << "Equal range for 20: " << *range.first << " to " << *range.second << endl;
    s.emplace(25); 
    cout << "After emplace 25, elements: ";
    for (const int& el : s) {
        cout << el << " ";
    }
    cout << endl;
    set<int> s3 = {100, 200};
    cout << "Before swap, set s contains: ";
    for (const int& el : s) {
        cout << el << " ";
    }
    cout << "\nBefore swap, set s3 contains: ";
    for (const int& el : s3) {
        cout << el << " ";
    }
    s.swap(s3);
    cout << "\nAfter swap, set s contains: ";
    for (const int& el : s) {
        cout << el << " ";
    }
    cout << "\nAfter swap, set s3 contains: ";
    for (const int& el : s3) {
        cout << el << " ";
    }
    cout << endl;

    return 0;
}
