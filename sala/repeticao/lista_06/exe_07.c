// 7) Faça o programa que apresente a seguinte saída como no exemplo, perguntando ao usuário o número
// máximo (deve ser positivo).

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {

    int num = 0, i = 1, contLinha = 1, cont = 0;
    char opt = ' ';
    do {
        do {
            printf("Informe um numero positivo: ");
            scanf("%d", &num);
            __fpurge(stdin);

        } while (num <= 0);

        while (cont < num) {
            printf("%2d\t", i);    

            if (contLinha == i){
                printf("\n");
                contLinha = 0;
                i++;
                cont++;
            }
            contLinha++;
        }
        i = 1;
        cont = 0;
        printf("\nDeseja repetir ? (S/s ou N/n) ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');    
}