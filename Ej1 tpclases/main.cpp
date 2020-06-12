#include <iostream>
#include "Articulo.h"
#include <cstring>
#include "rlutil.h"
using namespace rlutil;
#include "Gestor_de_articulos.h"

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
