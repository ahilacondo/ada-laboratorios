#include <iostream>
#include <iterator>
using namespace std;

int busquedaBinaria_mod6(int x, int n, int v[]) {
    int i = -1, d = n; 
    while (i < d - 1) { 
        int m = (i + d) / 2; 
        if (v[m] < x)
            i = m;
        else
            d = m + 1; // Cambio aquí
    }
    return d;
}

int main() {
    int v[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32};  
    int x = 18;
    int n = size(v);
    int resultado = busquedaBinaria(x, n, v);

    std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}
