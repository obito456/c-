#include <iostream>
#include <cmath>
using namespace std;

bool pm(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
     return true;
}

int main() {
    int a;
    cin >> a;
    int b;
    cin >> b;

    for(int i=a;i<=b;i++){
        if(pm(i)){
            cout<<i<<endl;
        }
    }
    
    return 0;
}
