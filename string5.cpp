#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    string s1="vijay kumar";
    
    for(int i=0; i<s1.size(); i++){
        if (s1[i]>='a' && s1[i]<='z')
            s1[i]-=32;                     //
    }
    
    cout<<s1<<endl;
    
    return 0;
}

// In ASCII, the uppercase letters ('A' to 'Z') have values from 65 to 90, and the lowercase letters ('a' to 'z') have values from 97 to 122. The difference between them is 32.
// If both the left and right operands of && are true, the result is true.
// If either the left or right operand (or both) is false, the result is false
