// 7) Leia 10 números e desses contar quantos são pares, quantos são ímpares e quantos são divisíveis por 7.
// Apresente essas quantidades

#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");

    int value = 0, i = 1, contPar = 0, contImpar = 0, contDiv7 = 0;

    while (i <= 10) {
        printf("Informe um número: ");
        scanf("%d", &value);

        if (value % 2 == 0) {
            contPar++;
        } else if (value % 2 != 0) {
            contImpar++;
        } 
        if (value % 7 == 0) {
            contDiv7++;
        }

        i++;
    }   
    printf("\n\n%d pare(s)\n%d ímpares\n%d divisíveis por 7", contPar, contImpar, contDiv7);
}