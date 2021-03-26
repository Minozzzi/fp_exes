/*
4) Um ano é bissexto se for divisível por 4 e não for divisível por 100. Também são bissextos os divisíveis por 400.
Escreva um programa que determina se um ano informado pelo usuário é bissexto.
*/

#include <stdio.h>

int main(void) {

    int ano;

    printf("Informe o valor de um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 || ano % 400 == 0) && ano % 100 != 0) {
        printf("\nAno bissexto");
    } else {
        printf("\nAno nao e bissexto");
    }
}