// 3) Fazer duas funções: uma para calcular o fatorial de um número e a outra para mostrar o fatorial de um
// número. Ambas as funções devem ser implementadas em um arquivo de cabeçalho chamado "fatorial.h".
// Elaborar um programa que use essas funções para:
// a) Calcular e mostrar o fatorial dos números entre 1 e 8.
// b) Calcular e mostrar o fatorial de um valor informado pelo usuário. Continuar a leitura enquanto forem
// informados valores positivos.

#include <stdio_ext.h>
#include <ctype.h>
#include "fatorial.h"

int main() {

    char opt = ' ';

    do {
        char operacao = ' ';
        int value = 0;
        
        printf("Informe qual operacao deseja fazer\n");
        printf("A - Fatorial entre 1 e 8\nB - Fatorial de um numero");
        printf("\nOpcao: ");
        scanf("%c", &operacao);
        __fpurge(stdin);

        switch (toupper(operacao)){
            case 'A':
                fatorialOneToEight();
                break;
            case 'B':
                do {
                    printf("\nInforme um numero: ");
                    scanf("%d", &value);
                    __fpurge(stdin);
                    if (value > 0) {
                        fatorialOf(value);
                    }
                }while (value > 0);
                break;
            default:
                printf("\nOpcao invalida");
                break;
        }

        printf("\n\nDeseja fazer outra operacao (S ou s para sim) ? ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while(toupper(opt) == 'S');
}