/*
8) Ler um número que representa a quantidade de dias. Informe os anos (considere-os com 360 dias), meses
(considere-os com 30 dias) e os dias contidos nesse valor.
*/

#include <stdio.h>

int main(void)
{
    int tempo, anos, meses, dias;

    printf("Informe o tempo em dias inteiros: ");
    scanf("%d", &tempo);
    
    anos = tempo/360;
    meses = (tempo - (360 * anos))/30;
    dias = tempo - (360 * anos) - (meses * 30);
    printf("%d dias equivalem a %d ano(s), %d mese(s) e %d dia(s)", tempo, anos, meses, dias);
}