#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    string s="vijaykumartraveller";
    
    int freq[26];
     
    for(int i=0; i<26; i++){
        freq[i]=0;
    }
    
    for(int i=0; i<s.size(); i++){
        freq[s[i]-'a']++;                                     //'a': Represents the ASCII value of the lowercase letter 'a'
    freq[s[i] - 'a']++;
}

    }
    
    char ans='a';
    int max=0;
    
    for(int i=0; i<26; i++){
        if(freq[i]>max){
           max=freq[i];
           ans=i+'a';
        }
    }
    
    cout<<max<<" "<<ans<<endl;
    
    return 0;
}
