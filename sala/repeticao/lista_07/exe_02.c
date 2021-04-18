// 2) Escreva um programa que imprima todas as possibilidades de que no lançamento de dois dados a soma das
// faces seja um valor informado pelo usuário. O usuário deve informar um valor válido entre 2 a 12. Repetir a
// leitura até que o usuário informe um valor válido.

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {
 
    char opt = ' ';
    do {
        int num = 0, i = 1, j = 0, contPossib = 0;

        do {
            printf("Informe um numero entre 2 e 12: ");
            scanf("%d", &num);
            __fpurge(stdin);

        } while (num < 2 || num > 12);

        for (i; i < num; i++) {
            j = num - 1;
            for (j; j > 0; j--) {
                if (i + j == num) {
                    printf("\n%d + %d = %d", i, j, num);
                    contPossib++;
                }
            }
        }

        printf("\n%d possibilidades", contPossib);

        printf("\nDeseja repetir ? (S/s ou N/n) ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');    
}