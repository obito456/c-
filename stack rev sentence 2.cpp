#include <iostream>
#include <stack>
using namespace std;

void reversesentence(string s) {
    stack<string> st;  // Use a stack of strings to store words

    for (int i = 0; i < s.length(); i++) {
        string word = "";
        // Collect characters to form a word
        while (s[i] != ' ' && i < s.length()) {
            word += s[i];
            i++;
        }
        st.push(word);  // Push the word onto the stack
    }

    while (!st.empty()) {
        cout << st.top() << " ";  // Print the top word
        st.pop();  // Pop the word from the stack
    }
    cout << endl;
}

int main() {
    string s = "hi, welcome to my channel";
    reversesentence(s);

    return 0;
}
