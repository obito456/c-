#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int number1 = 123;
    double number2 = 456.789;

    cout <<setw(10) << "Number 1" <<setw(15) << "Number 2" <<endl;
    cout <<setw(7) << number1 <<setw(18) << number2 <<endl;

    return 0;
}
