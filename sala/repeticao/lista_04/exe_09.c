// 9) Fazer um programa para o algoritmo representado no fluxograma a seguir.
// Responda:
// a) Que tipo de estrutura de repetição está representada neste fluxograma?
// b) O que faz o programa implementado com base neste fluxograma?

#include <stdio.h>

int main(void) {

    //A) Do - While
    //B) Inicia variável num em 0, soma +1 dentro do loop em num, imprime num, valida se num é menor igual a 100

    int num = 0;

    do {
        num = num + 1;
        printf("%d\t", num);
    } while (num <= 100);
}