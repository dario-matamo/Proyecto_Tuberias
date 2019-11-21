/**
*@brief File that contains all the declarations of variables and methods
*@author Dario Matamoros Vega
*/
#include<stdlib.h>
#include<stdio.h>
/**Struct that contains every conection that can have a pipe*/
typedef struct{
    char up;
    char down;
    char left;
    char right;
} pipe;
/**Struct that contains the position of a leak*/
typedef struct{
    int column;
    int row;
}leaks;

/**Variables to catch from the file and needed for functions*/

int rows;
int columns;
int entries;
int exits;

pipe **pipeMatrix;

/**
 * @brief Function to read and change values of rows, columns, entries and exits
 * @param ptrRows Pointer that points to variable that contain the numbers of rows in the matrix
 * @param ptrColumns Pointer that points to variable that contain the numbers of columns in the matrix
 * @param ptrEntries Pointer that points to variable that contain the numbers of entries
 * @param Pointer that points to variable that contain the numbers of exits
*/
void readData(int *ptrRows, int *ptrColumns, int *ptrEntries, int *ptrExits);
/** 
 * @brief Function to build a matrix of pipes
 * @param pipesMatrix Matrix made of pipes 
 * @param rows Number of rows in the matrix
 * @param columns Number of columns in the matrix
 * @return pipe The function creates the memory necesary for the matrix
*/
pipe **buildMatrix(pipe **pipesMatrix, int rows, int columns);
/**
 * @brief Function that specifies what type of pipe a hexadecimal code represents
 * @param code Caracter that represents a type of pipe
 * @return pipe The function returns a pipe depending on the code
*/
pipe specifyPipe(char code);
/**
 * @brief Function to fill the matrix with the pipes types
 * @param pipesMatrix Matrix made of pipes 
 * @param rows Number of rows in the matrix
 * @param columns Number of columns in the matrix 
*/
void fillMatrix(pipe **pipesMatrix,int rows,int columns);
/**
 * @brief Function to get where are leaks
 * @param pipesMatrix Matrix made of pipes 
 * @param rows Number of rows in the matrix
 * @param columns Number of columns in the matrix 
 */
void findLeaks(pipe **pipesMatrix,leaks *leaksArray,int rows, int columns);
/**
 * @brief Function that return 1 if in a position exist a leaks
 * @param pipesMatrix Matrix made of pipes 
 * @param row Row of the pipe
 * @param column Column of the pipe
*/
int hasLeaks(pipe **pipesMatrix,int row, int column);
/**
 * @brief Function that rotates a pipe 
 * @param pipeRotate Pipe that is going to rotate
 */
pipe rotatePipe(pipe pipeRotate){
    char auxUp = pipeRotate.up;
    char auxDown= pipeRotate.down;
    char auxLeft= pipeRotate.left;
    char auxRight= pipeRotate.right;
    
    pipeRotate.up = auxRight;
    pipeRotate.right = auxDown;
    pipeRotate.down = auxLeft;
    pipeRotate.left = auxUp;
    return pipeRotate;
}
void resolve(pipe **pipesMatrix,leaks *leaksArray,int rows,int columns);
