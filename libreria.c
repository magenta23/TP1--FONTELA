#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

int calculadora (float x, float y)
{
        printf("\n         ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
		printf("\n         บ               :: C A L C U L A D O R A ::                 บ");
		printf("\n         ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน");
		printf("\n         บ                X = %.2f      Y = %.2f                     บ", x, y);
		printf("\n         บ                                                           บ");
		printf("\n         บ       1.- Suma                     4.- Division           บ");
		printf("\n         บ                                                           บ");
		printf("\n         บ       2.- Resta                    5.- Factorial          บ");
		printf("\n         บ                                                           บ");
		printf("\n         บ       3.- Multiplicacion           6.- Calcular todas     บ");
		printf("\n         บ                                                           บ");
		printf("\n         บ                        7.- Salir                          บ");
		printf("\n         ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ");
		printf("\n                                Elegir Operacion : ");
		return 0;
}


float suma(float x, float y)
{
    printf("\n ----> La suma entre %.2f y %.2f es: %.2f \n\n",x,y,x+y);
    return 0;
}

float resta(float x, float y)
{
    printf("\n ----> La diferencia entre %.2f y %.2f es: %.2f \n\n",x,y,x-y);
    return 0;
}

float multiplicacion(float x, float y)
{
     printf("\n ----> La multiplicacion entre %.2f y %.2f es: %.2f \n\n",x,y,x*y);
     return 0;
}

float division(float x, float y)
{
        if(y==0)
			{
				printf("\n >>>>> No se puede dividir por 0 <<<<<\n\n");
			}else
			{
				printf("\n ----> La division entre %.2f y %.2f es: %.2f \n\n", x,y, x/y);
			}
			return 0;
}

float factorial(float x)
{
    unsigned long long respuesta = 1;
    int i;
        if(x<0)
			{
				printf("\n >>>>> No existe el factorial de %.2f <<<<<\n\n", x);
			}
			else
			{
			    for(i=1; i<=x; ++i)
                {
                    respuesta *= i;
                }
			    printf("\n ----> El factorial de %.0f es: %llu \n\n",x, respuesta);
			}
			return 0;
}

int validarOpcion(int opc)
{
     printf("\n>>>>> Ingrese opcion entre 1 y 6 <<<<<\n\n");
     return 0;
}
