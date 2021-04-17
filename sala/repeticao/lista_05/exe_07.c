// 7) Implemente um algoritmo que lê números informados pelo usuário. O algoritmo deve parar quando informado um
// número negativo. Para cada número lido, exceto o número negativo que representa a saída, o algoritmo deverá imprimir
// a soma dos dígitos.
// Exemplo:

#include <stdio.h>

int main(void) {
    int num = 0, soma = 0;

    do {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if (num == 0) {
            soma = num;
        } else {
            while (num != 0) {
                soma += num % 10;
                num /= 10;
            }
        }

        printf("soma = %d\n\n", soma);
        soma = 0;
    } while (num >= 0);
}