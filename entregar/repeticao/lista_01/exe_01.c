// 1) Elaborar um programa para mostrar os números pares entre 20 e 100. Fazer a média dos valores desse
// intervalo que são divisíveis por 5.


#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");
    int i = 20, cont = 0, soma = 0;

    for(i; i <= 100; i += 2) {
        if (i % 5 == 0) {
            cont++;
            soma += i;
        }
        printf("%d\t", i);
    }
    
    printf("\n\nMédia dos valores divisíveis por 5 = %.2f", (float)soma/cont);
}