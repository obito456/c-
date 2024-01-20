
#include <iostream>
using namespace std;

int main() {
     int a=10;              //1
     int*ptr=&a;
    
     cout<<"ptr="<<ptr<<endl;
     cout<<"*ptr="<<*ptr<<endl;
     *ptr=20;               //2
     cout<<"*ptr="<<*ptr<<endl;
     cout<<"ptr="<<endl;
     
     int **q=&ptr;
     cout<<"q="<<q<<endl;
     cout<<"*q="<<*q<<endl;
     cout<<"**q="<<**q<<endl;
    
    int arr[]={10,20,30,40};
    cout<<*arr<<endl;
    
    int*ptrr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptrr<<endl;
        ptrr++;
    } 
    
     
    int*ptrs=arr;
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;
        //arr++;
    }
    return 0;
}
