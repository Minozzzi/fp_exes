/*
2) Ler três valores inteiros diferentes, encontrar e mostrar o número do meio. Deve ser criada uma variável
para armazenar o número do meio.
Exemplo: Seja num1 = 5, num2 = 8 e num3 = 1, então o número do meio é 5.
*/

#include <stdio.h>

int main(void) {

    int primeiroValor, segundoValor, terceiroValor, valorMeio;

    printf("Informe tres numeros inteiros diferentes: ");
    scanf("%d %d %d", &primeiroValor, &segundoValor, &terceiroValor);

    if ((primeiroValor > segundoValor && primeiroValor < terceiroValor) || (primeiroValor < segundoValor && primeiroValor > terceiroValor)) {
        valorMeio = primeiroValor;
    }

    if ((segundoValor > primeiroValor && segundoValor < terceiroValor) || (segundoValor < primeiroValor && segundoValor > terceiroValor)) {
        valorMeio = segundoValor;
    }

    if ((terceiroValor > segundoValor && terceiroValor < primeiroValor) || (terceiroValor < segundoValor && terceiroValor > primeiroValor)) {
        valorMeio = terceiroValor;
    }

    return printf("Valor do meio = %d", valorMeio);
}