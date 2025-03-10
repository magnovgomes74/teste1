#include <stdio.h>

int main() {

    int nota1, nota2, nota3;
    float media;

    printf("Insira sua primeira nota: ");
    scanf("%d", &nota1);

    printf("Insira sua segunda nota: ");
    scanf("%d", &nota2);

    printf("Insira sua terceira nota: ");
    scanf("%d", &nota3);

    // colocando o 3 como 3.0 estou forçando o int mudar para float;
    media = (nota1 + nota2 + nota3) / 3.0;
   
    printf("\nA média é: %.2f\n\n", media);

    return 0;
    
}