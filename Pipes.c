//Here are the devoloping of functions
#include <stdlib.h>
#include "Pipes.h"

/**Functions to create a matrix of pipes*/
pipes** buildMatrix(pipes** pipesMatrix, int rows, int columns){
	pipesMatrix  = (pipes **)malloc(sizeof(pipes*)*rows);
	
	for (int i = 0; i < rows; i++){
        	pipesMatrix[i] = (pipes *)malloc(sizeof(pipes)*columns);
	}
   
	return pipesMatrix;
}
