#ifndef PRODUCTOPORCINO_HPP
#define PRODUCTOPORCINO_HPP

#include "productoGranja.hpp"

class ProductoPorcino : public ProductoGranja 
    {
        public:
            ProductoPorcino(int codigo, string nombre, string tipo, double precio);

            int obtenerCodigo() override;
            string obtenerNombre() override;
            string obtenerTipo();
            double obtenerPrecio() override;
    };

#endif