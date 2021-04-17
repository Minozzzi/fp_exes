// 4) Ler um número positivo e maior que zero (validar a entrada). Esse número indica a quantidade de valores
// divisíveis por 5 que devem ser mostrados. Apresentar n valores por linha. n é informado pelo usuário e deve
// ser maior que zero. Validar a entrada.

#include <stdio.h>

int main(void) {

    int num = 0, linha = 0, cont = 0, i = 0, contLinha = 0;

    do {
        printf("Informe um numero positivo: ");
        scanf("%d", &num);
    } while (num <= 0);

    do {
        printf("Informe um numero positivo para representar a quantidade de numero por linha: ");
        scanf("%d", &linha);
    } while (linha <= 0);

    while (cont < num) {
        if (i % 5 == 0) {
            cont++;
            contLinha++;
            printf("%d\t", i);
        }

        if (linha == contLinha){
            printf("\n");
            contLinha = 0;
        }
        i++;
    }    

}