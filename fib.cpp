#include <iostream>
using namespace std;

int fib(int n){
    int t1=0;
    int t2=1;
    int nxt;
    for(int i=0;i<=n;i++){
        cout<<t1<<endl;
        nxt=t1+t2;
        t1=t2;
        t2=nxt;
    }
}

int main() {
    int n;
    cin>>n;
    fib(n);
    
    return 0;
}
