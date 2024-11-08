#include "../include/cliente.hpp"

Cliente::Cliente(int id, string nombre, string domicilio)
    : Persona(id, nombre), domicilio(domicilio) {}

int Cliente::obtenerId() 
    {
        return id;
    }

string Cliente::obtenerNombre() 
    {
        return nombre;
    }

string Cliente::obtenerDomicilio()
    {
        return domicilio;
    }