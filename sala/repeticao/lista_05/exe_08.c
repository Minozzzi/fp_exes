// 8) Um número abundante é aquele cuja soma dos seus divisores (excluído o próprio número) é maior do que ele
// mesmo. Por exemplo, o número 12 é abundante, pois se somarmos os seus divisores (1, 2, 3, 4 e 6) obteremos o valor
// 16 e este é maior do que o próprio número. Já o número 10 não é abundante, pois a somatória dos seus divisores (1, 2
// e 5) é menor do que 10. Também o número 6 não é abundante, pois a soma de seus divisores (1, 2 e 3) é igual a 6.
// Escreva um programa que permita a leitura de um valor a partir do teclado e imprima uma mensagem informando se o
// número digitado é ou não abundante.

#include <stdio.h>

int main(void) {

    int num = 0, i = 1, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i; i < num; i++) {
        if (num % i == 0) {
            soma += i;
            printf("\n%d", i);
        }
    }
    printf("\n----\n%d", soma);
    if (soma > num) {
        printf("\n\n%d e abundante pois a soma dos seus divisores sao maiores que o proprio numero", num);
    } else {
        printf("\n\n%d nao e abundante pois a soma dos seus divisores sao menores ou igual que o proprio numero", num);
    }
}