/*
8) Implemente um programa que adivinhe o "número mágico" entre 0 e 10. O programa deverá imprimir a mensagem
"Certo! %d é o número mágico" quando o jogador acerta o número mágico, a mensagem "Errado, muito alto", caso o
jogador tenha digitado um número maior que o número mágico e a mensagem "Errado, muito baixo", caso o jogador
tenha digitado um número menor que o número mágico. O número mágico é produzido usando o gerador de números
randômicos de C (função rand(), que exige o uso da biblioteca stdlib.h)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {

    int magicValue, tentativa;

    srand(time(NULL));

    magicValue = rand() % 11;
    printf("Certo, %d e o numero magico", magicValue);
    printf("Insira o valor da sua tentativa: ");
    scanf("%d", &tentativa);
    if (tentativa > magicValue ) {
        printf("Errado, muito alto");
    } else if (tentativa < magicValue ) {
        printf("Errado, muito baixo");
    } else {
        printf("Certo, %d e o numero magico", magicValue);
    }
}