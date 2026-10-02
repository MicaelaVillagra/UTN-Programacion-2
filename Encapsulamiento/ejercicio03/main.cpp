#include <iostream>
#include "CuentaBancaria.h"
using namespace std;
/*
Crear una clase llamada CuentaBancaria que represente una cuenta bancaria. La clase debe tener
los siguientes atributos:
    • Número de cuenta (entero)
    • Saldo actual (float)
Implementar los siguientes métodos:
    • Un constructor que me permita establecer el número de cuenta y el saldo.
    • Un método depositar(float monto) que incremente el saldo.
    • Un método retirar(float monto) que disminuya el saldo si hay fondos suficientes, caso contrario no hace nada.
    • Un método obtenerSaldo() que devuelva el saldo actual.
*/
int main()
{

    CuentaBancaria c(1234, 1000);
    cout<<"Saldo Inicial : " << c.obtenerSaldo() << endl;

    c.depositar(500);
    cout<<"Despues de depositar 500 : " << c.obtenerSaldo() << endl;

    c.retirar(400);
    cout<<"Despues de retirar 400 : " << c.obtenerSaldo() << endl;

    c.retirar(5000);
    cout<<"Despues de intenter retirar 5000 : "<< c.obtenerSaldo()<<endl;

    return 0;
}
