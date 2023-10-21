#include <stdio.h>
#include <stdlib.h>

long long int mergeAndCount(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;
    long long int inversiones = 0;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            inversiones += (long long)(n1 - i);
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    return inversiones;
}

long long int mergeSortAndCount(int arr[], int l, int r) {
    long long int inversiones = 0;
    if (l < r) {
        int m = l + (r - l) / 2;
        inversiones += mergeSortAndCount(arr, l, m);
        inversiones += mergeSortAndCount(arr, m + 1, r);
        inversiones += mergeAndCount(arr, l, m, r);
    }
    return inversiones;
}

int countInversions(int arr[], int n) {
    return mergeSortAndCount(arr, 0, n - 1);
}

int main() {
    int n;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);

    int v[n];
    printf("Ingrese los elementos del vector:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    long long int inversiones = countInversions(v, n);
    printf("Número de inversiones: %lld\n", inversiones);

    return 0;
}
