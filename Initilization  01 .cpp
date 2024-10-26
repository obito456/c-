#include <iostream>
using namespace std;

int main() {
    int a=15;
    int b {017};
    int c {a+b};
    int d {};
    int e;
    int f(40);

    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;
    cout<<"e="<<e<<endl;
    cout<<"f="<<f<<endl;

    return 0;
}
