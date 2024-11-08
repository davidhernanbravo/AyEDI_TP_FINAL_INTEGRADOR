#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include "persona.hpp"

class Empleado : public Persona 
    {
        private:
            string puesto;

        public:
            Empleado(int id, string nombre, string puesto);
            
            int obtenerId() override;
            string obtenerNombre() override;
            string obtenerPuesto();
    };

#endif