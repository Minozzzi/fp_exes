/*
5) Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na
diária. Sendo informados o número de apartamentos do hotel e o valor da diária por apartamento para o final
de semana completo. Elaborar um programa para calcular:
a) Valor promocional da diária;
b) Valor total caso a ocupação no final de semana atinja 100%;
c) Valor total a ser arrecadado caso a ocupação no final de semana atinja 70%;
d) Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%.
Armazene em variáveis apenas o valor da diária, o valor da diária com desconto e a quantidade de quartos.
*/

#include <stdio.h>

int main(void)
{
    float valorDiaria, aptos;

    printf("Informe o valor da diaria: R$");
    scanf("%f", &valorDiaria);

    printf("Informe a quantidade de apartamentos: ");
    scanf("%f", &aptos);

    printf("\nValor promocional da diaria: R$%.2f", valorDiaria * 0.75);
    printf("\nTotal arrecadado com 100%% da ocupação: R$%.2f", (valorDiaria * 0.75) * aptos * 2) ;
    printf("\nTotal arrecadado com 70%% da ocupação: R$%.2f", (valorDiaria * 0.75) * (aptos * 0.70) * 2);
    printf("\nValor que o Hotel deixaria de arrecadar ao aplicar o desconto: R$%.2f", ((valorDiaria - (valorDiaria * 0.75)) * aptos) * 2);
}