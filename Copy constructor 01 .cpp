#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    long price;

    Car(string name,long price):name(name),price(price){}
    Car(const Car &car):name(car.name),price(car.price){}
};
int main() {
    Car car1("audi",2000000);
    Car car2=car1;
    cout<<car2.name<<endl;
    cout<<car2.price<<endl;
    return 0;
}
