// 7) O que faz o algoritmo a seguir?
// declare i, s como inteiro
// s ← 0
// repetir i = 0 até i < 10 passo 1
// s ← s + i
// fim-repetir
// escreva s
// Implemente o algoritmo utilizando a linguagem C.
// Responda: Por que a variável s foi inicializada com 0?

#include <stdio.h>

int main(void) {
    //declara i e s como inteiro, s recebe 0, i recebe 0 e repete de i ate menor que 10 incrementando 1 no i
    //s recebe s + i
    //fim do loop
    //escreve o valor de s

    //ela foi inicializada com valor 0 para não pegar lixo de memoria e fazer o calculo que ta dentro do loop errado

    int i = 0, s = 0;

    do {
        s += i;
        i++;
    } while (i < 10);
    printf("%d", s);
}