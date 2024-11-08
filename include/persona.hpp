#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <string>

using namespace std;

class Persona 
    {
        protected:
            int id;
            string nombre;

        public:
            Persona(int id, string nombre);
            
            // Métodos virtuales puros
            virtual int obtenerId() = 0;
            virtual string obtenerNombre() = 0;
    };

#endif