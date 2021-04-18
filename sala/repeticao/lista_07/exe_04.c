// 4) Escreva um programa que leia o valor de uma aplicação, o percentual de rendimento mensal obtido por esta
// aplicação e o período do investimento; e retorne o valor da aplicação ao final do período de investimento. Obs.:
// A cada 12 meses o percentual de rendimento deve ser aumentado em 0,25%. Validar o valor da aplicação para
// que seja positivo. Validar o percentual de rendimento para que seja um número entre 0 e 1. Validar o período
// para que seja um valor positivo.

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {
 
    char opt = ' ';
    do {
        float aplic = 0, percent = 0, correcaoPercent = 0.25, correcaoAplic = 0;
        int meses = 0, correcaoMes = 12;

        do {
            printf("Informe um valor positivo da aplicacao: R$ ");
            scanf("%f", &aplic);
            __fpurge(stdin);

        } while (aplic <= 0);

        do {
            printf("Informe o percentual de rendimento mensal (entre 0 e 1): ");
            scanf("%f'", &percent);
            __fpurge(stdin);

        } while (percent < 0 || percent > 1);

        do {
            printf("Informe o periodo em meses: ");
            scanf("%d", &meses);
            __fpurge(stdin);

        } while (meses <= 0);

        correcaoAplic = aplic;
        printf("\n\nMES\t%% DE RENDIMENTO\t VALOR APLICACAO\n");
        for (int i = 1; i <= meses; i++) {
            if(i == correcaoMes) {
                percent += correcaoPercent;
            }
            correcaoAplic *= (1+percent); 
            printf("%d\t\t%.2f\t%.2f\n", i, percent, correcaoAplic);
            
        }

        printf("\nDeseja repetir ? (S/s ou N/n) ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');    
}