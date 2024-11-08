#include "../include/productoAvicola.hpp"

ProductoAvicola::ProductoAvicola(int codigo, string nombre, string tipo, double precio)
    : ProductoGranja(codigo, nombre, tipo, precio) {}

int ProductoAvicola::obtenerCodigo() 
    {
        return codigo;
    }

string ProductoAvicola::obtenerNombre() 
    {
        return nombre;
    }

string ProductoAvicola::obtenerTipo()
    {
        return tipo;
    }

double ProductoAvicola::obtenerPrecio()
    {
        return precio;
    }