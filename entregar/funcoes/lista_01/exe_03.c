// 3) Fazer uma função que converte de reais para dólares ou de dólares para reais. Essa função recebe como
// parâmetros: o valor a ser convertido, o valor da cotação, é se é para converter em dólares ou em reais. A
// função faz a conversão e retorna o valor convertido.
// Sugestão de cabeçalho da função:
// Usando essa função:
// a) Ler um determinado valor, o valor da cotação e o tipo de conversão e apresentar o valor obtido.
// b) Ler os valores que representam os limites de um intervalo, o valor da cotação e o tipo de conversão e
// apresentar a tabela de conversão resultante. Por exemplo, se a cotação do dólar for R$ 3,19

#include <stdio_ext.h>
#include <ctype.h>

float moneyConvert(float value, float cotacao, char tipo) {
    if (toupper(tipo) == 'D') {
        return value / cotacao;
    } else {
        return value * cotacao;
    }
}

int main() {
    char opt = ' ';

    do {
        float value = 0, cotacao = 0, valorMin = 0, valorMax = 0;
        char tipo = ' ';

        printf("Informe um valor para conversao e a cotacao: ");
        scanf("%f %f", &value, &cotacao);
        __fpurge(stdin);
        printf("Informe o tipo de conversao (D - Dolar e R - Real): ");
        scanf("%c", &tipo);
        __fpurge(stdin);
        printf("O valor obtiodo = %.2f\n", moneyConvert(value, cotacao, tipo));

        printf("\nInforme o valor do limite inferior e do superior: ");
        scanf("%f %f", &valorMin, &valorMax);
        __fpurge(stdin);
        printf("Informe o valor da cotacao e o tipo de conversao (D - Dolar e R - Real): ");
        scanf("%f %c", &cotacao, &tipo);
        __fpurge(stdin);
        if (valorMin > valorMax) {
            float aux = valorMin;
            valorMin = valorMax;
            valorMax = aux;
        }
        printf("\nDolares\tReais");
        for (valorMin; valorMin <= valorMax; valorMin++) {
            printf("\n%.2f\t\t%.2f", valorMin, moneyConvert(valorMin, cotacao, tipo));
        }

        printf("\n\nDeseja repetir ? ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while(toupper(opt) == 'S');
}