#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Dado.h"

using namespace std;
/*
Crear una clase llamada Dado que simule el comportamiento de un dado de seis caras. La clase debe contener los siguientes atributos:
    • valor (int): Almacena el valor actual del dado (un número entre 1 y 6).
Implementar los siguientes métodos públicos:
    • Dado(): Constructor que inicializa el dado con un valor aleatorio entre 1 y 6.
    • lanzar(): Simula el lanzamiento del dado, asignando un nuevo valor aleatorio entre 1 y 6 al atributo valor.
    • getValor(): Devuelve el valor actual del dado.
    • esMaximo(): Devuelve true si el valor del dado es 6, y false en caso contrario.
    • esMinimo(): Devuelve true si el valor del dado es 1, y false en caso contrario.
*/
int main()
{
    srand(time(0));
    Dado d;
    cout<<"Valor inicial : " << d.getValor() <<endl;

    for (int i = 1; i <=10; i++ )
        {
            d.lanzar();
            cout<<"Lanzamiento " << i << " : " << d.getValor();

            if(d.esMaximo()){
                cout<< " -> MAXIMO ";
            }
            if(d.esMinimo())
            {
                cout<<" -> MINIMO";
            }
            cout <<endl;
        }
    return 0;
}
