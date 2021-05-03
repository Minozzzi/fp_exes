// 1) Use a biblioteca "fatorial.h" (criada no Exercício 3 da Lista 1) para:
// a) Calcular e mostrar o fatorial de um número informado pelo usuário.
// b) Calcular e mostrar o fatorial dos números de 1 a 12.

#include <stdio_ext.h>
#include <ctype.h>
#include "../lista_01/exe_03/fatorial.h"

int main() {

    char opt = ' ';

    do {
        int value = 0;
        
        printf("Informe um numero: ");
        scanf("%d", &value);
        __fpurge(stdin);
        fatorialOf(value);

        printf("\n=== Fatorial de 1 a 12 ===");
        fatorialOneToTwelve();        
                
        
        printf("\n\nDeseja fazer outra operacao (S ou s para sim) ? ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while(toupper(opt) == 'S');
}