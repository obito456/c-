#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    string s1="VIJAY KUMAR";
    
    for(int i=0; i<s1.size(); i++){
        if (s1[i]>='A' && s1[i]<='Z')
            s1[i]+=32;                     //
    }
// In ASCII, the uppercase letters ('A' to 'Z') have values from 65 to 90, and the lowercase letters ('a' to 'z') have values from 97 to 122. The difference between them is 32.

    cout<<s1<<endl;
    
    return 0;
}
