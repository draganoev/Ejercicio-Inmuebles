#include <iostream>
using namespace std;

void cargarCadena(char *pal, int tam)
{
    int i,x;
    fflush(stdin);
    for ( x=0; x<tam; x++)
    {
        pal[x]=cin.get();
        if(pal[x]=='\n') break;

    }
    pal[x]='\0';
    fflush(stdin);
}
