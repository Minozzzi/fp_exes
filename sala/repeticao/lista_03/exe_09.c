// 9) Leia dois valores que representam os limites de um intervalo. O usuário pode informar os valores em
// ordem crescente ou decrescente. Para os limites do intervalo validar para que:
// 1) O programa não aceite valores iguais, ou seja, que o limite inferior seja igual ao superior e vice-versa;
// 2) Em cada limite não seja informado valor menor ou igual a zero.
// Apresente os valores separados por tabulação. Faça a média dos valores que são divisíveis por 11 e por 7,
// desse intervalo.

#include <stdio.h>
#include <locale.h>

int main(void) {

    int limInf = 0, limSup = 0, cont = 0, soma = 0;

    do {
        printf("Informe um limite inferior de um intervalo e um superior respectivamente: ");
        scanf("%d %d", &limInf, &limSup);

        if (limInf == limSup) {
            printf("\nInforme valores diferentes para os limites\n\n");
        }

        if (limInf <= 0 || limSup <= 0) {
            printf("\nInforme valores maiores de 0 para os limites\n\n");
        }
    } while ((limInf == limSup) || (limInf <= 0 || limSup <= 0));

    if (limInf < limSup) {
        while (limInf <= limSup) {
            if (limInf % 11 == 0 && limInf % 7 == 0) {
                cont++;
                soma += limInf;   
            }

            printf("%d\t", limInf);
            limInf++;
        }   
    } else {
        while (limInf >= limSup) {
            if (limInf % 11 == 0 && limInf % 7 == 0) {
                cont++;
                soma += limInf;   
            }

            printf("%d\t", limInf);
            limInf--;
        }
    }
    if (soma > 0 && cont > 0) {
        printf("\n\nMédia dos valores divisíveis por 7 e 11 do intervalo: %d", soma/cont);
    }
}