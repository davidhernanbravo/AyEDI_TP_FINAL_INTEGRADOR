#include "../include/productoPorcino.hpp"

ProductoPorcino::ProductoPorcino(int codigo, string nombre, string tipo, double precio)
    : ProductoGranja(codigo, nombre, tipo, precio) {}

int ProductoPorcino::obtenerCodigo() 
    {
        return codigo;
    }

string ProductoPorcino::obtenerNombre() 
    {
        return nombre;
    }

string ProductoPorcino::obtenerTipo()
    {
        return tipo;
    }

double ProductoPorcino::obtenerPrecio()
    {
        return precio;
    }