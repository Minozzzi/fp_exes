/*
4) Escreva um programa que leia um número e verifique se ele se encontra no intervalo entre 5 e 20. Mostre
uma mensagem se o número estiver nesse intervalo.
*/

#include <stdio.h>

int main(void) {

    int value;

    printf("Informe qualquer número inteiro: ");
    scanf("%d", &value);

    if (value > 5 && value < 20) {
        return printf("\nO numero esta entre 5 e 20");
    }
}