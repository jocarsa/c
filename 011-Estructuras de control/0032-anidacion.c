#include <stdio.h>

int main(int argc, char *argv[]) {
    int edad = 40;
    if(edad < 30){
        if(edad < 20){
            printf("Eres muy joven");
        }else{
            printf("Eres un joven");
        }
        
    }else{
        if(edad < 40){
           printf("Ya no eres tan joven"); 
        }else{
            printf("Definitivamente ya no eres joven");
        }
        
    }
	return 0;
}