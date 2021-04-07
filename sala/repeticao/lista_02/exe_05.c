// 5) O que faz o algoritmo a seguir?
// declare valor, maior como inteiro
// leia valor
// maior ← valor
// para j = 0 até j < 4 passo 1
// leia valor
// se valor > maior então
// maior ← valor
// fim-se
// fim-para
// escreva maior
// Implemente o algoritmo utilizando a linguagem C.
// Responda: Como alterar o algoritmo para não ser necessário fazer uma leitura do valor antes da estrutura
// for?

#include <stdio.h>

int main(void) {

    //inicialmente declara a variável valor e maior como inteiro, le um valor na variavel valor, a variavel maior recebe o valor da variavel valor
    //faz um loop iniciando em 0 ate menor que 4 incrementando de 1 em 1
    //le um valor na variavel valor para cada execução do loop
    //se o valor foir maior que a variavel maior entao a variavel maior recebe o valor da variavel valor
    //termina a condicional
    //termina o loop
    //escreve a variavel maior

    //pode atribuir valor inicial nas variaveis no valor atribuir 1 e no maior 0;

    int valor = 1, maior = 0;

    for (int j = 0; j < 4; j++) {
        printf("Informe um valor: ");
        scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
        }
    }

    printf("\n\nMaior = %d", maior);
}