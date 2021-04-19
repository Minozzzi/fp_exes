// 1) Fazer um programa que calcule o fatorial dos números inteiros de 1 até 12. Fazer com que a saída do
// programa seja mostrada como no exemplo a seguir:

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {

    char opt = ' ';
    do {
        int i = 1, j = 0, conta = 1;

        while (i <= 12) {
            j = i;
            conta = 1;
            printf("%d! =>", i);
            for (j; j >= 1; j--) {
                conta *= j;
                if (j == 1) {
                    printf(" %d = %d \n", j, conta);
                } else {
                    printf(" %d *", j);
                }
            }
            i++;
        }
        
        printf("\nDeseja repetir ? (S/s ou N/n) ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');    
}