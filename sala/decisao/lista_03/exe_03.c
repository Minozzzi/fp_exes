/*
3) Elabore um programa que leia o dia e o mês de nascimento de uma pessoa e determine o seu signo conforme a
tabela a seguir:
de 23/10 até 21/11 Escorpião
de 22/11 até 21/12 Sagitário
Se informada uma data que não corresponde aos intervalos indicados, informar que a data é inválida.
*/

#include <stdio.h>

int main(void) {
    
    int dia, mes;

    printf("Informe o dia que voce nasceu: ");
    scanf("%d", &dia);

    printf("Informe o mes que voce nasceu: ");
    scanf("%d", &mes);

    if ((dia >= 22 && dia <= 31 && mes == 12) || (dia >= 1 && dia <= 20 && mes == 1)) {
        printf("\nSigno de capricornio");
    } else if ((dia >= 21 && dia <= 31 && mes == 1) || (dia >=1 && dia <= 19 && mes == 2)) {
        printf("\nSigno de aquario");
    } else if ((dia >= 20 && dia <= 29 && mes == 2) || (dia >=1 && dia <= 20 && mes == 3)) {
        printf("\nSigno de peixes");
    } else if ((dia >= 21 && dia <= 31 && mes == 3) || (dia >=1 && dia <= 20 && mes == 4)) {
        printf("\nSigno de aquario");
    } else if ((dia >= 21 && dia <= 30 && mes == 4) || (dia >=1 && dia <= 20 && mes == 5)) {
        printf("\nSigno de touro");
    } else if ((dia >= 21 && dia <= 31 && mes == 5) || (dia >=1 && dia <= 20 && mes == 6)) {
        printf("\nSigno de gemeos");
    } else if ((dia >= 21 && dia <= 30 && mes == 6) || (dia >=1 && dia <= 21 && mes == 7)) {
        printf("\nSigno de cancer");
    } else if ((dia >= 22 && dia <= 31 && mes == 7) || (dia >=1 && dia <= 22 && mes == 8)) {
        printf("\nSigno de leao");
    } else if ((dia >= 23 && dia <= 31 && mes == 8) || (dia >=1 && dia <= 22 && mes == 9)) {
        printf("\nSigno de virgem");
    } else if ((dia >= 23 && dia <= 30 && mes == 9) || (dia >=1 && dia <= 22 && mes == 10)) {
        printf("\nSigno de libra");
    } else if ((dia >= 23 && dia <= 31 && mes == 10) || (dia >=1 && dia <= 21 && mes == 11)) {
        printf("\nSigno de escorpiao");
    } else if ((dia >= 22 && dia <= 30 && mes == 11) || (dia >=1 && dia <= 21 && mes == 12)) {
        printf("\nSigno de sagitario");
    }
}