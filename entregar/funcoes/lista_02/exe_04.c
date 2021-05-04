// 4) Elaborar uma função que verifica se um número é palíndromo. Um número é palíndromo quando ele não
// muda se lido da esquerda para a direita ou da direita para a esquerda. Por exemplo, 2112 é palíndromo.
// Elaborar uma função que verifica se um número, que contenha entre 2 e 9 dígitos, é palíndromo. Utilizar essa
// função para:
// a) Verificar se um número informado pelo usuário é palíndromo.
// b) Apresentar os números palíndromos que pertencem a um intervalo informado pelo

#include <stdio_ext.h>
#include <ctype.h>

int palindromo(int value) {
    int isPalindromo = 0, reverse = 0, aux = value;

    while (aux != 0) {
        reverse = reverse * 10 + aux % 10;
        aux /= 10;
    }
    if (reverse == value) {
        isPalindromo = 1;
    }

    return isPalindromo;
}

int main() {
    char opt = ' ';

    do {

        int operacao = 0;
        long long int value = 0, value2 = 0;

        printf("1 - Verifica se um numero eh palindromo\n2 - Mostra os numeros palindromos de um intervalo\nOpcao: ");
        scanf("%d", &operacao);
        __fpurge(stdin);

        switch (operacao) {
            case 1:
                do {
                    printf("\nInforme um numero com 2 a 9 digitos: ");
                    scanf("%lli", &value);
                    __fpurge(stdin);
                    if (value < 9 || value >= 1000000000) {
                        printf("Somente numeros com 2 a 9 digitos");
                    }
                } while (value < 9 || value >= 1000000000);
                int aux = palindromo(value);
                if (aux == 1) {
                    printf("\nEh palindromo");
                } else {
                    printf("\nNao eh um palindromo");
                }
                break;
            case 2:
                do {
                    printf("\nInforme um limite inferior e superior: ");
                    scanf("%lli %lli", &value, &value2);
                    __fpurge(stdin);
                    if (value > value2) {
                        int aux = value;
                        value = value2;
                        value2 = aux;
                    }
                    if (value < 9 || value >= 1000000000) {
                        printf("Somente numeros com 2 a 9 digitos");
                    }
                    if (value2 < 9 || value2 >= 1000000000) {
                        printf("Somente numeros com 2 a 9 digitos");
                    }
                } while ((value < 9 || value >= 1000000000) || (value2 < 9 || value2 >= 1000000000));
                for (value; value <= value2; value++) {
                    int aux = palindromo(value);
                    if (aux == 1) {
                        printf("%lld\t", value);
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