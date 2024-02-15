#include <iostream>
#include <iomanip> 

using namespace std; 

int main() {
    
    int wd = 15;

    cout << setw(wd) << "Name" << setw(wd) << "Age" << setw(wd) << "City" << endl;

    cout << setw(wd) << "John" << setw(wd) << 25 << setw(19) << "New York" << endl;
    cout << setw(wd) << "Alice" << setw(wd) << 30 << setw(24) << "San Francisco" << endl;

    return 0;
}
