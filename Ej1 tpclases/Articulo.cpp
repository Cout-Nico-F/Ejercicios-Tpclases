#include "Articulo.h"
#include <cstring>
#include <iostream>
//constructores y destructor
Articulo::Articulo()
{

}

Articulo::~Articulo()
{

}


Articulo::Articulo(const char* desc)
{
    strcpy(this->_descripcion,desc);
}
//metodos de clase
void Articulo::cargar()
{
    //hay manera de conocer e imprimir el nombre del objeto a nivel de ejecucion aca?
    //por ejemplo " pelota o paleta " para que el usuario sepa lo que esta cargando?
    std::cout<<"\nCargando un nuevo Articulo"<<std::endl;
    std::cout<<"Ingrese un Codigo de 4 digitos/caracteres: ";
    char cod[4];
    std::cin.getline(cod,5,'\n');
    setCodigo(cod);

    std::cout<<"Ingrese una descripcion: ";
    char desc[30];
    std::cin.getline(desc,30,'\n');

    setDesc(desc);

    std::cout<<"Ingrese un precio: ";
    std::cin>>_precio;
    std::cout<<"ingrese el stock: ";
    std::cin>>_stock;
    _estado = true;
    std::cin.ignore();
    //de donde viene el enter en el buffer que necesito ignorar aca?
}

void Articulo::mostrar()
{
    std::cout<<"Codigo: "<<_codigo<<std::endl;
    std::cout<<"Descripcion: "<<_descripcion<<std::endl;
    std::cout<<"Precio: "<<_precio<<std::endl;
    std::cout<<"Stock: "<<_stock<<std::endl;
    if(_estado)
        std::cout<<"Estado: Cargado"<<std::endl<<std::endl;
    else
        std::cout<<"Estado: Dado de baja"<<std::endl<<std::endl;
}

//getters
char* Articulo::getCodigo()
{
    return _codigo;
}

char* Articulo::getDesc()
{
    return _descripcion;
}

float Articulo::getPrecio()
{
return _precio;
}

int Articulo::getStock()
{
return _stock;
}

bool Articulo::getEstado()
{
return _estado;
}
//setters

void Articulo::setCodigo(char* codigo)
{
strcpy(this->_codigo , codigo );
}

void Articulo::setDesc(char* desc)
{
    strcpy(this->_descripcion, desc);
}

void Articulo::setPrecio(float precio)
{
this->_precio = precio;
}

void Articulo::setStock(int stock)
{
this->_stock = stock;
}

void Articulo::setEstado(bool estado)
{
    _estado = estado; //otra manera valida
}
