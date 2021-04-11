// 6) Apresente os pares entre 0 e 100, sem utilizar if dentro do for. Também calcule e forneça a média dos
// pares

#include <stdio.h>

int main(void) {
    int i = 0, cont = 0, soma = 0;

    for (i; i <= 100; i += 2) {
        printf("%d\t", i);
        cont++;
        soma += i;
    }

    printf("\n\nMedia = %d", soma/cont);
}