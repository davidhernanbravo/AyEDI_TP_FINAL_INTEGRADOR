#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include "persona.hpp"

class Cliente : public Persona 
    {
        private:
            string domicilio;

        public:
            Cliente(int id, string nombre, string domicilio);

            int obtenerId() override;
            string obtenerNombre() override;
            string obtenerDomicilio();
    };

#endif