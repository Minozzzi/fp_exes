// 3) Completar e corrigir o código a seguir para:
// a) Ler a quantidade somente se a categoria é válida.
// b) Garantir que a quantidade seja maior que 0.
// c) Validar para que não seja realizada uma divisão por zero no cálculo da média.
// d) Permitir a leitura da categoria nas execuções sucessivas do programa.
// e) Garantir que a média seja float.

#include <stdio_ext.h>
#include <ctype.h>

int main(void)
{
    char opt = ' ';
    do {
        char categoria = ' ';
        int quantidade = 0, soma = 0, cont = 0;
        float media = 0;
        do {
            printf("Informe a categoria <somente A ou B>: ");
            scanf("%c", &categoria);
            __fpurge(stdin);
            if (toupper(categoria) == 'A' || toupper(categoria) == 'B') {
                do {
                    printf("Informe a quantidade maior que zero: ");
                    scanf("%d", &quantidade);
                    __fpurge(stdin);

                } while (quantidade <= 0);

                soma += quantidade;
                cont++;
                media = cont > 0 ? (float)soma / cont : 0;

            }
        } while (toupper(categoria) == 'A' || toupper(categoria) == 'B');

        printf("\nA media dos produtos eh %.2f", media);
        printf("\n\nDeseja repetir ? ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');
    return 0;
}