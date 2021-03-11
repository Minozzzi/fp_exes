/*
4) Ler um número inteiro com até 5 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
Também calcular e mostrar a soma dos dígitos.
*/

#include <stdio.h>

int main(void)
{
    int value, soma;

    printf("Informe um numero inteiro com ate cinco digitos: ");
    scanf("%d", &value);

    printf("\nPrimeiro digito %d", value/10000);
    printf("\nSegundo digito %d", value / 1000 % 10);
    printf("\nTerceiro digito %d", value/100 % 10);
    printf("\nQuarto digito %d", value/10 % 10);
    printf("\nQuinto digito %d", value % 10);
    soma = (value/10000) + (value / 1000 % 10) + (value/100 % 10) + (value/10 % 10) + (value % 10);
    printf("\n\nSoma dos digitos =  %d", soma);
}