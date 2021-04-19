// 1) Ler um número e ler um dígito. Contar quantos dígitos o número possui. Exemplo:
// É informado 5 como dígito:
// 55 – possui 2 dígitos cinco;
// 10 – possui nenhum dígito cinco;
// 1550 – possui dois dígitos cinco;
// 50050 – possui dois dígitos cinco.
// Repetir o programa enquanto informados valores positivos.

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {
    
    char opt = ' ';
    do {
        int num = 0, digito = 0, contDigitos = 0;
        do {
            printf("Digite um numero positivo: ");
            scanf("%d", &num);
            __fpurge(stdin);
        } while (num <= 0);

        do {
            printf("Digite um digito positivo: ");
            scanf("%d", &digito);
            __fpurge(stdin);
        } while (digito <= 0);

        while (num != 0) {
            if (num % 10 == digito) {
                contDigitos++;
            }
            num = num / 10;
        }

        printf("\nO numero tem %d digitos igual a %d", contDigitos, digito);

        printf("\n\nDeseja repetir o programa ? ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');
}