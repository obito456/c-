#include <iostream>
#include <climits>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    
    for(int i=1;i<=5;i++){
        cin>>arr[i];
    }

    int mini=INT_MAX;
    int maxi=INT_MIN;

    for(int i=1;i<=5;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    for(int i=1;i<=5;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    cout<<maxi<<endl;
    cout<<mini<<endl;
    
}
