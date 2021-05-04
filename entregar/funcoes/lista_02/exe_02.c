// 2) Fazer uma função que verifica se um número é retangular. Um número é retangular se ele pode ser obtido
// a partir da soma de uma sequência de números pares, iniciando em 2. Por exemplo: 30 é retangular porque
// resulta da soma de 2 + 4 + 6 + 8 + 10. Utilizar essa função para:
// a) Verificar se um número, informado pelo usuário, é retangular.
// b) Mostrar quais números de um intervalo são retangulares.
// Use menu de opções (com switch-case) e implemente a repetição de programa.

#include <stdio_ext.h>
#include <ctype.h>

int isRetangular(int value, int operacao) {
    int retangular = 0, init = 2, validador = 0;
    while(init <= value) {
        validador += init;
        if (validador == value) {
            retangular = 1;
            break;
        }
        init += 2;
    }
    if (operacao == 0) {
        if (retangular == 1) {
            printf("\n%d eh retangular ==> ", value);
            for (int j=2; j < init; j += 2) {
                printf ("%d + ",j);
            }
            printf ("%d = %d", init, value);
        } else {
            printf("\n%d nao eh retangular", value);    
        }
    } else if (operacao == 1 && retangular == 1) {
        printf("\n%d eh retangular ==> ", value);
        for (int j=2; j < init; j += 2) {
            printf ("%d + ",j);
        }
        printf ("%d = %d", init, value);
    }
}

int main() {
    char opt = ' ';

    do {
        int operacao = 0, value = 0, value2;
        
        printf("1 - Verifica se um numero eh retangular\n2 - Mostra os numeros retangulares que pertencem a um intervalo\nOpcao: ");
        scanf("%d", &operacao);
        __fpurge(stdin);

        switch (operacao) {
            case 1:
                printf("\nInforme um numero: ");
                scanf("%d", &value);
                __fpurge(stdin);
                isRetangular(value, 0);
                break;
            case 2:
                printf("\nInforme um limite inferior e superior: ");
                scanf("%d %d", &value, &value2);
                __fpurge(stdin);
                if (value > value2) {
                    int aux = value;
                    value = value2;
                    value2 = aux;
                }
                for (value; value <= value2; value++) {
                    isRetangular(value, 1);
                }
                break;
            default:
                printf("\nOperacao invalida");
                break;
        }
        
        printf("\n\nDeseja repetir (S ou s para sim) ? ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while(toupper(opt) == 'S');
}