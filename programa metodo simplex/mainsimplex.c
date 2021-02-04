/**
*@file mainsimplex.c
*@brief fichero principal
*/
#include "headsimplex.h"
int main()
{
	system("color f1");//diseño de la pantalla
    printf ("\nPROGRAMA QUE SOLUCIONA PROBLEMAS DE OPTIMIZACION POR EL METODO SIMPLEX\n");
	printf ("\n INGRESA EL NUMERO DE ECUACIONES: ");
	scanf ("%d",&ecu);//almacena el numero de ecuaciones 
	fflush(stdin);
	printf ("\nINGRESA EL NUMERO DE VARIABLES: ");
	scanf ("%d",&var);//almacena el numero de variables que va a contener las ecuaciones 
	fflush(stdin);
	system("cls");//limpia pantalla 
	printf ("\n");
	hlg=var+ecu+1;//sumo funciones y variables para hacer las columnas necesarias y agrego las restricciones
	obtenerdatos(ecu,var);//rellena la matriz
    system("cls");
	matrix(ecu,var,matriz,hlg);//imprime la matriz
	posicion(hlg,matriz);//se invoca la funcion pocicion 
	printf ("\n\tLA COLUMNA PIVOTE ES: X%d\n",posic);
	printf ("\nSE DIVIDE LA COLUMNA PIVOTE ENTRE LOS COEFICIENTES DE RESTRICCION:\n ");
	operacion(matriz, hlg);//se invoca la funcion operacion
	iteracion(posic1, posic);//se invoca la funcion interacion
	matrix(ecu,var,matriz,hlg);//se invoca la funcion matrix
	int a=1;
	while(a==1)
	{
		int b=0;
		for (i=1; i<=hlg; i++)
		{
			if (matriz[ecu+1][i]>=0)
			{
				b++;
			}
		}
		       if  (b==hlg)
			   {
			   	   a=2;

			   	   printf ("\n\t \t [ SOLUCION ]\n\n");
			   	   posicion(hlg, matriz);
			   	   matrix(ecu, var, matriz, hlg);
			   }   
	}
	
    return 0;
}//Fin de la funcion principal 

