// 11) Um número é primo quando é divisível de maneira exata somente por 1 e por ele mesmo. Na figura a
// seguir, os números destacados são primos:
// Elabore um programa que leia um número inteiro e determine se o mesmo é ou não um número primo.

#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");

    int value = 0, i = 2, cont = 0;

    printf("Informe um valor: ");
    scanf("%d", &value);

    for (i; i <= value - 1; i++) {
        if (value % i == 0) {
            cont++;
            break;
        }
    }
    if (cont > 0) {
        printf("\n\nO número não é primo");
    } else {
        printf("\n\nO número é primo");
    }
}