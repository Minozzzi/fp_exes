//2) Escreva um algoritmo que leia o raio de um círculo e calcule a sua circunferência (C = 2. π. r).

#include <stdio.h>

int main(void) 
{
    float raio, C;

    printf("Escreva o raio do circulo para que possamos calcular a circunferencia: ");
    scanf("%f", &raio);

    C = 2 * 3.14 * raio;

    printf("\nA circunferencia e %.2f", C);

    return 0;
}