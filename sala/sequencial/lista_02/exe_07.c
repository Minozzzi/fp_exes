/*
7) Um viajante de carro fará o trajeto entre duas cidades e ao término da viagem deseja saber:
a) Quantas vezes foi necessário abastecer o carro. (Use a função ceil() da biblioteca math.h para arredondar
o valor para cima)
b) Quantos litros foram consumidos para percorrer a distância indicada.
c) Quantos litros restaram no tanque após a chegada ao destino.
Faça um programa que leia a distância entre as duas cidades, a capacidade do tanque e o consumo médio
do veículo, calcule e mostre as informações solicitadas.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float distancia, maxLitros, kmLitros, qtdAbastecimento, litrosNecessarios;

    printf("Informe a distancia em km percorrida entre as cidades: ");
    scanf("%f", &distancia);

    printf("Informe a capacidade maxima de litros do tanque de combustivel: ");
    scanf("%f", &maxLitros);

    printf("Informe o consumo medio em km por litro: ");
    scanf("%f", &kmLitros);

    litrosNecessarios = distancia/kmLitros;
    printf("\nForam necessarios %.2f litros de combustivel para percorrer o trajeto", litrosNecessarios);
    qtdAbastecimento = litrosNecessarios/maxLitros;
    printf("\nFoi necessario abasceter o carro %.0f vezes", ceil(qtdAbastecimento));
    printf("\nRestou no tanque de combustivel %.2f litros", ((maxLitros * ceil(qtdAbastecimento)) - litrosNecessarios));
}