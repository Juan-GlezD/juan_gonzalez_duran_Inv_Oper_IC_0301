#include "headgrafo.h"
 void matriz(int nod,int ady,int mat[150][150])//imprime la matriz con puros 0 que indica que el grafo esta vacio 
 {
 	printf ("\t[x/y]\t");
 	for (i=1;i<=nod;i++)
	 {
 		printf ("[%i]\t",i);
	 }
	 	printf ("\n\n");
	    for (i=1;i<=nod;i++)
		{
				printf ("\t[%i]\t",i);
			for (r=1; r<=nod; r++)
			{
				mat[i][r]=0;
				printf ("{%i}\t",mat[i][r]);			
			}
			printf ("\n\n");
		}
 }//fin matriz
void adyacencia(int nod,int ady,int mat[150][150])//aqui pide los datos de adyacencia para agreagarlos a la matriz en forma de coordenadas
 {
 	printf ("INGRESA LAS ADYACENSIAS DEL GRAFO\n");
 	for(q=1; q<=ady; q++)
	 {  
	  printf ("\nINGRESA ADYACENSIA [%i]\n",q);
		printf("[x]=");
 		scanf("%i",&x);
 		printf("[y]=");
 	    scanf("%i",&y);

   printf ("\t[X/Y]\t");
 	for (i=1; i<=nod; i++)
	 {
 		printf ("[%i]\t",i);
	 }
	 	printf ("\n\n");
	    for (i=1; i<=nod; i++)
		{
				printf ("\t[%i]\t",i);
			for (r=1; r<=nod; r++)
			{
				mat[x][y]=1;
			    printf ("{%i}\t",mat[i][r]);
	        }
			printf ("\n\n");
		} 		
	 }
	 system ("pause");

 }//fin de la funcion adyacencia 
 
void buscar_ruta(int x, int y, int mat[150][150])//aqui busca si existe un camino de un nodo a otro
{
	int A, B, buscar=1;
	printf ("\n  HALLAR CAMINO\n");
	do{	
	printf ("\nPUNTO [A]: ");
	scanf("%i",&A);
	printf ("\nPUNTO [B]: ");
	scanf ("%i",&B);
	printf ("\n BUSCANDO CAMINO DEL PUNTO =>A:[%i] A AL PUNTO =>B:[%i]",A, B);
	int k;
	k=B;
	for (i=0;i<k; i++)
	{//recorro la coordenada de la matriz para encontrar la ruta 
		if (mat[A][B-i]==mat[x][y])
		{
			mat[A][B]=mat[x][y];
		}
		else if (mat[A+i][B]==mat[x][y])
		{
			mat[A][B]=mat[x][y];
		}
	}
	 if (mat[A][B]==mat[x][y]){
	 	printf ("\n\n\t EXISTE CAMINO\n");
	 }
	 else{
	 	printf ("\n\n\t NO EXISTE CAMINO \n");
	 }
		printf ("\n ¿BUSCAR CAMINO?\nSi={1}\nNo={0}");
	    scanf ("%i",&buscar);
	}
	while (buscar==1);
}//fin de la funcion buscar_ruta
