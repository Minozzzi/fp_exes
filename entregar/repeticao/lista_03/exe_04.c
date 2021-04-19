// 4) Completar o código a seguir para:
// a) Ler a quantidade somente se o valor é válido.
// b) Garantir que a quantidade seja maior que 0;
// c) Garantir que a média seja float e que não seja realizada divisão por zero.

#include <stdio.h>
int main(void)
{
    int quantidade = 0, soma = 0, qtde = 0;
    float valor = 0, media = 0;
    do {
        printf("Informe o valor: ");
        scanf("%f", &valor);
        if (valor > 0) {
            do {
                printf("Informe a quantidade: ");
                scanf("%d", &quantidade);
            } while (quantidade <= 0);
            
            soma += (valor * quantidade);
            qtde++;
            media = (float)soma / qtde;
        }
    } while (valor > 0);
    printf("Media geral (de todas as entradas): %.2f", media);
    return 0;
}