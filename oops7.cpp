#include <iostream>
using namespace std;

class cricketer
{
public:
    string Name;
    string Role; 
    int Age;

    void intro(){
        cout<<"Name="<<Name<<endl;
        cout<<"Role="<<Role<<endl;
        cout<<"age="<<Age<<endl;
    }
// private:
    cricketer(string name,string role, int age) {
        Name=name;
        Role=role;
        Age=age;

    }

};
int main() {
    
    cricketer ck1=cricketer("Ruturaj","batsmen",23);
    ck1.intro();

    cricketer ck2=cricketer("Jadeja","allrounder",35);
    ck2.intro();
   
    return 0;
}
