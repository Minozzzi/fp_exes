/*
1) A contribuição para o INSS é calculada da seguinte forma:
a) Salário bruto até três salários mínimos = INSS 8%.
b) Salário bruto acima de três salários mínimos = INSS 10%.
c) Para as contribuições maiores que o salário mínimo, considerar a importância de um salário mínimo.
Elaborar um programa que receba como entrada o valor do salário mínimo e o valor do salário bruto, calcule o
INSS e o salário líquido restante e informe-os
*/

#include <stdio.h>

int main(void) {

    float salarioMinimo, salarioBruto;

    printf("Informe o valor do salario minimo atual e o seu salario bruto respectivamente: ");
    scanf("%f %f", &salarioMinimo, &salarioBruto);

    if (salarioBruto <= salarioMinimo * 3 ) {
        printf("INSS = %.2f\nSalario Liquido = %.2f", salarioBruto * 0.08, salarioBruto - (salarioBruto * 0.08));
    } else if (salarioBruto > salarioMinimo * 3 && salarioMinimo * 3 <= salarioMinimo) {
        printf("INSS = %.2f\nSalario Liquido = %.2f", salarioBruto * 0.10, salarioBruto - (salarioBruto * 0.10));
    } else if (salarioBruto * 0.10 > salarioMinimo){
        printf("INSS = %.2f\nSalario Liquido = %.2f", salarioMinimo, salarioBruto - salarioMinimo);
    }
}