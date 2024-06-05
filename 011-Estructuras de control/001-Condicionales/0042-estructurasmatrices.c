#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
    struct RegistroAgenda{
        char nombre[50];
        char telefono[50];
        char email[50];
    };
    
    // Primer registro
    struct RegistroAgenda registros[1];
    strcpy(registros[1].nombre,"Jose Vicente");
    strcpy(registros[1].telefono,"12345678");
    strcpy(registros[1].email,"info@josevicentecarratala.com");
    
    
    printf("El registro es: %s",registros[1].nombre);
}