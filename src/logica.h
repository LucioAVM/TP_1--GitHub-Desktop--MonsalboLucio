/*
 * logica.h
 *
 *  Created on: 15 abr. 2021
 *      Author: Monsalbo Lucio
 */

#ifndef LOGICA_H_
#define LOGICA_H_

int listaMenu(float primero, float segundo, int tercero, int cuarto);
/**
 * @fn int listaMenu(float primero, float segundo, int tercero, int cuarto)
 * @brief recibe 5 inputs de los cuales depende que menu se mostrara
 *
 * @param resultadoSuma
 * @param resultadoResta
 * @param resultadoDivicion
 * @param resultadoMultiplicacion
 * @param resultadoFactorial1
 * @param resultadoFactorial2
 * @return muestra los resultados en el menu y de realizarse los pasos en orden incorrecto muestra error
 */

void mostrarCalculos(float resultadoSuma,
					float resultadoResta,
					float resultadoDivicion,
					float resultadoMultiplicacion,
					float resultadoFactorial1,
					float resultadoFactorial2);
/**
 * @fn void mostrarCalculos(float resultadoSuma,
 * 							float resultadoResta,
 *							float resultadoDivicion,
 *							float resultadoMultiplicacion,
 *							float resultadoFactorial1,
 *							float resultadoFactorial2)
 * @brief recibe los resultados y los muestra
 *
 * @param resultadoSuma
 * @param resultadoResta
 * @param resultadoDivicion
 * @param resultadoMultiplicacion
 * @param resultadoFActorial1
 * @param resultadoFactorial2
 * @return void
 */

void validarDivision(float operando1, float operando2, float* resultadoDivision);
/**
 * @fn void validarDivision(float operando1, float operando2, float* resultadoDivision)
 * @brief valida que no se este dividiendo por 0 y devuelve el resultado por puntero
 *
 * @param operando1
 * @param operando2
 * @param resultadoDivision
 * @return void
 */

void validarFactorial(float operando, float* resultadoFactorial);
/**
 * @fn void validarFactorial(float operando, float* resultadoFactorial)
 * @brief valida factorial y devuelve resultado por puntero
 *
 * @param operando
 * @param resultadoFactorial
 * @return void
 */

#endif /* LOGICA_H_ */
