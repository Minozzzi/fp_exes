/*
9) Criar um programa que leia o peso (em kg) de uma pessoa e calcule e imprima:
a) O peso da pessoa em gramas.
b) O novo peso, em gramas, se a pessoa engordar 12%.
*/

#include <stdio.h>

int main(void)
{
    float peso;
    
    printf("Informe seu peso (em Kg): ");
    scanf("%f", &peso);

    printf("\nPeso em gramas: %.2f", 1000 * peso);
    printf("\nPeso em gramas se engordar 12%%: %.2f", (1000 * peso) * 1.12);
    printf("\nPeso em kilogramas se engordar 12%%: %.2f", peso * 1.12);
}