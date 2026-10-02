#include <iostream>
#include "Rectangulo.h"
using namespace std;

void Rectangulo::setBase(float b){
    if(b > 0){
        base = b;
    }else{
        base = 0;
    }
}

float Rectangulo::getBase()
{
    return base;
}

void Rectangulo::setAltura(float a){
    if(a > 0){
        altura = a;
    }else{
        altura = 0;
    }
}

float Rectangulo::getAltura(){
    return altura;
}

float Rectangulo::calcularArea(){
    return (base*altura);
}

float Rectangulo::calcularPerimetro(){
    return (2 * base) + (2 * altura);
}
