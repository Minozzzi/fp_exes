// 1) Ler um número maior ou igual a 0 que representa a quantidade de valores pares que devem ser mostrados.
// Apresentar esses valores n por linha, sendo n um número positivo, informado pelo usuário. Os valores são
// apresentados separados por tabulação.

#include <stdio.h>

int main(void) {
    
    int value = 0, linhas = 0, i = 2, cont = 0;

    do {
        printf("Informe um numero para ser a quantidade de numeros pares: ");
        scanf("%d", &value);

        if (value < 0 ) {
            printf("\n\nInforme um numero maior ou igual a zero para a quantidade\n\n");
        }
    } while (value < 0);
    
    do {
        printf("Informe a quantidade de elementos por linha: ");
        scanf("%d", &linhas);

        if (linhas <= 0 ) {
            printf("\n\nInforme um numero maior que zero para as linhas\n\n");
        }
    }
    while (linhas <= 0);

    for (i; i <= (value * 2); i++) {
        if (i % 2 == 0) {
            printf("%2d\t", i);
            cont++;
        }
        if (cont == linhas) {
            cont = 0;
            printf("\n");
        }
    }
}