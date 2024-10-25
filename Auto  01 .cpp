#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

int main() {
    auto x=10;
    auto y=3.14;
    auto z="Hello";

    cout<<"Type of x: "<<typeid(x).name()<<endl;
    cout<<"Type of y: "<<typeid(y).name()<<endl;
    cout<<"Type of z: "<<typeid(z).name()<<endl;

    return 0;
}
