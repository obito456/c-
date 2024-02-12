#include <iostream>

int main() {

    short int var1 {10}; // 2 bytes
    short int var2 {20};
    
    char var3 {40}; // 1 byte
    char var4 {50};
    
    std::cout << "size of var1 : " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "size of var2 : " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "size of var3 : " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "size of var4 : " << sizeof(var4) << " bytes" << std::endl;
    
    auto result1 = var1 + var2;
    auto result2 = var3 + var4;
    
    std::cout << "size of result1 : " << sizeof(result1) << " bytes" << std::endl; // sizeof(int)
    std::cout << "size of result2 : " << sizeof(result2) << " bytes" << std::endl; // sizeof(int)
   
    return 0;
}
