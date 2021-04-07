// 4) Apresentar os números divisíveis por 4 ou múltiplos de 10 entre 500 e 0 e a média desses múltiplos.

#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");

    int i = 500, somaTodos = 0, cont = 0;

    for(i; i >= 0; i--) {
        if ((i % 4 == 0) || (i % 10 == 0)) {
            printf("%d\t", i);
            cont++;
            somaTodos += i;
        }
    }

    printf("\n\nMédia dos números múltiplos de 4 ou 10: %d", somaTodos/cont);
}