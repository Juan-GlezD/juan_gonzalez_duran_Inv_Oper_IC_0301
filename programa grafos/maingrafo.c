#include "headgrafo.h"
int main()
 {
	system("cls");
	system("color f0");
 	printf (" ´PROGRAMA QUE DETERMINA SI EXISTE CAMINO EN UN GRAFO DE UN PUNTO A OTRO PUNTO \n");
 	printf ("\n INGRESA EL NUMERO DE NODOS QUE VA A TENER EL GRAFO: ");
 	scanf ("%i",&nod);
 	printf ("\nINGRESA EL NUMERO DE ADYACENCIAS:");
 	scanf ("%i",&ady);
 	matriz(nod,ady,mat);//invoca la funcion matriz que imprime la matriz
 	adyacencia(nod,ady,mat);//invoca la funcion adyacencia
 	buscar_ruta(x,y,mat);
   printf ("\n\n");
   system("pause");
 	return 0;
 }//fin main
