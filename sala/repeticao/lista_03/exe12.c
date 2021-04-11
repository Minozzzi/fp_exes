// 2) Faça um programa que imprima os n (indicado pelo usuário) primeiros números pares (começa em 0).
// Apresente 5 valores por linha

#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");

    int value = 0, i = 0, cont = 0;

    printf("Quantos números pares quer mostrar ? ");
    scanf("%d", &value);

    while (i < (value * 2)) {
        if (cont == 5){
            printf("\n");
            cont = 0;
        }
        if (i % 2 == 0) {
            printf("%2d\t", i);
            cont++;
        }
        i++;
    }
}