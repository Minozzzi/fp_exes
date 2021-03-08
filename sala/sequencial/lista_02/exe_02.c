/*
2) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor
e a percentagem dos impostos (ambas aplicadas sobre o custo de fábrica). Escrever um programa para, a
partir do custo de fábrica do carro, calcular e mostrar o custo ao consumidor.
*/
#include <stdio.h>

int main(void)
{
    float custoFabrica, taxaDistribuidor, taxaImpostos;

    printf("Informe o custo de fabrica do automovel: R$");
    scanf("%f", &custoFabrica);

    printf("Informe a percentagem do distribuidor: ");
    scanf("%f", &taxaDistribuidor);

    printf("Informe a percentagem de impostos: ");
    scanf("%f", &taxaImpostos);

    printf("\n O custo total do veiculo e R$%.2f", (custoFabrica * (taxaDistribuidor/100) + (custoFabrica * (taxaImpostos/100)) + custoFabrica));
}