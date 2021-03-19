// 8) Fazer o programa para o algoritmo representado no fluxograma a seguir:

#include <stdio.h>

int main(void) {
    
    float salarioBase, gratificacao, salarioBruto, ir, salarioLiquido;

    printf("Informe o salario base: ");
    scanf("%f", &salarioBase);

    printf("Informe a gratificacao: ");
    scanf("%f", &gratificacao);

    salarioBruto = salarioBase + gratificacao;

    if (salarioBruto < 1000) {
        ir = (salarioBruto * 0.15);
    } else {
        ir = (salarioBruto * 0.2);
    }

    salarioLiquido = salarioBruto - ir;

    printf("\nSalario Liquido = %.2f", salarioLiquido);
}
