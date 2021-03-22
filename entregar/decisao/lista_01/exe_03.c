/*
3) Faça um programa que leia o gênero, e caso o mesmo seja 'f', 'F', 'm' ou 'M' leia também a idade e o tempo
de trabalho de uma pessoa e determine se ela pode ou não se aposentar. Assuma que homens se
aposentam com 45 anos de trabalho ou idade superior a 70 anos e mulheres se aposentam com 40 anos de
trabalho ou idade superior a 65 anos.
*/

#include <stdio.h>

int main(void) {

    char genero;
    int idade, tempoTrabalho;

    printf("Informe seu genero: (f ou F para feminino e m ou M para masculino) ");
    scanf("%c", &genero);

    if ((genero == 'f' || genero == 'F') || (genero == 'M' || genero == 'm')) {
        printf("Informe sua idade e seu tempo de trabalho respectivamente: ");
        scanf("%d %d", &idade, &tempoTrabalho);

        if ((genero == 'M' || genero == 'm') && (idade > 70 || tempoTrabalho >= 45)) {
            return printf("\nVoce pode se aposentar");
        }

        if ((genero == 'F' || genero == 'f') && (idade > 65 || tempoTrabalho >= 40)) {
            return printf("\nVoce pode se aposentar");
        }

        return printf("\nVoce nao pode se aposentar");
    }

    return printf("\nGenero invalido");
}