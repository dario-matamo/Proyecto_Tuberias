/**Function that return 1 if in a position exist a leaks*/
int hasLeaks(pipe **pipesMatrix,int i,int j){
    if(i == 0 && j==0){
                if((pipesMatrix[i][j].right == '1' && pipesMatrix [i][j+1].left =='0')||
                (pipesMatrix[i][j].down == '1' && pipesMatrix[i+1][j].up == '0')||(pipesMatrix[i][j].left == '1')
                ||(pipesMatrix[i][j].up == '1')){
                    return 1;
                }
                
            }else{
                //case when row = 0 and column = max
                if(i == 0 && j == (columns -1)){
                    if((pipesMatrix[i][j].left == '1' && pipesMatrix[i][j-1].right == '0')||
                    (pipesMatrix[i][j].down == '1' && pipesMatrix[i+1][j].up == '0')||
                    (pipesMatrix[i][j].right == '1')||(pipesMatrix[i][j].up == '1')){
                        return 1;
                    }
                }else{
                    //Case when row = max and first column
                    if(i==(rows-1) && j==0){
                        if((pipesMatrix[i][j].right == '1' && pipesMatrix[i][j+1].left == '0')||
                        (pipesMatrix[i][j].up == '1' && pipesMatrix[i-1][j].down == '0')||
                        (pipesMatrix[i][j].left == '1')||(pipesMatrix[i][j].down == '1')){
                            return 1;
                        }
                    }else{
                        //Case when column = max and row = max
                        if(i==(rows-1) && j==(columns-1)){
                            if((pipesMatrix[i][j].left == '1' && pipesMatrix[i][j-1].right == '0')||
                            (pipesMatrix[i][j].up == '1' && pipesMatrix[i-1][j].down == '0')||
                            (pipesMatrix[i][j].right == '1')||(pipesMatrix[i][j].down == '1')){
                                return 1;
                            }
                    
                        }else{
                            //Case row 0
                            if(i == 0 && (j !=0 && j!=(columns-1))){
                                if((pipesMatrix[i][j].left == '1' && pipesMatrix[i][j-1].right == '0')||
                                (pipesMatrix[i][j].down == '1' && pipesMatrix[i+1][j].up == '0')||
                                (pipesMatrix[i][j].right == '1' && pipesMatrix[i][j+1].left == '0')||
                                (pipesMatrix[i][j].up == '1')){
                                    return 1;
                                }
                            }else{
                                //Case row max
                                if(i == rows-1 && (j !=0 && j!= columns-1)){
                                    if((pipesMatrix[i][j].left == '1' && pipesMatrix[i][j-1].right == '0')||
                                    (pipesMatrix[i][j].up == '1' && pipesMatrix[i-1][j].down == '0')||
                                    (pipesMatrix[i][j].right == '1' && pipesMatrix[i][j+1].left == '0')||
                                    (pipesMatrix[i][j].down == '1')){
                                        return 1;
                                    }
                                }else{
                                    //Case col 0
                                    if((i != 0 && i != (rows-1)) && j == 0){
                                        if((pipesMatrix[i][j].up == '1' && pipesMatrix[i-1][j].down == '0')||
                                        (pipesMatrix[i][j].down == '1' && pipesMatrix[i+1][j].up == '0')||
                                        (pipesMatrix[i][j].right == '1' && pipesMatrix[i][j+1].left == '0')||
                                        (pipesMatrix[i][j].left == '1')){
                                            return 1;
                                        }

                                    }else{
                                        //case col max
                                        if((i != 0 && i != (rows-1)) && j == columns-1){
                                            if((pipesMatrix[i][j].up == '1' && pipesMatrix[i-1][j].down == '0')||
                                            (pipesMatrix[i][j].down == '1' && pipesMatrix[i+1][j].up == '0')||
                                            (pipesMatrix[i][j].left == '1' && pipesMatrix[i][j-1].right == '0')||
                                            (pipesMatrix[i][j].right == '1')){
                                                return 1;
                                            }
                                        }else{
                                            //Rest of cases
                                            if((pipesMatrix[i][j].up == '1' && pipesMatrix[i-1][j].down == '0')||
                                            (pipesMatrix[i][j].down == '1' && pipesMatrix[i+1][j].up == '0')||
                                            (pipesMatrix[i][j].left == '1' && pipesMatrix[i][j-1].right == '0')||
                                            (pipesMatrix[i][j].right == '1'&& pipesMatrix[i][j+1].left == '0')){
                                                return 1;  
                                            }else{
                                                return 0;
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
void resolve(pipe **pipesMatrix,leaks *leaksArray,int rows,int columns){
    
}

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
if(scanf("%d %d %d %d",ptrRows,ptrColumns,ptrEntries,ptrExits ) != 1){
}

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

/**Function to fill the matrix with the pipes types*/
void fillMatrix(pipe **pipesMatrix,int filas, int columnas){
pipe aux;
char code;
char space;
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            //Scan each code to make it a pipe type
            scanf("%c",&code);
            scanf("%c",&space);
            aux = specifyPipe(code);
            //Then add it to the matrix
            pipesMatrix[i][j] = aux;
        }
    }
}
/**Function to get where are leaks*/
void findLeaks(pipe **pipesMatrix,leaks *leaksArray,int rows, int columns){
    int countLeaks=0;
    int flag = 0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            //Case when row = 0 and column = 0
            if(i == 0 && j==0){
                if(pipesMatrix[i][j].right == '1' && pipesMatrix [i][j+1].left =='0' ){
                    leaksArray->column = j;
                    leaksArray->row = i;
                    leaksArray++;
                    printf("Leak in position %d %d to the right\n",i,j);
                }
                if(pipesMatrix[i][j].down == '1' && pipesMatrix[i+1][j].up == '0'){
                    leaksArray->column = j;
                    leaksArray->row = i;
                    leaksArray++;
                    printf("Leak in position %d %d down\n",i,j);
                }
                if(pipesMatrix[i][j].left == '1'){
                    leaksArray->column = j;
                    leaksArray->row = i;
                    leaksArray++;
                    printf("Leak in position %d %d to the left\n",i,j);
                }
                if(pipesMatrix[i][j].up == '1'){
                    leaksArray->column = j;
                    leaksArray->row = i;
                    leaksArray++;
                    printf("Leak in position %d %d up\n",i,j);
                }
            }else{
                //case when row = 0 and column = max
                if(i == 0 && j == (columns -1)){
                    if(pipesMatrix[i][j].left == '1' && pipesMatrix[i][j-1].right == '0'){
                        leaksArray->column = j;
                        leaksArray->row = i;
                        leaksArray++;
                        printf("Leak in position %d %d to the left\n",i,j);
                    }
                    if(pipesMatrix[i][j].down == '1' && pipesMatrix[i+1][j].up == '0'){
                        leaksArray->column = j;
                        leaksArray->row = i;
                        leaksArray++;
                        printf("Leak in position %d %d down\n",i,j);
                    }
                    if(pipesMatrix[i][j].right == '1'){
                        leaksArray->column = j;
                        leaksArray->row = i;
                        leaksArray++;
                        printf("Leak in position %d %d to the right\n",i,j);
                    }
                    if(pipesMatrix[i][j].up == '1'){
                        leaksArray->column = j;
                        leaksArray->row = i;
                        leaksArray++;
                        printf("Leak in position %d %d up\n",i,j);
                    }
                }else{
                    //Case when row = max and first column
                    if(i==(rows-1) && j==0){
                        if(pipesMatrix[i][j].right == '1' && pipesMatrix[i][j+1].left == '0'){
                            leaksArray->column = j;
                            leaksArray->row = i;
                            leaksArray++;
                            printf("Leak in position %d %d to the right\n",i,j);
                        }
                        if(pipesMatrix[i][j].up == '1' && pipesMatrix[i-1][j].down == '0'){
                            leaksArray->column = j;
                            leaksArray->row = i;
                            leaksArray++;
                            printf("Leak in position %d %d up\n",i,j);
                        }
                        if(pipesMatrix[i][j].left == '1'){
                            leaksArray->column = j;
                            leaksArray->row = i;
                            leaksArray++;
                            printf("Leak in position %d %d to the left\n",i,j);
                        }
                        if(pipesMatrix[i][j].down == '1'){
                            leaksArray->column = j;
                            leaksArray->row = i;
                            leaksArray++;
                            printf("Leak in position %d %d down\n",i,j);
                        }
                    }else{
                        //Case when column = max and row = max
                        if(i==(rows-1) && j==(columns-1)){
                            if(pipesMatrix[i][j].left == '1' && pipesMatrix[i][j-1].right == '0'){
                                leaksArray->column = j;
                                leaksArray->row = i;
                                leaksArray++;
                                printf("Leak in position %d %d to the left\n",i,j);
                            }
                            if(pipesMatrix[i][j].up == '1' && pipesMatrix[i-1][j].down == '0'){
                                leaksArray->column = j;
                                leaksArray->row = i;
                                leaksArray++;
                                printf("Leak in position %d %d up\n",i,j);
                            }
                            if(pipesMatrix[i][j].right == '1'){
                                leaksArray->column = j;
                                leaksArray->row = i;
                                leaksArray++;
                                printf("Leak in position %d %d to the right\n",i,j);
                            }
                            if(pipesMatrix[i][j].down == '1'){
                                leaksArray->column = j;
                                leaksArray->row = i;
                                leaksArray++;
                                printf("Leak in position %d %d down\n",i,j);
                            }
                        }else{
                            //Case row 0
                            if(i == 0 && (j !=0 && j!=(columns-1))){
                                if(pipesMatrix[i][j].left == '1' && pipesMatrix[i][j-1].right == '0'){
                                    leaksArray->column = j;
                                    leaksArray->row = i;
                                    leaksArray++;
                                    printf("Leak in position %d %d to the left\n",i,j);
                                }
                                if(pipesMatrix[i][j].down == '1' && pipesMatrix[i+1][j].up == '0'){
                                    leaksArray->column = j;
                                    leaksArray->row = i;
                                    leaksArray++;
                                    printf("Leak in position %d %d down\n",i,j);
                                }
                                if(pipesMatrix[i][j].right == '1' && pipesMatrix[i][j+1].left == '0'){
                                    leaksArray->column = j;
                                    leaksArray->row = i;
                                    leaksArray++;
                                    printf("Leak in position %d %d to the right\n",i,j);
                                }
                                if(pipesMatrix[i][j].up == '1'){
                                    leaksArray->column = j;
                                    leaksArray->row = i;
                                    leaksArray++;
                                    printf("Leak in position %d %d up\n",i,j);
                                }
                            }else{
                                //Case row max
                                if(i == rows-1 && (j !=0 && j!= columns-1)){
                                    if(pipesMatrix[i][j].left == '1' && pipesMatrix[i][j-1].right == '0'){
                                        leaksArray->column = j;
                                        leaksArray->row = i;
                                        leaksArray++;
                                        printf("Leak in position %d %d to the left\n",i,j);
                                    }
                                    if(pipesMatrix[i][j].up == '1' && pipesMatrix[i-1][j].down == '0'){
                                        leaksArray->column = j;
                                        leaksArray->row = i;
                                        leaksArray++;
                                        printf("Leak in position %d %d up\n",i,j);
                                    }
                                    if(pipesMatrix[i][j].right == '1' && pipesMatrix[i][j+1].left == '0'){
                                        leaksArray->column = j;
                                        leaksArray->row = i;
                                        leaksArray++;
                                        printf("Leak in position %d %d to the right\n",i,j);
                                    }
                                    if(pipesMatrix[i][j].down == '1'){
                                        leaksArray->column = j;
                                        leaksArray->row = i;
                                        leaksArray++;
                                        printf("Leak in position %d %d down\n",i,j);
                                    }
                                }else{
                                    //Case col 0
                                    if((i != 0 && i != (rows-1)) && j == 0){
                                        if(pipesMatrix[i][j].up == '1' && pipesMatrix[i-1][j].down == '0'){
                                            leaksArray->column = j;
                                            leaksArray->row = i;
                                            leaksArray++;
                                            printf("Leak in position %d %d up\n",i,j);
                                        }
                                        if(pipesMatrix[i][j].down == '1' && pipesMatrix[i+1][j].up == '0'){
                                            leaksArray->column = j;
                                            leaksArray->row = i;
                                            leaksArray++;
                                            printf("Leak in position %d %d down\n",i,j);
                                        }
                                        if(pipesMatrix[i][j].right == '1' && pipesMatrix[i][j+1].left == '0'){
                                            leaksArray->column = j;
                                            leaksArray->row = i;
                                            leaksArray++;
                                            printf("Leak in position %d %d to the right\n",i,j);
                                        }
                                        if(pipesMatrix[i][j].left == '1'){
                                            leaksArray->column = j;
                                            leaksArray->row = i;
                                            leaksArray++;
                                            printf("Leak in position %d %d to the left\n",i,j);
                                        }
                                    }else{
                                        //case col max
                                        if((i != 0 && i != (rows-1)) && j == columns-1){
                                            if(pipesMatrix[i][j].up == '1' && pipesMatrix[i-1][j].down == '0'){
                                                leaksArray->column = j;
                                                leaksArray->row = i;
                                                leaksArray++;
                                                printf("Leak in position %d %d up\n",i,j);
                                            }
                                            if(pipesMatrix[i][j].down == '1' && pipesMatrix[i+1][j].up == '0'){
                                                leaksArray->column = j;
                                                leaksArray->row = i;
                                                leaksArray++;
                                                printf("Leak in position %d %d down\n",i,j);
                                            }
                                            if(pipesMatrix[i][j].left == '1' && pipesMatrix[i][j-1].right == '0'){
                                                leaksArray->column = j;
                                                leaksArray->row = i;
                                                leaksArray++;
                                                printf("Leak in position %d %d to the left\n",i,j);
                                            }
                                            if(pipesMatrix[i][j].right == '1'){
                                                leaksArray->column = j;
                                                leaksArray->row = i;
                                                leaksArray++;
                                                printf("Leak in position %d %d to the right\n",i,j);
                                            } 
                                        }else{
                                            //Rest of cases
                                            if(pipesMatrix[i][j].up == '1' && pipesMatrix[i-1][j].down == '0'){
                                                leaksArray->column = j;
                                                leaksArray->row = i;
                                                leaksArray++;
                                                printf("Leak in position %d %d up\n",i,j);
                                            }
                                            if(pipesMatrix[i][j].down == '1' && pipesMatrix[i+1][j].up == '0'){
                                                leaksArray->column = j;
                                                leaksArray->row = i;
                                                leaksArray++;
                                                printf("Leak in position %d %d down\n",i,j);
                                            }
                                            if(pipesMatrix[i][j].left == '1' && pipesMatrix[i][j-1].right == '0'){
                                                leaksArray->column = j;
                                                leaksArray->row = i;
                                                leaksArray++;
                                                printf("Leak in position %d %d to the left\n",i,j);
                                            }
                                            if(pipesMatrix[i][j].right == '1'&& pipesMatrix[i][j+1].left == '0'){
                                                leaksArray->column = j;
                                                leaksArray->row = i;
                                                leaksArray++;
                                                printf("Leak in position %d %d to the right\n",i,j);
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
