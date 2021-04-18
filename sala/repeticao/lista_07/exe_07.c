// 7) O Triângulo de Floyd é um triângulo formado com números naturais. O triângulo começa em 1 no canto
// superior esquerdo e continua a escrever a sequência de números naturais de tal modo que cada linha contém
// um número a mais do que a linha anterior. Escreva um programa que leia um número inteiro positivo n e em
// seguida imprima n linhas do Triângulo de Floyd.

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {

    int num = 0, i = 1, contLinha = 1, cont = 0, linhas = 1;
    char opt = ' ';
    do {
        do {
            printf("Informe um numero positivo: ");
            scanf("%d", &num);
            __fpurge(stdin);

        } while (num <= 0);

        while (cont < num) {
            printf("%2d\t", i);    

            if (contLinha == linhas) {
                printf("\n");
                contLinha = 0;
                linhas++;
                cont++;
            }
            i++;
            contLinha++;
        }
        i = 1;
        cont = 0;
        linhas = 1;
        printf("\nDeseja repetir ? (S/s ou N/n) ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');    
}