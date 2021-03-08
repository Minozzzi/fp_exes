/*
9) Escreva um programa que o leia o número de horas trabalhadas por um funcionário, o valor por hora, o
número de filhos com idade menor do que 14 anos, o valor do salário família por filho e calcule e mostre o
salário desse funcionário.
*/

#include <stdio.h>

int main(void)
{
    float numeroHoras, valorHora, filhos, salarioFamilia;

    printf("Informe o numero de horas trabalhadas: ");
    scanf("%f", &numeroHoras);

    printf("Informe o valor da hora trabalhada: R$");
    scanf("%f", &valorHora);

    printf("Informe o numero de filhos menores de 14 anos: ");
    scanf("%f", &filhos);

    printf("Informe o valor do salario familia: R$");
    scanf("%f", &salarioFamilia);

    printf("Salario: R$%.2f", (numeroHoras * valorHora) + (salarioFamilia * filhos));
}