#include <stdio.h>

int main() {

    //operador long para o tipo int;
    //%li ou %ld;


    long int x = 2147483647;

    printf("Tamanho de x em bytes: %d\n", sizeof x);

    printf("Valor de x: %ld\n", x);
    x++;
    printf("Valor de x: %li\n\n", x);

    return 0;
}