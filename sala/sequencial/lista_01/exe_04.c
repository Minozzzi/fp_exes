/*
4) Um professor atribui pesos de 1 a 3 para as notas de três avaliações, respectivamente. Faça um algoritmo
que receba as notas e calcule e mostre a média ponderada. A média e as notas serão valores do tipo float.
*/

#include <stdio.h>

int main(void)
{
    float av01, av02, av03, notaFinal;

    printf("Informe a nota da primeira avaliacao: ");
    scanf("%f", &av01);

    printf("Informe a nota da segunda avaliacao: ");
    scanf("%f", &av02);

    printf("Informe a nota da terceira avaliacao: ");
    scanf("%f", &av03);

    notaFinal = (((av01 * 1) + (av02 * 2) + (av03 * 3)) / (1 + 2 + 3));

    printf("\nA nota final e %.2f", notaFinal);
}