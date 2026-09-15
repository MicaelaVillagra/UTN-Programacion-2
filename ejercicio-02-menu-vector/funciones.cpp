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

void MostrarMenu()
{
    cout<<"============================"<<endl;
    cout<<"           MENU             "<<endl;
    cout<<"============================"<<endl;

    cout<<"1 - Cargar Vector " <<endl;
    cout<<"2 - Mostarar Vector "<<endl;
    cout<<"-1 - Salir"<<endl;

    cout<<"============================"<<endl;

    cout<<"Ingrese la opcion deseada : "<<endl;

}

void CargarVector(int *&v, int &tam)
{
    //liberamos esa memoria primero
    if (v != nullptr)
        delete[] v;

    cout << "Ingrese el tamanio del vector: ";
    cin >> tam;

    v = new int[tam];   //  modifico el puntero real de main

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
        cout << "Posicion " << i << ": " << v[i] << endl;
}
