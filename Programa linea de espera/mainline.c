/**
*@file mainline.c
*@brief fichero principal de el programa de gestion de operaciones 
*@par   logica del Mainline.c
*       - Pedir datos requeridos al usuario
*       - llamar funcion Mostrartab();
*@return 0
*/
#include "headline.h"
int main()
 {
 	printf("==============================\n");
 	printf("GESTION DE LINEA DE ESPERA DE UN MERCADO\n ");
 	printf("==============================\n");
 	printf("ingresa el horario \n");
 	printf("ingresa hora de inicio\n:");
 	scanf("%i",&hr_ini);//hora de inicio
 	printf("ingresa hora  final\n:");
 	scanf("%i",&hr_fin); 	//hora final
 	printf("capacidad unitaria ");
 	scanf("%i",&cap_uni);//capacidad unitaria
 	printf("ingresa la cantidad de entrada de clientes por hora\n");//se cargan el numero  de clientes que entran en una hora
 	for(j=hr_ini;j<hr_fin;++j)
 	{
 		scanf("%i",&entradaCli[j]);
	}
	 printf("ingresa numero de cajas abiertas por hora\n");
	 for(f=hr_ini;f<hr_fin;++f)
	 {
	 	scanf("%i",&cajas[f]);//se cargan los valores al arreglo cajas[]
	 }
	 //llamada a la funciones
     Mostrartab(hr_ini,hr_fin,entradaCli, cajas);//muestra la tabla ya resuelta.
	 return 0;
 }
 
