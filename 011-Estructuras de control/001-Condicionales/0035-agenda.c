/* Programa agenda
por Jose Vicente Carratala */
#include <stdio.h>
#define NOMBREPROGRAMA "Programa agenda"
#define VERSION "1.0"
#define AUTOR "Jose Vicente Carratala"

int main(int argc, char *argv[]) {
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
	        printf("Vamos a listar los registros");
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