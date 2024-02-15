#include <iostream>
#include <climits>  

using namespace std;  

int main() {
	int a           = -2147483648;
    int b           =  2147483647;
    unsigned int c  =  4294967295;
    //int d           = 2147483648 + 2147483647;
    
    
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;;
    cout<<"Min value="<<INT_MIN<<endl;
    cout<<"Max value="<<INT_MAX<<endl;
    cout<<"UNMax value="<<UINT_MAX<<endl;
    
    return 0;
}
