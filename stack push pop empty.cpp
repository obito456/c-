#include <iostream>
using namespace std;

class Stack {
    int* arr;  // Dynamic array to store stack elements
    int top;   // Index of the top element in the stack
    int n;     // Size of the stack
public:
    // Constructor to initialize the stack
    Stack(){ 
        arr = new int[n];     // Allocate memory for the stack
        top=-1;              // Initialize top to -1 (empty stack)
    }

    void push(int x) {
        if (top == n - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }

    int Top() {
        if (top == -1) {
            cout << "No element in stack" << endl;
            return -1; // Consider changing the return type to void or handling the case differently
        }
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }
};

int main() {
    Stack st;  // Specify the size of the stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() << endl;

    return 0;
}
