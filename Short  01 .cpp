#include <iostream>
using namespace std;

int main() {
    short a=15;
    short int b=200;
    signed short c=25;
    signed short int d=-300;
    unsigned short int e=350;

    cout<<"a size="<<sizeof(a)<<endl;
    cout<<"b size="<<sizeof(b)<<endl;
    cout<<"c size="<<sizeof(c)<<endl;
    cout<<"d size="<<sizeof(d)<<endl;
    cout<<"e size="<<sizeof(e)<<endl;

    return 0;
}