/*
10) Resolva as seguintes expressões matemáticas. X e Y são valores fornecidos pelo usuário. Calcule e
mostre o resultado de cada expressão. Reutilize variáveis, ou seja, terá apenas uma variável para armazenar
os resultados do tipo int e outra para armazenar o resultado do tipo float. Faz a primeira operação e já
imprime o resultado e assim para todas as demais operações. Atenção para os resultados que podem ser
valores float e para a prioridade dos operadores. Primeiro deve-se linearizar as expressões e depois
implementar o algoritmo para calcular os resultados.
*/

#include <stdio.h>

int main(void) 
{
    float x, y, resultFloat;
    int resultInt;

    printf("Informe o valor de x: ");
    scanf("%f", &x);

    printf("Informe o valor de y: ");
    scanf("%f", &y);

    resultFloat = ((x + y)/y) * (x * x);
    printf("a) %.2f", resultFloat);

    resultFloat = (x + y) / (x - y);
    printf("\nb) %.2f", resultFloat);

    resultFloat = ((x * x) + (y * y * y)) / 2;
    printf("\nc) %.2f", resultFloat);

    resultFloat = (x * x * x) / (x * x);
    printf("\nd) %.2f", resultFloat);

    resultInt = (int)x % (int)y;
    printf("\ne1) %d", resultInt);

    resultInt = (int)x % 3;
    printf("\ne2) %d", resultInt);

    resultInt = (int)y % 5;
    printf("\ne3) %d", resultInt);
}