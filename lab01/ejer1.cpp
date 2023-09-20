#include <iostream>
using namespace std;
int main()
{
    int cant = 0;
    cout << "Ingrese cantidad de datos del array >> ";
    cin >> cant;
    int numbers[cant];
    int mult = 1;
    for(int i = 0; i <= cant - 1; i++)
    {
        cout << "Ingrese numero para la ubicacion [" << i + 1 << "] << ";
        cin >> numbers[i];
        mult *= numbers[i];
    }
    cout << "La multiplicacion de los elementos del array es >> " << mult;
    printf("\n");

    return 0;
} 
