// WHILE
// 7) Ler uma série de números indicados pelo usuário até ser informado o valor zero. Encontrar e mostrar o
// maior e o menor dos valores informados pelo usuário. O valor zero indica o final da leitura e não deve ser
// considerado

#include <stdio.h>

int main(void) {
    int value=1, maior=0, menor=0, primeiro=0;

    while (value != 0) {
        printf("Informe um valor inteiro: ");
        scanf("%d", &value);

        if (value != 0) {
            if (primeiro == 0) {
                maior = value;
                menor = value;
                primeiro = 1;
            } else {
                if (value > maior) {
                    maior = value;
                } else if (value < menor) {
                    menor = value;
                }
            }
        }
    }

    printf("\nMaior numero = %d\nMenor numero = %d", maior, menor);

}