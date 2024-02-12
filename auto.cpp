#include <iostream>

int main() {

    // Auto Variables:
    auto var1 {12};    // Auto-inferred as int
    auto var2 {13.0};  // Auto-inferred as double
    auto var3 {14.0f}; // Auto-inferred as float
    auto var4 {15.0l}; // Auto-inferred as long double
    auto var5 {'e'};   // Auto-inferred as char

    // Integer Modifier Suffixes:
    auto var6 { 123u};  // Auto-inferred as unsigned int
    auto var7 { 123ul}; // Auto-inferred as unsigned long
    auto var8 { 123ll}; // Auto-inferred as long long

    // Output the size of each variable in bytes:
    std::cout << "var1 occupies : " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2 occupies : " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var3 occupies : " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var4 occupies : " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var5 occupies : " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "var6 occupies : " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var7 occupies : " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var8 occupies : " << sizeof(var8) << " bytes" << std::endl;

    return 0;
}
