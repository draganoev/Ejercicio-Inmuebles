#include <iostream>
#include "Fecha.h"
using namespace std;

//CONSTRUCTOR
Fecha::Fecha(){
_Dia=1;
_Mes=1;
_Anio=1900;
}

//SETTERS
void Fecha::Cargar(){
int dia,mes,anio;

cout<<"Dia: ";
cin>>dia;
setDia(dia);
cout<<"Mes: ";
cin>>mes;
setMes(mes);
cout<<"Anio: ";
cin>>anio;
setAnio(anio);
}


void Fecha::setDia(int dia){
    _Dia=dia;

}
void Fecha::setMes(int mes){
    _Mes=mes;
}
void Fecha::setAnio(int anio){
    _Anio=anio;
}

//GETTERS
void Fecha::Mostrar(){

cout<<"Dia  : "<<getDia()<<endl;
cout<<"Mes  : "<<getMes()<<endl;
cout<<"Anio : "<<getAnio()<<endl;

}
int Fecha::getDia(){
    return _Dia;
}
int Fecha::getMes(){
    return _Mes;
}
int Fecha::getAnio(){
    return _Anio;
}
