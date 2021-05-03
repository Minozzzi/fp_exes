// 2) Sabendo-se que 1cm = 0,393701 polegadas, fazer uma função que converte de centímetros para
// polegadas. Usar essa função para:
// a) Mostrar o valor em polegadas de um determinado valor informado pelo usuário.
// b) Imprimir uma tabela de conversão de centímetros para polegadas entre 1 a 20.

#include <stdio_ext.h>
#include <ctype.h>

float convertToInches(float value) {
    float anInche = 0.393701;

    return anInche * value;  
}

int main() {

    char opt = ' ';

    do {
        float value = 0;

        printf("Informe uma medida em cm: ");
        scanf("%f", &value);
        __fpurge(stdin);
        printf("Equivalente em polegadas %.2f\n\n", convertToInches(value));

        printf("=== Tabela de conversao ===\nCentimetros\tPolegadas");
        for (int i = 1; i <= 20; i++) {
            printf("\n%d\t\t%.2f", i, convertToInches(i));
        }

        printf("\n\nDeseja repetir ? ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while(toupper(opt) == 'S');
}