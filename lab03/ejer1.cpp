#include <iostream>
#include <iterator>
using namespace std;

void insertionSort(int arr[], int i, int n) {
    int value = arr[i];
    int j = i;

    while (j > 0 && arr[j - 1] > value) {
        arr[j] = arr[j - 1];
        j--;
    }

    arr[j] = value;

    if (i + 1 <= n) {
        insertionSort(arr, i + 1, n);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {3, 8, 5, 4, 1, 9, -2};
    int n = size(arr);

    insertionSort(arr, 1, n - 1);

    printArray(arr, n);

    return 0;
}