#ifndef PRODUCTOVACUNO_HPP
#define PRODUCTOVACUNO_HPP

#include "productoGranja.hpp"

class ProductoVacuno : public ProductoGranja 
    {
        public:
            ProductoVacuno(int codigo, string nombre, string tipo, double precio);

            int obtenerCodigo() override;
            string obtenerNombre() override;
            string obtenerTipo();
            double obtenerPrecio() override;
    };

#endif