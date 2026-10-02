#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED

class Rectangulo
{
    private :
        float base;
        float altura;
    public :
        void setBase(float b);
        void setAltura(float a);
        float getBase();
        float getAltura();
        float calcularArea();
        float calcularPerimetro();
};


#endif // RECTANGULO_H_INCLUDED
