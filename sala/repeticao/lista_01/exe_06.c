/*
FOR
6) Ler dois números que representam os limites de um intervalo e ler o incremento. Mostrar os números desse
intervalo de acordo com o incremento indicado e em ordem crescente. O usuário pode informar os valores
que representam os limites do intervalo em ordem crescente ou decrescente. Fazer a média dos ímpares e
divisíveis por 35 do intervalo.
*/

#include <stdio.h>

int main(void) {

    float v1, v2, increment;

    printf("Informe o valor inicial do intervalo, o valor final do intervalo e depois o incremento: ");
    scanf("%f %f %f", &v1, &v2, &increment);

    printf("\n");

    if (v1 < v2) {
        for (v1; v1 <= v2; v1 += increment) {
            printf("%.0f\n", v1);
        }
    } else {
        for (v2; v2 <= v1; v2 += increment) {
            printf("%.0f\n", v2);
        }
    }
}