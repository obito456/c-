#include <iostream>
using namespace std;

void dec(int n){
    
    if(n==0){
        return;
    }
    
    cout<<n<<endl;
    dec(n-1);
}

int main() {
    
    int n;
    cin>>n;
    dec(n);
 
    return 0;
}

// dec(5) prints 5
//   dec(4) prints 4
//     dec(3) prints 3
//       dec(2) prints 2
//         dec(1) prints 1
//           dec(0) returns (base case reached)
//         returns from dec(1)
//       returns from dec(2)
//     returns from dec(3)
//   returns from dec(4)
// returns from dec(5)

