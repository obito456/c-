#include <iostream>
using namespace std;

void inc(int n){
    
    if(n==0){
        return;
    }
    
    inc(n-1);
    cout<<n<<endl;
    
}

int main() {
    
    int n;
    cin>>n;
    inc(n);
 
    return 0;
}

// inc(5) calls inc(4)
//   inc(4) calls inc(3)
//     inc(3) calls inc(2)
//       inc(2) calls inc(1)
//         inc(1) calls inc(0)
//           inc(0) returns (base case reached)
//         prints 1
//       prints 2
//     prints 3
//   prints 4
// prints 5

