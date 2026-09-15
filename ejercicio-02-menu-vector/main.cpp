#include <iostream>
#include "funciones.h"
using namespace std;

int main()
{

    int opcion = 0;
    int *v = nullptr;
    int tam = 0;

    while(opcion != -1)
    {
        system("clear");
        MostrarMenu();
        cin>>opcion;

        switch (opcion)
        {
        case 1:
        {
            CargarVector(v, tam);
            Pausar();
        }
        break;

        case 2:
        {
            MostrarVector(v, tam);
            Pausar();
        }
        break;

        case -1:
        {
            cout << "Saliendo..." << endl;
        }
        break;

        default:
        {
            cout << "Opcion invalida." << endl;
            Pausar();
        }
        break;
        }
    }

    if (v != nullptr)
        delete[] v;

    return 0;
}
