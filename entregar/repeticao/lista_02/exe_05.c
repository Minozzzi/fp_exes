// 5) Ler números inteiros. Prosseguir a leitura até ser informado o valor zero que não deve ser considerado nos
// cálculos. Informar:
// a) Quantos valores positivos foram informados.
// b) Quantos valores negativos e pares foram informados. Exemplo: Se a entrada for -1, -2, -3, deverá retornar
// 1, pois tem apenas um número negativo que é par.
// c) A média dos valores divisíveis por 3 informados. Usar a funcão fabs() para converter os valores negativos
// em positivos. Validar para não fazer divisão por zero no cálculo da média.

#include <stdio.h>
#include <math.h>

int main(void) {

    int num = 0, positv = 0, negativPar = 0, soma = 0, cont = 0;

    do {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if (num != 0){
            if (num > 0) {
                positv++;
            }
            if ((num < 0) && (num % 2 == 0)) {
                negativPar++;
            }
            if (num % 3 == 0) {
                soma += fabs(num);
                cont++;
            }
        }
    } while (num != 0);

    printf("\n\nPositivos = %d\nNegativos pares = %d\nMedia dos numeros divisiveis por 3 = %.2f", positv, negativPar, cont > 0 ? (float)soma/cont : 0);
}