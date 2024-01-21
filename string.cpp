#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    cout<<s<<endl;
    
    string s1="fight";
    string s2="club";
    cout<<s1+" "+s2<<endl;
    
    string s3="heavy";
    string s4="rain";
    s3.append(s4);
    cout<<s3<<endl;
    
    string s5="we are winners";
    s5.clear();
    cout<<s5<<endl;           //!            
    if(s5.empty()){
        cout<<"string is empty"<<endl;
    }    
    else{
        cout<<"string is not empty"<<endl;
    
    }
    
    string s6="heavy";
    string s7="rain";
    cout<<s6.compare(s7)<<endl;
    
    string s8="heavymetals";
    cout<<s8.find("met")<<endl;
    s8.insert(5,"core");
    cout<<s8<<endl;
    string s9=s8.substr(5,4);
    cout<<s9<<endl;
    string s10="145";
    int x=stoi(s10);
    cout<<x+5<<endl;
    int a=535;
    cout<<to_string(a)<<endl;
    string s12="mcghvhvhg";
    sort(s12.begin(),s12.end()); 
    cout<<s12<<endl;
    cout<<s8.size()<<endl;
    for(int i=0;i<s8.length();i++){
        cout<<s8[i]<<endl;
    }
    
    
    return 0;
}
