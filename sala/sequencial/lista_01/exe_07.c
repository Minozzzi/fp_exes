/*
7) Faça um algoritmo que receba uma temperatura em grau Celsius, e calcule e mostre essa temperatura em
grau Fahrenheit. Sabe-se que F = (1.8 * C) + 32.
*/

#include <stdio.h>

int main(void)
{
    float gC;

    printf("Informe a temperatura em graus Celsius ");
    scanf("%f", &gC);

    printf("\n A temperatura de Celsius para Fahrenheit e %.2f°", (1.8 * gC) + 32);
}