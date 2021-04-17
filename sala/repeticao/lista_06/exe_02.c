// 2) Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um número que
// atende essa condição. Esse número representa a quantidade de números primos a serem mostrados.

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {

    int num = 0, i = 2, cont = 0;
    char opt = ' ';

    do {

        do {
            printf("Informe um numero positivo: ");
            scanf("%d", &num);
            __fpurge(stdin);

        } while (num <= 0);

        while(cont < num) {
            int firstValuePrimo = 2, contDiv = 0;

            for (firstValuePrimo; firstValuePrimo < i; firstValuePrimo++) {
                if (i % firstValuePrimo == 0) {
                    contDiv++;
                    break;
                }
            }
            if (contDiv == 0) {
                printf("%d\t", i);
                cont++;
            }
            
            i++;
        }
        cont = 0;
        i = 2;
        printf("\nDeseja repetir ? (S/s ou N/n) ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');
}