/*
 * OperacionesMatematicas.h
 *
 *  Created on: 8 abr. 2021
 *      Author: Monsalbo Lucio
 */

#include <stdio.h>
#ifndef OPERACIONESMATEMATICAS_H_
#define OPERACIONESMATEMATICAS_H_

float sumaOperandos(float operando1, float operando2);
/**
 * @fn float sumaOperandos(float, float)
 * @brief suma 2 numeros de cualquier tipo
 * 				operando1 + operando2
 * @param operando1
 * @param operando2
 * @return  resultado de la suma
 */

float restaOperandos(float operando1, float operando2);
/**
 * @fn float restaOperandos(float, float)
 * @brief resta 2 numeros de cualquier tipo
 * 				operando1 - operando2
 * @param operando1
 * @param operando2
 * @return  resultado de la resta
 */

float divisionOperandos(float operando1, float operando2);
/**
 * @fn float divisionOperandos(float, float)
 * @brief divide 2 numeros(pueden ser con decimales)
 * 				operando1 / operando2
 * @param operando1
 * @param operando2
 * @return resultado de la division
 */

float multiplicacionOperandos(float operando1, float operando2);
/**
 * @fn float multiplicacionOperandos(float operando1, float operando2);
 * @brief multiplica 2 numeros (pueden ser con decimales)
 * 					operando1 * operando2
 * @param operando1
 * @param operando2
 * @return resultado de la multiplicacion
 */

float factorialOperandos(float operando);
/**
 * @fn float factorialOperandos(float operando);
 *  @brief factoriza el numero ingresado
 *  				n!=n*(n-1)
 *  				si n>=0
 * @param operando
 * @return resultado de la factorizacion
 */

#endif /* OPERACIONESMATEMATICAS_H_ */
