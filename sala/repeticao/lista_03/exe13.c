// 13) Apresente os múltiplos de 10 entre 1000 e 0 (ordem decrescente). Mostre os valores separados por uma
// tabulação e em colunas com 8 números por linha.

#include <stdio.h>

int main(void) {

    int i = 1000, cont = 0;

    for (i; i>= 0; i--) {
        if (cont == 8) {
            printf("\n");
            cont = 0;
        }
        if (i % 10 == 0){
            printf("%d\t", i);
            cont++;
        }
    }    
}   