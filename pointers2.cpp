#include <iostream>
using namespace std;

int swap(int *a,int *b){    //void or int
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
     int a=10;
     int b=20;
     
     int*aptr=&a;
     int*bptr=&b;
     
     swap(aptr,bptr);       //swap(&a,&b);
     cout<<a<<" "<<b<<endl;
    
    return 0;
}
