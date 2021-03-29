/*
2) A função toupper() transforma um caractere para maiúsculo. Para usar esta função é necessário incluir no cabeçalho
a biblioteca ctype.h.
Faça um programa que receba um caractere via teclado, transforme esse caractere em maiúsculo e verifique se ele
pertence ou não ao alfabeto (A, B, ..., Z). 
Caso ele pertença, o programa deve gerar a saídaprintf("O caracter digitado pertence ao albafeto\n") 
e, com o uso da estrutura switch
- case, verificar se o caractere é uma vogal (neste caso, a saída deve ser printf("VOGAL %c\n", ch))
ou uma consoante (neste caso, a saída deve ser printf("CONSOANTE %c\n", ch)). Caso o caractere
não pertença ao alfabeto, o programa deverá gerar a saída printf("O caracter digitado não
pertence ao albafeto\n").
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {

    char letra;

    printf("Informe um caractere: ");
    scanf("%c", &letra);

    letra = toupper(letra);
    
    if ((int)letra >= 65 && (int)letra <= 90) {
        printf("O caracter digitado pertence ao albafeto\n");

        switch (letra) {
            case 'A':
                printf("VOGAL %c\n", letra);
                break;
            case 'E':
                printf("VOGAL %c\n", letra);
                break;
            case 'I':
                printf("VOGAL %c\n", letra);
                break;
            case 'O':
                printf("VOGAL %c\n", letra);
                break;
            case 'U':
                printf("VOGAL %c\n", letra);
                break;
            default:
                printf("CONSOANTE %c\n", letra);
                break;
        }
    } else {
        printf("O caracter digitado não pertence ao albafeto\n");
    }
}
