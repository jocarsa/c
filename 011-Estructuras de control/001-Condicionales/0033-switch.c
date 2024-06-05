#include <stdio.h>

int main(int argc, char *argv[]) {
    int dia = 1;
    
    switch(dia){
        case 1:
            printf("Hoy es lunes");
            break;
        case 2:
            printf("Hoy es martes");
            break;
        case 3:
            printf("Hoy es miercoles");
            break;
        case 4:
            printf("Hoy es jueves");
            break;
        case 5:
            printf("Hoy es viernes");
            break;
        case 6:
            printf("Hoy es sabado");
            break;
        case 7:
            printf("Hoy es domingo");
            break;
    }
	return 0;
}