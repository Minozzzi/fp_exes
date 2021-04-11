// 4) Ler números informados pelo usuário. Parar a leitura quando informado o número zero, que não deve ser considerado. Fazer a
// média dos valores negativos informados. Dos valores positivos contar quantos são ímpares.

#include <stdio.h>
#include <locale.h>

int main(void) {

    int value = 0, cont = 0, contImpar = 0;
    float soma = 0;
    do {

        printf("Informe um número: ");
        scanf("%d", &value);

        if (value < 0 ) {
            soma += value;
            cont++;
        }

        if ((value % 2 != 0) && (value > 0)) {
            contImpar++;
        }
    } while (value != 0); 

    printf("\n\nMédia dos valores negativos = %.2f\nQuantidade de ímpares positivos = %d", soma != 0 ? soma/cont : 0, contImpar);
}