#include <iostream>
using namespace std;

int main() {
    char button;
    cout << "Enter = ";
    cin >> button;

    switch (button) {
        case 'a':
            cout << "Apple" << endl;
            break;
        case 'b':
            cout << "Banana" << endl;
            break;
        case 'c':
            cout << "Cat" << endl;
            break;
        case 'd':
            cout << "Dog" << endl;
            break;
        case 'e':
            cout << "Elephant" << endl;
            break;
        default:
            cout << "Other" << endl;
            break;
    }
    return 0;
}
