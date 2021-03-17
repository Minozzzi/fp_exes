/*
6) Elaborar um programa que leia um valor que se refere à altura de uma pessoa e mostre uma mensagem
conforme a tabela a seguir. Utilizar variável do tipo float.
*/

#include <stdio.h>

int main(void) {
    
    float altura;

    printf("Informe a sua altura em metros: ");
    scanf("%f", &altura);

    if (altura < 1.5) {
        printf("Altura abaixo de um metro e cinquenta centimetros");
    } else if ( altura > 1.8) {
        printf("Altura acima de um metro e oitenta centimetros");
    } else {
        printf("Altura entre um metro e cinquenta e um metro e oitenta centimetros");
    }
}