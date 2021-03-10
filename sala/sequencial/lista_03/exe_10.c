/*
10) (DESAFIO) Obter o resto da divisão de dois valores inteiros informados pelo usuário, sem usar o operador
de resto.
*/

#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("Informe o primeiro valor: ");
    scanf("%d", &n1);

    printf("Informe o segundo valor: ");
    scanf("%d", &n2);

    printf("\nResto da divisao: %d", n1 - ((n1/n2) * n2));
}