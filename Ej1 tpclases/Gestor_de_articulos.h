#ifndef GESTOR_DE_ARTICULOS_H
#define GESTOR_DE_ARTICULOS_H
#include "Articulo.h"

class Gestor_de_articulos
{
    public:

        virtual ~Gestor_de_articulos();

        void listarTodos(Articulo*,int);
        void listarSiPrecioMayorA(float);
        int listarPorCodigo(char*);

        static inline Gestor_de_articulos* getInstance(){(s_instance==nullptr)?  new Gestor_de_articulos() : s_instance;}
        //esta es una forma de hacer un if en una misma linea optimizando lectura y ejecucion

    private:
        Gestor_de_articulos(){};
        static Gestor_de_articulos* s_instance;//puntero a la instancia para llamarla de fuera con el getInstancia

};

#endif // GESTOR_DE_ARTICULOS_H
