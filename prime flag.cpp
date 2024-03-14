#include <iostream>
using namespace std;

int main(){

    int n=11;
    bool flag=false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"not";
            flag=true;
            break;

        }
        
    }
    if(flag==false){
        cout<<"prime";
    }
    
    return 0;
}
