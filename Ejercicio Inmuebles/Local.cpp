#include <iostream>
#include "Local.h"
using namespace std;

//CONSTRUCTOR
Local::Local(){
_Zona=1;

}

//SETTERS
void Local::Cargar(){
int zona;
Inmueble::Cargar();
cout<<"Zona (1 - Comercial / 2 - Mixta / 3 - Industrial): ";
cin>>zona;
setZona(zona);

}
void Local::setZona(int zona){
    _Zona=zona;

}

//GETTERS
void Local::Mostrar(){
Inmueble::Mostrar();
cout<<"Zona: ";
if(getZona()==1){
    cout<<"Comercial";
}else if(getZona()==2){
cout<<"Mixta";}else if(getZona()==3){
cout<<"Industrial";}

}
int Local::getZona(){
    return _Zona;

}
