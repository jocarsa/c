#include <stdio.h>

int main(int argc, char** argv) {
    char cadena[100];
    FILE *archivo;
    archivo = fopen("prueba.txt","r");
    fprintf(archivo,"Esto es una prueba \n");
    while( fgets (cadena, 60, archivo)!=NULL ){
        puts(cadena);
    }
    fclose(archivo);
    return 0;
}
