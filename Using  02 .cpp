#include <iostream>
using namespace std;

using FuncPtr = void (*)(int, double);
void func(int x, double y) {
    cout << "Function called with int: " << x << " and double: " << y << endl;
}

int main() {
    FuncPtr f = func;  
    f(10, 20.5);      

    return 0;
}
