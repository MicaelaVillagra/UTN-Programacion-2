#include <iostream>
#include "funciones.h"
using namespace std;

void CargarVector(int v[], int tam)
{
    for (int i = 0; i < tam ; i++ )
    {
        cout<<"Ingrese el valor : " <<endl;
        cin>>v[i];
    }
}

int ContarPositivos(int v[], int tam)
{
    int contarPos = 0;

    for (int i = 0; i < tam ; i++ )
    {

        if(v[i] > 0)
        {
            contarPos++;
        }
    }
    return contarPos;
}

int ContarNegativos(int v[], int tam)
{
    int contarNeg = 0;
    for (int i = 0; i < tam ;i++ )
        {
            if(v[i] < 0 )
            {
                contarNeg++;
            }
        }
        return contarNeg;
}

void RepartirVector(int v[], int tam, int *&pos, int *&neg, int cantPos, int cantNeg)
{
    pos = new int[cantPos];
    neg = new int[cantNeg];

    int indicePos = 0;
    int indiceNeg = 0;

    for (int i = 0; i < tam; i++)
    {
        if (v[i] > 0)
        {
           pos[indicePos] = v[i];
           indicePos++;
        }
        else if (v[i] < 0)
        {
            neg[indiceNeg] = v[i];
            indiceNeg++;
        }
    }
}

void MostrarVector(int v[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << "Posicion " << i << ": " << v[i] << endl;
    }
}

