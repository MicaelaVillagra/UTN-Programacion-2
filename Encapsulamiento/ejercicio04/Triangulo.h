#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

class Triangulo{

private :
    float vec[3];
public:
    float getLado(int numero);
    void setLado(int numero, float valor);
    int getTipo();
    bool isEscaleno();
    bool isIsosceles();
    bool isEquilatero();
};


#endif // TRIANGULO_H_INCLUDED
