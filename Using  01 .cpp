#include <iostream>
#include <typeinfo>
#include <vector>
#include <string>
using namespace std;

template <typename T>
using Vec = vector<T>;

int main() {
    using x = string;
    x a = "hello";
    Vec<int> num = {1, 2, 3};

    cout << typeid(a).name() << endl;
    cout << typeid(num).name() << endl;

    return 0;
}
