#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))


void printList(int A[], int size) {
    printf("ITERATIVO.EXE\n");
    for (int i = 0; i < size; i++)
        printf("%d -> ", A[i]);
    printf("NULL\n");
}

void merge(int arr[], int izquierda, int medio, int derecha) {
    int i, j, k;
    int n1 = medio - izquierda + 1;
    int n2 = derecha - medio;
    int aux1[n1], aux2[n2];
}

int min(int x, int y) { return (x < y) ? x : y; }

void mergeSort(int arr[], int n) {
    int tamano_actual;
    int inicio_izquierda;

    // Iteramos a través de subarreglos de tamaño creciente
    for (tamano_actual = 1; tamano_actual <= n - 1; tamano_actual = 2 * tamano_actual) {
        for (inicio_izquierda = 0; inicio_izquierda < n - 1; inicio_izquierda += 2 * tamano_actual) {
            int medio = min(inicio_izquierda + tamano_actual - 1, n - 1);
            int fin_derecha = min(inicio_izquierda + 2 * tamano_actual - 1, n - 1);
            // Fusionamos subarreglos
            merge(arr, inicio_izquierda, medio, fin_derecha);
        }
    }
}

int main(void) {
    int v[] = {6, 8, 4, 3, 1, 9};
    int n = ARRAY_SIZE(v);

    mergeSort(v, n);
    printList(v, n);

    return 0;
}

