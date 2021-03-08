/*
8) Faça um programa que leia o salário bruto mensal de um funcionário, calcule e mostre os valores conforme
o exemplo a seguir. Observação: É possível fazer esse programa utilizando somente três variáveis: uma para
ler o salário bruto, outra para os descontos e outra para o salário líquido.
*/

#include <stdio.h>

int main(void)
{
    float salarioBruto;

    printf("Informe o salario bruto: R$");
    scanf("%f", &salarioBruto);

    printf("\n(-) IR (15%%): R$%.2f", salarioBruto * 0.15);    
    printf("\n(-) INSS (11%%): R$%.2f", salarioBruto * 0.11);
    printf("\n(-) SINDICATO (3%%): R$%.2f", salarioBruto * 0.03);
    printf("\nSalario Liquido: R$%.2f", salarioBruto - ((salarioBruto * 0.15) + (salarioBruto * 0.11) + (salarioBruto * 0.03)));
}