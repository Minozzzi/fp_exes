/*
2) Ler dois números inteiros e informar:
a) Se ambos são divisíveis por 5.
b) Se pelo menos um deles é divisível por 5.
c) Se ambos são pares.
d) Se pelo menos um deles é ímpar.
*/

#include <stdio.h>

int main(void) {

    int n1, n2;

    printf("Informe dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    if (n1 % 5 == 0 && n2 % 5 == 0) {
        printf("\nAmbos numeros diviseis por 5");
    } else if (n1 % 5 == 0 || n2 % 5 == 0) {
        printf("\nPelo menos um numero e divisivel por 5");
    }

    if (n1 % 2 == 0 && n2 % 2 == 0) {
        printf("\nAmbos numeros pares");
    } else if (n1 % 2 != 0 || n2 % 2 != 0) {
        printf("\nPelo menos um deles e impar");
    }
}