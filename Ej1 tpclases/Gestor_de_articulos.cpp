#include "Gestor_de_articulos.h"
#include "Articulo.h"

Gestor_de_articulos* Gestor_de_articulos::s_instance = nullptr;


Gestor_de_articulos::~Gestor_de_articulos()
{
    //dtor
}

//metodos de clase
void Gestor_de_articulos::listarTodos(Articulo* vec,int tam)
{
    for(int i=0;i<tam;i++)
    {
        vec[i].mostrar();
    }
}

void Gestor_de_articulos::listarSiPrecioMayorA(float)
{

}

int Gestor_de_articulos::listarPorCodigo(char*)
{

}
