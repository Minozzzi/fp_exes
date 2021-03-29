/*
5) Uma árvore de decisão obtém a decisão pela execução de uma sequência de testes. Cada nó interno da árvore
corresponde a um teste do valor de uma das propriedades e os ramos deste nó são identificados com os possíveis
valores do teste. Cada nó folha da árvore especifica o valor de retorno se a folha for atingida.
5.1) A figura a seguir apresenta um exemplo fictício de árvore de decisão, tomando atributos de clientes de uma
instituição financeira. Elabore um programa que implemente essa árvore de decisão. As entradas podem ser do tipo
char, portanto, considere a primeira letra de cada palavra como entrada. Caso o usuário informe um caractere diferente
dos aceitáveis, apresente a mensagem "Caractere inválido".
*/
#include <stdio.h>
#include<stdio_ext.h>

int main(void) {
    
    char opcao;

    printf("Saldo em conta corrente: (P ou p para positivo e N ou n para negativo): ");
    scanf("%c", &opcao);
    __fpurge(stdin);

    if (opcao == 'P' || opcao == 'p') {
        printf("\nCliente sem risco");
    } else if (opcao == 'N' || opcao == 'n') {
        printf("Possui aplicacoes: (s ou S para sim e n ou N para nao): ");
        scanf("%c", &opcao);
        __fpurge(stdin);

        if (opcao == 'S' || opcao == 's') {
            printf("\nCliente sem risco");
        } else if (opcao == 'N' || opcao == 'n') {
            printf("\nCliente com risco");
        } else {
            printf("\nCaractere invalido");
        }
        
    }else {
        printf("\nCaractere invalido");
    }
}