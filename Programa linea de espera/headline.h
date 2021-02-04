/**
*@file headline.h
*@brief Esta es la cabecera que contiene el prototipo de funciones del programa Y  contiene todas las varibles que se utilizaron en probrama
*@par    logica de funciones 
*        
*@author Juan Gonzalez IC_301	
*@date   21-12-2020
*/

#ifndef _headline_h
#define _headline_h
#include <stdio.h>
#include <stdlib.h>
/**
*@brief esta son las variables utilizadas en el programa
*@var hr_ini    hora de inicio
*@var hr_fin    hora final
*@var No_cajas  numero de cajas 
*@var cap_uni   capacidad unitaria
*/
int hr_ini,hr_fin,No_cajas,cap_uni;
/**
*@var j contadores
*@var f contadores 
*@var i contadores
*@var h contadores
*/
int j,f,i, h;
/**
*@param entradaCien[]; arreglo de la entrada de clientes
*@param cajas [];      arreglo para el numero de cajas abiertas
*@param cap_salidas[]; arreglo para la  capacidad de salidas
*@param colaespera[];  arreglo que almacena la cola de espera
*/
int entradaCli[150];
int cajas[50];
int cap_salidas[100];
int colaespera[100];
int out[50];
int output[50];
int aux[50];
/**
*@fn void capacidadSal();
 /**************************************************************//**
 *se encarga de hacer la operacion para determinar la capacidad de salidas
 *el proceso que hace la funcion es obtener la capacidad de salidas para ello se multiplica 
 *el numero de cajas abiertas por la capacidad unitaria
 ******************************************************************/
 /**
*@param cap_salidas[100];
*@param cajas[50];
*@param cap_uni
*@param hr_ini
*@param hr_fin
*/
void capacidadSal(int cap_salidas[100], int cajas[50],int cap_uni,int hr_ini,int hr_fin);
/**
*@fn void Mostrartab();esta funcion muestra la tabla con los resultados de las operaciones
*@param hr_ini  este parametro indica el rango inicial de horas
*@param hr_fin  este parametro indica  el rango final de horas
*@param entradaCli[150] arreglo para enviar la entrada de clientes
*@param cajas[50] arreglo para almacenar el numero de cajas abiertas
*/
/****************************************************************//**
*esta funcion manda a llamar a las funciones capacidadSal(); 
* col_espera(); para imprimir las en forma de tablas 
*
***********************************************************************/

void Mostrartab(int hr_ini,int hr_fin,int entradaCli[150], int cajas[50]);
/****************************************************************//**
*@fn void col_Espera();realiza la operacion para obtener la linea de espera
*para obtener la cola de espera  se multiplicara la capacidad unitaria por el 
*numero de cajas abiertas  para despues realizar una una segunda operacion que seria restar
*la cantidad de entrada de clientes y se almacenaria en un arreglo auxiliar
***********************************************************************/
void col_Espera(int cajas[50],int entradaCli[150],int hr_ini,int hr_fin,int cap_uni);
#endif

