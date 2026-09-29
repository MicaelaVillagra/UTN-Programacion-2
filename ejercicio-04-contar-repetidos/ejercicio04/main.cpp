#include <iostream>
#include "funciones.h"

using namespace std;
/*
Hacer una función que reciba un vector de enteros y su tamaño y devuelva la
cantidad de números distintos que se repiten en el vector.
*/
int main()
{
    //int *pDinamico --> una variable que no guarda un número, sino que va a guardar una dirección de memoria donde, más adelante, va a haber números de tipo int
    //nullptr --> inicializa con el valor especial "no apunta a ningún lado todavía". Es la forma segura de arrancar un puntero cuando todavía no le asignaste memoria real con new.
    int *pDinamico = nullptr;
    int tam;
    int ContarRepes = 0;

    cout<<"Ingrese el tamanio del vector : " <<endl;
    cin>> tam;

    pDinamico = new int[tam]; //ahora sí, pedí memoria real y pDinamico apunta ahí
    if(pDinamico == nullptr)
    {
        cout<<"ERROR DE ASIGNACION DE MEMORIA..."<<endl;
        return -1;
    }

    CargarVector(pDinamico, tam);

    ContarRepes = ContarRepetidos (pDinamico, tam);

    if (ContarRepes>0)
    {
        cout << "La cantidad de numeros que se repiten en el vector es de: " << ContarRepes << endl;
    }
    else
    {
        cout << "Ningun numero se repite" << endl;
    }

    return 0;
}
