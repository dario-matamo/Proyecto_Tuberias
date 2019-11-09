//Aqui se hace el desarrollo de las funciones
#include <stdlib.h>
int **crearMatriz(int filas, int columnas){
	int **matriz;
	matriz = (int**)malloc(sizeof(int*)*filas);
	for(int i=0;i<filas;i++){
		matriz[i] = (int*)malloc(sizeof(int)*columnas);
	}
	return matriz;
}
