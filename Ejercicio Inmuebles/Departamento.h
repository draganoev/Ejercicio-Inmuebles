#ifndef DEPARTAMENTO_H_INCLUDED
#define DEPARTAMENTO_H_INCLUDED
#include "Inmueble.h"

class Departamento:public Inmueble{
private:
    int _Ambientes;
    bool _Instalaciones;
public:
    //CONSTRUCTOR
    Departamento();
    //SETTERS
    void Cargar();
    void setAmbientes(int ambientes);
    void setInstalaciones(int instalaciones);

    //GETTERS
    void Mostrar();
    int getAmbientes();
    bool getInstalaciones();
};



#endif // DEPARTAMENTO_H_INCLUDED
