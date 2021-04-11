// 3) Ler números informados pelo usuário. Parar a leitura quando informado um número negativo ou 0. Esse número não deve ser
// considerado na contagem. Contar e mostrar quantos números divisíveis por 5 e pares foram informados.

#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");
    int value = 0, cont = 0;

    do {
        printf("Informe um número: ");
        scanf("%d", &value);

        if ((value != 0) && (value % 2 == 0) && (value % 5 == 0)){
            cont++;
        }
    } while (value > 0);

    printf("%d número(s) pares e divisíveis por 5", cont);
}