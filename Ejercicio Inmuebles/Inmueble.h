#ifndef INMUEBLE_H_INCLUDED
#define INMUEBLE_H_INCLUDED
#include "Direccion.h"
#include "Fecha.h"

class Inmueble{
protected:
    Direccion _Direccion;
    Fecha _FechaIngreso;
    Fecha _FechaOperacion;
    int _Superficie;
    int _TipoOperacion;

public:
    //CONSTRUCTOR
    Inmueble();

    //SETTERS
    void Cargar();
    void setSuperficie(int superficie);
    void setTipoOperacion(int operacion);

    //GETTERS
    void Mostrar();
    int getSuperficie();
    const char* getTipoOperacion();

};

#endif // INMUEBLE_H_INCLUDED
