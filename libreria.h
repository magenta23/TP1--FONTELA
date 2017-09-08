#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/**\brief Suma: toma los valores de x e y, realiza su suma
 *
 * \param float x
 * \param float y
 * \return Retorna la suma de los 2 operandos en un printf
 *
 */
float suma(float x, float y);

/** \brief Resta: toma los valores de x e y, realiza la resta
 *
 * \param float x
 * \param float y
 * \return Retorna la resta de los 2 operandos en un printf
 *
 */
float resta(float x, float y);

/** \brief Multiplicacion: toma los valores de x e y, realiza la multiplicacion
 *
 * \param float x
 * \param float y
 * \return Retorna la multiplicacion de los 2 operandos en un printf
 *
 */
float multiplicacion(float x, float y);

/** \brief Division: toma los valores de x e y, realiza la division
 *
 * \param float x
 * \param float y
 * \return retorna la division de los 2 operandos en un printf
 *
 */
float division(float x, float y);

/** \brief Factorial: toma el valor de x y realiza la factorial
 *
 * \param float x
 * \return retorna el factorial del operando x en un printf
 *
 */
float factorial(float x);

/** \brief validarOpcion: valida que la opcion elegida sea entre 1 y 6
 *
 * \param opc
 * \return retorna mensaje de error
 *
 */
int validarOpcion(int opc);

/**\brief Calculadora: muestra las opciones de calculos
 *
 * \param float x
 * \param float y
 * \return Retorna las opciones con los datos de x e y ya cargados
 *
 */
int calculadora (float x, float y);

#endif // FUNCIONES_H_INCLUDED
