/*
 ============================================================================
 Name        : TP1.c
 Author      : Monsalbo Lucio
 Version     : 8
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "logica.h"
#include "matematica.h"

int main(void) {

	setbuf(stdout, NULL);

	float operando1 = 0;
	float operando2 = 0;
	int input = 1;/*se guarda */
	int tercero = 0;/*usada para resultado del tercero ejercicio e igualada a 0 para validar*/
	int cuarto = 0;/*usada para resultado del cuarto ejercicio e igualada a 0 para validar*/
	int quinto = 0;
	int validarMenu = 0;/*variable utilizada para validar que se allan realizado correctamente los procedimientos*/
	float resultadoSuma;
	float resultadoResta;
	float resultadoDivision;
	float resultadoMultiplicacion;
	float resultadoFactorial1;
	float resultadoFactorial2;

	while(quinto==0)
	{
		do
		{
			system("cls");
			validarMenu = listaMenu(operando1, operando2, tercero, cuarto);
			scanf("%d", &input);
			tercero = 0;/*para que al ejecutarse mas de una ves aparesca el menu correcto, de lo contrario tercero siempre quedara en 1*/
		}while(input<1 && input>5 && validarMenu == 0);

		switch(input)
		{
			case 1:
				printf("ingresar 1ºer operando\n");
				fflush(stdin);
				scanf("%f", &operando1);
				break;
			case 2:
				printf("ingresar 2ºdo operando\n");
				fflush(stdin);
				scanf("%f", &operando2);
				break;
			case 3:
				resultadoSuma = sumaOperandos( operando1, operando2);

				resultadoResta = restaOperandos( operando1, operando2);

				validarDivision(operando1, operando2, &resultadoDivision);

				resultadoMultiplicacion = multiplicacionOperandos( operando1,  operando2);

				validarFactorial(operando1, &resultadoFactorial1);

				validarFactorial(operando2, &resultadoFactorial2);

				printf("3");
				break;
			case 4:

				mostrarCalculos(resultadoSuma,
								resultadoResta,
								resultadoDivision,
								resultadoMultiplicacion,
								resultadoFactorial1,
								resultadoFactorial2);
				break;
			case 5:
				quinto = -1;/*distinto de 0 para finalizar bucle*/
				printf( "           GRACIAS POR UTILIZAR ESTE PROGRAMA\n"
						"             PRODUCIDO POR Monsalbo lucio\n"
						"              EDITADO POR Lucio Monsalbo\n"
						"         BUILDEADO POR Alejandro Lucio Monsalbo\n"
						"        TESTEADO POR Valerio Alejandro Monsalbo\n"
						"        ENVIADO POR Monsalbo Lucio Alejandro Valerio\n"
						"   AGRADECIMIENTO ESPECIAL A Lucio Alejandro Valerio Monsalbo\n");
				break;
		}
	}
		return 0;
}
