#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){

    int a;
    int b;
    cin>>a;
    cin>>b;
    for(int i=a;i<b;i++){
        if(prime(i)){
            cout<<i<<" is prime"<<endl;
        }
    }
}
