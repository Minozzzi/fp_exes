/*
6) Ler um número inteiro longo (long int) que representa os segundos e convertê-lo para horas, minutos e
segundos. Mostrar a quantidade de horas, minutos e segundos obtidos, no seguinte formato:
xhoras:yminutos:zsegundos.
*/

#include <stdio.h>

int main(void)
{
    long int segundos_inicial, horas, minutos, segundos;

    printf("Informe o total de segundos: ");
    scanf("%li", &segundos_inicial);
    horas = segundos_inicial/3600;
    minutos = (segundos_inicial - (3600 * (segundos_inicial/3600)))/60;
    segundos = (segundos_inicial - (3600 * horas) - (minutos * 60));
    printf("O total de %li segundo(s) representam %li hora(s), %li minuto(s) e %li segundo(s)", segundos_inicial, horas, minutos, segundos);
}