// 2) Criar função para:
// a) Receber, por parâmetro, um número inteiro e positivo e retornar a quantidade de divisores que esse
// número possui.
// b) Mostrar os divisores de um número. Essa função recebe como parâmetro o número e mostra os divisores
// de 1 até o número passado como parâmetro da função.
// c) Receber, por parâmetro, um número positivo e retornar a soma dos divisores que esse número possui.
// d) Receber, por parâmetro, dois números e retornar o Máximo Divisor Comum dos dois números.
// Salvar todas as funções dentro de uma biblioteca chamada divisores.h. Use a biblioteca "divisores.h" em um
// programa para gerar o seguinte menu:
// 1 - Quantidade de divisores de um número
// 2 - Divisores de um número
// 3 - Divisores, quantidade e soma de um intervalo
// 4 - Maximo Divisor Comum de dois números
// Opção:

#include <stdio_ext.h>
#include <ctype.h>

int divs(int value) {
    int contDivs = 0;

    for (int i = 0; i <= value; i++) {
        if (value % i == 0) {
            contDivs++;
        }
    }

    return contDivs;
}

int divsUntil(int value) {
    for (int i = 0; i <= value; i++) {
        if (value % i == 0) {
            printf("%d\t", i);
        }
    }
}

int sumOfDividers(int value) {
    int soma = 0;

    for (int i = 0; i <= value; i++) {
        if (value % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int maxDivider(int n1, int n2) {
    int max = 1;

    if (n1 > n2) {
        int aux = n1;
        n2 = n1;
        n1 = aux;
    }

    for (int i = 1; i <= n2; i++) {
        if ((n1 % i == 0) && (n2 % i == 0) && (i > max)) {
            max = i;
        }
    }

    return max;
}

int main() {
    char opt = ' ';

    do {
        int operacao = 0, value = 0, limInf = 0, limSup = 0;

        printf("Informe qual operacao deseja fazer\n");
        printf("1 - Quantidade de divisores de um numero\n2 - Divisores de um numero\n3 - Divisores, quantidade e soma de um intervalo\n4 - Maximo Divisor Comum de dois numeros");
        printf("\nOpcao: ");
        scanf("%d", &operacao);
        __fpurge(stdin);

        switch (toupper(operacao)){
            case 1:
                printf("Informe um numero para mostrar a quantidade de divisores: ");
                scanf("%d", &value);
                printf("\nQuantidade de divisores: %d", divs(value));
                break;
            case 2:
                printf("Informe um numero para mostrar seus divisores: ");
                scanf("%d", &value);
                divsUntil(value);
                break;
            case 3:
                printf("Informe o limite inferior e superior");
                scanf("%d %d", &limInf, &limSup);
                __fpurge(stdin);
                break;
            case 4:
                break;
            default:
                printf("\nOpcao invalida");
                break;
        }

        printf("\nDeseja fazer outra operação ? (S ou s para sim) ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');
}