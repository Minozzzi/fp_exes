/*
1) Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
Esse programa deve calcular e mostrar:
a) A quantidade de convites que devem ser vendidos para cobrir o custo do espetáculo.
b) A quantidade de convites que devem ser vendidos para cobrir o custo do espetáculo e ainda obter um lucro
de 25%.
Obs.: A função ceil() da biblioteca math.h arredonda o número para cima.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float custo, valorEntrada;

    printf("Informe o valor de custo do espetaculo: R$");
    scanf("%f", &custo);

    printf("Informe o valor do convite: R$");
    scanf("%f", &valorEntrada);

    printf("\nPara cobrir o custo do espetaculo deve ser vendido %.0f ingressos", ceil(custo/valorEntrada));
    printf("\nPara cobrir o custo do espetaculo e ter lucro de 25%% deve ser vendido %.0f ingressos", ceil((custo * 1.25)/valorEntrada));
}