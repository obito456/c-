#include <iostream>
using namespace std;

class base
{
public:
    void print(){
        cout<<"this is base class print function"<<endl;
    }
    void display(){
        cout<<"this is base class display function"<<endl;
    }
};

class derived: public base
{
public:
    void print(){
        cout<<"this is derived class display function"<<endl;
    }
    void display(){
        cout<<"this is derived class display function"<<endl;
    }
};

int32_t main() {
    
    base *baseptr;
    derived d;
    baseptr= &d;
    baseptr -> print();
    baseptr -> display();
  
    return 0;
}
