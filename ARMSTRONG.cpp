#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n=153;
    int org=n;
    int arm=0;

    while(n>0){
        int last=n%10;
        arm+=pow(last,3);
        n=n/10;
    }
    if(arm==org){
        cout<<"armstrong"<<endl;
    }
    else{
        cout<<"not";
    }

    return 0;
}
