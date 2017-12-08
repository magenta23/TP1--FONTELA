#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "letra.h"
#include "ArrayList.h"
#include "funciones.h"

int parserNumero(FILE* pFile, ArrayList* pArrayListLetra)
{

    int retorno = 1;
    char auxLetra[10];
    char auxNombre[51];
    char auxVocal[10];
    char auxConsonante[10];
    eLetra* nuevaLetra;

    if(pFile == NULL || pArrayListLetra == NULL)
    {
        return retorno;
    }
    fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",auxLetra,auxNombre,auxVocal,auxConsonante);

    while(!feof(pFile))
    {
        nuevaLetra = letra_new();

        if(nuevaLetra != NULL)
        {
            fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",auxLetra,auxNombre,auxVocal,auxConsonante);

            strcpy(nuevaLetra->letra, auxLetra);
            strcpy(nuevaLetra->nombre, auxNombre);
            nuevaLetra->vocal = atoi(auxVocal);
            nuevaLetra->consonante = atoi(auxConsonante);

            if ( pArrayListLetra->add(pArrayListLetra, nuevaLetra) == -1 )
            {
                retorno = 1;
                break;
            }
            else
            {
                retorno = 0;
            }
        }
    }
    return retorno;
}

void listar(ArrayList* lista)
{
    eLetra* unaLetra;
    int i;
    printf("\nLetra | Nombre | Vocal | Consonante \n");
    for(i=0; i < al_len(lista); i++)
    {
        unaLetra = (eLetra*)lista->get(lista, i);
        letra_print(unaLetra);
        printf("\n");
    }
}
int completar_lista(ArrayList* lista)
{
    int retorno = 1;
    eLetra* auxLetra;
    int i;
    char valor[10];

    if (lista != NULL)
    {
        for (i = 0; i<lista->len(lista); i++)
        {
            auxLetra = lista->get(lista,i);
            if (auxLetra != NULL)
            {
                strcpy(valor, letra_getLetra(auxLetra));
                //valor = letra_getLetra(auxLetra);
              if (esVocal(valor) == 0)//VER
                {
                    letra_setVocal(auxLetra,1);
                }
                else
                {
                    letra_setConsonante(auxLetra,1);
                }
                lista->set(lista, i, auxLetra);
            }
        }
        retorno = 0;
    }
    return retorno;
}
ArrayList* ordernar_lista(ArrayList* lista )
{
    if ( lista != NULL )
    {
        lista->sort(lista,letra_compare,0);
    }
}
ArrayList* ordernar_listaASC(ArrayList* lista )
{
    if ( lista != NULL )
    {
        lista->sort(lista,letra_compare,1);
    }
}

void quitarRepetidos_lista(ArrayList* lista)
{
    eLetra* auxLetra;
    eLetra* auxLetra2;
    int i,j;

    if ( lista != NULL  )
    {
        for (i = 0; i<lista->len(lista); i++)
        {
            auxLetra = lista->get(lista,i);
            for ( j = i+1; j<lista->len(lista); j++ )
            {
                auxLetra2 = lista->get(lista,j);
                if ( letra_compare(auxLetra,auxLetra2) == 0)
                {
                    lista->remove(lista,j);
                }
            }
        }
    }
}
