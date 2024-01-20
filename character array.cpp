#include <iostream>
using namespace std;

int main() {
    char a[100]="vijay";
    int i=0;
    
    while(a[i]!=NULL){
        cout<<a[i]<<endl;
        i++;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    char a[100];
    cout<<"Enter="<<endl;
    cin>>a;
    cout<<a<<endl; 
    cout<<a[2]<<endl; 
    
    return 0;
}
