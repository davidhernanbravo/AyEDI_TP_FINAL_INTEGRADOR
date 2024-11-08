#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <iostream>
#include <list>
#include <string>
#include <fstream>

#include "cliente.hpp"
#include "empleado.hpp"
#include "productoGranja.hpp"

using namespace std;

class Pedido 
    {
        private:
            int codigoPedido;
            Cliente* cliente;
            Empleado* empleado;
            list<ProductoGranja*> productos;

        public:
            Pedido(int codigoPedido, Cliente* cliente, Empleado* empleado);
            
            int obtenerCodigoPedido();
            void adjuntar(ProductoGranja* producto);
            double calcularTotal();
            void mostrar();
            void guardarArchivo(string nombreArchivo);
    };

#endif