#include <iostream>
using namespace std;

int lastocc(int arr[], int n, int i, int key) {
    if (i == n) {
        return -1;  // Base case: If the end of the array is reached
    }

    int restarray = lastocc(arr, n, i + 1, key);

    // If the key is found in the rest of the array, return the index
    if (restarray != -1) {
        return restarray;
    }

    // If the key is found in the current element, return the index
    if (arr[i] == key) {
        return i;
    }

    // If key is not found in the current element or the rest of the array
    return -1;
}

int main() {
    int arr[] = {4, 2, 1, 2, 2, 7};

    cout << lastocc(arr, 6, 0, 2) << endl;

    return 0;
}
