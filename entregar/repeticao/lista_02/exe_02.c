// 2) Elaborar um programa para automatizar o caixa de uma loja. Ler a quantidade e o valor unitário de cada
// produto. Calcular o valor total da compra. Informar esse valor para o usuário e o usuário informa o valor para
// pagamento. O programa calcula o troco e informa-o ao usuário em notas de 10, 5, 1 e os centavos.
// Prosseguir a leitura enquanto a quantidade for maior que zero. Se informado zero ou valor negativo para a
// quantidade, não ler o valor unitário.

#include <stdio.h>

int main(void) {

    float vUnit = 0, qtd = 0, total = 0, pagamento = 0, troco = 0;

    do {
        printf("Informe a quantidade: ");
        scanf("%f", &qtd);

        if (qtd > 0){
            printf("Informe o valor unitario: ");
            scanf("%f", &vUnit);

            total += vUnit * qtd;
        }
    } while (qtd > 0);

    printf("\n\nCompra encerrada, total = R$ %.2f", total);
    printf("\nInforme o valor do pagamento R$ ");
    scanf("%f", &pagamento);
    if (pagamento - total > 0) { 
        troco = pagamento - total;
        printf("Troco = %.2f", troco);
        printf("\n%d nota(s) de 10", (int)troco / 10);
        troco -= (int)(troco / 10) * 10;
        printf("\n%d nota(s) de 5", (int)troco / 5);
        troco -= (int)(troco / 5) * 5;
        printf("\n%d nota(s) de 1", (int)troco / 1);
        troco -= (int)(troco / 1);
        printf("\ne %.2f centavos", troco);
    } else {
        printf("\nSem troco");
    }
}