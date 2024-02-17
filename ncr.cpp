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
    int r;
    cin>>r;

    int a=fact(n)/(fact(n-r)*fact(r));
    cout<<a<<endl;
    return 0;
}
