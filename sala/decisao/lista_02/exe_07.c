/*
7) Ler um número e utilizando uma estrutura if else if else if... (obrigatoriamente encadeada) informar se ele:
a) É divisível por 5, por 3 ou por 2;
Exemplo: 30 é divisível por 2, 3 e 5.
b) É divisível somente por 5 e por 3; por 5 e por 2; ou por 3 e por 2;
Exemplo: 15 é divisível somente por 3 e por 5.
Exemplo: 10 é divisível somente por 5 e por 2.
Exemplo: 6 é divisível somente por 3 e por 2.
c) É divisível somente por 5, por 3 ou por 2;
Exemplo: 25 é divisível somente por 5
d) Não é divisível por nenhum destes;
Exemplo: 7 não é divisível por 5, por 3 ou por 2;
*/

#include <stdio.h>

int main(void) {

    int value;

    printf("Informe um numero inteiro: ");
    scanf("%d", &value);

    if ((value % 2 == 0) && (value % 3 == 0) && (value % 5 == 0)) {
        printf("%d eh divisivel por 2, 3 e 5", value);
    } else if ((value % 3 == 0) && (value % 5 == 0)) {
        printf("%d eh divisivel por 3 e 5", value);
    } else if ((value % 2 == 0) && (value % 5 == 0)) {
        printf("%d eh divisivel por 2 e 5", value);
    } else if ((value % 2 == 0) && (value % 3 == 0)) {
        printf("%d eh divisivel por 2 e 3", value);
    } else if(value % 2 == 0) {
        printf("%d eh divisivel somente por 2", value);
    } else if(value % 3 == 0) {
        printf("%d eh divisivel somente por 3", value);
    } else if(value % 5 == 0) {
        printf("%d eh divisivel somente por 5", value);
    } else {
        printf("%d nao e divisivel por 2, 3 e 5", value);
    }
    
}