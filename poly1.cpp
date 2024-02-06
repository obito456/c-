#include <iostream>
using namespace std;

class vi{
    public:
    void fun(){
        cout<<"iam a function with no argument"<<endl;
    }
    void fun(int x){
        cout<<"iam function with int argument"<<endl;
    }
    void fun(double x){
        cout<<"iam a function with double"<<endl;
    }

};

int32_t main() {
    
    vi obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
  
    return 0;
}
