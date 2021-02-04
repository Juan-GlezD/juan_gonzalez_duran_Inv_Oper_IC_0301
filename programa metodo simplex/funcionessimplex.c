/**
*@file funcionessimplex.c
*@brief cuerpo(todas las funciones del programa)
*/
#include "headsimplex.h"
void matrix(int ecu, int var, float matriz[150][150], int hlg){// en este bloque de codigo se imprime la matriz
    //impresion de las variables basicas, variables de holgura y de restriccion
    printf ("\t");
    for (i=1; i<=var; i++){
    	printf ("[X%d]\t",i);
	}
	for (i=1; i<=ecu; i++){
		printf ("[S%d]\t",i);
	}
	printf ("[CR]\t\n");//fin de impresion de variables
	for (j=1; j<=ecu+1; j++)
	{
		if (j<ecu+1)//se agrega la fila Z
		{
			printf ("\t");
		}//fin Z
		if (j==ecu+1)//se agrega la fila Z
		{
			printf ("Z\t");
			
			for(i=1;i<=hlg; i++)
			{
				printf("%.2f\t",matriz[j][i]);
			}
		}//fin Z
		else 
		{
			for (i=1;i<=hlg;i++)
			{
				printf ("%.2f\t",matriz[j][i]);
			}
		}
		printf ("\n\n");
	}
	system("pause");
	printf ("\n\n");
}//fin de matrix

void obtenerdatos(int ecu, int var){//esta funcion recolecta los datos ingresados por los usuarios 
	float z[100];
	     printf ("\nINGRESA LA FUNCION OBJETIVO Z:\n");
	     
	     for (i=1; i<=var; i++)
		 {
		 	printf ("\nVALOR DE=>[X%d]: ",i);
		 	scanf ("%f",&z[i]);
		 	matriz[ecu+1][i]=z[i]*-1;
		 	
		 }
		 printf ("\n[FUNCION OBJETIVO]\n");
		 printf ("Z\t");
 	
		for (i=1; i<=var; i++){
				printf ("%.2f\t",z[i]);//imprime la funcion objetivo
			}
		 printf ("\n\n");
		 
		 for (j=1; j<=ecu; j++)
		 {
		 	printf ("\nINGRESE LOS VALORES DE LA ECUACION [%d]:",j);
		 	for (i=1; i<=var+1; i++)
			 {
			 	if (i==var+1)
				 {
			 		int res=var+ecu+1;
			 		printf ("\n VALOR DE COHEFICIENTE DE RESTRICCION:");
			 		scanf ("%f",&matriz[j][res]);
			 		
				 }
				 else
				 {
				 	printf ("\nVALOR DE=>[X%i]: ",i);
				 	scanf ("%f",&matriz[j][i]);
				 	fflush(stdin);
				 }
			 }
			 printf ("\n\n");
		 	
		 }
		 int j2, k1;//a partir de aqui se llenan las variables de holgura
		 j2=ecu+var;
		 k1=var+1;
		 for (j=1; j<=ecu; j++)
		 {
		 	for (i=ecu; i<=j2; i++)
			 {
			 	matriz[j][k1]=1;//se coloca un 1 en la variable de holgura
			 }
			 k1++;
			 printf ("\n\n");
		 } // fin de variables de holgura 
		 
	
}//fin obtenerdatos
 
void operacion(float matriz[150][150], int hlg){//funcion que realiza el proceso para encontrar la fila privote
	float neg=100000;//se asigna un numero grande 
	for (j=1;j<=ecu;j++)
	{
		if (matriz[j][posic]==0)
		{
			matriz[j][hlg+1]=0;//aqui asigno un 0
		}
		else
		{
			matriz[j][hlg+1]=matriz[j][hlg]/matriz[j][posic];//aqui divide para saber la fila privote
		}
		
	} 
	for (j=1; j<=ecu; j++)
	{
		if (matriz[j][hlg+1]>0 && matriz[j][hlg+1]<neg)
		{
			neg=matriz[j][hlg+1];//se busca el menor para saber la fila privote 
			posic1=j;
		}
	}
	printf ("\n\tRESULTADO DE LA DIVISION");
	for (j=1; j<=ecu; j++)
	{
		printf ("\n\t [%.2f] \n",matriz[j][hlg+1]);
	}
	printf ("LA FILA PIVOTE ES:[%d]\n CON:[%.2f] POR SER EL MENOR\n\n",posic1,neg);
	
}// Fin operaciones
 
void iteracion(int posic1, int posic2){//funcion para formar las nuevas filas 
	float valores= matriz[posic1][posic2];
	
	for(i=1; i<=hlg;i++)
	{
		matriz[posic1][i]=matriz[posic1][i]/valores;// Aqui divido para formar la fila privote 
	}
	for(i=1; i<=ecu+1; i++)
	{
		if (i==posic1)
		{
			col[i]=matriz[i][posic2];
		}
		else 
		{
			col[i]=matriz[i][posic2]*-1;//cambio los signos para formar los 0 y 1 correspondientes
		}
		
	}	
	for(i=1;i<=ecu+1;i++)
	{
		for(j=1; j<=hlg; j++)
		{
			if (i==posic1)
			{
			   
			}
			else
			{
			matriz[i][j]=(col[i]*matriz[posic][j])+matriz[i][j];
			}
		
		}
	}
}//fin de la funcion iteracion

void posicion(int hlg, float matriz[150][150])//funcion para encontrar la columna privote 
 {
       float menor =matriz[ecu+1][1];
            for (i=1;i<=hlg;i++)
             {
                if(matriz[ecu+1][i]<=menor)
                {
                    menor=matriz[ecu+1][i];
                    posic=i;
                }
             }  
 }
