// 3) Qual o objetivo do programa representado no código a seguir.
// Solicita um número de 1 a 50 com validação para que a entrada esteja dentro deste limite
// Mostra de 2 em 2 a partir do número digitado até 50
#include <stdio.h>
int main(void)
{
    int num, i;
    do
    {
        printf("Informe um numero entre 1 e 50: ");
        scanf("%d", &num);
        if (num < 1 || num > 50)
        {
            printf("Valor informado fora da faixa.\n");
        }
    } while (num < 1 || num > 50);
    for (i = num; i <= 50; i = i + 2)
    {
        printf("\n%d\t", i);
    }
    return 0;
}