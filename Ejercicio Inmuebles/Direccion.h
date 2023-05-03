#ifndef DIRECCION_H_INCLUDED
#define DIRECCION_H_INCLUDED

class Direccion{
private:
    char _Calle[30];
    int _Numero;
    int _CodigoPostal;
    char _Localidad[30];
    char _Piso[30];

public:
    //CONSTRUCTOR
    Direccion();

    //SETTERS
    void Cargar();
    void setCalle(const char* calle);
    void setNumero(int numero);
    void setCodigoPostal(int codigoPostal);
    void setLocalidad(const char* localidad);
    void setPiso(const char* piso);

    //GETTERS
    void Mostrar();
    const char* getCalle();
    int getNumero();
    int getCodigoPostal();
    const char* getLocalidad();
    const char* getPiso();
};

#endif // DIRECCION_H_INCLUDED
