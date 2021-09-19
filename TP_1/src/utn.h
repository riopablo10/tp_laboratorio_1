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


int utn_getNumberInt(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);


int utn_getNumberFloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);


int validarOpcionMenu (int* pOpcion, char* mensajeError, int minimo, int maximo, int reintentos);

int utn_pedirOperando (int* pOperando);

void utn_mostrarResultado (float resultadoUno, float resultadoDos, float resultadoTres, float resultadoCuatro);

#endif /* UTN_H_ */
