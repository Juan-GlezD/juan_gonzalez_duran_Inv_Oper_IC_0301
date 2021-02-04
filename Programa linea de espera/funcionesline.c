  /**
*@file funcionesline.c
*@brief Fichero donde se realizan las operacioones y ejecutan las funciones.
*/
 
 #include "headline.h"
 void capacidadSal(int cap_salidas[100], int cajas[50],int cap_uni,int hr_ini,int hr_fin)//funcion que obtiene  multiplicando el numero de cajas abiertas * la capacidad unitaria
 {
    for(i=hr_ini;i<hr_fin;i++)
  {
    cap_salidas[i]=cajas[i]*cap_uni;	//realiza la operacion para obtener la capacidad de salidas
    printf("\t%i",cap_salidas[i]);
   }
 }
 void col_Espera(int cajas[50],int entradaCli[150],int hr_ini,int hr_fin,int cap_uni)//funcion para obtener la cola de espera
 {
   int aux[50];
  for(i=hr_ini;i<hr_fin;i++)
  {
    aux[i]=(entradaCli[i])-(cap_uni*cajas[i]);
    aux[i]=aux[i]+aux[i-1];// 
    printf ("\t%i",aux[i]);
    fflush(stdin);
  }
  
 }
 void Mostrartab(int hr_ini,int hr_fin,int entradaCli[150],int cajas[50])//funcion que muestra la tabla con los resultados
 {
  printf ("\nHoras\t\t");
for(h=hr_ini;h<hr_fin; h++)
    {
  printf ("\t%i-%i",h,h+1);
   }
   printf ("\nllegadas clientes:");
   for(j=hr_ini;j<hr_fin;j++)
   {
    printf ("\t%i",entradaCli[j]);
   }
    printf("\nNo. de cajas abiertas:");
    for(f=hr_ini;f<hr_fin;f++)
    {
    printf("\t%i",cajas[f]);
  }
    printf("\ncapacidad de salidas:");
    capacidadSal(cap_salidas,cajas, cap_uni, hr_ini, hr_fin);

    printf("\nsalidas de clientes:");
    capacidadSal(cap_salidas, cajas, cap_uni, hr_ini, hr_fin);

   printf ("\nCola de espera:\t");
   col_Espera(cajas, entradaCli, hr_ini, hr_fin, cap_uni);
  
   printf("\n Input:\t\t");
    for(i=hr_ini; i<=hr_fin; i++)
	{
    	entradaCli[i]=entradaCli[i]+entradaCli[i-1];
    	printf("\t%i",entradaCli[i]);
	}
	printf("\nOutput:\t\t");
	 for(i=hr_ini;i<hr_fin;i++){
	cap_salidas[i]=cajas[i]*cap_uni;
	cap_salidas[i]=cap_salidas[i]+cap_salidas[i-1];	
    printf("\t%i",cap_salidas[i]);
}
  }
