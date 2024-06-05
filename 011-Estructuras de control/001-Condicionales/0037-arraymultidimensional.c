#include <stdio.h>

int main(int argc, char *argv[]) {
    char* agenda[10][4];
    agenda[1][1] = "Jose Vicente";
    agenda[1][2] = "123456789";
    agenda[1][3] = "info@josevicentecarratala.com";
    
    agenda[2][1] = "Juan";
    agenda[2][2] = "987654321";
    agenda[2][3] = "juan@josevicentecarratala.com";
    
    printf("El segundo telefono es: %s \n",agenda[2][1]);
	return 0;
}