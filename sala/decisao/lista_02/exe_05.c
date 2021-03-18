/*
5) Calcular o imposto de renda de uma pessoa de acordo com a seguinte tabela:
Renda anual Alíquota*
Até R$ 10.000,00 0%
> R$ 10.000,00 e <= R$ 25.000,00 10%
Acima de R$ 25.000,00 25%
*Alíquota é o percentual para realizar o cálculo do imposto de renda a ser pago.
Se informado valor negativo, não realizar o cálculo e informar o usuário
*/

#include <stdio.h>

int main(void) {

    float rendaAnual;

    printf("Informe sua renda anual: ");
    scanf("%f", &rendaAnual);

    if (rendaAnual < 0) {
        return printf("Valor negativo, nao sera realizado o calculo");
    }

    return printf("Imposto de renda = %.2f", rendaAnual <= 10000 ? rendaAnual * 0 : rendaAnual > 10000 && rendaAnual <= 25000 ? rendaAnual * 0.10 : rendaAnual * 0.25);
    
}