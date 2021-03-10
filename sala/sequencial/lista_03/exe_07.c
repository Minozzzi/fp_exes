/*
7) Suponha que um caixa disponha apenas de cédulas de R$ 100, R$ 10 e R$ 1. Escreva um programa para
ler o valor de uma compra e o valor fornecido pelo usuário para pagar essa compra, e calcule o troco.
Calcular e mostrar a quantidade de cada tipo de cédula que o caixa deve fornecer como troco. Mostrar
também o valor da compra e do troco. Use variáveis do tipo int.
*/

#include <stdio.h>

int main(void)
{
    int valorCompra, valorPago;

    printf("Informe o valor da compra: R$");
    scanf("%d", &valorCompra);

    printf("Informe o valor pago: R$");
    scanf("%d", &valorPago);

    printf("\nO troco de R$%d foi pago com:", valorPago - valorCompra);
    printf("\n%d Nota(s) de R$100",(valorPago - valorCompra) / 100 );
    printf("\n%d Nota(s) de R$10", (valorPago - valorCompra) / 10 % 10);
    printf("\n%d Nota(s) de R$1", (valorPago - valorCompra) % 10);
}