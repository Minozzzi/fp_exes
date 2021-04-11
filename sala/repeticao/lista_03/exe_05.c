// 5) Mostre os valores ímpares e não divisíveis por 5 entre 200 e 1. Apresente os valores em ordem
// decrescente. Faça a média dos valores desse intervalo que são divisíveis por 3 e por 5.

#include <stdio.h>
#include <locale.h>

int main(void) {
    
    setlocale(LC_ALL, "");

    int i = 200, soma = 0, cont = 0;

    printf("Ímpares e não divisíveis por 5\n");
    for (i; i >= 1; i--) {
        if ((i % 2 != 0) && (i % 5 != 0)) {
            printf("%d\t", i);        
        }

        if ((i % 3 == 0) && (i % 5 == 0)) {
            cont++;
            soma += i;
        }
    }
    printf("\n\nMédia dos valores divisíveis por 3 e 5 = %d", soma/cont);
}