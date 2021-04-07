// 2) Elaborar um programa para mostrar, em ordem decrescente, os números divisíveis por 3 entre 200 e 100.

#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "")   ;
    int i = 200;

    for (i; i >= 100; i--) {
        if (i % 3 == 0) {
            printf("%d\t", i);
        }
    }
}