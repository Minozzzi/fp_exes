/*
3) Cada degrau de uma escada tem uma altura X. Faça um programa para ler essa altura e a altura que o
usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para
atingir o seu objetivo.
*/

#include <stdio.h>

int main(void)
{
    float alturaDegrau, alturaDesejada;

    printf("Informe a altura do degrau e a altura que deseja subir respectivamente em centimetros: ");
    scanf("%f %f", &alturaDegrau, &alturaDesejada);

    printf("Devera subir %.2f degraus para alcancar seu objetivo", alturaDesejada/alturaDegrau);
}