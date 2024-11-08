#include "../include/productoVacuno.hpp"

ProductoVacuno::ProductoVacuno(int codigo, string nombre, string tipo, double precio)
    : ProductoGranja(codigo, nombre, tipo, precio) {}

int ProductoVacuno::obtenerCodigo() 
    {
        return codigo;
    }

string ProductoVacuno::obtenerNombre() 
    {
        return nombre;
    }

string ProductoVacuno::obtenerTipo()
    {
        return tipo;
    }

double ProductoVacuno::obtenerPrecio()
    {
        return precio;
    }