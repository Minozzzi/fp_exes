// 4) Ler dois números que representam, respectivamente, o limite inferior e superior de um intervalo. Validar
// para que o limite superior seja maior que o limite inferior. Em relação a esse intervalo:
// a) Mostrar os números pares em colunas (n números por linha, separados por tabulação). n é um valor
// informado pelo usuário e deve ser validado para se obter uma entrada maior que zero.
// b) Calcular e mostrar a média dos números ímpares. Validar para que não seja realizada uma divisão por
// zero. Atenção: Antes de fazer a soma dos números, converter os negativos para positivos (sem fazer uso da
// função fabs()).

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {

    char opt = ' ';
    do {
        
        int limInf = 0, limSup = 0, linhas = 0, contLinhas = 0, soma = 0, contImpar = 0, aux = 0;

        printf("Informe o limite inferior: ");
        scanf("%d", &limInf);
        __fpurge(stdin);    

        do {
            printf("Informe o limite superior (maior que o inferior): ");
            scanf("%d", &limSup);
            __fpurge(stdin);    
        } while (limSup <= limInf);

        do {
            printf("Informe quantos elementos quer ver por linha: ");
            scanf("%d", &linhas);
            __fpurge(stdin);    
        } while (linhas <= 0);
        
        for (limInf; limInf <= limSup; limInf++) {
            if (limInf % 2 == 0) {
                printf("%d\t", limInf);
                contLinhas++;
                if (contLinhas == linhas) {
                    contLinhas = 0;
                    printf("\n");
                }
            }
            if (limInf % 2 != 0) {
                aux = limInf;
                if (limInf < 0) {
                    aux = limInf * -1;
                }
                soma += aux;
                contImpar++;
            }
        }
        printf("\nA media dos numeros impares = %.2f", contImpar > 0 ? (float)soma/contImpar : 0);
        printf("\nDeseja repetir ? (S/s ou N/n) \n");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');    
}