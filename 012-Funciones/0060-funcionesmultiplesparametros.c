#include <stdio.h>
void saluda(char* nombre, int edad){
    printf("Hola, %s, tienes %i años \n",nombre,edad);
}
int main(int argc, char *argv[]) {
    saluda("Jose Vicente",40);
	return 0;
}