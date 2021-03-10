/*
5) Faça um programa para calcular a quantidade de fita necessária, em centímetros, para amarrar um pacote
com duas voltas, sendo uma pela largura e outra pelo comprimento do pacote. Serão fornecidas a largura, a
altura e o comprimento do pacote. Para amarrar as pontas da fita são necessários 15 cm de fita em cada
ponta. A figura a seguir ilustra a maneira como a fita é passada pelo pacote.
*/

#include <stdio.h>

int main(void)
{
    float altura, largura, comprimento;

    printf("Informe a altura, a largura e o comprimento respectivamente em centimetros: ");
    scanf("%f %f %f", &altura, &largura, &comprimento);

    printf("Serao necessarios %.2fcm de fita", (4 * altura) + (2 * largura) + (2 * comprimento) + 30);
}