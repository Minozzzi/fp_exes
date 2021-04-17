// 1) Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um número que
// atende essa condição. Esse número representa a quantidade de números ímpares a serem mostrados.
// Apresentar esses valores n por linha, sendo n um número maior que zero, informado pelo usuário. Os valores
// são apresentados separados por tabulação. Fazer a média dos números ímpares mostrados.

#include <stdio.h>
#include <ctype.h>
#include <stdio_ext.h>

int main(void) {

    int num = 0, linha = 0, i = 0, soma = 0, contLinha = 0;
    char opt = ' ';

    do {
        int cont = 0;
        do {
            printf("Informe um numero positivo: ");
            scanf("%d", &num);
            __fpurge(stdin);

        } while (num <= 0); 

        do {
            printf("Informe um numero positivo para representar a quantidade de numero por linha: ");
            scanf("%d", &linha);
            __fpurge(stdin);
        } while (linha <= 0);

        while (cont < num) {
            if (i % 2 != 0) {
                cont++;
                contLinha++;
                printf("%d\t", i);
                soma += i;
            }

            if (linha == contLinha){
                printf("\n");
                contLinha = 0;
            }
            i++;
        }

        printf("\n\nMedia = %.2f", cont > 0 ? (float)soma/cont : 0);

        printf("\nDeseja repetir o programa ? (s/S ou N/n): \n\n");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while(toupper(opt) == 'S');
}