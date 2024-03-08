#include <iostream>
using namespace std;

int main(){

    int money=5000;

    for(int date=1;date<30;date++){
        if(date%2==0)
            continue;
    
        if(money==0)
            break;

        cout<<date<<"= Go To Party"<<endl;
        money=money-500;
        
    }

    
    return 0;
}
