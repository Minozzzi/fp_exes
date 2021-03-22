/*
2) Ler dois valores numéricos e apresentar a diferença entre eles. A diferença sempre é positiva, portanto, o
menor é subtraído do maior não importando a ordem em que os números são informados.*/

#include <stdio.h>

int main(void) {

    float n1, n2, result;

    printf("Informe dois numeros para serem subtraidos: ");
    scanf("%f %f", &n1, &n2);

    result = n1 - n2;

    if (n1 < n2) {
        result = n2 - n1;
    }

    printf("Resultado = %.2f", result);
}