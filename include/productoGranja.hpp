#ifndef PRODUCTOGRANJA_HPP
#define PRODUCTOGRANJA_HPP

#include <string>

using namespace std;

class ProductoGranja 
    {
        protected:
            int codigo;
            string nombre;
            string tipo;
            double precio;

        public:
            ProductoGranja(int codigo, string nombre, string tipo, double precio);

            virtual int obtenerCodigo() = 0;
            virtual string obtenerNombre() = 0;
            virtual string obtenerTipo() = 0;
            virtual double obtenerPrecio() = 0;
    };

#endif