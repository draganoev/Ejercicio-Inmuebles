#include <iostream>
#include "Inmueble.h"
using namespace std;

//CONSTRUCTOR
Inmueble::Inmueble(){
_Superficie=0;
_TipoOperacion=0;

}

//SETTERS
void Inmueble::Cargar(){
int superficie,tipoOperacion;

cout<<"Direccion          "<<endl;
cout<<"-------------------"<<endl;
_Direccion.Cargar();
cout<<"Fecha de ingreso   "<<endl;
cout<<"-------------------"<<endl;
_FechaIngreso.Cargar();
cout<<"Fecha de operacion "<<endl;
cout<<"-------------------"<<endl;
_FechaOperacion.Cargar();
cout<<"Superficie        : ";
cin>>superficie;
setSuperficie(superficie);
cout<<"Tipo de operacion : ";
cin>>tipoOperacion;
setTipoOperacion(tipoOperacion);

}
void Inmueble::setSuperficie(int superficie){
    _Superficie=superficie;

}
void Inmueble::setTipoOperacion(int operacion){
    _TipoOperacion=operacion;
}

//GETTERS
void Inmueble::Mostrar(){
cout<<"Direccion          "<<endl;
cout<<"-------------------"<<endl;
_Direccion.Mostrar();
cout<<"Fecha de Ingreso   "<<endl;
cout<<"-------------------"<<endl;
_FechaIngreso.Mostrar();
cout<<"Fecha de Operacion "<<endl;
cout<<"-------------------"<<endl;
_FechaOperacion.Mostrar();
cout<<"Superficie: "<<getSuperficie()<<endl;
cout<<"Tipo de Operacion: "<<getTipoOperacion()<<endl;

}
int Inmueble::getSuperficie(){
    return _Superficie;

}
const char* Inmueble::getTipoOperacion(){
    if(_TipoOperacion==1){
        return "Venta";
    }else if(_TipoOperacion==2){
    return "Alquiler";
    }

}
