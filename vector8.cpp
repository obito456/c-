#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int arr[]={1,1,1,1,1,1};
    
    int sum;
    
    for(int i=0; i<6; i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }
        else{
            sum-=arr[i];
        }
    }
    
    cout<<sum<<endl;

    return 0;
}
