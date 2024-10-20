#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> num;
    
    cout<<"size1 :"<<num.size()<<endl; 
    cout<<"capacity1 :"<<num.capacity()<<endl; 

    num.push_back(10);
    cout<<"size2 :"<<num.size()<<endl; 
    cout<<"capacity2 :"<<num.capacity()<<endl; 
    
    num.push_back(20);
    cout<<"size3 :"<<num.size()<<endl; 
    cout<<"capacity3 :"<<num.capacity()<<endl; 
    
    num.push_back(30);
    cout<<"size4 :"<<num.size()<<endl; 
    cout<<"capacity4 :"<<num.capacity()<<endl; 
    
    num.resize(6);
    cout<<"size5 :"<<num.size()<<endl; 
    cout<<"capacity5 :"<<num.capacity()<<endl;
    
    num.resize(10); 
    cout<<"size6 :"<<num.size()<<endl; 
    cout<<"capacity6 :"<<num.capacity()<<endl;
    
    num.pop_back();
    num.pop_back();
    cout<<"size7 :"<<num.size()<<endl; 
    cout<<"capacity7 :"<<num.capacity()<<endl;
    
    return 0;
     
}
