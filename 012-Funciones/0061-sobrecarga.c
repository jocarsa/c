#include <stdio.h>
void saluda(char* nombre, int edad){
    printf("Hola, %s, tienes %i años \n",nombre,edad);
}

void saluda(char* nombre, int edad){
    printf("Hola, %s \n",nombre);
}
int main(int argc, char *argv[]) {
    saluda("Jose Vicente",40);
	return 0;
}