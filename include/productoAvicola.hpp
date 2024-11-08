#ifndef PRODUCTOAVICOLA_HPP
#define PRODUCTOAVICOLA_HPP

#include "productoGranja.hpp"

class ProductoAvicola : public ProductoGranja 
    {
        public:
            ProductoAvicola(int codigo, string nombre, string tipo, double precio);

            int obtenerCodigo() override;
            string obtenerNombre() override;
            string obtenerTipo() override;
            double obtenerPrecio() override;      
    };

#endif