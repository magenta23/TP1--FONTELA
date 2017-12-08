#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "ArrayList.h"
int parserNumero(FILE* pFile, ArrayList* pArrayListLetra);
void listar(ArrayList* lista);
int completar_lista(ArrayList* lista);
ArrayList* ordernar_lista(ArrayList* lista);
ArrayList* ordernar_listaASC(ArrayList* lista);
void quitarRepetidos_lista(ArrayList* lista);

#endif // FUNCIONES_H_INCLUDED

