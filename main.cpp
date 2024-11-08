#include <iostream>

#include "include/persona.hpp"
#include "include/cliente.hpp"
#include "include/empleado.hpp"
#include "include/productoGranja.hpp"
#include "include/productoAvicola.hpp"
#include "include/productoPorcino.hpp"
#include "include/productoVacuno.hpp"
#include "include/pedido.hpp"

int main() 
    {
        Empleado* empleado1 = new Empleado(101, "Ines Tafadora", "Supervisora");
        Empleado* empleado2 = new Empleado(102, "Jose Chamuyo", "Vendedor");

        Cliente* cliente1 = new Cliente(201, "Monica Rnivora", "Neandertal 1234");
        Cliente* cliente2 = new Cliente(202, "Felipe Chuga", "Avestruz 3289");
        Cliente* cliente3 = new Cliente(203, "Josefa Melica", "Hambruna 7200");

        ProductoAvicola* producto1 = new ProductoAvicola(301, "Huevos x 12","Producto avicola", 2400.00);
        ProductoAvicola* producto2 = new ProductoAvicola(302, "Pechuga x kg","Producto avicola", 6450.25);
        ProductoAvicola* producto3 = new ProductoAvicola(303, "Muslo de pollo x kg","Producto avicola", 5500.25);

        ProductoPorcino* producto4 = new ProductoPorcino(404, "Chorizo x kg", "Producto Porcino", 6200.35 );
        ProductoPorcino* producto5 = new ProductoPorcino(405, "Morcilla x kg","Producto Porcino", 5300.50);
        ProductoPorcino* producto6 = new ProductoPorcino(406, "Churrasco de cerdo x kg", "Producto Porcino", 7500.00);

        ProductoVacuno* producto7 = new ProductoVacuno(501, "Leche x 1lt", "Producto Vacuno", 1000.30);
        ProductoVacuno* producto8 = new ProductoVacuno(502, "Tapa de asado x kg", "Producto Vacuno", 8500.20);
        ProductoVacuno* producto9 = new ProductoVacuno(503, "Matambre x kg", "Producto Vacuno", 7600.00);

        Pedido* pedidoCliente1 = new Pedido(1001, cliente1, empleado1);
        pedidoCliente1->adjuntar(producto1);
        pedidoCliente1->adjuntar(producto3);
        pedidoCliente1->adjuntar(producto5);
        pedidoCliente1->adjuntar(producto7);
        pedidoCliente1->adjuntar(producto9);

        Pedido* pedidoCliente2 = new Pedido(1002, cliente2, empleado2);
        pedidoCliente2->adjuntar(producto2);
        pedidoCliente2->adjuntar(producto4);
        pedidoCliente2->adjuntar(producto6);
        pedidoCliente2->adjuntar(producto8);
        pedidoCliente2->adjuntar(producto1);

        Pedido* pedidoCliente3 = new Pedido(1003, cliente3, empleado1);
        pedidoCliente3->adjuntar(producto3);
        pedidoCliente3->adjuntar(producto6);
        pedidoCliente3->adjuntar(producto4);
        pedidoCliente3->adjuntar(producto7);
        pedidoCliente3->adjuntar(producto2);

        cout << "***************************************************" << endl;
        cout << "UKELELE CHIKEN: LA BOUTIQUE DE CARNES CON MAS RITMO" << endl;
        cout << "***************************************************" << endl << endl;
        cout << "LISTA DE PEDIDOS:" << endl;
        cout << "----------------" << endl << endl;


        pedidoCliente1->mostrar();
        pedidoCliente1->guardarArchivo("pedidos.txt");

        pedidoCliente2->mostrar();
        pedidoCliente2->guardarArchivo("pedidos.txt");

        pedidoCliente3->mostrar();
        pedidoCliente3->guardarArchivo("pedidos.txt");

        cout << endl <<"++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "GRACIAS POR HACERNOS CADA DIA MAS ASQUEROSAMENTE" << endl;
        cout << "RICOS CON NUESTROS PRECIOS INFLADOS" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

        delete empleado1;
        delete empleado2;

        delete cliente1;
        delete cliente2;
        delete cliente3;

        delete producto1;
        delete producto2;
        delete producto3;
        delete producto4;
        delete producto5;
        delete producto6;
        delete producto7;
        delete producto8;
        delete producto9;
        
        delete pedidoCliente1;
        delete pedidoCliente2;
        delete pedidoCliente3;

        return 0;
    }