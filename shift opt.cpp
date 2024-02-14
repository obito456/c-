#include <iostream>
#include <bitset>

int main() {
    using namespace std;

    unsigned short int value{0xff0u};

    cout << "Size of short int " << sizeof(short int) << endl; // 16 bits

    cout << "value : " << bitset<16>(value) << ", dec : " << value << endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    cout << "value : " << bitset<16>(value) << ", dec : " << value << endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    cout << "value : " << bitset<16>(value) << ", dec : " << value << endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    cout << "value : " << bitset<16>(value) << ", dec : " << value << endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    cout << "value : " << bitset<16>(value) << ", dec : " << value << endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    cout << "value : " << bitset<16>(value) << ", dec : " << value << endl;

    // Shift right by one bit
    value = static_cast<unsigned short int>(value >> 1);
    cout << "value : " << bitset<16>(value) << ", dec : " << value << endl;

    // Shift by multiple bits in one go
    // Shift right by four bits
    value = static_cast<unsigned short int>(value >> 4);
    cout << "value : " << bitset<16>(value) << ", dec : " << value << endl;

    // Right shift by one bit
    cout << "value : " << (value >> 1) << endl;

    return 0;
}
