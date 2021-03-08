// 11) O que faz o algoritmo a seguir representado em fluxograma? Implemente-o utilizando a linguagem C.

#include <stdio.h>

int main(void)
{
    float salarioAtual, reajuste;

    printf("Informe o salario atual: R$");
    scanf("%f", &salarioAtual);

    printf("Informe o percentual de reajuste: ");
    scanf("%f", &reajuste);

    printf("\nSeu salario reajustado seria de %.2f R$", (salarioAtual * (reajuste /100)) + salarioAtual);
}