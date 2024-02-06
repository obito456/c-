#include <iostream>
using namespace std;

class cricketer
{
public:
    string name;
    string role;
    int age;

    void intro(){
        cout<<"name="<<name<<endl;
        cout<<"role="<<role<<endl;
        cout<<"age="<<age<<endl;
    }

};
int main() {
    
    cricketer ck1;
    ck1.name="MSD";
    ck1.role="batsmen";
    ck1.age=25;
    ck1.intro();

    cricketer ck2;
    ck2.name="starc";
    ck2.role="bowler";
    ck2.age=28;
    ck2.intro();
   
    return 0;
}
