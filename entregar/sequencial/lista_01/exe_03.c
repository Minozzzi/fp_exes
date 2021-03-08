/*
3) Uma revendedora de carros usados paga aos seus funcionários vendedores um salário fixo por mês, mais
uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por eles efetuadas.
Escrever um programa que receba os seguintes dados de um vendedor:
- Número de carros vendidos;
- Valor total das vendas realizadas;
- Valor do salário fixo;
- Valor da comissão recebida por carro vendido.
Calcular e mostrar o salário mensal desse vendedor.
*/

#include <stdio.h>

int main(void)
{
    float salarioFixo, comissaoPorCarro, carrosVendidos, valorVendas;

    printf("Informe o valor do salario fixo: R$ ");
    scanf("%f", &salarioFixo);

    printf("Informe o valor de comissao por carros vendidos: R$ ");
    scanf("%f", &comissaoPorCarro);

    printf("Informe o numero de carros vendidos: ");
    scanf("%f", &carrosVendidos);

    printf("Informe o valor total de vendas: R$ ");
    scanf("%f", &valorVendas);

    printf("\nO salario liquido do mes: R$ %.2f", salarioFixo + (comissaoPorCarro * carrosVendidos) + (valorVendas * 0.05));
}