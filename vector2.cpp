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
    // Output loop: Print the elements of the vector using index
    cout << "Using index: ";
    for(int i=0; i<num.size(); i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    num.insert(num.begin() + 2, 8);
    
    // Output loop: Print the elements of the vector using range-based for loop
    cout << "Using range-based for loop: ";
    for(int ele : num) {
        cout << ele << " ";
    }

    cout<<endl;

    num.erase(num.end() - 1); // Corrected to remove the last element
    
    num.insert(num.begin() + 3, 22);
    
    int el = 0;
    while(el < num.size()) {
        cout << num[el++] << " ";
    }

    return 0;
}
