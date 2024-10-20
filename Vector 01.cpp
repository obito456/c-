#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> num;
    
    cout<<"size:"<<num.size()<<endl; 
    cout<<"capacity:"<<num.capacity()<<endl; 

    // Add elements to the vector
    num.push_back(10);
    cout<<"size:"<<num.size()<<endl; 
    cout<<"capacity:"<<num.capacity()<<endl; 
    
    num.push_back(20);
    cout<<"size:"<<num.size()<<endl; 
    cout<<"capacity:"<<num.capacity()<<endl; 
    
    num.push_back(30);
    cout<<"size:"<<num.size()<<endl; 
    cout<<"capacity:"<<num.capacity()<<endl; 
    
    num.resize(6);
    cout<<"size:"<<num.size()<<endl; 
    cout<<"capacity:"<<num.capacity()<<endl;
    
    num.resize(10); 
    cout<<"size:"<<num.size()<<endl; 
    cout<<"capacity:"<<num.capacity()<<endl;
    
    num.pop_back();
    num.pop_back();
    cout<<"size:"<<num.size()<<endl; 
    cout<<"capacity:"<<num.capacity()<<endl;
    
    return 0;
     
}  
