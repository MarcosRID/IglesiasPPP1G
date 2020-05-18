#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char procesador[20];
    char marca[20];
    float precio;

}eNotebook;

void ordenarPorMarcaPrecio(eNotebook vec[],int tam);

int main()
{
    eNotebook lista[4] = {{100,"intel","Mac",3000},{101,"msi","IBM",2500},{102,"xon","Mac",4200},{103,"atom","AMD",4000}};

   ordenarPorMarcaPrecio(lista,4);

   printf("ID   Prosesador Marca Precio\n");

   for(int i=0; i<4 ; i++)
   {
       printf("%d  %s  %s %.2f\n",lista[i].id,lista[i].procesador,lista[i].marca,lista[i].precio);
   }

    return 0;
}

void ordenarPorMarcaPrecio(eNotebook vec[],int tam)
{
    eNotebook aux;

    for (int i=0; i < tam -1; i++)
    {
        for (int j= i+1; j< tam; j++)
        {
            if(strcmp(vec[i].marca,vec[j].marca)>0)
            {
                aux=vec[i],
                vec[i]=vec[j];
                vec[j]=aux;
            }
            else if (strcmp(vec[i].marca,vec[j].marca)==0 && vec[i].precio < vec[j].precio)
            {
                aux=vec[i],
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }
}
