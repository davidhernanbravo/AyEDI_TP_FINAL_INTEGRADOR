#include "../include/empleado.hpp"

Empleado::Empleado(int id, string nombre, string puesto)
    : Persona(id, nombre), puesto(puesto) {}

int Empleado::obtenerId() 
    {
        return id;
    }

string Empleado::obtenerNombre() 
    {
        return nombre;
    }

string Empleado::obtenerPuesto()
    {
        return puesto;
    }