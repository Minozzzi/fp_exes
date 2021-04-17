// 6) (Desafio) Implemente um algoritmo que lê números informados pelo usuário. O algoritmo deve parar quando
// informado um número negativo. Para cada número lido, exceto o número negativo que representa a saída, o algoritmo
// deve imprimir a quantidade de dígitos do número informado.
// Observação: Desconsidere 0 como dígito se o mesmo estiver no início do número.

#include <stdio.h>

int main(void) {
    int num = 0, cont = 0;

    do {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if (num == 0) {
            cont++;
        } else {
            while (num != 0) {
                cont++;
                num /= 10;
            }
        }

        printf("%d digitos\n\n", cont);
        cont = 0;
    } while (num >= 0);
}
