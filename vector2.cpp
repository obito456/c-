#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int>num;
    
    for(int i=0; i<5; i++){
        int element;
        cin>>element;
        num.push_back(element);
    }
    
    for(int i=0; i<num.size(); i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;

    return 0;
}
