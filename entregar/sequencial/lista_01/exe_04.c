/*
4) Escreva um programa que leia dois valores que são o raio e a altura de um cilindro e calcule o seu volume,
cuja fórmula é: Volume = 3.1415 * Raio 2 * Altura.
*/

#include <stdio.h>

int main(void)
{
    float raio, altura;

    printf("Informe o valor do raio e da altura respectivamente: ");
    scanf("%f %f", &raio, &altura);

    printf("Valor do volume: %.2f cm", 3.1415 * (raio * raio) * altura);
}
