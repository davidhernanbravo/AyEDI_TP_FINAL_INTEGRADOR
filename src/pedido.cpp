#include "../include/pedido.hpp"

#include <iomanip>

Pedido::Pedido(int codigoPedido, Cliente* cliente, Empleado* empleado)
    : codigoPedido(codigoPedido), cliente(cliente), empleado(empleado) {}

int Pedido::obtenerCodigoPedido()
    {
        return codigoPedido;
    }

void Pedido::adjuntar(ProductoGranja* producto) 
    {
        productos.push_back(producto);
    }

double Pedido::calcularTotal() 
    {
        double total = 0.0;

        for(auto producto : productos) 
            {
                total += producto->obtenerPrecio();
            }
            
        return total;
    }

void Pedido::mostrar() 
    {
        cout << "Pedido Nro: " << codigoPedido << endl;
        cout << endl << "Cliente: " << cliente->obtenerNombre() << " - Domicilio: " << cliente->obtenerDomicilio() << endl;
        cout << "Vendedor: " << empleado->obtenerNombre() << " - " << empleado->obtenerPuesto() << endl;
        
        cout << endl << "Productos:" << endl << endl;

        for (auto producto : productos) 
            {
                cout << "\t- cod. " << producto->obtenerCodigo() << " - " << producto->obtenerNombre() << " - $" << fixed << setprecision(2) << producto->obtenerPrecio() << endl;
            }
            
        cout << endl << "Precio total de su compra: $" << fixed << setprecision(2) << calcularTotal() << endl;
        cout << "---------------------------------------------------" << endl << endl;
    }

void Pedido::guardarArchivo(string nombreArchivo) 
    {
        ofstream archivo(nombreArchivo, ios::app);

        if (archivo.is_open()) 
            {
                archivo << "Pedido Nro: " << codigoPedido << endl;
                archivo << "Cliente: " << cliente->obtenerNombre() << " - Domicilio: " << cliente->obtenerDomicilio() << endl;
                archivo << "Vendedor: " << empleado->obtenerNombre() << " - " << empleado->obtenerPuesto() << endl;
                archivo << "Productos:"<< endl;

                for (auto producto : productos) 
                    {
                        archivo << "\t- cod. " << producto->obtenerCodigo() << " - " << producto->obtenerNombre() << " - $" << fixed << setprecision(2) << producto->obtenerPrecio() << endl;
                    }

                archivo << "Precio total de su compra: $" << fixed << setprecision(2) << calcularTotal() << "\n";
                archivo << "---------------------------------------------------" << endl << endl;

                archivo.close();
                
                cout << "El pedido fue guardado exitosamente en " << nombreArchivo << endl <<endl;
            } else 
                {
                    cerr << "No se pudo abrir el archivo para escribir." << endl<< endl;
                }
    }