// 8) O que faz o algoritmo a seguir?
// declare i, s como inteiro
// s ← 1
// repetir i = 0 até i < 5 passo 1
// s ← s * i
// fim-repetir
// escreva s
// Implemente o algoritmo utilizando a linguagem C.
// Responda:
// a) Por que a variável s foi inicializada com 1?
// b) Qual o problema observado neste algoritmo?
// c) Qual seria a solução correta?

#include <stdio.h>

int main(void) {

    //declara i e s como inteiro, s recebe 1, i recebe 0 e repete de i ate menor que 5 incrementando de 1 em 1
    //s recebe s vezes i
    //termina o loop
    //escreve o valor de s

    //foi inicializado em 1 para nao deixar toda multiplicação zero, mas como i vai ser iniciado em 0 sera feito na primeira repetição 0 * 1
    //não resolvendo o problema 
    //deveria iniciar o i em 1

    int i = 0, s = 1;

    do {
        s *= i;
        i++;
    } while (i < 5);
    
    printf("%d", s);
}