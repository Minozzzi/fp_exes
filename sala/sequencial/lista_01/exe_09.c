/*
9) Leia dois valores A e B e efetue a troca do conteúdo das duas variáveis lidas, de forma que a variável A
passe a ter o valor de B e a variável B o valor de A. Mostre o conteúdo das variáveis antes e depois da troca.
*/

#include <stdio.h>

int main(void)
{
    float a, b, aux;

    printf("Informe o primeiro valor: ");
    scanf("%f", &a);

    printf("Informe o segundo valor: ");
    scanf("%f", &b);

    printf("\nPrimeiro valor antes da troca %.2f", a);
    printf("\nSegundo valor antes da troca %.2f", b);

    aux = a;
    a = b;
    b = aux;

    printf("\nPrimeiro valor depois da troca %.2f", a);
    printf("\nSegundo valor depois da troca %.2f", b);
}