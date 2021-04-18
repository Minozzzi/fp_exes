// 5) Sabendo-se que na matemática os números primos começam a partir do 2, solicite ao usuário que forneça
// o valor do limite superior de um intervalo (validar para que seja maior que 2). O programa deverá fornecer todos
// os números primos presentes no intervalo. Por exemplo, se o usuário informar 10, o programa deverá fornecer
// todos os números primos entre 2 e 10, que são 2, 3, 5 e 7.

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {
 
    char opt = ' ';
    do {
        int initPrimo = 2, num = 0, firstValuePrimo = 2, contDiv = 0;

        do {
            printf("Informe numero para o limite superior: ");
            scanf("%d", &num);
            __fpurge(stdin);
        } while (num < 3);

        for (initPrimo; initPrimo <= num; initPrimo++) {
            firstValuePrimo = 2;
            contDiv = 0;
            for (firstValuePrimo; firstValuePrimo <= initPrimo; firstValuePrimo++) {
                if (initPrimo % firstValuePrimo == 0 && initPrimo != firstValuePrimo) {
                    contDiv++;
                    break;
                }
            }
            if (contDiv == 0) {
                printf("%d\t", initPrimo);
            }
        }
    
        printf("\nDeseja repetir ? (S/s ou N/n) ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');    
}