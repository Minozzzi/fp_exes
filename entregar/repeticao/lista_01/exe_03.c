// 3) Mostrar os números entre 10 e 0 (ordem decrescente) com intervalo de 0.5.

#include <stdio.h>

int main(void) {

    float i = 10;

    for (i; i >= 0; i-= 0.5) {
        printf("%.2f\t", i);
    }
}