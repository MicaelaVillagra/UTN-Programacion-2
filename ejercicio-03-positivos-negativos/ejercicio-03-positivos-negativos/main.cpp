#include <iostream>
#include "funciones.h"
using namespace std;

/*
Hacer un programa que solicite al usuario 10 números y luego muestre primero los
números positivos y luego los negativos.
El programa debe crear dos arrays dinámicos con la cantidad exacta en cada caso:
uno para almacenar los números positivos y otro para los números negativos.

*/
int main()
{
    int numeros[10];

    int *positivos = nullptr;
    int *negativos = nullptr;

    CargarVector(numeros, 10);

    int cantPos = ContarPositivos(numeros, 10);
    int cantNeg = ContarNegativos(numeros, 10);

    RepartirVector(numeros, 10, positivos, negativos, cantPos, cantNeg);

    cout << "--- Numeros positivos ---" << endl;
    MostrarVector(positivos, cantPos);
    cout << "--- Numeros Negativos ---" << endl;
    MostrarVector(negativos, cantNeg);

    delete[] positivos;
    delete[] negativos;

    return 0;
}
