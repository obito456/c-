#include <iostream>
using namespace std;

int swap(int a,int b){    //void or int
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}

int main() {
     int a=10;
     int b=20;
     
     swap(a,b);
     cout<<a<<" "<<b<<endl;
    
    return 0;
}
