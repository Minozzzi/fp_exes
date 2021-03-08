/*
4) Faça um programa que receba o peso e a altura de uma pessoa e calcule o índice de massa corpórea.
Esse índice mede a relação entre peso e altura (peso em quilogramas dividido pelo quadrado da altura em
metros). Use a função pow() da biblioteca math.h para calcular a potência.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float altura, peso;

    printf("Informe sua altura em metros e seu peso em quilogramas respectivamente: ");
    scanf("%f %f", &altura, &peso);

    printf("\nIMC = %.2f", peso /pow(altura, 2));
}