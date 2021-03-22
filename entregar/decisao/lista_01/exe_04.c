/*
4) Ler um número double:
a) Se o número lido é menor que 100, separar a parte inteira e a parte decimal e mostrá-las separadamente.
b) Se o número lido é maior ou igual a 100, obter o resto da divisão desse número por 3 e mostrar o resto.
*/

#include <stdio.h>

int main(void) {

    double value;

    printf("Informe um numero: ");
    scanf("%lf", &value);

    if (value < 100) {
        printf("Parte inteira: %d", (int)value);
        printf("\nParte decimal: %.2lf", value - (int)value);
        printf("\nParte decimal como inteiro: %.2lf", (value - (int)value) * 100);
    } else {
        printf("Resultado da divisao = %.2lf", value/3);
        printf("\nResto da divisao = %.2lf", value - ((value/3) * 3));
    }
}
