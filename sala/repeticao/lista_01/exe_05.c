// DO - WHILE e FOR
// 5) Ler um número maior que 2 e imprimir todos os pares entre 2 e o número lido. Imprimir a soma dos pares,
// o produto dos ímpares que são divisíveis por 9 e a média de todos os números do intervalo

#include <stdio.h>

int main(void) {

    int somaPar = 0, somaTodos=0, contImpar=0, produtoImpar = 1, value;

    do {
        printf("Informe um numero maior que 2: ");
        scanf("%d", &value);

        if (value <= 0)
        {
            printf("Valor invalido\n");
        }
    } while (value <= 0);


    for(int i = 2; i <= value; i+=1) {
        if (i % 2 == 0) {
            printf("%d\t", i);
            somaPar += i;
        } else {
            if (i % 9 == 0) {
                produtoImpar *= i;
                contImpar++;
            }
        }
        somaTodos += i;
    }

    printf("\n\nSoma dos pares: %d\n", somaPar);
    printf("Soma de todos: %d\n", somaTodos);
    if(contImpar > 0) {
        printf("Produto dos impares multiplos de 9: %d\n", produtoImpar);
    } else {
        printf("Nao existe nenhum numero impar multiplo de 9 no intervalo\n");
    }

    printf("Media de todos os numeros do intervalo: %.2f\n", somaTodos/(float)(value-1));

}