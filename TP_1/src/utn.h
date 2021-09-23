/*
 * utn.h
 *
 *  Created on: 13 sep. 2021
 *      Author: Furya
 */

#ifndef UTN_H_
#define UTN_H_

int sumar(int operadorUno, int operadorDos);


int restar(int operadorUno, int operadorDos);


int multiplicar(int operadorUno, int operadorDos);


int dividir(int operadorUno, int operadorDos, float* pDireccionResultado);


float sumarFloat(float operadorUno, float operadorDos);


float restarFloat(float operadorUno, float operadorDos);


float multiplicarFloat(float operadorUno, float operadorDos);


int factorial (int numero);


int utn_getNumberInt(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);


int utn_getNumberFloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);


int validarOpcionMenu (int* pOpcion, char* mensajeError, int minimo, int maximo, int reintentos);


int utn_pedirOperando (float* pOperando);


void utn_mostrarResultado (float resultadoUno, float resultadoDos, float resultadoTres, float resultadoCuatro, int resultadoCinco);

#endif /* UTN_H_ */
