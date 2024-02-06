#include <iostream>
using namespace std;

class student {
    string name;

public:
    int age;
    bool gender; // Change from bool to string

    student(){
        cout<<"default constructor"<<endl;
    }

    student(string s, int a, int g){
        cout<<"parameterised constructor"<<endl;
        name=s;
        age=a;
        gender=g;  
    }

    student(student &a){
        cout<<"copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }

    ~student(){
        cout<<"destructor call"<<endl;
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
    bool operator==(student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
};

int main() {
    

    student a("vijay",20,1);
    // a.printinfo();

    student b;
    student c=a;
    if(c==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
    return 0;
}
