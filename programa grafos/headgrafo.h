/**
*
*@file maingrafo.h
*@brief Este es un programa determinada si en un grafo existe camino de un punto a otro punto
*@date 01/febrero/2021
*@author Juan Gonzalez Duran
*@version 1.0
*/
/**
*@par logica   +crea una matriz
*              +ingresa datos
*              +compara los datos
*              +muestra resultados

*/

#ifndef _headgrafo_h
#define _headgrafo_h
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/**
*@var nod esta variable nodos almacena el numero de nodos que contendra el grafo
*@var ady la variable adyacente contiene el numero de adyacencias
*@var x ingresa los datos en la matrix en forma de cordenadas
*@var y ingresa los datos en la matrix en forma de cordenadas
*/
int nod, ady,x, y;
/** 
*
*/
int i, r,q;//contadores
/**
*@var mat[][];este crea una matriz donde se almacenara los datos para despues mostrarlos de manera grafica
*
*/
int mat[150][150];//arreglo bidimensional
/**
*@fn void matriz(); crea una matriz bidimensional donde se almacenaran los datos
*/
void matriz(int nod, int ady, int mat[150][150]);
/**
*@fn void adyasencia(); esta funcion almacena los datos ingresados por el usuario en forma de cordenadas
*/
void adyacencia( int nod, int ady,int mat[150][150]);
/**
*@fn void  buscar_ruta(); esta funcion pide datos para despues comparar los datos
*que se encuentran en la matriz y asi determinar si existe camino o no 
*@return void
*/
void buscar_ruta(int x, int y, int mat[150][150]);
#endif
