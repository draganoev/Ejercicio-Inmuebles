#include <iostream>
#include "Departamento.h"
using namespace std;

//CONSTRUCTOR
Departamento::Departamento(){
_Ambientes=0;
_Instalaciones=false;
}

//SETTERS

void Departamento::Cargar(){
int ambientes,instalaciones;

Inmueble::Cargar();
cout<<"Ambientes: ";
cin>>ambientes;
setAmbientes(ambientes);
cout<<"Instalaciones (1 SI - 2 NO): ";
cin>>instalaciones;
if(instalaciones==1){
    setInstalaciones(true);
}else{
setInstalaciones(false);}

}

void Departamento::setAmbientes(int ambientes){
    _Ambientes=ambientes;

}

void Departamento::setInstalaciones(int instalaciones){
    if(instalaciones==1){
        _Instalaciones=true;
    }else{
    _Instalaciones=false;}

}


//GETTERS
void Departamento::Mostrar(){
Inmueble::Mostrar();
cout<<"Ambientes: "<<getAmbientes();
cout<<endl;
cout<<"Instalaciones: ";
if(getInstalaciones()==true){
    cout<<"Si";
}else{
"No";}

}

int Departamento::getAmbientes(){
return _Ambientes;

}

bool Departamento::getInstalaciones(){
    return _Instalaciones;
}


