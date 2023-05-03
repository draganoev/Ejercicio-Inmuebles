#include <iostream>
#include "Casa.h"
#include "Departamento.h"
#include "Local.h"
#include "Terreno.h"
using namespace std;

int main()
{
Casa C;
Departamento D;
Local L;
Terreno T;

cout<<"--------------------"<<endl;
cout<<"Cargue los inmuebles"<<endl;
cout<<"--------------------"<<endl;

cout<<"CASA"<<endl;
C.Cargar();
cout<<"DEPARTAMENTO"<<endl;
D.Cargar();
cout<<"LOCAL"<<endl;
L.Cargar();
cout<<"TERRENO"<<endl;
T.Cargar();
cout<<"----------------------------"<<endl;
cout<<"Informacion de los inmuebles"<<endl;
cout<<"----------------------------"<<endl;

C.Mostrar();
D.Mostrar();
L.Mostrar();
T.Mostrar();
    return 0;
}
