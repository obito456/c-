#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double a = 3.14159265358979323846;

    cout<<"Default precision: "<<a<<endl;

    cout<<setprecision(2)<<"a="<<a<<endl;
    cout<<setprecision(8)<<"a="<<a<<endl;
    cout<<setprecision(15)<<"a="<<a<<endl;

    return 0;
}
