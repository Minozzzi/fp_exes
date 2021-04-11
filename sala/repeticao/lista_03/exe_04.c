// 4) Leia dois valores que representam os limites de um intervalo. O usuário pode informar os valores em
// ordem crescente ou decrescente. Validar para que o programa não aceite valores iguais para os limites do
// intervalo. Mostre os divisíveis por x e não divisíveis por y nesse intervalo. x e y são variáveis informadas pelo
// usuário.

#include <stdio.h>
#include <locale.h>

int main(void) {

    int limInf = 0, limSup = 0, x = 0, y = 0;

    
    do {
        printf("Informe um limite inferior de um intervalo e um superior respectivamente: ");
        scanf("%d %d", &limInf, &limSup);

        if (limInf == limSup) {
            printf("\nInforme valores diferentes para os limites\n\n");
        }
    } while (limInf == limSup);

    printf("Informe o valor de x e y: ");
    scanf("%d %d", &x, &y);

    if (limInf < limSup) {
        while (limInf <= limSup) {
            if (limInf % x == 0 && limInf % y != 0) {
                printf("%d\t", limInf);
            }
            limInf++;
        }   
    } else {
        while (limInf >= limSup) {
            if (limInf % x == 0 && limInf % y != 0) {
                printf("%d\t", limInf);
            }
            limInf--;
        }
    }
}