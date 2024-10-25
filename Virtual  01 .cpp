#include <iostream>
using namespace std;

class RatanTata {
public:
    virtual void ceo() { 
        cout << "ceo is RatanTata" << endl;
    }
    void property() {
        cout << "Property belongs to trust" << endl;
    }
};

class NoelTata : public RatanTata {
public:
    void ceo() override {
        cout<<"ceo is NoelTata"<<endl;
    }
    void property() {
        cout<<"Property belongs to NoelTata"<<endl;
    }
};

int main() {
    RatanTata* ptr;
    NoelTata noelTata;
    ptr = &noelTata;

    ptr->ceo();    
    ptr->property();

    return 0;
}
