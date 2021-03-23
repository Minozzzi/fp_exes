/*
2) Faça um programa que apresente o menu a seguir e permita ao usuário escolher a opção desejada,
receba os dados necessários para executar a operação e mostre o resultado.
Menu de opções:
1 – Mostra os números em ordem crescente
2 – Mostra os números em ordem decrescente
3 - Mostra os números que são múltiplos de 2
Digite a opção desejada:
Observações: Ler um conjunto de 4 valores inteiros: opcao, a, b e c. A seguir:
a) Se opcao = 1 escrever os três valores a, b e c em ordem crescente.
b) Se opcao = 2 escrever os três valores a, b e c em ordem decrescente.
c) Se opcao = 3 escrever se os valores a, b e c são múltiplos de 2. 
*/

#include <stdio.h>

int main(void) {

    int opcao, a, b, c;


    printf("Menu de opcoes\n");
    printf("1 - Mostra os numeros em ordem crescente\n2 - Mostra os numeros em ordem decrescente\n3 - Mostra os numeros que sao multiplos de 2\n");
    scanf("%d", &opcao);
    printf("Informe tres numeros diferentes: ");
    scanf("%d %d %d", &a, &b, &c);

    switch(opcao) {
        case 1:
            if (a<b && b<c) {
                return printf("%d %d %d", a, b, c);
            }
            if (a<c && c<b) {
                return printf("%d %d %d", a, c, b);
            }
            if (b<a && a<c) {
                return printf("%d %d %d", b, a, c);
            }
            if (b<c && c<a) {
                return printf("%d %d %d", b, c, a);
            }
            if (c<a && a<b) {
                return printf("%d %d %d", c, a, b);
            }
            if (c<b && b<a) {
                return printf("%d %d %d", c, b, a);
            }
            break;
        case 2:
            if (a>b && b>c) {
                return printf("%d %d %d", a, b, c);
            }
            if (a>c && c>b) {
                return printf("%d %d %d", a, c, b);
            }
            if (b>a && a>c) {
                return printf("%d %d %d", b, a, c);
            }
            if (b>c && c>a) {
                return printf("%d %d %d", b, c, a);
            }
            if (c>a && a>b) {
                return printf("%d %d %d", c, a, b);
            }
            if (c>b && b>a) {
                return printf("%d %d %d", c, b, a);
            }
            break;
        case 3:
            if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0) {
                return printf("Numeros %d e %d e %d sao multiplos de 2", c, b, a);
            }
            if (a % 2 == 0 && b % 2 == 0 && c % 2 != 0) {
                return printf("Numeros %d e %d sao multiplos de 2", a, b);
            }
            if (a % 2 == 0 && b % 2 != 0 && c % 2 == 0) {
                return printf("Numeros %d e %d sao multiplos de 2", a, c);
            }
            if (a % 2 != 0 && b % 2 == 0 && c % 2 == 0) {
                return printf("Numeros %d e %d sao multiplos de 2", b, c);
            }
            if (a % 2 == 0 && b % 2 != 0 && c % 2 != 0) {
                return printf("Apenas o numero %d eh multiplo de 2", a);
            }
            if (a % 2 != 0 && b % 2 == 0 && c % 2 != 0) {
                return printf("Apenas o numero %d eh multiplo de 2", b);
            }
            if (a % 2 != 0 && b % 2 != 0 && c % 2 == 0) {
                return printf("Apenas o numero %d eh multiplo de 2", c);
            }
            break;
        default: 
            printf("Opcao invalida");
            break;
    }
}