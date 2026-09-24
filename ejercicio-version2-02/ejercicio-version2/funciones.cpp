#include <iostream>
#include "funciones.h"
using namespace std;

void Pausar()
{
    cout<<"Presione enter para continuar..."<<endl;
    cin.ignore();
    cin.get();
}

void LimpiarPantalla()
{
    system("clear");
}

void menuPrincipal()
{
    int *v = nullptr;
    int tam = 0;
    int opcion;

    while(true)
    {
        system("clear");

        cout<<"============================"<<endl;
        cout<<"           MENU             "<<endl;
        cout<<"============================"<<endl;
        cout<<"1- Cargar menu"<<endl;
        cout<<"2 - Mostrar vector"<<endl;
        cout<<"0 - Salir"<<endl;
        cout<<"============================"<<endl;
        cout<<"Ingrese una opcion..."<<endl;
        cin>>opcion;

        system("clear");

        switch(opcion)
        {
        case 1:
            CargarMenu(v, tam);
            break;
        case 2:
            MostrarVector(v, tam);
            break;
        case 0:
            if (v != nullptr)
                delete[] v;
            return;
        }
        Pausar();
    }
}
void CargarMenu(int *&v, int &tam)
{

    if(v != nullptr)
    {
        delete []v;
    }
    cout<<"Ingrese el atmanio del vector : "<<endl;
    cin>>tam;
    v = new int[tam];

    for (int i = 0; i < tam; i++)
    {
        cout << "Ingrese el valor " << i << ": ";
        cin >> v[i];
    }


}

void MostrarVector(int *v, int tam)
{
    if (v == nullptr)
    {
        cout << "Todavia no cargaste ningun vector." << endl;
        return;
    }

    for (int i = 0; i < tam; i++)
    {
        cout << "Posicion " << i << ": " << v[i] << endl;
    }
}
