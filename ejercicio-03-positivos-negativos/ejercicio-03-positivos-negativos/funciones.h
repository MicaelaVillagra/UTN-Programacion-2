#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void CargarVector(int v[], int tam);

int ContarPositivos(int v[], int tam);

int ContarNegativos(int v[], int tam);

void RepartirVector(int v[], int tam, int *&pos, int *&neg, int cantPos, int cantNeg);

void MostrarVector(int v[], int tam);

#endif // FUNCIONES_H_INCLUDED
