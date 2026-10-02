#include <iostream>
#include "CuentaBancaria.h"
using namespace std;

CuentaBancaria:: CuentaBancaria(int numero, float Saldo){

    NumeroCuenta = numero;
    SaldoActual = Saldo;
}

float CuentaBancaria::obtenerSaldo(){
    return SaldoActual;
}

void CuentaBancaria::depositar(float monto){
    SaldoActual = SaldoActual + monto;
}

 void CuentaBancaria::retirar(float monto){
    if (monto <= SaldoActual)
        SaldoActual = SaldoActual - monto;
 }
