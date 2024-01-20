#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n=";
    cin >> n;

    char a[n + 1];
    cout << "Enter a=";
    cin >> a;

    bool check = true;                //1

    for (int i = 0; i < n/2; i++) {  
        if (a[i] != a[n - 1 - i]) {
            check = false;  // Set to false when characters don't match 0
            break;
        }
    }

    if (check) {                   //check=1 or true
        cout << "Palindrome";
    } else {
        cout << "Not a palindrome";
    }

    return 0;
}
