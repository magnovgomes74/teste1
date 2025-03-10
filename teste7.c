#include <stdio.h>

int main() {

    //operador short para o tipo int;
    //%hi ou %d - tem o intervalo: -32.768 até 32.767;

    /*int y = 0;
    short int x = 32767;

    printf("Valor de x: %d bytes\n", x);
    x++;
    printf("Valor de x: %hi bytes\n\n", x);*/

    int x = 2147483647;

    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %d\n\n", x);


    return 0;
}