// 3) Ler caracteres. Contar quantas vogais minúsculas são informadas. O caractere zero '0' indica o final da
// leitura, ou seja, finalizar a leitura quando informado esse caractere. O programa deverá informar também
// quantos caracteres foram digitados ao todo.

#include <stdio_ext.h>

int main(void) {

    char letras = ' ';
    int contChar = 0, contVogais = 0;

    do {
        printf("Informe um caractere: ");
        scanf("%c", &letras);
        __fpurge(stdin);

        if ((int)letras == 97 || (int)letras == 101 || (int)letras == 105 || (int)letras == 111 || (int)letras == 117){
            contVogais++;
        }
        if (letras != '0')
            contChar++;
            
    } while (letras != '0');

    printf("\n\nTotal de vogais minusculas = %d\nTotal de caracteres = %d", contVogais, contChar);
}