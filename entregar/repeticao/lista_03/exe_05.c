// 5) Apresentar os números primos entre dois valores, que representam os limites inferior e superior,
// respectivamente, de um intervalo, informados pelo usuário. Apresentá-los com n números por linha. n é
// informado pelo usuário. Validar n para que seja maior que 0. Validar o limite inferior para seja maior que 1 e o
// limite superior para que seja maior ou igual ao limite inferior. Implementar a repetição de programa.

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {

    char opt = ' ';
    do {
        
        int limInf = 0, limSup = 0, linhas = 0, contLinhas = 0, contDivs = 0, contImpar = 0;

        do {
            printf("Informe o limite inferior: ");
            scanf("%d", &limInf);
            __fpurge(stdin);    
        } while (limInf <= 1);

        do {
            printf("Informe o limite superior (maior ou igual que o inferior): ");
            scanf("%d", &limSup);
            __fpurge(stdin);    
        } while (limSup < limInf);

        do {
            printf("Informe quantos elementos quer ver por linha (maior que zero): ");
            scanf("%d", &linhas);
            __fpurge(stdin);    
        } while (linhas <= 0);
        
        for (limInf; limInf <= limSup; limInf++) {
            for (int i = 2; i < limInf; i++) {
                if (limInf % i == 0){
                    contDivs++;
                }
            }
            if (contDivs == 0) {
                printf("%d\t", limInf);
                contLinhas++;
            }
            if (linhas == contLinhas) {
                printf("\n");
                contLinhas = 0;
            }

            contDivs = 0;
        }
        contDivs = 0;
        printf("\nDeseja repetir ? (S/s ou N/n) \n");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');    
}