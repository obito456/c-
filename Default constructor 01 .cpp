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
};
int main() {
    Car car1;
    cout<<car1.name<<endl;
    cout<<car1.price<<endl;
    return 0;
}