// FOR
// 2) Apresentar os múltiplos de 5, entre 5 e 50 separados por tabulação.

#include <stdio.h>

int main(void) {

    for (int i = 5; i<= 50; i+= 5) {
        printf("%d\t", i);
    }
}