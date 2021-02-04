/**
*@file headsimplex.h
*@brief Esta es la cabecera que contiene el prototipo de funciones del programa Y  contiene todas las varibles que se utilizaron en probrama
*@par    logica de funciones 
*        - 
*@author Juan Gonzalez IC_301	
*@date   -01-02-2021
*/

#ifndef _head_metodo_simplex_
#define _head_metodo_simplex_
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/**
 *
 *
 */
int i, j;
/**
 *@var i contadores
 *@var j contadores
 */
int ecu, var, hlg, posic, posic1, posic2;
/**
 *@var ecu  ecuaciones
 *@var var  variables
 *@var hlg  matriz completa
 *@posic1   posicion 1
 *@posic2   posicion 2
 */
 float matriz[150][150],col[150];
 /**
 *
 *
 */
 
//funciones principales
/**
 *@brielf cada una de las funciones realiza un proceso para desarrollar el programa
 */
void matrix(int ecu, int var, float matriz[150][150], int hlg);
/**
 *@fn matrix(); funcion que crea e imprime una matriz donde se almacenara los datos dados por el usuario
 *@param ecu ingresa los renglones que va a tener la matrix
 *@param var  filas de la matriz
 */
void obtenerdatos(int ecu, int var); 
/**
 *@fn obtener datos(); funcion que pide al usuario 
 *    logica 
 *          -pide los datos de la funcion objetivo
 *          -pide el numero de restricciones 
 *			-pide el numero de ecuaciones 
 *@param ecu  renglones
 *@param var  filas
 */ 
void operacion(float matriz[150][150], int hlg);
/**
*@fn operacion();
*@brief esta funcion se encarga de obtener los nuevos valores de la fila privote 
*@par   logica 
*       - Dividir la fila privote entre el elemento privote 
*       - Obtener nuevas filas  
*@param posic1 posicion del la columna  
*@param posic2 posicion dos del valor 
*@return void 
**/
void iteraciones(int posic1, int posic2);
/**
 *funcion iteracion se ocupa para crear la nueva tabla del metodo simplex
 *
 */
void posicion(int hlg, float matriz[150][150]);
#endif

