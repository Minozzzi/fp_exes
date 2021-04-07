// 6) O que faz o algoritmo a seguir?
// declare i como inteiro
// repetir i = 0 até i < 10 passo 2
// escreva “o valor i = “, i
// fim-repetir
// Implemente o algoritmo utilizando a linguagem C.

#include <stdio.h>

int main(void) {

    //declara a variavel i como inteiro, faz um loop de 0 ate menor que 10 incrementando 2
    //escreve o valor atual de i conforme o loop
    //termina o loop
    //termina o programa

    int i = 0;

    do {
        printf("\nO valor de i = %d", i);
        i += 2;
    } while (i < 10);
}