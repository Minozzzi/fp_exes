/*
6) Faça um programa que leia o preço de uma mercadoria com diferença de um mês (ler o valor da
mercadoria no mês passado e no mês atual) e calcule a taxa de inflação mensal dessa mercadoria. A inflação
é o percentual da diferença de preços (atual menos o anterior) sobre o preço anterior.
*/

#include <stdio.h>

int main(void)
{
    float valorAnterior, valorAtual;

    printf("Informe o valor do produto no mes passado: ");
    scanf("%f", &valorAnterior);

    printf("Informe o valor do produto no mes atual: ");
    scanf("%f", &valorAtual);

    printf("A taxa de inflacao do produto eh de %.2f por cento", ((valorAtual-valorAnterior)/valorAnterior)*100);
}