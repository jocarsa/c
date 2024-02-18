#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
    struct RegistroAgenda{
        char nombre[50];
        char telefono[50];
        char email[50];
    };
    // Primer registro
    struct RegistroAgenda registro1;
    strcpy(registro1.nombre,"Jose Vicente");
    strcpy(registro1.telefono,"12345678");
    strcpy(registro1.email,"info@josevicentecarratala.com");
    // Segundo registro
    struct RegistroAgenda registro2;
    strcpy(registro2.nombre,"Juan");
    strcpy(registro2.telefono,"87654321");
    strcpy(registro2.email,"juan@josevicentecarratala.com");
    // Devolvemos:
    printf("El nombre del primer registro es: %s \n",registro1.nombre);
    printf("El telefono del segundo registro es: %s \n",registro2.telefono);
}