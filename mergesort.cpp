#include <iostream>
using namespace std;

void merge(int arr[], int le, int mid, int r) {
    int n1 = mid - le + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];
    
    for (int i = 0; i < n1; i++) {
        a[i] = arr[le + i];
    }
    for (int i = 0; i < n2; i++) {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = le;

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            arr[k] = a[i];
            k++; i++;
        } else {
            arr[k] = b[j];
            k++; j++;
        }
    }

    while (i < n1) {
        arr[k] = a[i];
            k++; i++;
    }
    while (j < n2) {
        arr[k] = b[j];
            k++; j++;
    }
}

void mergesort(int arr[], int le, int r) {
    if (le < r) {
        int mid = (le+r)/ 2;
        mergesort(arr, le, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, le, mid, r);
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
   
