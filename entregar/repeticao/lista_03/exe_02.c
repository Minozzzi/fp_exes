// 2) Uma empresa deseja calcular a depreciação de seus bens. Para tanto, desenvolver um programa que
// obtenha a taxa de depreciação anual para os bens, o valor do bem a ser depreciado e o período em anos.
// Valor depreciado = valor do bem * (taxa de depreciação / 100)
// Valor do bem depreciado = valor do bem – valor depreciado
#include <stdio_ext.h>
#include <ctype.h>

int main(void) {
    float taxaDepr = 0, valorDepr = 0, bemValor = 0, total = 0;
    int anos = 0;

    printf("informe o valor da taxa de depreciacao anual: ");
    scanf("%f", &taxaDepr);
    printf("informe o valor do bem a ser depreciado: ");
    scanf("%f", &bemValor);
    printf("informe o periodo da depreciacao em anos: ");
    scanf("%d", &anos);

    printf("\nAno\tValor do Bem\tDepreciacao\tValor Depreciado\n");

    for (int i = 1; i <= anos; i++) {
        total += bemValor * (taxaDepr/ 100);
        printf("%d\t %.2f\t %.2f\t\t %.2f\n", i, bemValor, bemValor * (taxaDepr/ 100), bemValor - ((taxaDepr/ 100) * bemValor));
        bemValor -= (taxaDepr/ 100) * bemValor;
    }

    printf("\nO valor total da depreciaçao eh: %.2f", (float)total);
}