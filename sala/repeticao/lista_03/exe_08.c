// 8) Apresente os números pares entre 100 e 200. Contar quantos são ímpares e não divisíveis por 3 nesse
// intervalo. Faça a média dos valores pares e divisíveis por 5 do intervalo.

#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");

    int i = 100, contImpar = 0, contPar = 0, soma = 0;

    while (i <= 200) {
        if (i % 2 == 0) {
            printf("%d\t", i);
        }

        if ((i % 2 != 0) && (i % 3 != 0)){
            contImpar++;
        }

        if ((i % 2 == 0) && (i % 5 == 0)){
            contPar++;  
            soma += i;
        }
        i++;
    }
    printf("\n\nQuantidade de ímpares não divisíveis por 3 = %d\nMédia de pares e divisíveis por 5 = %d", contImpar, soma/contPar);
}