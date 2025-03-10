#include <stdio.h>

int main() {

    // tamanho de um float na memória;
    // %f - precisa de 4 bytes de memória;
    // short e long não é aceitável no float;
   //o operador usado para aumentar a memória é o double;

    float x = 3.1415;

    double y = 3.14155896587458962548;


    printf("Um float precisa de %d bytes de memória.\n\n", sizeof y);

    return 0;
}