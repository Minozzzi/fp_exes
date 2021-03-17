/*
2) Escreva um programa que leia um número e verifique se ele é maior, menor ou igual a 10.
*/

#include <stdio.h>

int main(void) {
    float value;

    printf("Digite um número: ");
    scanf("%f", &value);

    return value > 10 ? printf("\nMaior que 10") : value < 10 ? printf("\nMenor que 10") : printf("\nIgual a 10");
}