// 2) Uma pessoa aplicou R$ 1000,00 com rendimento de 5% ao mês. Quantos meses serão necessários para que o capital investido
// ultrapasse R$ 1200,00.

#include <stdio.h>

int main(void) {
    
    float aplicacao = 1000;
    int meses = 0;

    while (aplicacao <= 1200) {
        aplicacao += aplicacao * 0.05;
        meses++;
    }

    printf("%2d meses = R$ %.2f", meses, aplicacao);
}