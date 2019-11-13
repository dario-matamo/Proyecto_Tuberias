//Here are the devoloping of functions
#include <stdlib.h>
#include <stdio.h>
#include "Pipes.h"

/**Function to create a matrix of pipes*/
pipe **buildMatrix(pipe **pipesMatrix, int rows, int columns){
	pipesMatrix  = (pipe**)malloc(sizeof(pipe*)*rows);
	for (int i = 0; i < rows; i++){
        	pipesMatrix[i] = (pipe *)malloc(sizeof(pipe)*columns);
	}
   
	return pipesMatrix;
}

/**Function to read values of rows,columns,entries and exits*/
void readData(int *ptrRows, int *ptrColumns, int *ptrEntries,int *ptrExits){
	scanf("%d %d %d %d",ptrRows,ptrColumns,ptrEntries,ptrExits);
}
