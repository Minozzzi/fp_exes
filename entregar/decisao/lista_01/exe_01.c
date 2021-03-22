/*
1) Ler um número inteiro e calcular e apresentar o seu módulo ou valor absoluto (número sem sinal), isto é,
se o número é negativo apresentá-lo como positivo.
*/

#include <stdio.h>

int main(void) {

    int value;

    printf("Informe um numero inteiro: ");
    scanf("%d", &value);

    printf("Seu valor absoluto = %d", value < 0 ? value * (-1) : value);
}