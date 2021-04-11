// 10) Escreva um algoritmo que gere a série de Fibonacci até o termo n que é informado pelo usuário. A série
// de Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... , etc.

#include <stdio.h>

int main(void) {

    int value = 0, cont = 0, a = 0, b = 1, aux = 0;

    printf("Quantos termos mostrar ? ");
    scanf("%d", &value);

    for (cont; cont <= value; cont++) {
        printf("%d\t", b);
        aux = a + b; 
	    a = b; 
	    b = aux; 
    }

}