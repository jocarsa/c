#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Introduce una tecla \n");
    char palabra[100];
    scanf("%s",palabra);
    printf("La palabra introducida es: %s \n",palabra);
	return 0;
}