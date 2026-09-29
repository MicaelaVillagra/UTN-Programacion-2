#include <iostream>
#include "funciones.h"
using namespace std;

void CargarVector(int *pDinamico, int tamanio)
{
    int num;

    for (int i =  0; i < tamanio ; i++ )
        {
            cout<<"Ingrese el numero de la posicion : "<< i+1 <<endl;
            cin>>num;
            pDinamico[i]= num;
        }
}

int ContarRepetidos(int *pDinamico, int tamanio)
{
        int contador = 0;

        for (int i = 0; i < tamanio ;i++ )
            {
                bool repetido = false;

                for (int j = 0; j < i ; j++ )
                    {
                        if(pDinamico[i] == pDinamico[j])
                        {
                            repetido = true;
                            break;
                        }
                    }
                    if(!repetido)
                    {
                        for (int k = i+1; k< tamanio ;k++ )
                            {
                                if(pDinamico[i]==pDinamico[k])
                                {
                                    contador++;
                                    break;
                                }
                            }
                    }
            }
            return contador;
}
