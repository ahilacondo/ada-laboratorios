#include <iostream>
using namespace std;
int main()
{
    int cant = 0;
    cout << "Ingrese la cantidad de datos de su array >> ";
    cin >> cant;
    int array[cant];
    for(int i = 0; i < cant; i++)
    {
        cout << "Ingrese numero para la ubicacion [" << i << "] << ";
        cin >> array[i];
    }
    for(int i = 0; i < cant; i++)
    {
        cout << "Numero en la posicion [" << i << "] es >> " << array[i] << "\n";
    }
    return 0;
}