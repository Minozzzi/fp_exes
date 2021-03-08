/* 3) Escreva um algoritmo que leia o valor de uma prestação e da taxa de juros cobrada pelo atraso da
prestação. Calcule o valor a ser pago por meio da fórmula:
Valor com juros = Prestação + (Prestação * Taxa /100)
*/

#include <stdio.h>

int main(void) 
{
    float valorPrestacao, taxaJuros, valorJuros;

    printf("Escreva o valor da prestacao: ");
    scanf("%f", &valorPrestacao);

    printf("Escreva o valor da taxa de porcentagem juros: ");
    scanf("%f", &taxaJuros);

    valorJuros = valorPrestacao + (valorPrestacao * taxaJuros /100);

    printf("\nValor final com a taxa de juros: R$%.2f", valorJuros);
}