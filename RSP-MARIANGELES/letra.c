#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "letra.h"

char* letra_getLetra(eLetra* this)
{
    if(this != NULL)
    {
        return this->letra;
    }
}
void letra_setLetra(eLetra* this, char* unaLetra)
{
    if(this != NULL)
    {
        strcpy(this->letra, unaLetra);
    }
}
char* letra_getNombre(eLetra* this)
{
    if(this != NULL)
    {
        return this->nombre;
    }
}
void letra_setNombre(eLetra* this, char* unNombre)
{
    if(this != NULL)
    {
        strcpy(this->nombre, unNombre);
    }
}
int* letra_getVocal(eLetra* this)
{
    if(this != NULL)
    {
        return this->vocal;
    }
}
void letra_setVocal(eLetra* this, int* unaVocal)
{
    if(this != NULL)
    {
        this->vocal = unaVocal;
    }
}
int* letra_getConsonante(eLetra* this)
{
    if(this != NULL)
    {
        return this->consonante;
    }
}
void letra_setConsonante(eLetra* this, int* unaConsonante)
{
    if(this != NULL)
    {
        this->consonante = unaConsonante;
    }
}


eLetra* letra_new(void)
{
    eLetra* returnAux;
    returnAux = (eLetra*)malloc(sizeof(eLetra));
    if (returnAux != NULL)
    {
        strcpy(returnAux->letra, "");
        strcpy(returnAux->nombre, "");
        returnAux->vocal = 0;
        returnAux->consonante = 0;
    }
    return returnAux;
}

void letra_print(eLetra* this)
{
    if(this != NULL)
    {
        printf("  %s |   %s   |   %d   |   %d ", this->letra, this->nombre, this->vocal, this->consonante);
    }
}

int esVocal(char unaLetra)
{
    int retorno;

    if ( unaLetra=='a'||unaLetra=='e'||unaLetra=='i'||unaLetra=='o'||unaLetra=='u'||unaLetra=='A'||unaLetra=='E'||unaLetra=='I'||unaLetra=='O'||unaLetra=='U' )
    {
        retorno = 0;
    }
    else
    {
        retorno = 1;
    }
    return retorno;
}

int letra_compare(eLetra* Alfa, eLetra* Beta)
{
    if ( strcmp(((eLetra*)Alfa)->letra,((eLetra*)Beta)->letra)>0 )
    {
        return 1;
    }
    if ( strcmp(((eLetra*)Alfa)->letra, ((eLetra*)Beta)->letra)<0 )
    {
        return -1;
    }
    return 0;
}
