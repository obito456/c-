#include <iostream>
using namespace std;

class abstractcricketer {
    virtual void chance() = 0;
};

class cricketer : public abstractcricketer {
private:
    string Name;
    string Role;
    int Age;

public:
    // Parameterized constructor to initialize cricketer attributes
    cricketer(string name, string role, int age) : Name(name), Role(role) {
        // Age validation; only set if age is 18 or older
        if (age >= 18)
            Age = age;
    }

    // Setters and getters for cricketer attributes
    void setname(string name) { Name = name; }
    string getname() { return Name; }

    void setrole(string role) { Role = role; }
    string getrole() { return Role; }

    void setage(int age) {
        // Age validation; only set if age is 18 or older
        if (age >= 18)
            Age = age;
    }
    int getage() { return Age; }

    // Display cricketer information
    void intro() {
        cout << "Name=" << Name << endl;
        cout << "Role=" << Role << endl;
        cout << "Age=" << Age << endl;
    }

    // Implementation of the pure virtual function from the abstract class
    void chance() override {
        if (Age >= 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << " sorry, no promotion for you!" << endl;
    }
};

int main() {
    // Create cricketer objects
    cricketer ck1 = cricketer("Ruturaj", "batsman", 23);
    cricketer ck2 = cricketer("Jadeja", "all-rounder", 35);

    // Display cricketer information
    ck1.intro();
    ck2.intro();

    // Call the chance method to check for promotion
    ck1.chance();
    ck2.chance();

    return 0;
}
