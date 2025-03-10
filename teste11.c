#include <stdio.h>

int main() {
   /*
   Operador unsigned;
   trocar o %d por %u
   limite para o tipo int: 2.147.483.647
   short int -> %d ou %hi
   unsigned shor int %hu ou %d
   */

   long int x = 2147483647; // 0 .... 4.294.967.295
   printf("\t %ld \n\n\n", ++x);

   unsigned int y = 2147483647;
   printf("\t %u \n\n\n", ++y);
   
   /* a diferença entre o unsigned e o long, é que o long (%ld) dobra o valor, 
   enquanto o unsigned (%u) converte os números negativos em positivos*/

   //tratando agora o operador short no insigned;

   unsigned short int z = 55000;
   printf("\t %d \n\n\n", z);
   printf("\t %hu \n\n\n", z);


    

    return 0;

}