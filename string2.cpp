#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    
    string s1="gully";
    string s2="cricket";
    
    s1.append(s2);         //s1=s1+s2
   
    cout<<s1<<endl;        //cout<<s1+s2<<endl;
    
    string s3="elite";
    
    s3.clear();
    
    cout<<s3<<endl;
    
    string s4="gully";
    string s5="cricket";
    
    cout<<s4.compare(s5)<<endl;
    
    if(s4.compare(s5)==0){
        cout<<"equal"<<endl;
    
    }
    
    if(!s4.compare(s5)==0){
        cout<<"not equal ";
    cout<<s5.compare(s4)<<endl;
    }
    
    return 0;
}
