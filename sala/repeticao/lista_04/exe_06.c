// 6) Ler caracteres e parar quando o usuário informar o caractere '0'. Utilizando a tabela ASCII contar quantos caracteres são letras
// maiúsculas, quantos são letras minúsculas e quantos caracteres não são letras. Sugestão: utilizar o código numérico para comparar
// (A equivale a 65, B a 66...).

#include <stdio.h>
#include <locale.h>
#include <stdio_ext.h>

int main(void) {

    char a = ' ';
    int contMaisc = 0, contMinusc = 0, contNaoLetra = 0;

    do {
        printf("Informe um caractere qualquer: ");
        scanf("%c", &a);
        __fpurge(stdin);

        if (((int)a >= 97) && ((int)a <= 122)) {
            contMinusc++;
        } else if (((int)a >= 65) && ((int)a <= 90)) {
            contMaisc++;
        } else {
            contNaoLetra++;
        }
    } while (a != '0');

    printf("\n\n%d maiúsculas\n%d minúsculas\n%d não são letras", contMaisc, contMinusc, contNaoLetra);
}