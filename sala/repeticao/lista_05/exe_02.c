// 2) Elaborar um programa que determine a potência de um número. O usuário informa a base e o expoente e o
// programa informa o resultado da base elevada ao expoente. Não usar funções prontas do C para fazer o cálculo da
// potência.

#include <stdio.h>

int main(void) {

    int base = 0, exp = 0, i = 1, result = 1;

    printf("Informe o valor da base e do expoente: ");
    scanf("%d %d", &base, &exp);

    while (i <= exp) {
        if (i == exp) {
            printf("%d = ", base);
        } else {
            printf("%d * ", base);
        }
        result *= base;
        i++;
    }
    printf("%d", result);
}