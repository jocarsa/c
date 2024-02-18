/* Programa agenda
por Jose Vicente Carratala */
#include <stdio.h>
#include <string.h>
#define NOMBREPROGRAMA "Programa agenda"
#define VERSION "1.0"
#define AUTOR "Jose Vicente Carratala"

int main(int argc, char *argv[]) {
    
    struct RegistroAgenda{
        char nombre[50];
        char telefono[50];
        char email[50];
    };
    // Primer registro
    struct RegistroAgenda agenda[100];
    strcpy(agenda[1].nombre,"Jose Vicente");
    strcpy(agenda[1].telefono,"12345678");
    strcpy(agenda[1].email,"info@josevicentecarratala.com");
    
    // Segundo registro
    strcpy(agenda[2].nombre,"Juan");
    strcpy(agenda[2].telefono,"53254");
    strcpy(agenda[2].email,"juan@josevicentecarratala.com");
    // Tercer registro
    strcpy(agenda[3].nombre,"Jaime");
    strcpy(agenda[3].telefono,"64566");
    strcpy(agenda[3].email,"jaime@josevicentecarratala.com");
    
    // Mensaje de bienvenida
	printf("%s v%s \n",NOMBREPROGRAMA,VERSION);
	printf("%s \n",AUTOR);
	printf("\t 1 - Listado de registros \n");
	printf("\t 2 - Introducir un registro \n");
	printf("\t 3 - Eliminar un registro \n");
	printf("\t 4 - Buscar un registro \n");
	printf("\t 5 - Actualizar un registro \n");
	printf("Tu opcion: ");
	char opcion = getchar();
	printf("La opción que has seleccionado es: %c \n",opcion);
	switch(opcion){
	    case '1':
	        printf("Vamos a listar los registros \n");
	        printf("Registro: %s %s %s \n",agenda[1].nombre,agenda[1].telefono,agenda[1].email);
	        printf("Registro: %s %s %s \n",agenda[2].nombre,agenda[2].telefono,agenda[2].email);
	        printf("Registro: %s %s %s \n",agenda[3].nombre,agenda[3].telefono,agenda[3].email);
	        break;
        case '2':
	        printf("Vamos a introducir un registro");
	        break;
        case '3':
	        printf("Vamos a eliminar un registro");
	        break;
        case '4':
	        printf("Vamos a buscar un registro");
	        break;
	    case '5':
	        printf("Vamos a actualizar un registro");
	        break;
        default:
            printf("La opción que has introducido no es válida");
            break;
	}
	
	return 0;
}