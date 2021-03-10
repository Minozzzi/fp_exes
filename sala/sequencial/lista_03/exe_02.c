/*
2) Considerando que para um consórcio sabe-se o número total de prestações, a quantidade de prestações
pagas e o valor de cada prestação (que é fixo). Escreva um programa que determine o valor total já pago pelo
consorciado e o saldo devedor.*/

#include <stdio.h>

int main(void)
{
    int totalPrestacoes, prestacoesPagas;
    float valorPrestacao;

    printf("Informe a quantidade total de prestacoes e a quantidade de prestacoes pagas respectivamente: ");
    scanf("%d %d", &totalPrestacoes, &prestacoesPagas);

    printf("Informe o valor fixo da prestacao: R$");
    scanf("%f", &valorPrestacao);

    printf("\nValor total pago: R$%.2f", valorPrestacao * prestacoesPagas);
    printf("\nSaldo devedor: R$%.2f", (valorPrestacao * totalPrestacoes) - (valorPrestacao * prestacoesPagas));
}