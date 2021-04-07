// 4) Elaborar um programa que permita ao usuário fornecer 30 números quaisquer e apresente:
// a) A soma dos 10 primeiros números.
// b) A soma do 11º número até o 20º número.
// c) A soma do 21º número até o 30º número.
// d) A soma de todos os números.

#include <stdio.h> 
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");
    int i = 1, contPos = 1;
    float value, soma10Primeiros = 0, soma11Ate20 = 0, soma21Ate30 = 0, somaGeral = 0;

    for (i; i <= 30; i++) {
        
        printf("Informe um número qualquer: ");
        scanf("%f", &value);

        if (contPos >= 1 && contPos <= 10) {
            soma10Primeiros += value;
        } else if (contPos >= 11 && contPos <= 20) {
            soma11Ate20 += value;
        } else if (contPos >= 21 && contPos <= 30) {
            soma21Ate30 += value;
        }
        somaGeral += value;

        contPos++;
    }

    printf("\nSoma dos 10 primeiros números: %.2f", soma10Primeiros);
    printf("\nSoma do 11 até o 20 número: %.2f", soma11Ate20);
    printf("\nSoma do 21 até o 30 número: %.2f", soma21Ate30);
    printf("\nSoma de todos números: %.2f", somaGeral);
}