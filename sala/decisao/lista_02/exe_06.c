/*
6) Ler três valores inteiros que representam os lados de um triângulo e determinar se esses valores podem
formar um triângulo (obs.: para ser um triângulo cada lado deve ser menor que a soma dos outros dois lados).
Se for um triângulo, determinar o seu tipo: equilátero (todos os lados iguais), isósceles (dois lados iguais) e
escaleno (todos os lados diferentes).
*/

#include <stdio.h>

int main(void) {

    int n1, n2, n3;
    
    printf("Informe os tres valores do lado do triangulo: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if ((n1 < n2 + n3) && (n2 < n1 + n3) && (n3 < n1 + n2)) {
        if ((n1 == n2) && (n1 == n3)) {
            return printf("\nSeu triangulo eh equilatero");        
        }

        if((n1==n2 && n1!=n3) || (n1==n3 && n1!=n2) || (n2==n3 && n2!=n1)) {
            return printf("\nSeu triangulo eh isoceles");        
        }

        if((n1!=n2 && n1!=n3) || (n1!=n3 && n1!=n2) || (n2!=n3 && n2!=n1)) {
            return printf("\nSeu triangulo eh escaleno");        
        }
    }

    return printf("\nEsses valores nao formam um triangulo");
}