#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    long price;
    Car():name("Tata"),price(1000000){}
};
int main() {
    Car car1;
    cout<<car1.name<<endl;
    cout<<car1.price<<endl;
    return 0;
}
