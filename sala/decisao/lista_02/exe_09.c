/*
9) Números palíndromos são aqueles que escritos da direita para a esquerda ou da esquerda para a direita
tem o mesmo valor. Ex.: 9229, 4554, 9779. Fazer um programa que dado um número de 4 dígitos, calcular e
escrever se este número é ou não palíndromo
*/

#include <stdio.h>

int main(void) {

    int value, primeiroDigito, segundoDigito, terceiroDigito, quartoDigito;

    printf("Informe um numero inteiro de ate 4 digitos: ");
    scanf("%d", &value);

    primeiroDigito = value / 1000;
    segundoDigito = value / 100 % 10;
    terceiroDigito = value / 10 % 10;
    quartoDigito = value % 10;

    if (primeiroDigito == quartoDigito && segundoDigito == terceiroDigito) {
        return printf("Sao palindromos");
    }

    return printf("Nao sao palindromos");
}