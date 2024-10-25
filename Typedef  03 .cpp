#include <iostream>
#include <typeinfo>
using namespace std;

typedef void (*FuncPtr)(int, double);

void func(int x, double y) {
    std::cout << "Integer: " << x << ", Double: " << y << std::endl;
}

int main() {

    FuncPtr fk = func;
    fk(10, 20.5);
    cout << typeid(fk).name() << endl;  

    return 0;
}
