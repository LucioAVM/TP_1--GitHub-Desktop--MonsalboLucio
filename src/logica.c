/*
 * logica.c
 *
 *  Created on: 15 abr. 2021
 *      Author: Monsalbo Lucio
 */

#include "logica.h"
#include "matematica.h"

int listaMenu(float primero, float segundo, int tercero, int cuarto)
{
	int retorno;

	if(primero ==0 && segundo == 0 && tercero == 0 && cuarto == 0)
	{
		printf("                      1. Ingresar 1er operando\n\n");
		printf("                       2. Ingresar 2do operando\n\n");
		printf("                       3. Calcular todas las operaciones\n "
				"                                    Suma\n"
				"                                     Resta\n "
				"                                   Division\n  "
				"                               Multiplicacion\n "
				"                                  Factorial\n\n");
		printf("                       4. Informar resultados\n\n");
		printf("                       5. Salir\n\n ");
		printf("ingresar opcion:a");
		retorno = 0;
	}else{
		if(primero !=0 && segundo == 0 && tercero == 0 && cuarto == 0)
		{
			//system("cls");
			printf("                      1. Ingresar 1er operando\n:"
					"                                  %.2f\n", primero);
			printf("                       2. Ingresar 2do operando\n\n");
			printf("                       3. Calcular todas las operaciones\n "
					"                                    Suma\n"
					"                                     Resta\n "
					"                                   Division\n  "
					"                               Multiplicacion\n "
					"                                  Factorial\n\n");
			printf("                       4. Informar resultados\n\n");
			printf("                       5. Salir\n\n ");
			printf("ingresar opcion:b");

			retorno = 0;
		}else{
			if(primero !=0 && segundo != 0 && tercero == 0 && cuarto == 0)
			{
				//system("cls");
				printf("                      1. Ingresar 1er operando\n:"
						"                                  %.2f\n", primero);
				printf("                       2. Ingresar 2do operando:\n"
						"                                   %.2f\n", segundo);
				printf("                       3. Calcular todas las operaciones\n "
						"                                    Suma\n"
						"                                     Resta\n "
						"                                   Division\n  "
						"                               Multiplicacion\n "
						"                                  Factorial\n\n");
				printf("                       4. Informar resultados\n\n");
				printf("                       5. Salir\n\n ");
				printf("ingresar opcion:c");

				retorno = 0;
			}else{
				if(primero !=0 && segundo != 0 && tercero != 0 && cuarto == 0)
				{
					//system("cls");
					printf("                     1. Ingresar 1er operando\n:"
							"                                  %.2f\n", primero);
					printf("                       2. Ingresar 2do operando:\n"
							"                                  %.2f\n", segundo);
					printf("                       3. Calcular todas las operaciones\n "
							"                                    Suma\n"
							"                                     Resta\n "
							"                                   Division\n  "
							"                               Multiplicacion\n "
							"                                  Factorial\n"
							"                se han realizado todods los calculos con exito\n"
							"                        pulse la opcion 4 para mostrarlos\n");
					printf("                       4. Informar resultados\n\n");
					printf("                       5. Salir\n\n ");
					printf("ingresar opcion:d");

					retorno = 0;
				}else{
					if(primero !=0 && segundo != 0 && tercero != 0 && cuarto != 0)
					{
						//system("cls");

						printf("1. Ingresar 1er operando:%.2f\n", primero);
						printf("2. Ingresar 2do operando:%.2f\n", segundo);
						printf("3. Calcular todas las operaciones (Suma, Resta, Divicion, Multiplicacion, y Factorial):%d\n", tercero);
						//"los calculos se han realizado correctamente"
						printf("4. Informar resultados:%d\n",cuarto);
						//llamar funcion mostrar calculos
						printf("5. Salir \n");
						printf("ingresar opcion:f");
						retorno = 0;
					}else{
						//system("cls");

						printf("ERROR, se deben realizar los pasos en el orden asignado");
						retorno=1;
					}
				}
			}
		}
	}
	return retorno;
}

void validarDivision(float operando1, float operando2, float* resultadoDivision)
{
	if(operando2!=0)
					{
						*resultadoDivision = divisionOperandos( operando1,  operando2);
					}else{
						printf( "\n\n\n\n   ERROR \n   AL \n   INTENTAR \n   DIVIDIR\n2\n\n\n\n"
																			"      no se puede dividir por 0\n"
																			"      Por favor intente nuevamente:\n\n\n\n");
					}

}
void validarFactorial(float operando, float* resultadoFactorial)
{
	if(operando>0)
		{
			*resultadoFactorial = factorialOperandos(operando);
		}else{
			printf( "\n\n\n\n   ERROR \n   AL \n   INTENTAR \n   FACTORIZAR\n   OPERANDO \n\n\n\n"
														"      Por favor intente nuevamente:\n\n\n\n");
		}
}


void mostrarCalculos(float resultadoSuma,
					float resultadoResta,
					float resultadoDivision,
					float resultadoMultiplicacion,
					float resultadoFactorial1,
					float resultadoFactorial2)
{

	printf("            RESULTADOS               \n\n");
	printf(" ___S_U_M_A____   __R_E_S_T_A___   \n");
	printf("|              | |              |  \n");
	printf("|     %.2f     | |     %.2f    |  \n", resultadoSuma, resultadoResta);
	printf("|______________| |______________|  \n\n");

	printf(" D_I_V_I_S_I_O_N  MULTIPLICACION   \n");
	printf("|              | |              |  \n");
	printf("|     %.2f     | |     %.2f     |  \n", resultadoDivision, resultadoMultiplicacion);
	printf("|______________| |______________|  \n\n");

	printf(" __FACTORIAL___   ___FACTORIAL__ \n");
	printf("|              | |              |  \n");
	printf("|     %.2f     | |     %.2f    |  \n", resultadoFactorial1, resultadoFactorial2);
	printf("|______________| |______________|  \n\n\n\n");

}
