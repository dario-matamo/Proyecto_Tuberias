int main(){
    pipe pruebaPipe;
    leaks positionLeaks[100];
    int rows = 3;
    int columns = 3;
    char c ;
    int entries;
    int exits;
    leaks *ptrPositionLeaks = &positionLeaks[0];
    readData(&rows,&columns,&entries,&exits);
    scanf("%c",&c);
    pipeMatrix = buildMatrix(pipeMatrix,rows,columns);
    fillMatrix(pipeMatrix,rows,columns);
    findLeaks(pipeMatrix,ptrPositionLeaks,rows,columns);
   

    printf("\n");
    findLeaks(pipeMatrix,ptrPositionLeaks,rows,columns);
    return 0;
}
