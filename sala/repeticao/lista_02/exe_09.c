// 9) Ler números inteiros informados pelo usuário até ser informado um valor negativo. Dentre os números
// informados, exceto o valor negativo que é a condição de saída:
// a) Contar a quantidade de números menores que 10 ou maiores que 100.
// b) Contar a quantidade de números ímpares.
// c) Contar a quantidade de números divisíveis por 10.
// d) Contar a quantidade de números entre 10 e 100.
// e) Contar quantas vezes é informado o número 30.
// f) Contar quantas vezes é informado um número diferente de 10, de 20 e de 30.

#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");

    int value, contMenor10Maior100 = 0, contImpar = 0, contDiv10 = 0, contEntre10E100 = 0, contQtd30 = 0, contDiferente10E20E30 = 0;

    do {

        printf("Informe um numero inteiro: ");
        scanf("%d", &value);

        if (value >= 0) {
            if (value < 10 || value > 100) {
                contMenor10Maior100++;
            }
            if (value % 2 == 1) {
                contImpar++;
            }
            if (value % 10 == 0) {
                contDiv10++;
            }
            if (value >= 10 && value <= 100) {
                contEntre10E100++;
            }
            if (value == 30) {
                contQtd30++;
            }
            if (value != 10 && value != 20 && value != 30) {
                contDiferente10E20E30++;
            }
        } else {
            printf("\nSaída do programa\n");
        }
    } while (value >= 0);
    printf("\nMenor que 10 ou maior que 100 = %d", contMenor10Maior100);
    printf("\nÍmpares = %d", contImpar);
    printf("\nDivisível por 10 = %d", contDiv10);
    printf("\nEntre 10 e 100 = %d", contEntre10E100);
    printf("\nQuantidade do número 30 = %d", contQtd30);
    printf("\nQuantidade diferente de 10, 20 e 30 = %d", contDiferente10E20E30);
}