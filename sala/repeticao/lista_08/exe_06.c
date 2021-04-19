// 6) Fazer um programa que solicite ao usuário informar um número compreendido entre 10 e 20. Validar essa
// entrada. Mostrar os números compreendidos entre o valor ‘x’ (informado pelo usuário) e ‘x+6’, inclusive. Para
// cada número gerado, mostrar os números pares de 2 até o número gerado, calcular a soma dos pares e
// mostrar a soma.

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {

    char opt = ' ';
    do {
        
        int num = 0, soma = 0, limSup = 0;

        do {
            printf("Informe um numero entre 10 e 20: ");
            scanf("%d", &num);
            __fpurge(stdin);    
        } while (num < 10 || num > 20);

        limSup = num + 6;
        for (num; num < limSup; num++) {
            printf("%d ==> ", num);
            for (int i = 1; i <= num; i++) {
                if (i % 2 == 0) {
                    printf("%d ", i);
                    soma += i;
                }
            }
            printf("<-- soma = %d\n", soma);
            soma = 0;
        }

        printf("\nDeseja repetir ? (S/s ou N/n) \n");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');    
}