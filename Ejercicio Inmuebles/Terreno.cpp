#include <iostream>
#include "Terreno.h"
#include "Inmueble.h"
using namespace std;

//CONSTRUCTOR
Terreno::Terreno(){
    _Mejoras='A';

}

//SETTERS
void Terreno::Cargar(){
char mejoras;
Inmueble::Cargar();
cout<<"Mejoras ('A' - Sin mejoras / 'B' - Asfalto / 'C' - Todo): ";
cin>>mejoras;
setMejoras(mejoras);

}
void Terreno::setMejoras(char mejoras){
    _Mejoras=mejoras;
}

//GETTERS
void Terreno::Mostrar(){
Inmueble::Mostrar();
cout<<"Mejoras: ";
if(getMejoras()=='A'){
    cout<<"Sin mejoras";
}else if(getMejoras()=='B'){
cout<<"Asfalto";}else if(getMejoras()=='C'){
cout<<"Todo";}

}

char Terreno::getMejoras(){

    return _Mejoras;
}
