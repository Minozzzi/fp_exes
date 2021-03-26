// 7) Crie um programa que leia uma data no formato ddmmaaaa e imprima se a data é válida ou não.

#include <stdio.h>

int main(void) {

    int dia, mes, ano, data;
    printf("Informe a data (format ddmmaaaa): ");
    scanf("%d", &data);

    ano=data%10000;
    mes=(data%1000000)/10000;
    dia=data/1000000;

    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia > 0 && dia <= 30) && (ano > 0)) {
        printf("\nData valida");
    } else if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia > 0 && dia <= 31) && (ano > 0)) {
        printf("\nData valida");
    } else if ((mes == 2) && (dia > 0 && dia <= 28) && (ano > 0 && (ano % 4 != 0 || ano % 400 != 0))) {
        printf("\nData valida");
    } else if ((mes == 2) && (dia > 0 && dia <= 29) && (ano > 0 && (ano % 4 == 0 || ano % 400 == 0 && ano % 100 != 0))) {
        printf("\nData valida");
    } else {
        printf("\nData invalida");
    }
}