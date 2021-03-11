/*
5) Ler um número inteiro com até 3 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
Na sequência calcular e mostrar o inverso do número.
*/

#include <stdio.h>

int main(void)
{
    int value, inverso;

    printf("Informe um numero inteiro com ate tres digitos: ");
    scanf("%d", &value);

    printf("\nPrimeiro digito %d", value/100);
    printf("\nSegundo digito %d", value / 10 % 10);
    printf("\nTerceiro digito %d", value % 10);
    printf("\n\nInverso =  %d%d%d", value % 10, value / 10 % 10, value/100);
}