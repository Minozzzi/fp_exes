// 3) Ler dois números positivos que representam os limites inferior e superior de um intervalo. Validar a entrada
// para que sejam informados números positivos. É mais adequado validá-los separadamente. Validar também
// para que o valor do limite superior seja maior e diferente que o valor do limite inferior. Imprimir os números
// múltiplos de 3 desse intervalo e fornecer a média deles

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {

    int num1 = 0, num2 = 0, cont = 0, soma = 0;
    char opt = ' ';

    do {
        do {
            printf("Informe um numero positivo para o limite inferior: ");
            scanf("%d", &num1);
            __fpurge(stdin);

        } while (num1 <= 0);

        do {
            printf("Informe um numero positivo para o limite superior: ");
            scanf("%d", &num2);
            __fpurge(stdin);

        } while (num2 <= num1);

        while (num1 <= num2) {
            if (num1 % 3 == 0) {
                printf("%d\t", num1);
                soma += num1;
                cont++;
            }

            num1++;
        }
        printf("\n\nMedia = %.2f", cont > 0 ? (float)soma/cont : 0);
        printf("\nDeseja repetir ? (S/s ou N/n) ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');
}