/*
1) Ler um número double. Separar a parte inteira e a parte decimal desse número. Apresentar a parte decimal
como um valor double e como um inteiro de três dígitos. Da parte inteira separar o número que representa
unidade, dezena e centena e mostrar.
*/

#include <stdio.h>

int main(void)
{
    double value;

    printf("Digite um numero: ");
    scanf("%lf", &value);

    printf("\nNumero informado: %lf", value);
    printf("\nParte inteira: %d", (int)value);
    printf("\nParte decimal: %lf", value - (int)value);
    printf("\nParte decimal como inteiro de tres digitos: %d", (int)((value - (int)value) * 1000));
    printf("\nCentena(s): %d", (int)((int)value / 100));
    printf("\nDezena(s): %d", (int)((int)value / 10 % 10));
    printf("\nUnidade(s): %d", (int)((int)value % 10));
}