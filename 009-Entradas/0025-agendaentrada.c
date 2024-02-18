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
	return 0;
}