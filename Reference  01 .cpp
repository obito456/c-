#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;


int main() {

    int x=10;
    int& ref=x; 

    cout<<x<<endl;  
    cout<<ref<<endl;
    ref = 20;
    cout<<x<<endl; 

    return 0;
}
