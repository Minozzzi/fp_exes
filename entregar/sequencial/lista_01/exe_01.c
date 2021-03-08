/*
1) Ler um valor que representa o preço de um produto e imprimir esse valor com reajuste de x%. O percentual
do reajuste é informado pelo usuário.
*/

#include <stdio.h>

int main(void)
{
    float precoProduto, reajuste;

    printf("Informe o valor de um produto: R$ ");
    scanf("%f", &precoProduto);

    printf("Informe o percentual de reajuste: ");
    scanf("%f", &reajuste);

    printf("O valor do produto com o reajuste e: R$ %.2f",precoProduto + ((precoProduto * reajuste) / 100));
}