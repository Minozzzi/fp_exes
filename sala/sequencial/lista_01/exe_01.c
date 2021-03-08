/*
1) Escreva um algoritmo que leia o comprimento (cm), a largura (cm) e a altura (cm) de uma caixa retangular
e calcule o seu volume (cm 3 ), cuja fórmula é:
Volume = Comprimento * Largura * Altura
*/

#include <stdio.h>

int main(void) 
{
    float comprimento, largura, altura, volume;

    printf("Escreva o comprimento em centimetros: ");
    scanf("%f", &comprimento);

    printf("Escreva o largura em centimetros: ");
    scanf("%f", &largura);

    printf("Escreva o altura em centimetros: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("\nO volume da caixa retangular e %.2f cm3", volume);

    return 0;
}