#include <stdio.h>
#include <stdlib.h>
#include "letra.h"
#include "funciones.h"
#include "ArrayList.h"

int main()
{
    char seguir = 's';
    int opcion = 0;
    int flag;

    ArrayList* lista_letras = al_newArrayList();
    //ArrayList* lista_final = al_newArrayList();

    if (lista_letras == NULL /*&& lista_final != NULL*/ )
    {
        printf("\nNo se pudo reservar memoria...");
        exit(1);
    }
    FILE* f = fopen("datos.csv","r");

    if(f == NULL)
    {
        printf("\nNo se pudo abrir el archivo...");
        exit(1);
    }
    while( seguir == 's' )
    {
        printf("1- ALTAS\n");
        printf("2- COMPLETAR\n");
        printf("3- COMPROBAR\n");
        printf("4- GENERAR Y LISTAR\n");
        printf("5- SALIR\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            system("cls");
            printf("\n*******ALTAS*******\n****CARGA DE DATOS****\n");
            flag = parserNumero(f,lista_letras);
            if(flag)
            {
                printf("\nError al parsear archivo DATOS\n\n");
            }
            else
            {
                printf("\nArchivo DATOS cargado con exito\n\n");
            }
            fflush(stdin);
            break;
        case 2:
            system("cls");
            printf("\n***COMPLETAR***\n");
            flag = completar_lista(lista_letras);
            if (flag)
            {
                printf("\nError al completar lista\n\n");
            }
            else
            {
                printf("\nLista completada con exito\n\n");
            }
            listar(lista_letras);
            printf("\n");
            fflush(stdin);
            break;
        case 3:
            system("cls");
            printf("\n***COMPROBAR***\n");
            //ingresar(lista_letras);
            fflush(stdin);
            break;
        case 4:
            system("cls");
            printf("\n***GENERAR Y LISTAR***\n*********DESCENDENTE CON LETRAS REPETIDAS*********\n");
            ordernar_lista(lista_letras);//OK
            listar(lista_letras);//OK
            printf("\n\n**** INGRESE ENTER PARA PUNTO B ****\n\n");
            system("pause");
            printf("\n***GENERAR Y LISTAR***\n*********ASCENDENTE SIN LETRAS REPETIDAS*********\n");
            /*quitarRepetidos_lista(lista_letras);//VER, codigo ok*/
            ordernar_listaASC(lista_letras);//OK
            listar(lista_letras);//OK
            fflush(stdin);
            break;
        case 5:
            system("cls");
            printf("***Saliendo...***\n");
            seguir = 'n';
            fflush(stdin);
            break;
        }
    }
    return 0;
}
