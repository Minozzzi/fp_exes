// 5) Copiar todas as funções criadas nos exercícios anteriores para dentro de uma biblioteca chamada
// "diversos.h". Fazer um programa que use essa biblioteca e tenha o seguinte menu de opções (use switchcase):
// 1 - Calcula o quadrado de um numero
// 2 - Converte centímetros para polegadas
// 3 - Converte um valor para dólar ou real
// 4 - Multiplica dois números
// Opção:

#include <stdio_ext.h>
#include <ctype.h>
#include "diversos.h"

int main() {
    char opt = ' ';

    do {
        int v1 = 0, v2 = 0, operacao = 0;
        float v4 = 0, v5 = 0;
        char tipo = ' ';

        printf("1 - Calcula o quadrado de um numero\n2 - Converte centimetros para polegadas\n3 - Converte um valor para dolar ou real\n4 - Multiplica dois numeros");
        printf("\nOpcao: ");
        scanf("%d", &operacao);


        switch(operacao){
            case 1:
                printf("\nInforme um numero: ");
                scanf("%d", &v1);
                __fpurge(stdin);
                printf("Quadrado do %d = %d\n\n", v1, quadrado(v1));
                break;
            case 2:
                printf("\nInforme uma medida em cm: ");
                scanf("%f", &v4);
                __fpurge(stdin);
                printf("Equivalente em polegadas %.2f\n\n", convertToInches(v4));
                break;
            case 3:
                printf("\nInforme um valor para conversao e a cotacao: ");
                scanf("%f %f", &v4, &v5);
                __fpurge(stdin);
                printf("Informe o tipo de conversao (D - Dolar e R - Real): ");
                scanf("%c", &tipo);
                __fpurge(stdin);
                printf("O valor obtiodo = %.2f\n", moneyConvert(v4, v5, tipo));
                break;
            case 4:
                printf("\nInforme dois numeros: ");
                scanf("%d %d", &v1, &v2);
                __fpurge(stdin);
                printf("%d * %d = %d", v1, v2, multiply(v1, v2));
                break;
            default:
                printf("\nOperacao invalida");
                break;

        }

        printf("\n\nDeseja repetir ? ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while(toupper(opt) == 'S');
}