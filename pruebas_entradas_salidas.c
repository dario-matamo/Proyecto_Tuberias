#include <stdio.h>
#include <stdlib.h>
//  #define WINDOWS  /* uncomment this line to use it for windows.*/
#ifdef WINDOWS
#include <direct.h>
#define GetCurrentDir _getcwd
#else
#include <unistd.h>
#define GetCurrentDir getcwd
#endif

#define chunk 1024
char **listas_de_entradas;
char **listas_de_salidas;
int numero_de_filas, numero_de_columnas, numero_de_entradas, numero_de_salidas;
void read_file_test(){
    FILE *file;
    char path[FILENAME_MAX];
    GetCurrentDir (path,FILENAME_MAX);
    printf("el path es: %s\n",path);
    strcat(path,"\\testES.txt");

    printf("el path es: %s\n",path);
    file = fopen(path, "r");
    if (file){
        char buff[chunk];
        fgets(buff,chunk, file);
        //printf("buff es: %s",buff);
        char *linea = buff;
        char *end;
        numero_de_filas = strtol(linea, &end,10);
        linea = end;
        numero_de_columnas = strtol(linea,&end,10);
        linea = end;
        numero_de_entradas = strtol(linea,&end,10);
        linea = end;
        numero_de_salidas = strtol(linea,&end,10);
        //printf("filas: %d\ncols: %d\nents: %d\nsalidas: %d\n",numero_de_filas,numero_de_columnas,numero_de_entradas,numero_de_salidas);
        listas_de_entradas = calloc(numero_de_entradas, sizeof(char*));
        listas_de_salidas = calloc(numero_de_salidas, sizeof(char*));
        for (int i = 0; i < numero_de_entradas; ++i) {
            listas_de_entradas[i] = calloc(3, sizeof(char));
        }
        for (int j = 0; j < numero_de_salidas; ++j) {
            listas_de_salidas[j] = calloc(3, sizeof(char));
        }
        char x,y,direccion;
        fscanf(file,"\n");
        for (int k = 0; k < numero_de_entradas + numero_de_salidas; ++k) {
            fscanf(file,"%c %c %c \n",&x,&y,&direccion);
            //printf("x es: %c\ny es: %c\ndir es: %c\n",x,y,direccion);
            if (k < numero_de_entradas) {
                listas_de_entradas[k][0] = x;
                listas_de_entradas[k][1] = y;
                listas_de_entradas[k][2] = direccion;
            } else {
                listas_de_salidas[k-numero_de_entradas][0] = x;
                listas_de_salidas[k-numero_de_entradas][1] = y;
                listas_de_salidas[k-numero_de_entradas][2] = direccion;
            }
        }
        fclose(file);
    }
    else printf("esta mierda no hizo el if\n" );
}

void print_E_S(){
    for (int i = 0; i < numero_de_entradas; ++i) {
        printf("La entrada %d es: [ %c, %c, %c ]\n",i,listas_de_entradas[i][0],listas_de_entradas[i][1],listas_de_entradas[i][2]);
    }
    for (int j = 0; j < numero_de_salidas; ++j) {
        printf("La salida %d es: [ %c, %c, %c ]\n",j,listas_de_entradas[j][0],listas_de_entradas[j][1],listas_de_entradas[j][2]);
    }
}
int main() {
    read_file_test();
    print_E_S();
    return 0;
}