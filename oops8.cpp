#include <iostream>
using namespace std;

class cricketer
{
private:
    string Name;
    string Role; 
    int Age;

public:

    void setname(string name){
        Name=name;
    }
    string getname(){
        return Name;
    }

    void setrole(string role){
        Role=role;
    }
    string getrole(){
        return Role;
    }
    
    void setage(int age){
        Age=age;
    }
    int getage(){
        return Age;
    }
        
    void intro(){
        cout<<"Name="<<Name<<endl;
        cout<<"Role="<<Role<<endl;
        cout<<"age="<<Age<<endl;
    }

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

    ck1.setage(25);
    cout<<ck1.getname()<<"is "<<ck1.getage()<<"yearsold"<<endl;
   
    return 0;
}
  
