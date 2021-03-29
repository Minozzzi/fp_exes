/*5.2) Considera-se o problema de esperar para jantar em um restaurante. O objetivo é o programa aprender a definição
para DeveEsperar? Existem os seguintes atributos para descrever as situações:
Fregueses: Quantas pessoas estão no restaurante (nenhuma, algumas, cheio)?
Tempo de espera (em minutos): 0-10, 10-30, 30-60, >60.
Alternativa: Há um restaurante alternativo na redondeza?
Reserva: Foi feita uma reserva?
Bar: Existe um bar confortável onde possa se esperar?
Sex/Sab: É sexta ou sábado?
Faminto: Está com fome?
Chovendo: Está chovendo lá fora?
As entradas são do tipo char, exceto o tempo de espera que pode ser do tipo int. Portanto, estabeleça uma letra para
cada entrada esperada, por exemplo 'S' para sim e 'N' para não.
*/

#include <stdio.h>
#include<stdio_ext.h>

int main(void) {

    char opcao;
    int tempoEspera;

    printf("Existe clientes ?: (n ou N para nenhum, a ou A para alguns, c ou C para cheio) ");
    scanf("%c", &opcao);
    __fpurge(stdin);

    if (opcao == 'n' || opcao == 'N') {
        printf("\nNao deve esperar");
    } else if (opcao == 'a' || opcao == 'A') {
        printf("\nDeve esperar");
    } else if (opcao == 'c' || opcao == 'C') {
        printf("Informe a espera estimada em minutos inteiros: ");
        scanf("%d", &tempoEspera);
        __fpurge(stdin);

        if (tempoEspera > 60) {
            printf("\nNao deve esperar");
        } else if (tempoEspera >= 30 && tempoEspera <= 60) {
            printf("Existem alternativas ? (s ou S para sim e N ou n para nao) ");
            scanf("%c", &opcao);
            __fpurge(stdin);

            if (opcao == 's' || opcao == 'S') {
                printf("Eh sexta ou sabado ? (S ou s para sim e N ou n para nao) ");
                scanf("%c", &opcao);
                __fpurge(stdin);

                if (opcao == 's' || opcao == 'S') {
                    printf("\nDeve esperar");
                } else if (opcao == 'n' || opcao == 'S') {
                    printf("\nNao deve esperar");
                } else {
                    printf("\nCaractere invalido");            
                }
            } else if (opcao == 'N' || opcao == 'n') {
                printf("Possui reserva ? (S ou s para sim e N ou n para nao) ");
                scanf("%c", &opcao);
                __fpurge(stdin);

                if (opcao == 's' || opcao == 'S') {
                    printf("\nDeve esperar");
                } else if (opcao == 'n' || opcao == 'S') {
                    printf("Existe um bar confortavel para esperar ? (S ou s para sim e N ou n para nao) ");
                    scanf("%c", &opcao);
                    __fpurge(stdin);


                    if (opcao == 's' || opcao == 'S') {
                        printf("\nDeve esperar");
                    } else if (opcao == 'n' || opcao == 'S') {
                        printf("\nNao deve esperar");
                    } else {
                        printf("\nCaractere invalido");            
                    }   
                } else {
                    printf("\nCaractere invalido");            
                }
            } else {
                printf("\nCaractere invalido");            
            }
        } else if (tempoEspera > 10 && tempoEspera <= 30) {
            printf("Esta com fome ? (S ou s para sim e N ou n para nao) ");
            scanf("%c", &opcao);
            __fpurge(stdin);

            if (opcao == 'S' || opcao == 's') {
                printf("Tem alternativas ? (S ou s para sim e N ou n para nao) ");
                scanf("%c", &opcao);
                __fpurge(stdin);

                if (opcao == 'S' || opcao == 's') {
                    printf("Esta chovendo ? (S ou s para sim e N ou n para nao) ");
                    scanf("%c", &opcao);
                    __fpurge(stdin);

                    if (opcao == 'S' || opcao == 's') {
                        printf("\nDeve esperar");
                    } else if (opcao == 'N' || opcao == 'n') {
                        printf("\nNao deve esperar");
                    } else {
                        printf("\nCaractere invalido");                
                    }
                } else if (opcao == 'N' || opcao == 'n') {
                    printf("\nDeve esperar");
                } else {
                    printf("\nCaractere invalido");
                }
            } else if (opcao == 'N' || opcao == 'n') {
                printf("\nDeve esperar");
            } else {
                printf("\nCaractere invalido");        
            }
        } else if (tempoEspera >= 0 && tempoEspera <= 10) {
            printf("\nDeve esperar");
        }
    } else {
        printf("\nCaractere invalido");
    }

}