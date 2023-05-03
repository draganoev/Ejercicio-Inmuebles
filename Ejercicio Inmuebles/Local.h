#ifndef LOCAL_H_INCLUDED
#define LOCAL_H_INCLUDED
#include "Inmueble.h"

class Local: public Inmueble{
private:
    int _Zona;

public:
    //CONSTRUCTOR
    Local();

    //SETTERS
    void Cargar();
    void setZona(int zona);

    //GETTERS
    void Mostrar();
    int getZona();
};

#endif // LOCAL_H_INCLUDED
