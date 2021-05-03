// 1) Fazer um programa que permite aplicar as operações de soma, subtração, multiplicação, divisão e resto
// em dois números fornecidos pelo usuário. Cada operação é uma função e deve ser acessada a partir de um
// menu (use switch case). As funções são implementadas no próprio programa.
// a) Soma sem parâmetros e sem retorno
// b) Subtração com parâmetros e sem retorno
// c) Multiplicação sem parâmetros e com retorno
// d) Divisão com parâmetros e com retorno.
// e) Resto com parâmetros e com retorno.

#include <stdio_ext.h>
#include <ctype.h>

int soma() {
    int n1 = 0, n2 = 0;

    printf("\nInforme dois valores para realização da sua conta: ");
    scanf("%d %d", &n1, &n2);
    __fpurge(stdin);
    printf("Soma: %d", n1 + n2);
}

int subtracao(int n1, int n2) {
    printf("Subtracao: %d", n1-n2);
}

int multiplicacao() {
    int n1 = 0, n2 = 0;

    printf("\nInforme dois valores para realização da sua conta: ");
    scanf("%d %d", &n1, &n2);
    __fpurge(stdin);
    return n1 * n2;
}

int divisao(int n1, int n2) {
    return n1 / n2;
}

int resto(int n1, int n2) {
    return n1 % n2;
}

int main() {

    char opt = ' ';

    do {
        char tipoConta = ' ';
        int n1 = 0, n2 = 0;
        printf("Informe qual operacao deseja fazer\n");
        printf("A - Adcionar\nS - Subtrair\nM - Multiplicar\nD - Divisao\nR - Resto");
        printf("\nOpcao: ");
        scanf("%c", &tipoConta);
        __fpurge(stdin);

        switch (toupper(tipoConta)){
            case 'A':
                soma();
                break;
            case 'S':
                printf("\nInforme dois valores para realização da sua conta: ");
                scanf("%d %d", &n1, &n2);
                __fpurge(stdin);
                subtracao(n1, n2);
                break;
            case 'M':
                printf("Multiplicacao: %d", multiplicacao());
                break;
            case 'D':
                printf("\nInforme dois valores para realização da sua conta: ");
                scanf("%d %d", &n1, &n2);
                __fpurge(stdin);
                printf("Divisao: %d", divisao(n1, n2));
                break;
            case 'R':
                printf("\nInforme dois valores para realização da sua conta: ");
                scanf("%d %d", &n1, &n2);
                __fpurge(stdin);
                printf("Resto: %d", resto(n1, n2));
                break;
            default:
                printf("\nOpcao invalida");
                break;
        }

        printf("\n\nDeseja fazer outra conta (S ou s para sim) ? ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while(toupper(opt) == 'S');
}