// 1) Fazer uma função para calcular o quadrado de um número. Usar essa função para:
// a) Mostrar o quadrado de um número informado pelo usuário.
// b) Apresentar o quadrado entre dois valores (limites de um intervalo) informado pelo usuário. Os valores para
// os limites devem estar 1 e 100:

#include <stdio_ext.h>
#include <ctype.h>

int quadrado(int value) {
    return value * value;
}

int main() {

    char opt = ' ';

    do {
        int value = 0, limInf = 0, limSup = 0;

        printf("Informe um numero para ver o quadrado dele: ");
        scanf("%d", &value);
        __fpurge(stdin);
        printf("Quadrado do %d = %d\n\n", value, quadrado(value));

        do {
            printf("Informe um numero para o quadrado dos numeros de um limite inferior e superior: ");
            scanf("%d %d", &limInf, &limSup);
            __fpurge(stdin);
            if (limInf > limSup) {
                int aux = limInf;
                limInf = limSup;
                limSup = aux;
            }
            if (limInf < 1 || limSup > 100) {
                printf("O intervalo deve ser entre 1 e 100\n");
            }
        } while (limInf < 1 || limSup > 100);


        for (limInf; limInf <= limSup; limInf++) {
            printf("\n%d ^ 2 = %d", limInf, quadrado(limInf));
        }

        printf("\n\nDeseja repetir ? ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while(toupper(opt) == 'S');
}