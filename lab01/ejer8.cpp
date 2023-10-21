#include <iostream>
using namespace std;

bool isZeroSubarray(int cant, long long numbers[])
{
    long long sum = 0;
    for(int c = 1; c <= cant; c++)
    {
        for(int i = 0; i < cant - c + 1; i++)
        {
            for(int j = i; j < c + i; j++ )
            {
                sum += numbers[j];
            }

            if(sum == 0)
                return true;
        }
    }

    return false;
}

int main(){
    int cant;
    cout << "Ingrese cantidad de numeros >> ";
    cin >> cant;

    long long numbers[cant];
    for(int i = 0; i < cant; i++)
    {
        cout << "Elemento #" << i + 1 << " >> ";
        cin >> numbers[i];
    }

    if(isZeroSubarray(cant, numbers)) {
        cout << "Subarray existe.";
    } else {
        cout << "Subarray no existe.";
    }
    cout << endl;

    return 0;
}

