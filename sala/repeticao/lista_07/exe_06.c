// 6) Apresentar os n primeiros números pares e divisíveis por 3 informados pelo usuário (validar para que n seja
// diferente de 0). Se o usuário informar um número negativo transformá-lo em positivo (sem usar funções prontas)
// antes de utilizar.
// Por exemplo, se o usuário informar 4, o programa deverá mostrar os quatro primeiros números pares que são
// divisíveis por três: 0, 6, 12 e 18.

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {
 
    char opt = ' ';
    do {
        int num = 0, i = 0, cont = 0;

        do {
            printf("Quantos numeros pares divisiveis por 3 quer mostrar ? ");
            scanf("%d", &num);
            __fpurge(stdin);
        } while (num == 0);

        if (num < 0) {
            num *= -1;
        }

        while (cont < num) {
            if ((i % 2 == 0) && (i % 3 == 0)) {
                printf("%d\t", i);
                cont++;
            }
            i++;
        }
    
        printf("\nDeseja repetir ? (S/s ou N/n) ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');    
}