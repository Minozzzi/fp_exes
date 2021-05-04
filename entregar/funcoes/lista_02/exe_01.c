// 1) Fazer uma função que verifica se um número é triangular. Um número natural é triangular quando o
// produto de três números naturais consecutivos for igual ao próprio número. Por exemplo: 120 é triangular,
// pois 4 * 5 * 6 = 120. Use essa função para:
// a) Verificar se um número, informado pelo usuário, é triangular.
// b) Mostrar quais números de um intervalo são triangulares.
// Use menu de opções (com switch-case) e implemente a repetição de programa.

#include <stdio_ext.h>
#include <ctype.h>

int isTriangular(int value) {
    int triangular = 0;
    for(int i = 1; i * (i + 1) * (i + 2) <= value; i++) {
        if (i * (i + 1) * (i + 2) == value) {
            triangular = i;
            break;
        }
    }
    return triangular;
}

int main() {
    char opt = ' ';

    do {
        int operacao = 0, value = 0, value2;
        
        printf("1 - Verifica se um numero eh triangular\n2 - Mostra os numeros triangulares que pertencem a um intervalo\nOpcao: ");
        scanf("%d", &operacao);
        __fpurge(stdin);

        switch (operacao) {
            case 1:
                printf("\nInforme um numero: ");
                scanf("%d", &value);
                __fpurge(stdin);
                int aux = isTriangular(value);
                if (aux != 0) {
                    printf("\n%d eh triangular => %d * %d * %d = %d", value, aux, aux + 1, aux + 2, value);
                } else {
                    printf("\n%d nao eh triangular", value);
                }
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
                    int aux = isTriangular(value);
                    if (aux != 0) {
                        printf("\n%d eh triangular => %d * %d * %d = %d", value, aux, aux + 1, aux + 2, value);
                    }
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