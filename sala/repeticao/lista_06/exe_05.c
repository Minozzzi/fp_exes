// 5) Faça o programa que apresente a seguinte saída como no exemplo, solicitando ao usuário o número
// máximo (deve ser positivo).

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {

    int num = 0, i = 1, contLinha = 0;
    char opt = ' ';
    do {
        do {
            printf("Informe um numero positivo: ");
            scanf("%d", &num);
            __fpurge(stdin);

        } while (num <= 0);

        while (i <= num) {
            contLinha++;
            printf("%2d\t", i);    

            if (num == contLinha){
                printf("\n");
                contLinha = 0;
                i++;
            }
        }
        i = 1;
        printf("\nDeseja repetir ? (S/s ou N/n) ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');    
}