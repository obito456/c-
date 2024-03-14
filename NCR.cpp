#include <iostream>
using namespace std;

int fact(int n){
    int factt=1;
    for(int i=1;i<=n;i++){
        factt*=i;
    }
    return factt;
}

int main(){

    int n;
    cin>>n;
    int r;
    cin>>r;
    int res=fact(n)/(fact(r)*fact(n-r));
    cout<<res<<endl;
    
}
