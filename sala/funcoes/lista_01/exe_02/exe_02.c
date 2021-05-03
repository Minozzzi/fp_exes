// 2) Fazer uma função para verificar se um número é ou não primo. A função será implementada em um
// arquivo de cabeçalho "primo.h" e deverá retornar 0 se o número for primo ou 1, caso o número não seja
// primo. Elaborar um programa para usar essa função para:
// a) Verificar se um número informado pelo usuário é ou não um número primo. Validar a entrada para que o
// usuário informe um número positivo.
// b) Mostrar os primos no intervalo entre 1 e 100.
// c) Fazer a média dos primos entre 200 e 100

#include <stdio_ext.h>
#include <ctype.h>
#include "primo.h"

int main() {

    char opt = ' ';

    do {
        char operacao = ' ';
        int value = 0, isPrimo = 0, contPrimos = 0, somaPrimos = 0;
        printf("Informe qual operacao deseja fazer\n");
        printf("A - Verificar se o numero e primo\nB - Primos entre 1 e 100\nC - Media dos primos entre 200 e 100");
        printf("\nOpcao: ");
        scanf("%c", &operacao);
        __fpurge(stdin);

        switch (toupper(operacao)){
            case 'A':
                printf("\nInforme um numero: ");
                scanf("%d", &value);
                __fpurge(stdin);
                if (primo(value) == 0) {
                    printf("Numero %d primo", value);
                } else {
                    printf("Numero %d nao e primo", value);
                }
                break;
            case 'B':
                printf("\n");
                for (int i = 2; i <= 100; i++){
                    if (primo(i) == 0) {
                        printf("%d\t", i);
                    }
                }
                break;
            case 'C':
                for (int i = 200; i >= 100; i--) {
                    if (primo(i) == 0) {
                        contPrimos++;
                        somaPrimos += i;
                    }
                }
                printf("\nMedia = %.2f", contPrimos > 0 ? (float)somaPrimos/contPrimos : 0);
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