/*
2) Ler a quantidade de kilowatts de energia elétrica consumidos por uma residência. Calcular e mostrar o
valor em reais de cada kilowatts, o valor total a ser pago e valor a ser pago por essa residência quando há
desconto de 10%. Considere que 100 kilowatts custam 1/7 do salário mínimo. Ler o valor do salário mínimo.
Armazene em variáveis apenas o valor do salário mínimo, a quantidade de kilowatts gastos pela residência e
o valor de um kilowatt.
*/

#include <stdio.h>

int main(void)
{
    float salarioMin, kWGasto;

    printf("Informe o valor do salario minimo: R$ ");
    scanf("%f", &salarioMin);

    printf("Informe a quantidade de quilowatts gastos pela residencia: ");
    scanf("%f", &kWGasto);

    printf("\nO valor do quilowatt: R$ %.2f", (salarioMin/7) /100);
    printf("\nO valor a ser pago pela residencia: R$ %.2f", (salarioMin/7) * (kWGasto/100));
    printf("\nO valor a ser pago pela residencia com 10%% de desconto: R$ %.2f", ((salarioMin/7) * (kWGasto/100)) * 0.90);
}