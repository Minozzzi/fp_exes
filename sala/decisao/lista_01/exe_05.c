/*
5) Escreva um programa que leia um número e verifique se ele se encontra fora do intervalo entre 5 e 20.
Mostre uma mensagem se o número está fora desse intervalo
*/

#include <stdio.h>

int main(void) {

    int value;

    printf("Informe qualquer número inteiro: ");
    scanf("%d", &value);

    if (value < 5 || value > 20) {
        return printf("\nO numero esta fora do intervalo entre 5 e 20");
    }
}