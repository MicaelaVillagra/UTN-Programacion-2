#ifndef CUENTABANCARIA_H_INCLUDED
#define CUENTABANCARIA_H_INCLUDED

class CuentaBancaria
{

private :
    int NumeroCuenta;
    float SaldoActual;
public:
    CuentaBancaria(int numero, float Saldo);
    void depositar(float monto);
    void retirar(float monto);
    float obtenerSaldo();
};

#endif // CUENTABANCARIA_H_INCLUDED
