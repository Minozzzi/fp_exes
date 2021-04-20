// Questão 1 (3 pontos) - Faça um programa que leia um número positivo de cinco dígitos e armazene cada dígito
// em uma variável diferente. Calcule e mostre na tela:
// a) A soma dos dígitos;
// b) O inverso do número;
// c) Se o inverso do número é ou não um número primo;
// d) Se o número é ou não um número palíndromo (número palíndromo é aquele cujo inverso é igual a ele próprio).

#include <stdio.h>

int main(void) {

    //Init das variáveis
    int num = 0, dg1 = 0, dg2 = 0, dg3 = 0, dg4 = 0, dg5 = 0, somaDosInversos = 0, contDivs = 0;

    //validação para o numero ser de 5 digitos e positivo
    do {
        printf("Informe um numero com 5 digitos: ");
        scanf("%d", &num);
    } while(num < 10000 || num > 100000);

    //separdo cada digito em sua variavel
    dg1 = num / 10000;
    
    dg2 = num / 1000 % 10;

    dg3 = num / 100 % 10;

    dg4 = num / 10 % 10;

    dg5 = num % 10;

    //listo digito por digito na tela
    printf("\ndigito 1 = %d\nDigito 2 = %d\nDigito 3 = %d\nDigito 4 = %d\nDigito 5 = %d", dg1, dg2, dg3, dg4, dg5);

    //soma dos digitos e listo na tela a soma
    printf("\nSoma = %d", dg1 + dg2 + dg3 + dg4 + dg5);
    //Inverso
    printf("\nInverso = %d%d%d%d%d", dg5, dg4, dg3, dg2, dg1);

    //somaDosInversos e depois verifico se o numero e primo
    somaDosInversos = (dg5 * 10000) + (dg4 * 1000) + (dg3 * 100) + (dg2 * 10) + dg1;
    for (int i = 2; i < somaDosInversos; i++) {
        if (somaDosInversos % i == 0) {
            contDivs++;
            break;
        }
    }

    //verifico se tem mais de um divisor fora o 1 e ele mesmo
    if (contDivs == 0) {
        printf("\nNumero %d primo", somaDosInversos);
    } else if (contDivs != 0) {
        printf("\nNumero %d nao e primo", somaDosInversos);
    }

    //verifico se ele e palindromo atraves dos digitos separados
    if (dg5 == dg1 && dg4 == dg2) {
        printf("\nNumero %d palindromo com %d", num, somaDosInversos);
    } else {
        printf("\nNumero %d nao e palindromo com %d", num, somaDosInversos);
    }
    return 0;
}