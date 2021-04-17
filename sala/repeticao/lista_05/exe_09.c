// 9) Elaborar um programa que leia um número que representa a quantidade de valores ímpares e múltiplos de 5 que o
// usuário que ver. Se o usuário informar um valor negativo transformá-lo em positivo sem usar a função fabs(). Fazer a
// média dos valores múltiplos de 3 desse intervalo.

#include <stdio.h>

int main(void) {

    int num = 0, cont = 0, soma = 0, div = 0, cont1 = 0;

    printf("Informe a quantidade de numeros impares e multiplos de 5 que deseja ver: ");
    scanf("%d", &num);

    if (num < 0) {
        num *= -1;
    }

    while (cont1 < num) {
        if ((cont % 5 == 0) && (cont % 2 != 0)) {
            printf("%d\n", cont);
            cont1++;

            if (cont % 3 == 0) {
                soma += cont;
                div++;
            }
        }
        cont++;
    } 

    printf("\n\nA media dos valores multiplos de 3 = %.2f", cont > 0 ? (float)soma/div : 0);
}