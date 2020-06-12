#ifndef ARTICULO_H
#define ARTICULO_H
//#include "Gestor_de_articulos.h"

class Gestor_de_articulos; //no tener esto es lo que causa el error de "articulo is not a type"

class Articulo
{
    public:
        Articulo();
        Articulo(const char*);
        ~Articulo();
        void cargar();//cargar (o inicializar).
        void mostrar();
        //getters
        char* getCodigo();
        char* getDesc();
        float getPrecio();
        int getStock();
        bool getEstado();
        //setters
        void setCodigo(char*);
        void setDesc(char*);
        void setPrecio(float);
        void setStock(int);
        void setEstado(bool);


    private:
        char _codigo[5];
        char _descripcion[30];
        float _precio;
        int _stock;
        bool _estado;
        Gestor_de_articulos* _gestorArticulos;//composicion ( Articulo tiene un gestor ) (Esto puedo hacerlo con una referencia & ?no me salio
};

#endif // ARTICULO_H
