#include <stdio.h>
#include <stdlib.h>

float aplicarDescuento (float precio);

int main()
{
    float precioFinal = aplicarDescuento (100);

   printf("el precio finar es: $%.2f\n",precioFinal);


    return 0;
}
float aplicarDescuento (float precio)
{
    float precioFinal;

    precioFinal =precio - (precio * 0.05);

    return precioFinal;
}
