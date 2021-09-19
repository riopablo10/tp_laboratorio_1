/*
 ============================================================================
 Name        : TP_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {

	setbuf(stdout, NULL);
	/*Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
	 *
	 *
	 */
	int opcionMenu;
	int aux;
	float primerOperando;
	float segundoOperando;
	float resultadoDividir;
	int retornoDivision;
	float resultadoSuma;
	float resultadoResta;
	float resultadoMultiplicacion;
	int flagPrimerOp;
	int flagSegundoOp;

	printf("Bienvenido al Menu");
	fflush(stdin);

	do
	{
		printf("\nIndique accion a realizar:");
		if(flagPrimerOp==0)
		{
			printf("\n1. Ingrese primer operando =%.2f",primerOperando);
		}
		else
		{
			printf("\n1. Ingrese primer operando");
		}
		if(flagSegundoOp==0)
		{
		printf("\n2. Ingrese segundo operando =%.2f", segundoOperando);
		}
		else
		{
			printf("\n2. Ingrese segundo operando");
		}
		printf("\n3. Calcular operaciones (suma, resta, division, multiplicacion y factorial");
		printf("\n4. Informar resultados");
		printf("\n5. Salir");

		if(validarOpcionMenu(&opcionMenu, "\nError, opcion no valida", 1,5,2)==0)
		{
			aux=opcionMenu;
		}
		switch(aux)
		{
			case 1:
				flagPrimerOp= utn_pedirOperando(&primerOperando);
				break;
			case 2:
				flagSegundoOp = utn_pedirOperando(&segundoOperando);
				break;
			case 3:
				resultadoSuma = sumar((float)primerOperando, (float)segundoOperando);
				resultadoResta = restar((float)primerOperando, (float)segundoOperando);
				resultadoMultiplicacion = multiplicar((float)primerOperando, (float)segundoOperando);
				retornoDivision = dividir(primerOperando, segundoOperando, &resultadoDividir);
				if(retornoDivision==1)
				{
					printf("\nError, no se puede dividir por 0");
				}
				break;
			case 4:
				utn_mostrarResultado(resultadoSuma, resultadoResta, resultadoMultiplicacion, resultadoDividir);
				break;
			case 5:
				printf("Hasta la proxima!");
				break;
		}


	}while(aux != 5);


	return EXIT_SUCCESS;
}
