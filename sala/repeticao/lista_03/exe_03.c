// 3) Faça um programa que mostre o resultado da seguinte soma, sendo n o valor informado pelo usuário:
// Soma = 1 + 1/2 + 1/3 + 1/4 + 1/5 + … + 1/n

#include <stdio.h>

int main(void) {

    int value = 0, i = 1;
    float soma = 0;

    printf("Informe um numero: ");
    scanf("%d", &value);

    for (i; i <= value; i++) {
        if (i != value) {
            printf("1/%d + ", i);
        } else {
            printf("1/%d = ", i);
        }
        soma += 1.0/i;
    }
    printf("%.2f", soma);
}