#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <unordered_map>
using namespace std;

class Car {
public:
    string name;
    long price;
    Car(string name,long price):name(name),price(price){}
};
int main() {
    Car car1("audi",2000000);
    cout<<car1.name<<endl;
    cout<<car1.price<<endl;
    return 0;
}
