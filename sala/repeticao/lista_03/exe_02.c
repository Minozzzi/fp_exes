// 2) Faça um programa que apresente uma tabela de lucro esperado, em decorrência do número de pessoas e
// valor do ingresso. O valor do ingresso vai de R$ 15,00 até R$ 20,00 aumentando de R$ 0,50 centavos. É
// informada a quantidade de pessoas.

#include <stdio.h>

int main(void) {

    int qtdPessoas = 0;
    float valorIngresso = 15;

    printf("Informe a quantiadde de pessoas: ");
    scanf("%d", &qtdPessoas);

    printf("Valor do ingresso\tValor total recebido\n\n");
    for (valorIngresso; valorIngresso <= 20; valorIngresso += 0.5) {
        printf("R$%.2f\t\t\tR$%.2f\n", valorIngresso, valorIngresso * qtdPessoas);
    }
}