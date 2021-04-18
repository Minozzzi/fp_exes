// 3) Ler um número N qualquer maior ou igual a 1 e menor ou igual a 50 e apresentar o valor obtido da
// multiplicação sucessiva de N por 2, enquanto o produto for menor que 250 (N*2; N*2*2; N*2*2*2; etc.). O valor
// N deverá ser verificado quanto a sua validade. Caso o usuário informe um valor fora da faixa, o programa
// deverá informar que o valor digitado não é válido e repetir a leitura.
// Atenção: o produto deve ser menor que 250.

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {
 
    char opt = ' ';
    do {
        int num = 0, prod = 1, numLimite = 250;

        do {
            printf("Informe numero entre 1 e 50: ");
            scanf("%d", &num);
            __fpurge(stdin);

        } while (num < 1 || num > 50);

        prod = num * 2;
        printf("\nN * 2 = %d", prod);
        while (prod < numLimite) {
            prod *= 2;
            if (prod < 250) {
                printf("\nN * 2 = %d", prod);
            }
        }


        printf("\nDeseja repetir ? (S/s ou N/n) ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');    
}