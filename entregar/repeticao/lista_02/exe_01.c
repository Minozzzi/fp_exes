// 1) Ler dois valores que representam os limites de um intervalo. Mostrar os números pares e divisíveis por 3
// desse intervalo em ordem crescente. Por exemplo: informados 2 e 30 como limites, mostrar: 6, 12, 18, 24, 30.
// O usuário pode informar os valores em qualquer ordem.

#include <stdio.h>

int main(void) {

    int min = 0, max = 0, aux = 0;

    printf("Informe o limite minimo e o limite maximo: ");
    scanf("%d %d", &min, &max);

    if (min > max) {
        aux = min;
        min = max;
        max = aux;
    }

    for (min; min <= max; min++) {

        if ((min % 2 == 0) && (min % 3 == 0)) {
            printf("%d\t", min);
        }
    }
}