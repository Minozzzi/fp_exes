// 4) Elaborar um programa que solicita a idade de um profissional e se ele é do tipo autônomo ou funcionário, calcula e
// mostra:
// a) O total de profissionais autônomos com menos de 18 anos.
// b) A média das idades dos funcionários com mais de 18 anos.
// O programa deve validar as entradas: permitir somente valores positivos (maior que 0) para a idade e A/a/F/f (autônomo
// ou funcionário) para o tipo de profissional.
// O programa termina quando for informado 0 ou um valor negativo para a idade, que não deve ser considerado.
// Portanto, ao ser informado 0 ou um valor negativo para a idade, não deve ser solicitado o tipo de profissional.

#include <stdio.h>
#include <stdio_ext.h>
#include <ctype.h>

int main(void) {

    int idade = 0, contMenor18 = 0, soma = 0, contMaior18 = 0;
    char prof = ' ';
   
    do {
        printf("Informe a idade: ");
        scanf("%d", &idade);
        __fpurge(stdin);

        if (idade > 0) {
            printf("Informe A ou a para autonomo ou F ou f para funcionario: ");
            scanf("%c", &prof);
            __fpurge(stdin);
            
            if ((toupper(prof) != 'A') && (toupper(prof) != 'F')) {
                printf("\n\nProfissao invalida\n\n");
            } else {
                if ((toupper(prof) == 'A') && (idade < 18)) {
                    contMenor18++;
                }

                if (idade > 18) {
                    soma += idade;
                    contMaior18++;
                }
            }
        } else {
            printf("\n\nIdade menor ou igual a zero, encerrando o programa\n\n");
        }
    } while (idade > 0);

    printf("%d profissionais autonomos com menos de 18 anos\nMedia dos funcionarios com mais de 18 anos = %.2f", contMenor18, contMaior18 > 0 ? (float)soma/contMaior18 : 0);
}