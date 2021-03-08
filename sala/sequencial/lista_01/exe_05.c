/*
5) Tendo como entrada dois valores inteiros, elaborar um algoritmo para calcular e mostrar:
a) A soma desses valores;
b) A subtração do primeiro pelo segundo;
c) A multiplicação entre eles;
d) A divisão inteira do primeiro pelo segundo;
e) A divisão float do primeiro pelo segundo;
f) O resto da divisão do primeiro pelo segundo.
*/

#include <stdio.h>

int main(void) 
{
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    printf("\nA soma desses valores: %d", num1 + num2);
    printf("\nA subtracao do primeiro pelo segundo: %d", num1 - num2);
    printf("\nA multiplacao desses valores: %d", num1 * num2);
    printf("\nA divisao inteira do primeiro pelo segundo: %d", num1 / num2);
    printf("\nA divisao float do primeiro pelo segundo: %.2f", (float)num1 / (float)num2);
    printf("\nO resto da divisao do primeiro pelo segundo: %d", num1%num2);
}