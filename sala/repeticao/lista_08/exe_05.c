// 5) Fazer um programa para mostrar os divisores, calcular a quantidade deles e mostrar essa quantidade para
// os números compreendidos entre o valor ‘x’ (informado pelo usuário) e ‘x+10’, inclusive. Validar a entrada, o
// usuário deverá fornecer um número positivo entre 2 e 100. Ao final, mostrar a maior quantidade de divisores.

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {

    char opt = ' ';
    do {
        
        int num = 0, maiorDivs = 0, contDivs = 0, limSup = 0;

        do {
            printf("Informe um numero entre 2 e 100: ");
            scanf("%d", &num);
            __fpurge(stdin);    
        } while (num < 2 || num > 100);

        limSup = num + 10;
        for (num; num <= limSup; num++) {
            printf("%d => ", num);
            for (int i = 1; i <= num; i++) {
                if (num % i == 0) {
                    printf("%d, ", i);
                    contDivs++;
                }
            }
            printf("%d divisores\n", contDivs);

            if (maiorDivs < contDivs) {
                maiorDivs = contDivs;
            }
            contDivs = 0;
        }

        printf("\nA maior quantidade de divisores eh %d", maiorDivs);
        printf("\nDeseja repetir ? (S/s ou N/n) \n");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');    
}