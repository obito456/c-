#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

    typedef int x;
    typedef int* ptr;
    x a=5;
    ptr b=&a;

    cout<<typeid(a).name()<<endl;
    cout<<typeid(b).name()<<endl; 

    return 0;
}
