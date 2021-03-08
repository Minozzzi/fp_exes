// 8) Faça um algoritmo que calcule e mostre a tabuada de 0 a 10 de um número inteiro digitado pelo usuário.

#include <stdio.h>

int main(void)
{
    int value, init;

    printf("Por favor digite um numero inteiro: ");
    scanf("%d", &value);

    for (init = 0; init <= 10; init++) 
    {
        printf("\n%d * %d = %d", value, init, value*init);
    }
}
