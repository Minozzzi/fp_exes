/*
1) Ler três valores inteiros diferentes, encontrar e mostrar o menor deles. Deve ser criada uma variável para
armazenar o menor número.
*/

#include <stdio.h>

int main(void) {

    int primeiroValor, segundoValor, terceiroValor, menorValor;

    printf("Informe tres numeros inteiros diferentes: ");
    scanf("%d %d %d", &primeiroValor, &segundoValor, &terceiroValor);

    if (primeiroValor < segundoValor && primeiroValor < terceiroValor) {
        menorValor = primeiroValor;
    }

    if (segundoValor < primeiroValor && segundoValor < terceiroValor) {
        menorValor = segundoValor;
    } 

    if (terceiroValor < primeiroValor && terceiroValor < segundoValor) {
        menorValor = terceiroValor;
    } 

    return printf("Menor valor = %d", menorValor);
}