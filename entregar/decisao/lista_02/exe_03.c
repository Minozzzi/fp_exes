/*
3) A figura a seguir representa uma árvore de decisão para identificar se um paciente está saudável ou
doente. Elabore um programa que implementa essa árvore de decisão
*/

#include <stdio.h>
#include<stdio_ext.h>

int main(void) {

    char situacao;
    float temperatura;

    printf("Paciente se sente bem ? (s para sim ou n para nao): ");
    scanf("%c", &situacao);
    __fpurge(stdin);

    if (situacao == 's' || situacao == 'S') {
        return printf("\nVoce esta saudavel");
    } else if(situacao == 'n' || situacao == 'N') {
        printf("Paciente tem dor ? (s para sim ou n para nao): ");
        scanf("%c", &situacao);
        __fpurge(stdin);
        if (situacao == 's' || situacao == 'S') { 
            return printf("\nVoce esta doente");
        } else if(situacao == 'n' || situacao == 'N') {
            printf("Informe a temperatura do paciente: ");
            scanf("%f", &temperatura);
            __fpurge(stdin);
            if (temperatura <= 37) { 
                return printf("\nVoce esta saudavel");
            } else if (temperatura > 37) {
                return printf("\nVoce esta doente");
            }
        }
    }
}