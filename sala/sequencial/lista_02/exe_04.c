/*
4) Escreva um programa que, dados a quantidade de litros de combustível utilizada, os quilômetros
percorridos por um automóvel e o valor do litro de combustível, calcule quantos quilômetros o veículo
percorreu por litro de combustível e o valor gasto em reais por km.
*/

#include <stdio.h>

int main(void)
{
    float km, litros, precoLitros;

    printf("Informe os quilometros percorridos: ");
    scanf("%f", &km);

    printf("Informe o combustivel consumido em litros: ");
    scanf("%f", &litros);

    printf("Informe o preço do litro: ");
    scanf("%f", &precoLitros);

    printf("\nO automovel fez %.2fKM por litro de combustivel", km/litros);
    printf("\nO gasto em reais por KM foi de R$%.2f", precoLitros/(km/litros));
}