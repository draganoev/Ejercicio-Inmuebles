#include <iostream>
#include "Casa.h"
using namespace std;

//CONSTRUCTOR
Casa::Casa(){
_Ambientes=0;
_SuperficieConstruida=0;

}

//SETTERS
void Casa::Cargar(){
int ambientes,superficieConstruida;
Inmueble::Cargar();
cout<<"Ambientes: ";
cin>>ambientes;
setAmbientes(ambientes);
cout<<"Superficie construida: ";
cin>>superficieConstruida;
setSuperficieConstruida(superficieConstruida);

}

void Casa::setAmbientes(int ambientes){
    _Ambientes=ambientes;
}

void Casa::setSuperficieConstruida(int superficieConstruida){
    _SuperficieConstruida=superficieConstruida;

}

//GETTERS
void Casa::Mostrar(){
Inmueble::Mostrar();
cout<<"Ambientes: "<<getAmbientes()<<endl;
cout<<"Superficie construida: "<<getSuperficieConstruida();

}

int Casa::getAmbientes(){

    return _Ambientes;
}

int Casa::getSuperficieConstruida(){

    return _SuperficieConstruida;
}


