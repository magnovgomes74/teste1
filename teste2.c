#include <stdio.h>

int main(){

    int num1, num2, resultado;

    printf("Insira um número: ");
    scanf("%d", &num1);

    printf("Insira outro número: ");
    scanf("%d", &num2);

    num1--;
    num2 /= num1;

    printf("\nO resultado é: %d\n\n", num2);

    return 0;
}