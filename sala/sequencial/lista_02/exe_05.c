/*
5) Escreva um programa para ler o número de votos brancos, nulos (incluem eleitores ausentes) e válidos de
uma eleição. Calcular e mostrar o percentual que cada um (brancos, nulos e válidos) representa em relação
ao total de eleitores. Lembrar que os valores dos percentuais podem não ser inteiros.
*/

#include <stdio.h>

int main(void)
{
    int votosBrancos, votosNulos, votosValidos;
    float result;

    printf("Informe o numero de votos validos: ");
    scanf("%d", &votosValidos);

    printf("Informe o numero de votos em branco: ");
    scanf("%d", &votosBrancos);

    printf("Informe o numero de votos nulos: ");
    scanf("%d", &votosNulos);

    result = ((float)votosValidos/((float)votosValidos + (float)votosBrancos + (float)votosNulos))*100;
    printf("\nNumero dos votos validos %.1f por cento", result);

    result = ((float)votosBrancos/((float)votosValidos + (float)votosBrancos + (float)votosNulos))*100;
    printf("\nNumero dos votos em branco %.1f por cento", result);

    result = ((float)votosNulos/((float)votosValidos + (float)votosBrancos + (float)votosNulos))*100;
    printf("\nNumero dos votos em branco %.1f por cento", result);
}