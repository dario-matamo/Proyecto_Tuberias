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

/**Function that specifies what type of pipe a hexadecimal code represents*/
pipe specifyPipe(char code){
pipe pipeSpecifier;
    if(code == '0'){
        pipeSpecifier.up = '0';
        pipeSpecifier.down = '0';
        pipeSpecifier.left = '0';
        pipeSpecifier.right = '0';
    }else{
        if(code == '1'){
            pipeSpecifier.up = '0';
            pipeSpecifier.down = '0';
            pipeSpecifier.left = '1';
            pipeSpecifier.right = '0';
        }else{
            if(code == '2'){
                pipeSpecifier.up = '0';
                pipeSpecifier.down = '1';
                pipeSpecifier.left = '0';
                pipeSpecifier.right = '0';
            }else{
                if(code == '3'){
                    pipeSpecifier.up = '0';
                    pipeSpecifier.down = '1';
                    pipeSpecifier.left = '1';
                    pipeSpecifier.right = '0';
                }else{
                    if(code == '4'){
                        pipeSpecifier.up = '0';
                        pipeSpecifier.down = '0';
                        pipeSpecifier.left = '0';
                        pipeSpecifier.right = '1';
                    }else{
                        if(code == '5'){
                            pipeSpecifier.up = '0';
                            pipeSpecifier.down = '0';
                            pipeSpecifier.left = '1';
                            pipeSpecifier.right = '1';
                        }else{
                            if(code == '6'){
                                pipeSpecifier.up = '0';
                                pipeSpecifier.down = '1';
                                pipeSpecifier.left = '0';
                                pipeSpecifier.right = '1';
                            }else{
                                if(code == '7'){
                                    pipeSpecifier.up = '0';
                                    pipeSpecifier.down = '1';
                                    pipeSpecifier.left = '1';
                                    pipeSpecifier.right = '1';
                                }else{
                                    if(code == '8'){
                                        pipeSpecifier.up = '1';
                                        pipeSpecifier.down = '0';
                                        pipeSpecifier.left = '0';
                                        pipeSpecifier.right = '0';
                                    }else{
                                        if(code == '9'){
                                            pipeSpecifier.up = '1';
                                            pipeSpecifier.down = '0';
                                            pipeSpecifier.left = '1';
                                            pipeSpecifier.right = '0';
                                        }else{
                                            if(code == 'A'){
                                                pipeSpecifier.up = '1';
                                                pipeSpecifier.down = '1';
                                                pipeSpecifier.left = '0';
                                                pipeSpecifier.right = '0';
                                            }else{
                                                if(code == 'B'){
                                                    pipeSpecifier.up = '1';
                                                    pipeSpecifier.down = '1';
                                                    pipeSpecifier.left = '1';
                                                    pipeSpecifier.right = '0';
                                                }else{
                                                    if(code == 'C'){
                                                            pipeSpecifier.up = '1';
                                                            pipeSpecifier.down = '0';
                                                            pipeSpecifier.left = '0';
                                                            pipeSpecifier.right = '1';
                                                    }else{
                                                        if(code == 'D'){
                                                            pipeSpecifier.up = '1';
                                                            pipeSpecifier.down = '0';
                                                            pipeSpecifier.left = '1';
                                                            pipeSpecifier.right = '1';
                                                        }else{
                                                            if(code == 'E'){
                                                                pipeSpecifier.up = '1';
                                                                pipeSpecifier.down = '1';
                                                                pipeSpecifier.left = '0';
                                                                pipeSpecifier.right = '1';
                                                            }else{
                                                                if(code == 'F'){
                                                                    pipeSpecifier.up = '1';
                                                                    pipeSpecifier.down = '1';
                                                                    pipeSpecifier.left = '1';
                                                                    pipeSpecifier.right = '1';
                                                                }else{
                                                                   printf("ERROR");
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }    
                }   
            }
        }
    }
    return pipeSpecifier;
}
