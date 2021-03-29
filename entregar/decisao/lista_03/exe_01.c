/*
1) Elabore um programa que obtenha por meio do teclado a pontuação, em valores inteiros, de um candidato ao
concurso vestibular, nas seguintes área: exatas (e), humanas (h) e conhecimento geral (cg). A seguir deverá ser
definida a média ponderada usando a seguinte expressão: mp = ((e * 3) + (h * 2) + cg) / 6. A média ponderada
calculada define o rendimento do candidato de acordo com a seguinte tabela:
Insuficiente = 0 - 250 pontos
Baixo = 251 - 500 pontos
Regular = 501 - 700 pontos
Bom = 701 - 900 pontos
Excelente = maior que 900 pontos
*/

#include <stdio.h>

int main(void) {

    int pontosE, pontosH, pontosCg;
    float mp;

    printf("Informe respectivamente, seus pontos inteiros em exatas, humanas e conhecimentos gerais: ");
    scanf("%d %d %d", &pontosE, &pontosH, &pontosCg);

    mp = ((pontosE * 3) + (pontosH * 2) + pontosCg) / 6;

    if (mp >= 0 && mp <= 250) {
        printf("\nInsuficiente");
    } else if (mp >= 251 && mp <= 500) {
        printf("\nBaixo");
    } else if (mp >= 501 && mp <= 700) {
        printf("\nRegular");
    } else if (mp >= 701 && mp <= 900) {
        printf("\nBom");
    } else {
        printf("\nExcelente");
    }
}