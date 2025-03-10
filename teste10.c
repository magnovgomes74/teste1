#include <stdio.h>

int main() {
   /*
   Operador long para o tipo double;
   double -> %lf 
   long double -> %Lf; */

    float x = 3.1415;

    long double y = 3.14155896587458962548;

    printf("Valor de y: %.15Lf\n", y);
    printf("Um long double precisa de %d bytes de memória.\n\n", sizeof y);

    return 0;
}