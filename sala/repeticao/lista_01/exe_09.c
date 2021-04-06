// DO - WHILE
// 9) Ler um número que indica a quantidade de ímpares iniciando em 1 que deve ser mostrada. O valor
// informado para a quantidade deve ser maior que 0. Validar a entrada.

#include <stdio.h>

int main(void) {

    int value = 0, numerosMostrados = 0, cont = 0;

    printf("Quantos numeros impares voce quer mostrar ? ");
    scanf("%d", &value);

    do {
        if (value <= 0) {             
            printf("O valor deve ser maior que zero. Informe novamente.\n");
            printf("Quantos numeros impares voce quer mostrar ? ");
            scanf("%d", &value);
        } else {
            cont += 1;

            if (cont % 2 == 1) {
                numerosMostrados++;
                printf("%d\n", cont);
            }
        }
    } while (numerosMostrados != value || value == 0);
}