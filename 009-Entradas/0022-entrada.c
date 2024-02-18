#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Introduce una tecla: ");
    char seleccion = getchar();
    printf("El caracter que has seleccionado es: %c \n",seleccion);
	return 0;
}