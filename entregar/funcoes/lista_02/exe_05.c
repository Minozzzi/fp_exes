// 5) Elaborar uma função que recebe o número de linhas, o número de colunas, um determinado caractere e
// desenha um quadrado ou retângulo na tela utilizando o caractere.
#include <stdio_ext.h>
#include <ctype.h>

void show(int linhas, int colunas, char simbolo) {
    for (int i = 1; i <= linhas; i++) {
        for (int j = 1; j <= colunas; j++) {
            printf("%c", simbolo);
        }
        printf("\n");
    }
}

int main() {
    char opt = ' ';

    do {
        int linhas = 0, colunas = 0;
        char simbolo = ' ';

        printf("Digite o numero de linhas, colunas e um caractere: ");
        scanf("%d %d %c", &linhas, &colunas, &simbolo);
        __fpurge(stdin);
        show(linhas, colunas, simbolo);

        printf("\n\nDeseja repetir (S ou s para sim) ? ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while(toupper(opt) == 'S');
}