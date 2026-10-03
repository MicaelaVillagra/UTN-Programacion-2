#include <iostream>
#include "Triangulo.h"
using namespace std;
/*
    Crear una clase llamada Triangulo que represente un triángulo. La clase debe contener un vector de 3 elementos, donde cada elemento corresponde a la longitud de un lado del triángulo. Implementar los siguientes métodos:
    • getLado(int numero): Devuelve la longitud del valor del lado correspondiente al número proporcionado (1, 2, o 3). Si el número es incorrecto (fuera del rango 1-3), devuelve cero.
    • setLado(int numero, float valor): Establece el valor del lado correspondiente al número proporcionado (1, 2, o 3). Si el número es incorrecto (fuera del rango 1-3), no realiza ninguna acción.
    • getTipo(): Devuelve el tipo de triángulo según sus lados:
        ◦ 1 para un triángulo equilátero (todos los lados iguales).
        ◦ 2 para un triángulo isósceles (dos lados iguales).
        ◦ 3 para un triángulo escaleno (todos los lados diferentes).
    • isEscaleno(): Devuelve true si el triángulo es escaleno, false en caso contrario.
    • isIsosceles(): Devuelve true si el triángulo es isósceles, false en caso contrario.
    • isEquilatero(): Devuelve true si el triángulo es equilátero, false en caso contrario.


*/
int main()
{
    Triangulo t;

    t.setLado(1,3);
    t.setLado(2,4);
    t.setLado(3,5);

    cout<<" Lados : " << t.getLado(1) << "," << t.getLado(2) << " , " << t.getLado(3) <<endl;
    cout<< "Tipo : " << t.getTipo() << endl;

    if(t.isEscaleno()){
        cout<<" Es escaleno."<<endl;
    }
    if(t.isIsosceles()){
        cout<<"Es Isosceles."<<endl;
    }
    if(t.isEquilatero()){
        cout<<"Es Equilatero."<<endl;
    }

    cout << "Lado 7: " << t.getLado(7) << endl;


    return 0;
}
