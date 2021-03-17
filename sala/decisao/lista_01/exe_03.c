/*
3) Elaborar um programa que leia um caractere. Se o caractere informado for ‘F’ ou ‘f’ mostrar a mensagem
“pessoa física”, se informado ‘J’ ou ‘j’ mostrar a mensagem “pessoa jurídica” ou mostrar "caractere inválido"
para qualquer outro caractere
*/

#include <stdio.h>

int main(void) {
    char tipoPessoa;

    printf("Informe se e pessoa fisica ou juridica (f ou F para fisica e j ou J para juridica): ");
    scanf("%c", &tipoPessoa);

    if (tipoPessoa == 'f' || tipoPessoa == 'F') {
        return printf("\nPessoa fisica");
    }else if (tipoPessoa == 'j' || tipoPessoa == 'J') {
        return printf("\nPessoa juridica");
    }

    return printf("\nCaractere invalido");
}