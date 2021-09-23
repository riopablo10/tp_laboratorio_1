/*
 * utn.c
 *
 *  Created on: 13 sep. 2021
 *      Author: Furya
 */

#include <stdio.h>
#include <stdlib.h>

//funciones aritmeticas------------------------------------------------------------------------------------------------------------------------------------------------------------------//
int sumar(int operadorUno, int operadorDos)
{
	int resultadoSumar;

	resultadoSumar = operadorUno + operadorDos;

	return resultadoSumar;
}

int restar(int operadorUno, int operadorDos)
{
	int resultadoRestar;

	resultadoRestar = operadorUno - operadorDos;

	return resultadoRestar;
}

int multiplicar(int operadorUno, int operadorDos)
{
	int resultadorMultiplicar;

	resultadorMultiplicar = operadorUno * operadorDos;

	return resultadorMultiplicar;
}

int dividir(int operadorUno, int operadorDos, float* pDireccionResultado)
{
	float resultadoDividir;
	int retorno;

	if(operadorDos!=0 && pDireccionResultado != NULL)
	{
		resultadoDividir = (float)operadorUno / operadorDos;
		*pDireccionResultado = resultadoDividir;
		retorno = 0; //no hubo error
	}
	else
	{
		retorno = 1; //hubo error;
	}

	return retorno;
}

int factorial (int numero)
{
	int respuesta;
	if(numero==1 || numero == 0)
	{
		respuesta = 1;
	}
	else
	{
		respuesta = numero * factorial(numero-1);
	}

	return respuesta;
}


float sumarFloat(float operadorUno, float operadorDos)
{
	float resultadoSumar;

	resultadoSumar = operadorUno + operadorDos;

	return resultadoSumar;
}

float restarFloat(float operadorUno, float operadorDos)
{
	float resultadoRestar;

	resultadoRestar = operadorUno - operadorDos;

	return resultadoRestar;
}

float multiplicarFloat(float operadorUno, float operadorDos)
{
	float resultadorMultiplicar;

	resultadorMultiplicar = operadorUno * operadorDos;

	return resultadorMultiplicar;
}



//Funciones Get Number -------------------------------------------------------------------------------------------------------------------------------------------------------------------
//GET ENTERO
int utn_getNumberInt(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int aux;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s", mensaje);
			fflush(stdin);
			scanf("%d",&aux);
			if(aux>=minimo && aux <= maximo)
			{
				*pResultado = aux;
				retorno = 0;
				break;
			}//fin de maximos
			else
			{
				printf("%s", mensajeError);
				reintentos --;
			}

		}while (reintentos >= 0);

	} //FIN DEL IF VALIDACION

	return retorno;
} //FIN FUNCIOM

//GET FLOTANTE
int utn_getNumberFloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
{
	int retorno = -1;
	float aux;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s", mensaje);
			fflush(stdin);
			scanf("%f",&aux);
			if(aux>=minimo && aux <= maximo)
			{
				*pResultado = aux;
				retorno = 0;
				break;
			}//fin de maximos
			else
			{
				printf("%s", mensajeError);
				reintentos --;
			}

		}while (reintentos >= 0);

	} //FIN DEL IF VALIDACION

	return retorno;
} //FIN FUNCIOM

int validarOpcionMenu (int* pOpcion, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int aux;

	if(pOpcion != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			fflush(stdin);
			scanf("%d",&aux);
			if(aux >= minimo && aux<= maximo)
			{
				*pOpcion = aux;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos>=0);
	}
	return retorno;
}

int utn_pedirOperando (float* pOperando)
{
	float operando;
	int flag = 0;
	printf("\nEscriba operando: ");
	fflush(stdin);
	scanf("%f", &operando);
	*pOperando = operando;
	return flag;
}

void utn_mostrarResultado (float resultadoUno, float resultadoDos, float resultadoTres, float resultadoCuatro, int resultadoCinco)
{
	printf("La suma es: %.2f\nLa resta es: %.2f\nEl producto es: %.2f\nLa division es: %.2f\nEl factorial del primer operando es: %d",resultadoUno, resultadoDos, resultadoTres, resultadoCuatro, resultadoCinco);
}
