//3) Ler um número inteiro com até 4 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.

#include <stdio.h>

int main(void)
{
    int value;

    printf("Informe um numero inteiro com ate quatro digitos: ");
    scanf("%d", &value);

    printf("\nPrimeiro digito %d", value/1000);
    printf("\nSegundo digito %d", value / 100 % 10);
    printf("\nTerceiro digito %d", value/10 % 10);
    printf("\nQuarto digito %d", value % 10);
}