/*
6) Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para calcular seu rendimento,
ela deverá fornecer o valor constante da aplicação mensal, a taxa e o número de meses. Sabendo-se que a
fórmula usada para este cálculo é:
Onde: i = taxa, P = valor da aplicação mensal e n= número de meses.
Obs.: Para a potência usar a função pow() da biblioteca math.h.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float valorAplicacao, taxaRendimento, meses;

    printf("Informe o valor da aplicacao: R$");
    scanf("%f", &valorAplicacao);

    printf("Informe a taxa de rendimento (entre 0 e 1): ");
    scanf("%f", &taxaRendimento);

    printf("Informe o numero de meses: ");
    scanf("%f", &meses);

    printf("\n O valor acumulado: R$%.2f", valorAplicacao * pow(1 + taxaRendimento, meses));
}