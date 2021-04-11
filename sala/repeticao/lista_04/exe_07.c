// 7) Imprimir os números de 100 a 0 (nessa ordem) utilizando a estrutura while. Calcular e mostrar a média aritmética dos números.

#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");
    int i = 100, cont = 0, soma = 0;

    while (i >= 0) {
        cont++;
        soma += i;
        i--;
    }

    printf("Média = %d", soma/cont);
}