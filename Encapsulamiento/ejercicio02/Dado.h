#ifndef DADO_H_INCLUDED
#define DADO_H_INCLUDED


class Dado{

private :
    int Valor;
public:
    Dado();
    void lanzar();
    int getValor();
    bool esMaximo();
    bool esMinimo();
};


#endif // DADO_H_INCLUDED
