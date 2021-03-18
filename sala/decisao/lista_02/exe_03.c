/*
3) Ler três valores inteiros diferentes e colocá-los em ordem crescente. Os valores devem ser apresentados
com uma instrução:
printf("Menor: %d Meio: %d Maior: %d\n", menor, meio, maior);
Sugestão: Dividir o problema em partes: encontrar o maior, o menor e o do meio separadamente. Armazenar
os valores em variável e mostrá-los com uma única instrução.
*/

#include <stdio.h>

int main(void) {

    int primeiroValor, segundoValor, terceiroValor, menorValor, valorMeio, maiorValor;

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

    if ((primeiroValor > segundoValor && primeiroValor < terceiroValor) || (primeiroValor < segundoValor && primeiroValor > terceiroValor)) {
        valorMeio = primeiroValor;
    }

    if ((segundoValor > primeiroValor && segundoValor < terceiroValor) || (segundoValor < primeiroValor && segundoValor > terceiroValor)) {
        valorMeio = segundoValor;
    }

    if ((terceiroValor > segundoValor && terceiroValor < primeiroValor) || (terceiroValor < segundoValor && terceiroValor > primeiroValor)) {
        valorMeio = terceiroValor;
    }

    if (primeiroValor > segundoValor && primeiroValor > terceiroValor) {
        maiorValor = primeiroValor;
    }

    if (segundoValor > primeiroValor && segundoValor > terceiroValor) {
        maiorValor = segundoValor;
    } 

    if (terceiroValor > primeiroValor && terceiroValor > segundoValor) {
        maiorValor = terceiroValor;
    } 

    return printf("Menor = %d \nMeio = %d \nMaior = %d", menorValor, valorMeio, maiorValor);
}