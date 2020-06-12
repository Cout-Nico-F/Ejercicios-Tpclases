#include <iostream>
#include "Articulo.h"
#include <cstring>
#include "rlutil.h"
using namespace rlutil;
#include "Gestor_de_articulos.h"
/*
Ej 1
Hacer una clase de nombre Articulo con las siguientes propiedades:
C�digo (char[5]), Descripci�n (char[30])
Precio (float), Stock(int), Estado(bool)
Y los siguientes m�todos:
Cargar()
Mostrar()
Gets() para todas las propiedades
Sets() para todas las propiedades
Un constructor con par�metros por omisi�n
Un constructor para asignar valor a la descripci�n

Ej2.
Cargar un vector de 10 Art�culos. Luego hacer las siguientes funciones:
Listar todos los art�culos del vector.
Listar todos los art�culos cuyo precio sea mayor a un valor que se ingresa por teclado.
A partir de un valor de c�digo recibido como par�metro, devolver la posici�n del objeto que contiene ese c�digo. De no encontrarlo devolver -1.
Dado un valor de stock que se recibe como par�metro devolver la cantidad de art�culos cuyo stock sea inferior a ese valor recibido.
Dado un porcentaje de incremento que se recibe como par�metro, modificar el precio unitario de todos los objetos.
Todas las funciones reciben adem�s el vector de Art�culos.
*/

#define TAM 2
int main()
{

    bool seguir=true;
    while(seguir)
    {
        //Ejercicio 1
        char desc1[30],desc2[30];

        strcpy(desc1,"De madera,el mango es rojo");
        Articulo pelota(desc1);

        strcpy(desc2,"Redonda y con rombos");
        Articulo paleta(desc2);

        pelota.setDesc(desc2);
        paleta.setDesc(desc1);//Priemero puse los comentarios al reves y con estas lineas lo pongo en orden.

        std::cout<<"1 para Ej1 | 2 para Ej2"<<std::endl;
        int res;
        std::cin>>res;
        std::cin.ignore(1);
        switch (res)
        {
        case 1:
            pelota.cargar();
            pelota.mostrar();

            paleta.cargar();
            paleta.mostrar();
            break;

        case 2:  //Ejercicio 2A

            Articulo vector_articulos[TAM];
            Gestor_de_articulos::getInstance()->cargarTodos(vector_articulos,TAM);
            bool entrar;
            std::cout<<"Mostrar la lista completa de Articulos?"<<std::endl;
            std::cout<<"1- Si | 0- No"<<std::endl;
            std::cin>>entrar;
            if(entrar)
                Gestor_de_articulos::getInstance()->listarTodos(vector_articulos,TAM);//get instance me devuelve un puntero a la unica instancia de este gestor singletone
            std::cout<<"Mostrar la lista de Articulos con precio mayor al indicado?"<<std::endl;
            std::cout<<"1- Si | 0- No"<<std::endl;
            std::cin>>entrar;
            if(entrar)
            {
            float pre;
            std::cout<<"Mostrar Articulos con precio mayor a: ";
            std::cin>>pre;
            Gestor_de_articulos::getInstance()->listarSiPrecioMayorA(vector_articulos,TAM,pre);
            }


            break;

        }


        std::cout<<"1 Seguir | 0 Salir"<<std::endl;
        std::cin>>seguir;
    }
    return 0;
}
