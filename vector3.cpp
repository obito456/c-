#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int>num(6);
    
    for(int i=0; i<5; i++){
        cin>>num[i];
    }
    
    cout<<"Enter x =";
    int x;
    cin>>x;
    
    int occurance=-1;
    for(int i=0; i<num.size(); i++){
        if(num[i]==x){
            occurance=i;
        }
    }
    cout<<occurance<<endl;

    return 0;
}
