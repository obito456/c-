#include <iostream>
using namespace std;

class abstractcricketer {
    virtual void chance() = 0;
};

class cricketer : public abstractcricketer {
private:
    
    string Role;
    int Age;
protected:
string Name;
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

class captain : public cricketer {
public:
    string bat;

    // Parameterized constructor to initialize captain attributes
    captain(string name, string role, int age, string bat) : cricketer(name, role, age), bat(bat) {}

    // Display captain's form information
    void setform() {
        cout << getname() << " makes players strong " << bat << endl;

    }
};

int main() {
    captain ca = captain("MSD", "wk-batsman", 30, "RBK");
    ca.intro();    // Display cricketer information
    ca.setform();  // Display captain's form information
    ca.setform();
    ca.setform();
    ca.chance();

    return 0;
}
