#include <stdio.h>
#include "Pipes.h"
int main(){

	readData(&rows,&columns,&entries,&exits);
	printf("%d %d %d %d",rows,columns,entries,exits);
	pipeMatrix = buildMatrix(pipeMatrix,rows,columns);
    	
	return 0;
}
