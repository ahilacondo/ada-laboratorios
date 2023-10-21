#include <iostream>
#include <iterator>
using namespace std;

void insertionSort(int v[], int n) {
    for (int j = 1; j < n; ++j) {
        int x = v[j];
        for (int i = j-1; i >= 0 && v[i] > v[i+1]; --i) {
            x = v[i]; 
            v[i] = v[i+1]; 
            v[i+1] = x;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int v[] = {5, 2, 4, 6, 1};
    int n = size(v);

    printArray(v, n);

    insertionSort(v, n);

    printArray(v, n);

    return 0;
}