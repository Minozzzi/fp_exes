// 3) Escreva um programa que calcule o valor da conversão para dólares de um valor lido em reais.

#include <stdio.h>

int main(void)
{
    float cotacao, value;

    printf("Informe a cotacao atual do dolar: R$");
    scanf("%f", &cotacao);

    printf("Informe um valor para conversao: R$");
    scanf("%f", &value);

    printf("R$%.2f equivalem a U$ %.2f", value, value/cotacao);
}
