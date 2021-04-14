// 4) Mostrar os valores ímpares e divisíveis por 7 entre 500 e 0 em ordem decrescente. Obter a média dos
// pares e divisíveis por 3 desse intervalo.

#include <stdio.h>

int main(void) {

    int i = 500, soma = 0, cont = 0;

    for (i; i >= 0; i--) {
        if ((i % 2 != 0) && (i % 7 == 0)) {
            printf("%d\t", i);
        }

        if ((i % 2 == 0) && (i % 3 == 0)) {
            soma += i;
            cont++;
        }
    }

    printf("\n\nMedia dos valores pares divisiveis por 3 = %.2f", cont > 0 ? (float)soma/cont : 0);
}