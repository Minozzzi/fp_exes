// 3) Fazer uma função que verifica se um número é um quadrado perfeito. Um número é quadrado perfeito se
// possui como raiz quadrada um valor inteiro. A função para obter a raiz quadrada é sqrt() e está na biblioteca
// math.h. Por exemplo, 25 é um quadrado perfeito porque raiz quadrada de 25 é 5. Utilizar essa função para:
// a) Verificar se um número, informado pelo usuário, é um quadrado perfeito.
// b) Mostrar quais números de um intervalo são quadrados perfeitos.
// Use menu de opções (com switch-case) e implemente a repetição de programa.

#include <stdio_ext.h>
#include <ctype.h>
#include <math.h>

int quadrado(float value) {
    int isQuadradoPerfeito = 0;
    float aux = sqrt(value);
    if (aux - (int)aux == 0) {
        isQuadradoPerfeito = 1;
    }

    return isQuadradoPerfeito;
}

int main() {
    char opt = ' ';

    do {
        int operacao = 0;
        float value = 0, value2 = 0;

        printf("1 - Verifica se um numero eh quadrado perfeito\n2 - Mostra os numeros quadrados perfeitos que pertencem a um intervalo\nOpcao: ");
        scanf("%d", &operacao);
        __fpurge(stdin);

        switch (operacao) {
            case 1:
                printf("\nInforme um numero: ");
                scanf("%f", &value);
                __fpurge(stdin);
                int aux = quadrado(value);
                if (aux == 1) {
                    printf("\n%.0f eh um quadrado perfeito => raiz quadrada de %.0f eh %.0f", value, value, sqrt(value));
                } else {
                    printf("\n%.0f nao eh um quadrado perfeito", value);
                }
                break;
            case 2:
                printf("\nInforme um limite inferior e superior: ");
                scanf("%f %f", &value, &value2);
                __fpurge(stdin);
                if (value > value2) {
                    int aux = value;
                    value = value2;
                    value2 = aux;
                }
                for (value; value <= value2; value++) {
                    int aux = quadrado(value);
                    if (aux == 1) {
                        printf("\n%.0f eh um quadrado perfeito => raiz quadrada de %.0f eh %.0f", value, value, sqrt(value));
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