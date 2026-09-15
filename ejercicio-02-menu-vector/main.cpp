#include <iostream>

using namespace std;

int main()
{
   int  tam;
   cout<<"Ingrese el tamanio del array : " << endl;
   cin>>tam;

   //Declaracion e inicializacion :

   int *vec = nullptr;

   //Asignacion de memoria dinamica :

   vec = new int[tam];

   //Validacion de la asignacion de memoria :
   if (vec == nullptr){

     cout<<"Error de asignaciond de memoria.." << endl;

     return -1;
   }

   //Cargar los datos :
   for(int i = 0; i < tam ; i++)
   {
       cout<<"Ingrese el valor para la posicion : ";
       cin>> vec[i];

   }

   cout<<"Elementos del vector dinamico "<< endl;
   for(int i = 0; i < tam ; i++)
   {
       cout<<"Posicion : " << vec[i] <<endl;
   }

   //Liberacion de memoria :

   delete [] vec;
   vec =  nullptr;

    return 0;
}
