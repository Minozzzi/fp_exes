/*
3) Leia um valor double que representa o troco a ser fornecido por um caixa. Separe a parte inteira (reais) da
parte decimal (centavos) e apresente na forma: 123 reais e 18 centavos.
*/

#include <stdio.h>

int main(void)
{
    double troco;

    printf("Informe o troco: R$");
    scanf("%lf", &troco);

    printf("O valor informado eh %d reais e %d centavos", (int)troco, (int)((troco - (int)troco) * 100));
}