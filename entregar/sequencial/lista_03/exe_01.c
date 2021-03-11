/*
1) Fazer um programa que leia um valor double que representa o salário de uma pessoa. Apresente
separadamente os reais (parte inteira) e os centavos (parte decimal).
Observação: Apresentar os centavos como inteiro de dois dígitos (exemplo: 40 em vez de 0.40)
*/

#include <stdio.h>

int main(void)
{
    double salario;

    printf("Informe o valor do salario: R$");
    scanf("%lf", &salario);

    printf("\nSalario: %.2lf", salario);
    printf("\nReais: %d", (int)salario);
    printf("\nCentavos: %.0lf", ((salario - (int)salario) * 100) );
}