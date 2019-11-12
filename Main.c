#include <stdio.h>
#include "Pipes.h"
int main(){
	
	readData(&rows,&columns,&entries,&exits);
	printf("%d %d %d %d",rows,columns,entries,exits);
	pipes **pipesMatrix;
	pipesMatrix = buildMatrix(pipesMatrix,rows,columns);
    	
	return 0;
}
