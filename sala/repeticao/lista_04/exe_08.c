// 8) Fazer um programa para o algoritmo representado no fluxograma a seguir.
// Responda:
// a) Que tipo de estrutura de repetição está representada neste fluxograma?
// b) O que faz o programa implementado com base neste fluxograma?

#include <stdio.h>

int main(void) {
    //A) Estrutura while
    //B) Valida se num está menor ou igual a 100, se for verdadeiro incrementa +1 na variável num, mostrando os valores desse intervalo

    int num = 0;

    while (num <= 100) {
        num = num +1;
        printf("%d\t", num);
    }
}