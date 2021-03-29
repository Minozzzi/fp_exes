/*
3) Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo usuário. Cada
data deve ser composta por três valores inteiros, em que o primeiro representa o dia, o segundo, o mês e o terceiro, o
ano
*/

#include <stdio.h>

int main(void) {

    int dia1, dia2, mes1, mes2, ano1, ano2;

    printf("Informe a primeira data\nEscreva dia (dd): ");
    scanf("%d", &dia1);

    printf("Escreva mes (mm): ");
    scanf("%d", &mes1);

    printf("Escreva ano (aaaa): ");
    scanf("%d", &ano1);

    printf("\nInforme a segunda data\nEscreva dia (dd): ");
    scanf("%d", &dia2);

    printf("Escreva mes (mm): ");
    scanf("%d", &mes2);

    printf("Escreva ano (aaaa): ");
    scanf("%d", &ano2);

    if (ano1 > ano2) {
        printf("\nMaior data: %d/%d/%d", dia1, mes1, ano1);
    } else if (ano1 < ano2) {
        printf("\nMaior data: %d/%d/%d", dia2, mes2, ano2);
    }

    if (mes1 > mes2) {
        printf("\nMaior data: %d/%d/%d", dia1, mes1, ano1);
    } else if (mes1 < mes2) {
        printf("\nMaior data: %d/%d/%d", dia2, mes2, ano2);
    } 

    if (dia1 > dia2) {
        printf("\nMaior data: %d/%d/%d", dia1, mes1, ano1);
    } else if (dia1 < dia2) {
        printf("\nMaior data: %d/%d/%d", dia2, mes2, ano2);
    }
}