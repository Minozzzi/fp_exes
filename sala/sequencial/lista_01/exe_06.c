/*
6) Calcular o valor do salário líquido de uma pessoa. Sobre o salário bruto incidem descontos de imposto de
renda e de INSS.
*/

#include <stdio.h>

int main(void)
{
    float salarioBruto, IR, INSS, totalContribuicoes;

    printf("Informe seu salario bruto: R$");
    scanf("%f", &salarioBruto);

    printf("Informe a porcentagem de IR:");
    scanf("%f", &IR);

    printf("Informe a porcentagem de INSS:");
    scanf("%f", &INSS);

    totalContribuicoes = (salarioBruto * (IR/100)) + (salarioBruto * (INSS/100));

    printf("\nO salario liquido sera de R$%.2f", salarioBruto - totalContribuicoes);
}