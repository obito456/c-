#include <iostream>   
using namespace std;

int main(){

    int a;
    cin>>a;
    int b;
    cin>>b;
    int i;
    for(a;a<=b;a++){
        for(i=2;i<a;i++){
            if(a%i==0){
                break;
            }
        }
        if(i==a){
        cout<<a<<" is Prime"<<endl;
        }
    }
   
    return 0;
}
