#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    
    string s1="gully";
    cout<<s1<<endl;
 
    s1.clear();
    
    if(s1.empty())
        cout<<"empty";
        
    string s2="cricket";
    cout<<s1<<endl;
    
    cout<<s2.find("ck")<<endl;
    
    s2.erase(3,2);   
    cout<<s2<<endl;
    
    string s3="worldclass";
    cout<<s3<<endl;
    
    cout<<s3.size()<<endl;
    cout<<s3.length()<<endl;
    
    s3.insert(5,"of");
    cout<<s3<<endl;
    
    for(int i=0; i<s3.length(); i++)
        cout<<s3[i]<<endl;
    
    string s4="vijaykumar";
    string s5=s4.substr(5,9);
    
    cout<< s5<<endl;
    
    string s6="144";
    int x= stoi(s6);
    cout<<x+6<<endl;
    
    int y= 150;
    cout<<to_string(y)+"5"<<endl;
    return 0;
}
