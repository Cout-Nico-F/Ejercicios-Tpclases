#include "Gestor_de_articulos.h"
#include "Articulo.h"

Gestor_de_articulos* Gestor_de_articulos::s_instance = nullptr;// se inicializa el puntero de la instancia estatica (unica) hacia null

Gestor_de_articulos::~Gestor_de_articulos()
{
    //dtor
}

//metodos de clase
void Gestor_de_articulos::listarTodos(Articulo* lista,int tam)
{
    for(int i=0;i<tam;i++)
    {
        lista[i].mostrar();
    }
}

void Gestor_de_articulos::listarSiPrecioMayorA(Articulo* lista,int tam ,float precio)
{
    for(int i=0;i<tam;i++)
    {
        if( lista[i].getPrecio() > precio )
        lista[i].mostrar();
    }
}

int Gestor_de_articulos::listarPorCodigo(char*)
{

}

void Gestor_de_articulos::cargarTodos(Articulo* lista,int tam)
{
    for(int i=0;i<tam;i++)  lista[i].cargar();

}

