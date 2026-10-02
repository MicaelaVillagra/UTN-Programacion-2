#include <iostream>
#include "Rectangulo.h"
using namespace std;
/*

Crear una clase llamada Rectangulo que represente un rectángulo. La clase debe tener dos atributos correspondientes a la base y altura. Implementar los siguientes métodos:
    • Getters y Setter de cada atributo.
    • calcularArea(): Devuelve el área del rectángulo.
    • calcularPerimetro(): Devuelve el perímetro del rectángulo.

*/
int main()
{
    Rectangulo r ;

    r.setBase(5);
    r.setAltura(3);

    cout<<"Base : " << r.getBase() << endl;
    cout<<"Altura :" << r.getAltura() << endl;
    cout<<"Area : " << r.calcularArea() << endl;
    cout<<"Perimetro :" << r.calcularPerimetro() << endl;
    return 0;
}
