// 2) Alice e Beto são amigos e sempre que se encontram relembram os tempos de infância tirando par-ou-
// ímpar para decidir quem escolhe o filme a ser assistido, ou qual o restaurante em que vão almoçar, etc.
// Escreva um programa para determinar quem ganhou a série de par-ou-ímpar. A primeira entrada deve ser umvalor que identifica a quantidade de jogos 
// realizados, identificada pela variável n, que deve ser um número
// maior que zero. A seguir deve-se ler os n resultados (R 1 , R 2 , R 3 , ..., R i ) dos jogos. Se R i = 0 significa que Alice
// ganhou o i-ésimo jogo e se R i = 1 Beto ganhou o i-ésimo jogo, portanto, essa entrada deve ser validada para
// aceitar somente o valor 0 ou o valor 1.

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {

    char opt = ' ';
    do {
        
        int jogos = 0, winsBeto = 0, winsAlice = 0, result = -1;

        do {
            printf("Informe o numero de jogos: ");
            scanf("%d", &jogos);
            __fpurge(stdin);

        } while (jogos <= 0);

        for (int i = 1; i <= jogos; i++) {
            do {
                printf("Informe o resultado do jogo %d: ", i);
                scanf("%d", &result);
                __fpurge(stdin);

                if (result != 0 && result != 1) {
                    printf("\n\nInforme somente 0 ou 1\n\n");
                }
            } while (result != 0 && result != 1);

            if (result == 0) {
                winsAlice++;
            } else {
                winsBeto++;
            }
        }
        printf("\nAlice ganhou %d jogos e Beto ganhou %d jogos", winsAlice, winsBeto);
        printf("\nDeseja repetir ? (S/s ou N/n) \n");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');    
}