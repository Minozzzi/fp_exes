// 5) Ler caracteres informados pelo usuário. Parar a leitura quando o usuário informar o caractere '0'. Contar quantas vezes foi
// informado o caractere 'A'.

#include <stdio.h>
#include <locale.h>

int main(void) {

    char a = ' ';
    int cont = 0;

    do {
        printf("Informe um caractere: ");
        scanf("%c", &a);

        if (a == 'A') {
            cont++;
        }
    } while (a != '0');

    printf("\n\n%d vezes informado o caractere A", cont);
}