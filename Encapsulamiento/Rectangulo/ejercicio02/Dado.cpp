#include <iostream>
#include "Dado.h"
using namespace std;

int Dado::getValor()
{
   return Valor;
}

void Dado::lanzar(){
    Valor = rand() % 6 + 1;
}

Dado::Dado(){
    lanzar();
}

/*
PROGRA 1
bool Dado::esMaximo(){
    if(valor == 6)
    {
        return true;
    }else{
        return false;
    }
}

*/

bool Dado::esMaximo(){
    return Valor == 6;
}

bool Dado::esMinimo(){
    return Valor == 1;
}
