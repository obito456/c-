#include <iostream>   
using namespace std;

int main(){

    char button;
    cout<<"Enter =";
    cin>>button;

    if(button=='a'){
        cout<<"Apple"<<endl;
    }
    else if(button=='b'){
        cout<<"Banana"<<endl;
    }
    else if(button=='c'){
        cout<<"Cherry"<<endl;
    }
    else if(button=='d'){
        cout<<"Dragon fruit"<<endl;
    }
    else if(button=='e'){
        cout<<"Elephant"<<endl;
    }
    else{
        cout<<"Other"<<endl;
    }
   
    return 0;
}
