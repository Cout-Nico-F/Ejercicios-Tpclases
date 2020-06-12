#include <iostream>
#include "Articulo.h"
#include <cstring>
#include "rlutil.h"
using namespace rlutil;
#include "Gestor_de_articulos.h"
/*
Ej 1
Hacer una clase de nombre Articulo con las siguientes propiedades:
Código (char[5]), Descripción (char[30])
Precio (float), Stock(int), Estado(bool)
Y los siguientes métodos:
Cargar()
Mostrar()
Gets() para todas las propiedades
Sets() para todas las propiedades
Un constructor con parámetros por omisión
Un constructor para asignar valor a la descripción

Ej2.
Cargar un vector de 10 Artículos. Luego hacer las siguientes funciones:
Listar todos los artículos del vector.
Listar todos los artículos cuyo precio sea mayor a un valor que se ingresa por teclado.
A partir de un valor de código recibido como parámetro, devolver la posición del objeto que contiene ese código. De no encontrarlo devolver -1.
Dado un valor de stock que se recibe como parámetro devolver la cantidad de artículos cuyo stock sea inferior a ese valor recibido.
Dado un porcentaje de incremento que se recibe como parámetro, modificar el precio unitario de todos los objetos.
Todas las funciones reciben además el vector de Artículos.
*/
int main()
{

    bool noSalir=true;
    while(noSalir)
    {



        //Ejercicio 1
        char desc1[30],desc2[30];

        strcpy(desc1,"De madera,el mango es rojo");
        Articulo pelota(desc1);

        strcpy(desc2,"Redonda y con rombos");
        Articulo paleta(desc2);

        pelota.setDesc(desc2);
        paleta.setDesc(desc1);

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

        case 2:  //Ejercicio 2

            Articulo vector_articulos[10];
            for(int i=0; i<10; i++)
            {

                vector_articulos[i].cargar();
            }
            Gestor_de_articulos::getInstance()->listarTodos(vector_articulos,10);
            break;
        }


        std::cout<<"1 Seguir | 0 Salir"<<std::endl;
        std::cin>>noSalir;
    }
    return 0;
}
