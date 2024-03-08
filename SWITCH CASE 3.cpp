#include <iostream>
using namespace std;

int main() {

    int n1;
    cout<<"Enter n1="<<endl;
    cin>>n1;
  
    int n2;
    cout<<"Enter n2="<<endl;
    cin>>n2;

    char op;
    cout<<"Enter op="<<endl;
    cin>>op;

    switch (op) {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl; 
        break; 
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl; 
        break;

    default:
        cout<<"Enter another operator"<<endl;
        break;  
        
    }
    return 0;
}
