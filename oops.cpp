#include <iostream>
using namespace std;

class student {
    string name;

public:
    int age;
    bool gender; // Change from bool to string

    student(string s, int a, int g){
        name=s;
        age=a;
        gender=g;
    }
    void setname(string s) {
        name = s;
    }

    void getname(){
        cout<<name<<endl;
    }

    void printinfo() {
        cout << "Name= " << name << endl;
        cout << "Age= " << age << endl;
        cout << "Gender= " << gender << endl;
    }
};

int main() {
    

    student a("vijay",20,1);
    a.printinfo();

    return 0;
}
