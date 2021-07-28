/*
 * OperacionesMatematicas.c
 *
 *  Created on: 8 abr. 2021
 *      Author: Monsalbo Lucio
 */

#include "matematica.h"
#include "logica.h"

float sumaOperandos(float operando1, float operando2)
{
	float resultadoSuma;
	resultadoSuma = operando1 + operando2;
	return resultadoSuma;
}

float restaOperandos(float operando1, float operando2)
{
	float restaOperandos;
	restaOperandos = operando1 - operando2;
	return restaOperandos;
}

float divisionOperandos(float operando1, float operando2)
{
	float resultadoDivicion;
	resultadoDivicion = operando1 / operando2;
	return resultadoDivicion;
}

float multiplicacionOperandos(float operando1, float operando2)
{
	float resultadoMultiplicacion;
	resultadoMultiplicacion = operando1 * operando2;
	return resultadoMultiplicacion;
}

float factorialOperandos(float operando)
{
	int resultado;

		if(operando==0)
		{
			resultado = 1;
		}else{
			resultado = operando * factorialOperandos(operando - 1);
		}
	return resultado;
}
