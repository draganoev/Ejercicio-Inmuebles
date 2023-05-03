#include <iostream>
#include <cstring>
#include "Direccion.h"
#include "Funciones.h"
using namespace std;


//CONSTRUCTOR
Direccion::Direccion(){
strcpy(_Calle,"");
_Numero=0;
_CodigoPostal=0;
strcpy(_Localidad,"");
strcpy(_Piso,"");
}

//SETTERS
void Direccion::Cargar(){
int numero,codigoPostal;
char calle[30], localidad[30],piso[30];


cout<<"Calle        : ";
cargarCadena(calle,30);
setCalle(calle);
cout<<"Numero       : ";
cin>>numero;
setNumero(numero);
cout<<"Codigo Postal: ";
cin>>codigoPostal;
setCodigoPostal(codigoPostal);
cout<<"Localidad    : ";
cargarCadena(localidad,30);
setLocalidad(localidad);
cout<<"Piso         : ";
cargarCadena(piso,30);
setPiso(piso);

}

void Direccion::setCalle(const char* calle){
strcpy(_Calle,calle);
}

void Direccion::setNumero(int numero){
_Numero=numero;
}

void Direccion::setCodigoPostal(int codigoPostal){
_CodigoPostal=codigoPostal;
}

void Direccion::setLocalidad(const char* localidad){
strcpy(_Localidad,localidad);
}

void Direccion::setPiso(const char* piso){
strcpy(_Piso,piso);
}

//GETTERS
void Direccion::Mostrar(){
cout<<"Calle: "<<getCalle()<<endl;
cout<<"Numero: "<<getNumero()<<endl;
cout<<"Codigo Postal: "<<getCodigoPostal()<<endl;
cout<<"Localidad: "<<getLocalidad()<<endl;
cout<<"Piso: "<<getPiso()<<endl;


}
const char* Direccion::getCalle(){
return _Calle;

}

int Direccion::getNumero(){
return _Numero;
}

int Direccion::getCodigoPostal(){

return _CodigoPostal;
}

const char* Direccion::getLocalidad(){
return _Localidad;

}

const char* Direccion::getPiso(){

return _Piso;

}



