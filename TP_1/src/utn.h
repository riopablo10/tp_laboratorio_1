/*
 * utn.h
 *
 *  Created on: 13 sep. 2021
 *      Author: Furya
 */

#ifndef UTN_H_
#define UTN_H_
/// @brief Suma dos numeros enteros
///
/// @param operadorUno: recibe primer entero
/// @param operadorDos: recibe segundo entero
/// @return Devuelve la suma de los dos enteros ingresados
int sumar(int operadorUno, int operadorDos);

/// @brief Resta dos numeros enteros
///
/// @param operadorUno: recibe primer entero
/// @param operadorDos: recibe segundo entero
/// @return Devuelve la resta de los dos enteros ingresados
int restar(int operadorUno, int operadorDos);

/// @brief Multiplica dos numeros enteros
///
/// @param operadorUno: recibe primer entero
/// @param operadorDos: recibe segundo entero
/// @return Devuelve el producto de los dos enteros ingresados
int multiplicar(int operadorUno, int operadorDos);

/// @brief Divide dos numeros enteros
///
/// @param operadorUno: recibe primer entero
/// @param operadorDos: recibe segundo entero
/// @param pDireccionResultado
/// @return Devuelve el estado de la division. Si es 0, muestra resultado, si es 1 no pudo dividir
int dividir(int operadorUno, int operadorDos, float* pDireccionResultado);

/// @brief Suma dos numeros decimales
///
/// @param operadorUno: recibe primer float
/// @param operadorDos: recibe segundo float
/// @return Devuelve la suma de los dos float ingresados
float sumarFloat(float operadorUno, float operadorDos);

/// @brief Resta dos numeros decimales
///
/// @param operadorUno: recibe primer float
/// @param operadorDos: recibe segundo float
/// @return Devuelve la resta de los dos float ingresados
float restarFloat(float operadorUno, float operadorDos);

/// @brief Multiplica dos numeros decimales
///
/// @param operadorUno: recibe primer float
/// @param operadorDos: recibe segundo float
/// @return Devuelve el producto de los dos float ingresados
float multiplicarFloat(float operadorUno, float operadorDos);

/// @brief Factorial del primer operando ingresado
///
/// @param primer operando int ingresado
/// @return Devuelve el resultado. En caso de que el operando sea 0 o 1, el resultado va a devolver 1.
int factorial (int numero);

/// @brief Solicita un numero entero al usuario
///
/// @param pResultado: puntero a direccion de memoria de una variable int.
/// @param mensaje: Mensaje de pedido al usuario
/// @param mensajeError: Mensaje de error al usuario
/// @param minimo: minimo dentro del rango permitido
/// @param maximo: maximo dentro del rango permitido
/// @param reintentos: cantidad de reintentos permitidos
/// @return Devuelve retorno -1: Error, retorno 0: Se pudo hacer correctamente el pedido al usuario.
int utn_getNumberInt(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

/// @brief Solicita un numero float al usuario
///
/// @param pResultado: puntero a direccion de memoria de una variable float
/// @param mensaje: Mensaje de pedido al usuario
/// @param mensajeError: Mensaje de error al usuario
/// @param minimo: minimo dentro del rango permitido
/// @param maximo: maximo dentro del rango permitido
/// @param reintentos: cantidad de reintentos permitidos
/// @return Devuelve retorno -1: Error, retorno 0: Se pudo hacer correctamente el pedido al usuario
int utn_getNumberFloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);

/// @brief Solicita una opcion de Menu al usuario
///
/// @param pOpcion: puntero a direccion de memoria variable int.
/// @param mensajeError: Mensaje de error al usuario
/// @param minimo: minimo permitido dentro del menu
/// @param maximo: maximo permitido dentro del menu
/// @param reintentos: cantidad de reintentos permitidos
/// @return Devuelve retorno -1: Error, retorno 0: Se ingreso una opcion valida dentro de los parametros indicados
int validarOpcionMenu (int* pOpcion, char* mensajeError, int minimo, int maximo, int reintentos);

/// @brief Pide operando float al usuario
///
/// @param pOperando: puntero a direccion de memoria float.
/// @return Devuelve flag en 0, para saber si se ingreso el operando y pueda devolver el valor por referencia a la variable del main
int utn_pedirOperando (float* pOperando);

/// @brief Impresion de resultados
///
/// @param resultadoUno: muestra la suma de los operandos
/// @param resultadoDos: muestra la resta de los operandos
/// @param resultadoTres: muestra el producto de los operandos
/// @param resultadoCuatro: muestra la division de los operandos
/// @param resultadoCinco: muestra el factorial del primer operando
void utn_mostrarResultado (float resultadoUno, float resultadoDos, float resultadoTres, float resultadoCuatro, int resultadoCinco);

#endif /* UTN_H_ */
