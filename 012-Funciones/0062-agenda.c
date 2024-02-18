/* Programa agenda
por Jose Vicente Carratala */
#include <stdio.h>
#include <string.h>
#define NOMBREPROGRAMA "Programa agenda"
#define VERSION "1.0"
#define AUTOR "Jose Vicente Carratala"

	struct RegistroAgenda{
        char nombre[50];
        char telefono[50];
        char email[50];
    };
    
    struct RegistroAgenda agenda[100];
void listadoRegistros(){
    for(int i = 1; i<=3;i++){
        printf("Registro: %s %s %s \n",agenda[i].nombre,agenda[i].telefono,agenda[i].email);
    }
}
void introducirRegistro(){
    printf("Vamos a introducir un registro");
}
void eliminarRegistro(){
    printf("Vamos a eliminar un registro");
}
void buscarRegistro(){
    printf("Vamos a buscar un registro");
}
void actualizarRegistro(){
    printf("Vamos a actualizar un registro");
}
void menuPrincipal(){
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
	        listadoRegistros();
	        break;
        case '2':
	        introducirRegistro();
	        break;
        case '3':
	        eliminarRegistro();
	        break;
        case '4':
	        buscarRegistro();
	        break;
	    case '5':
	        actualizarRegistro();
	        break;
        default:
            printf("La opción que has introducido no es válida");
            break;
	}
}
int main(int argc, char *argv[]) {

    // Primer registro
    
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
	
   menuPrincipal();
	
	return 0;
}