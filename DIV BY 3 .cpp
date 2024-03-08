#include <iostream>
using namespace std;

int main(){

    int n=30;

    for(int i=0;i<n;i++){
        if(i%3==0)
            continue;

        cout<<i<<endl;
    }

    
    return 0;
}
