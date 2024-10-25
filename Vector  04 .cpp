#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> num(5,3);
    for(int res:num){
        cout<<res<<" ";
    }

    return 0;
}
