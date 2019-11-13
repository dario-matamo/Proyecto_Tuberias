/**Struct that contains every conection that can have a pipe*/
typedef struct{
    char up;
    char down;
    char left;
    char right;
} pipe;

/** Variables to catch from the file and needed for functions*/

int rows = 0;
int columns = 0;
int entries = 0;
int exits = 0;

pipe **pipeMatrix;

/**Function to read and change values of rows, columns, entries and exits*/
void readData(int *ptrRows, int *ptrColumns, int *ptrEntries, int *ptrExits);
/**Function to build a matrix of pipes*/
pipe **buildMatrix(pipe **pipesMatrix, int rows, int columns);
