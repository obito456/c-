#include <iostream>

using namespace std; // Explicitly using the std namespace

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
    cout << "var1 occupies : " << sizeof(var1) << " bytes" << endl;
    cout << "var2 occupies : " << sizeof(var2) << " bytes" << endl;
    cout << "var3 occupies : " << sizeof(var3) << " bytes" << endl;
    cout << "var4 occupies : " << sizeof(var4) << " bytes" << endl;
    cout << "var5 occupies : " << sizeof(var5) << " bytes" << endl;
    cout << "var6 occupies : " << sizeof(var6) << " bytes" << endl;
    cout << "var7 occupies : " << sizeof(var7) << " bytes" << endl;
    cout << "var8 occupies : " << sizeof(var8) << " bytes" << endl;

    return 0;
}
