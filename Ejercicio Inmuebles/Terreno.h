#ifndef TERRENO_H_INCLUDED
#define TERRENO_H_INCLUDED
#include "Inmueble.h"

class Terreno:public Inmueble{
private:
    char _Mejoras;

public:
    //CONSTRUCTOR
    Terreno();

    //SETTERS
    void Cargar();
    void setMejoras(char mejoras);

    //GETTERS
    void Mostrar();
    char getMejoras();

};

#endif // TERRENO_H_INCLUDED
