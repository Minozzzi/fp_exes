// 4) Fazer uma função que apresenta o resultado da multiplicação de dois números. Usar essa função para:
// a) Apresentar a multiplicação de dois números informados pelo usuário.
// b) Apresentar a tabuada (0 a 10) de um número informado pelo usuário

#include <stdio_ext.h>
#include <ctype.h>


int multiply(int v1, int v2) {
    return v1 * v2;
}

int main() {
    char opt = ' ';

    do {
        int v1 = 0, v2 = 0, v3 = 0;
        printf("Informe dois numeros: ");
        scanf("%d %d", &v1, &v2);
        __fpurge(stdin);
        printf("%d * %d = %d\n\n", v1, v2, multiply(v1, v2));


        printf("Informe um numero: ");
        scanf("%d", &v3);
        __fpurge(stdin);

        for (int i = 0; i <= 10; i++) {
            printf("%d * %d = %d\n", v3, i, multiply(v3, i));
        }

        printf("\n\nDeseja repetir ? ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while(toupper(opt) == 'S');
}