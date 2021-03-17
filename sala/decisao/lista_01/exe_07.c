/*
7) Elaborar um programa que lê dois valores, verifica se o primeiro é múltiplo do segundo e escreve a
mensagem "São múltiplos" ou "Não são múltiplos" dependendo da condição. Verificar para que não seja
realizada uma divisão por zero. Nesse caso, informar que não é possível realizar uma divisão por zero.
*/

#include <stdio.h>

int main(void) {
    
    int n1, n2;

    printf("Informe dois valores inteiros para verificar se são multiplos: ");
    scanf("%d %d", &n1, &n2);

    if (n2 == 0) {
        return printf("Nao e possivel realizar divisao por 0");
    }

    if (n1 % n2 == 0) {
        return printf("Sao multiplos");
    } else {
        return printf("Nao sao multiplos");
    }
}