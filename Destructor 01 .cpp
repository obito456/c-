#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string* name;
    long* price;

    Car(string carName,long carPrice) {
        name=new string(carName);
        price=new long(carPrice);
    }
    ~Car() {
        delete name;
        delete price;
    }
};
int main() {
    Car car1("audi",2000000);
    cout<<*car1.name<<endl;
    cout<<*car1.price<<endl;
    return 0;
}
