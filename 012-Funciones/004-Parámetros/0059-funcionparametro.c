#include <stdio.h>
void saluda(char* nombre){
    printf("Hola, %s \n",nombre);
}
int main(int argc, char *argv[]) {
    saluda("Jose Vicente");
	return 0;
}