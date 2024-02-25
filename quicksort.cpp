#include <iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp; 
}

int partition(int arr[], int le, int ri){
    int pivot = arr[ri];
    int i = le - 1;

    for(int j = le; j < ri; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, ri);
    return i + 1;
}

void quicksort(int arr[], int le, int ri){
    if(le < ri){
        int pi = partition(arr, le, ri);
        quicksort(arr, le, pi - 1);
        quicksort(arr, pi + 1, ri);
    }
} 

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);  // Add this line to get the size of the array
    quicksort(arr, 0, n - 1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
