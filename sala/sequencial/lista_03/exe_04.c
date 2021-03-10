/*
4) Fazer um programa que leia um número inteiro de até três dígitos (considere que será fornecido um
número de até 3 dígitos), calcule e imprima a soma dos seus dígitos.
*/

#include <stdio.h>

int main(void)
{
    int value;

    printf("Informe um numero inteiro de ate tres digitos: ");
    scanf("%d", &value);

    printf("%d = %d + %d + %d = %d", value, value / 100, value / 10 % 10, value % 10, (value / 100) + (value / 10 % 10) + (value % 10));
}