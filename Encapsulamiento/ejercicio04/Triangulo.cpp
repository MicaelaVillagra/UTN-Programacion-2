#include <iostream>
#include "Triangulo.h"
using namespace std;


float Triangulo::getLado(int numero){
    if(numero >= 1 && numero <=3){
        return vec[numero -1];
    }else{
        return 0;
    }
}

void Triangulo::setLado(int numero, float valor){
    if(numero >= 1 && numero <=3){
        vec[numero -1] = valor;
    }
}

int Triangulo::getTipo(){
    if(vec[0] == vec[1] && vec[1] == vec[2]){
        return 1;
    }else if(vec[0] == vec[1] || vec[1] == vec[2] || vec[0] == vec[2]){
        return 2;
    }else{
        return 3;
    }
}

/*
if(getTipo() == 3){
    return true;
}else{
    return false;
}
*/
bool Triangulo::isEscaleno(){
    return getTipo() == 3;
}

bool Triangulo::isEquilatero(){
    return getTipo() == 1;
}

bool Triangulo::isIsosceles(){
    return getTipo() == 2;
}
