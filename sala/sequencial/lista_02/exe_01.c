/*
1) Ler dois números float e apresentar, sem utilizar funções matemáticas prontas:
a) A divisão do primeiro número pelo segundo, armazenando somente a parte inteira do número.
b) A soma dos dois números com o resultado arredondado para o próximo número inteiro.
Obs.: As variáveis de resultados devem ser do tipo int.
*/

#include <stdio.h>

int main(void)
{
    float v1, v2;
    int result;

    printf("Informe um valor float: ");
    scanf("%f", &v1);

    printf("Informe outro valor float: ");
    scanf("%f", &v2);

    result = v1/v2;
    printf("%.2f / %.2f = %d", v1, v2, result);

    result = (v1+ v2) + 0.999999;
    printf("\n%.2f + %.2f = %d", v1, v2, result);
}