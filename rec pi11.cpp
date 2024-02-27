#include <iostream>
using namespace std;

void replacepi(string s) {
    if (s.length() == 0) {            // Base case: If the length of the string is 0, do nothing and return
        return;
    }

    if (s[0] == 'p' && s[1] == 'i') {           // Check if the first two characters are "pi"
        cout << "3.14";                         // Replace "pi" with "3.14" and make a recursive call with the rest of the string
        replacepi(s.substr(2));
    } else {
        cout << s[0];                          // If the first two characters are not "pi", print the current character and make a recursive call
        replacepi(s.substr(1));
    }
}

int main() {
    replacepi("pipppppppppi");

    return 0;
}
