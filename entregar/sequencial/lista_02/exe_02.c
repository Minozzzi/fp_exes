/*
2) Elabore um programa que leia via teclado uma quantidade de segundos (tipo int) e transforme este tempo
em dias, horas e minutos (as três últimas em tipo float).
*/


#include <stdio.h>
#include <math.h>

int main(void)
{
    int tempo;

    printf("Informe o tempo em segundos: ");
    scanf("%d", &tempo);

    printf("\nMinutos: %.2f", (float)tempo/60);
    printf("\nHoras: %.2f", (float)tempo/3600);
    printf("\nDias: %.2f", (float)tempo/86400);
}