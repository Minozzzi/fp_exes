// 1) Apresentar a tabuada de um número informado pelo usuário. A tabuada deve ser apresentada na forma a
// seguir:

#include <stdio.h>

int main(void) {

    int value, i = 0;

    printf("Informe um numero: ");
    scanf("%d", &value);

    for (i; i <= 10; i++) {
        printf("%d * %d = %d\n", value, i, value * i);
    }
}