/*
5) Elaborar um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
Menor de 5 anos = “Não categorizado como atleta”
5 a 7 anos = “Infantil A”
8 a 10 anos = “Infantil B”
11 a 13 anos = “Juvenil A”
14 a 17 anos = “Juvenil B”
Maior de 17 anos = “Sênior”
Se o valor informado é negativo, informar ao usuário que o valor é inválido para o escopo da solução
*/

#include <stdio.h>

int main(void) {

    int idade;

    printf("Informe a idade do nadador: ");
    scanf("%d", &idade);

    if (idade < 5 && idade >= 0) {
        return printf("Nao categorizado como atleta");
    } else if (idade >= 5 && idade <= 7) {
        return printf("Infantil A");
    } else if (idade >= 8 && idade <= 10) {
        return printf("Infantil B");
    } else if (idade >= 11 && idade <= 13) {
        return printf("Juvenil A");
    } else if (idade >= 14 && idade <= 17) {
        return printf("Juvenil B");
    } else if (idade > 17) {
        return printf("Senior");
    } else {
        return printf("Valor e invalido para o escopo da solucao");
    }
}