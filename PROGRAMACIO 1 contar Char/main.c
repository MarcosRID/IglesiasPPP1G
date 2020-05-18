#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int contarCaracteres(char string[], char caracter);

int main()
{
    int paridad;

    paridad=contarCaracteres("hHolah",'h');

    printf("%d", paridad);
    return 0;
}

int contarCaracteres(char string[], char caracter)
{
    int contador=0;
    int cantidad;

    cantidad = strlen(auxStrimg);


    for (int i=0; i< cantidad ;i++)
    {
        if(caracter==auxStrimg[i])
        {
            contador++;
        }
    }
    return contador;
}
