#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> num(6);
    
    for(int i=0; i<num.size(); i++){
        cin >> num[i];
    }
    
    cout << "Enter x = ";
    int x;
    cin >> x;
    
    int occurrence = 0; // Corrected spelling
    
    for(int ele : num){
        if(ele > x){
            ++occurrence;
        }
    }
    
    cout << "Occurrences of " << x << ": " << occurrence << endl;

    return 0;
}

