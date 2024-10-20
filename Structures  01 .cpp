#include <iostream>
using namespace std;

struct Cake{
    string flavour;
    int quantity;
    double price;
};

int main() {
    Cake cake1;

    cake1.flavour="chocolate";
    cake1.quantity=1;
    cake1.price=600;

    cout<<" cake flavour = "<<cake1.flavour<<endl;
    cout<<" cake quantity = "<<cake1.quantity<<endl;
    cout<<" cake price = "<<cake1.price<<endl;

    return 0;
}
