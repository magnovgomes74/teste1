#include <stdio.h>

int main() {

    //operador sizeof x ou sizeof(int);

    float x = 32767;

    printf("Tamanho de um float na memória: %d bytes\n", sizeof x);
    printf("Tamanho em memória de um int: %d bytes\n\n", sizeof(int));


    return 0;
}

