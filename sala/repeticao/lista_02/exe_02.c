// 2) Na matemática, o fatorial de um número é o produto de todos os inteiros positivos menores ou iguais ao
// número. Exemplo: Fatorial de 5 é 1 * 2 * 3 * 4 * 5 = 120. Elabore um programa que calcule e mostre o fatorial
// de um número informado pelo usuário. Validar esse número para que esteja em um intervalo de 1 a 20.
// Lembrando que fatorial de 1 = 1 e fatorial de 0 = 1.
// Obs.: Use uma variável de tipo de dado long long int (%lld) para armazenar o fatorial.

#include <stdio.h>

int main(void) {

    int value, totalFat = 1;

    printf("Informe um numero: ");
    scanf("%d", &value);

    printf("%d! = ", value);
    for(value; value >= 1; value--) {
        totalFat *= value;
        if (value == 1) {
            printf(" %d", value);
        } else {
            printf(" %d *", value);
        }
    }

    printf(" = %2d", totalFat);
}