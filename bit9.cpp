#include <iostream>
using namespace std;

int getBit(int n, int pos) {
    return (n & (1 << pos)) != 0;
}

void unique(int arr[], int n) {
    int xorsum = 0;

    // Calculate the XOR of all elements in the array
    for (int i = 0; i < n; i++) {
        xorsum = xorsum ^ arr[i];
    }

    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;

    // Find the rightmost set bit in the XOR result
    while (setbit != 1) {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }

    int newxor = 0;

    // Calculate XOR of elements with the set bit at the found position
    for (int i = 0; i < n; i++) {
        if (getBit(arr[i], pos - 1)) {
            newxor = newxor ^ arr[i];
        }
    }

    cout << "Unique number 1: " << newxor << endl;
    cout << "Unique number 2: " << (tempxor ^ newxor) << endl;
}

int main() {
    int arr[] = {1, 2, 3,  5, 7, 1, 2, 3};
    unique(arr, 8);

    return 0;
}
