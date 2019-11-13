/**Struct that contains every conection that can have a pipe*/
typedef struct{
    char up;
    char down;
    char left;
    char right;
} pipe;

/** Variables to catch from the file and needed for functions*/

int rows;
int columns;
int entries;
int exits;

pipe **pipeMatrix;

/**Function to read and change values of rows, columns, entries and exits*/
void readData(int *ptrRows, int *ptrColumns, int *ptrEntries, int *ptrExits);
/**Function to build a matrix of pipes*/
pipe **buildMatrix(pipe **pipesMatrix, int rows, int columns);
/**Function that specifies what type of pipe a hexadecimal code represents*/
pipe specifyPipe(char code);
/**Function to fill the matrix with the pipes types*/
void fillMatrix(pipe **pipesMatrix,int rows,int columns);
