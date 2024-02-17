#include <iostream>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f=f*i;
    }
    return f;
}

int main() {
    int n;
    cin>>n;
    fact(n);
    cout<<fact(n)<<endl;
    return 0;
}
