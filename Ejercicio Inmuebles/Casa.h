#ifndef CASA_H_INCLUDED
#define CASA_H_INCLUDED
#include "Inmueble.h"

class Casa:public Inmueble{
private:
    int _Ambientes;
    int _SuperficieConstruida;

public:
    //CONSTRUCTOR
    Casa();

    //SETTERS
    void Cargar();
    void setAmbientes(int ambientes);
    void setSuperficieConstruida(int superficieConstruida);

    //GETTERS
    void Mostrar();
    int getAmbientes();
    int getSuperficieConstruida();

};

#endif // CASA_H_INCLUDED
