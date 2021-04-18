// 1) Um determinado material radioativo perde metade de sua massa a cada 60 segundos. Dada a massa inicial,
// em gramas, fazer um programa que determine o tempo necessário para que essa massa se torne menor que
// 0,5 gramas. A massa inicial informada pelo usuário tem que ser maior que zero. Validar essa entrada, isto é,
// ficar repetindo a leitura da massa inicial até que o usuário informe um valor válido (maior que zero). O programa
// deverá mostrar a massa final e o tempo calculado em minutos.

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {
 
    char opt = ' ';
    do {
        int contVzsDividido = 0;
        float num = 0, qtdAtualMassa = 0;
        do {
            printf("Informe um numero positivo para a massa em gramas: ");
            scanf("%f", &num);
            __fpurge(stdin);

        } while (num <= 0);

        qtdAtualMassa = num;

        while (qtdAtualMassa >= 0.5) {
            contVzsDividido++;
            qtdAtualMassa /= 2;
        }

        printf("\n%.2f massa final restante\n%d minutos para atingir essa massa final", qtdAtualMassa, contVzsDividido);

        printf("\nDeseja repetir ? (S/s ou N/n) ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');    
}