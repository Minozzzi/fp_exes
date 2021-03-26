/*
3) Elabore um programa que leia o dia e o mês de nascimento de uma pessoa e determine o seu signo conforme a
tabela a seguir:
Intervalo Signo
de 22/12 até 20/1 Capricórnio
de 21/1 até 19/2 Aquário
de 20/2 até 20/3 Peixes
de 21/3 até 20/4 Áries
de 21/4 até 20/5 Touro
de 21/5 até 20/6 Gêmeos
de 21/6 até 21/7 Câncer
de 22/7 até 22/8 Leão
de 23/8 até 22/9 Virgem
de 23/9 até 22/10 Libra
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
}