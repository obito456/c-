#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

    struct Person {
        string name;
        int age;
    };
    typedef struct Person Info;

    Info p1;
    p1.name = "Alice";
    p1.age = 30;

    cout << typeid(p1.name).name() << endl;  
    cout << typeid(p1.age).name() << endl;

    return 0;
}
