#include <stdio.h>

int main(int argc, char *argv[]) {
    struct Punto{
        int x;
        int y;
        int z;
    };
    struct Punto punto1;
    punto1.x = 100;
    punto1.y = 200;
    punto1.z = 300;
    printf("La propiedad x es: %d \n",punto1.x);
}