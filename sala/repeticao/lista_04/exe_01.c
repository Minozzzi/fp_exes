// 1) Uma árvore A tem 1,50 metros e cresce 2 centímetros por ano, enquanto uma árvore B tem 1,10 metros e cresce 3 centímetros
// por ano. Construa um programa que calcule e imprima quantos anos serão necessários para que a árvore B seja maior que a
// árvore A.

#include <stdio.h>

int main(void) {

    float a = 1.50, b = 1.10;
    int anos = 0;


    while (b <= a) {
        anos++;
        a += 0.02;
        b += 0.03;
    }

    printf("%d anos para b maior que a", anos);
}